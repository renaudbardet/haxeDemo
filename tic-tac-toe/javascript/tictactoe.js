(function () { "use strict";
var $estr = function() { return js.Boot.__string_rec(this,''); };
var HxOverrides = function() { }
HxOverrides.iter = function(a) {
	return { cur : 0, arr : a, hasNext : function() {
		return this.cur < this.arr.length;
	}, next : function() {
		return this.arr[this.cur++];
	}};
}
var Lambda = function() { }
Lambda.count = function(it,pred) {
	var n = 0;
	if(pred == null) {
		var $it0 = $iterator(it)();
		while( $it0.hasNext() ) {
			var _ = $it0.next();
			n++;
		}
	} else {
		var $it1 = $iterator(it)();
		while( $it1.hasNext() ) {
			var x = $it1.next();
			if(pred(x)) n++;
		}
	}
	return n;
}
Lambda.indexOf = function(it,v) {
	var i = 0;
	var $it0 = $iterator(it)();
	while( $it0.hasNext() ) {
		var v2 = $it0.next();
		if(v == v2) return i;
		i++;
	}
	return -1;
}
var StringTools = function() { }
StringTools.replace = function(s,sub,by) {
	return s.split(sub).join(by);
}
var TicTacToe = function(_p1,_p2) {
	this.grid = [[haxe.ds.Option.None,haxe.ds.Option.None,haxe.ds.Option.None],[haxe.ds.Option.None,haxe.ds.Option.None,haxe.ds.Option.None],[haxe.ds.Option.None,haxe.ds.Option.None,haxe.ds.Option.None]];
	this.playerTic = _p1;
	this.playerTac = _p2;
};
TicTacToe.main = function() {
	TicTacToe.leaderboards = [{ name : "Adam", points : 0},{ name : "Alex", points : 0},{ name : "Alexis", points : 0},{ name : "Arnaud", points : 0},{ name : "Corentin", points : 0},{ name : "Francois", points : 0},{ name : "Kevin", points : 0},{ name : "Lizhao", points : 0},{ name : "Olivier", points : 0},{ name : "Peter", points : 0},{ name : "Renaud", points : 0},{ name : "Titi", points : 0}];
	var players = TicTacToe.leaderboards.slice();
	var _g1 = 0, _g = players.length;
	while(_g1 < _g) {
		var i = _g1++;
		var playerA = players[i];
		var _g3 = i + 1, _g2 = players.length;
		while(_g3 < _g2) {
			var j = _g3++;
			var playerB = players[j];
			console.log("matching " + playerA.name + " and " + playerB.name);
			var ttt = new TicTacToe(playerA,playerB);
			var winner = ttt.play();
			var $e = (winner);
			switch( $e[1] ) {
			case 1:
				console.log("draw! nobody gets any points");
				break;
			case 0:
				var p = $e[2];
				++p.points;
				console.log("" + p.name + " wins!");
				TicTacToe.sortleaderboards();
				var pos = Lambda.indexOf(TicTacToe.leaderboards,p) + 1;
				console.log(StringTools.replace("" + p.name + " is now " + pos + "[th] with " + p.points + " points.","[th]",pos % 10 == 1?"st":pos % 10 == 2?"nd":pos % 10 == 3?"rd":"th"));
				break;
			}
		}
	}
	console.log("End of the tournament!, and the winner is:");
	console.log(TicTacToe.leaderboards[0].name + "!");
	console.log(TicTacToe.leaderboards);
}
TicTacToe.sortleaderboards = function() {
	TicTacToe.leaderboards.sort(function(a,b) {
		return b.points - a.points;
	});
}
TicTacToe.prototype = {
	detectWinner: function() {
		var t = [[this.grid[0][0],this.grid[1][0],this.grid[2][0]],[this.grid[0][1],this.grid[1][1],this.grid[2][1]],[this.grid[0][2],this.grid[1][0],this.grid[2][2]]];
		var winningSchemes = [this.grid[0],this.grid[1],this.grid[2],t[0],t[1],t[2],[this.grid[0][0],this.grid[1][1],this.grid[2][2]],[this.grid[2][0],this.grid[1][1],this.grid[0][2]]];
		var _g = 0;
		while(_g < winningSchemes.length) {
			var scheme = winningSchemes[_g];
			++_g;
			var winnerSymbol = haxe.ds.Option.None;
			var _g1 = 0, _g2 = [Symbol.Tic,Symbol.Tac];
			while(_g1 < _g2.length) {
				var symbol = _g2[_g1];
				++_g1;
				if(Lambda.count(scheme,(function(f,a) {
					return function(b) {
						return f(a,b);
					};
				})(Type.enumEq,haxe.ds.Option.Some(symbol))) == 3) {
					winnerSymbol = haxe.ds.Option.Some(symbol);
					break;
				}
			}
			var $e = (winnerSymbol);
			switch( $e[1] ) {
			case 1:
				break;
			case 0:
				var winnerSymbol_eSome_0 = $e[2];
				switch( (winnerSymbol_eSome_0)[1] ) {
				case 0:
					return haxe.ds.Option.Some(this.playerTic);
				case 1:
					return haxe.ds.Option.Some(this.playerTac);
				}
				break;
			}
		}
		return haxe.ds.Option.None;
	}
	,play: function() {
		var _g1 = this;
		var winner = haxe.ds.Option.None;
		var moves;
		var moveIterator = { hasNext : function() {
			moves = (function($this) {
				var $r;
				var _g = [];
				{
					var _g3 = 0, _g2 = _g1.grid.length;
					while(_g3 < _g2) {
						var i = _g3++;
						var _g5 = 0, _g4 = _g1.grid[i].length;
						while(_g5 < _g4) {
							var j = _g5++;
							if(Type.enumEq(_g1.grid[i][j],haxe.ds.Option.None)) _g.push({ x : i, y : j});
						}
					}
				}
				$r = _g;
				return $r;
			}(this));
			return moves.length > 0;
		}, next : function() {
			return moves[Math.random() * moves.length | 0];
		}};
		var playOrder = [Symbol.Tic,Symbol.Tac];
		var currentPlayer = Math.random() * 2 | 0;
		try {
			while( moveIterator.hasNext() ) {
				var move = moveIterator.next();
				this.grid[move.x][move.y] = haxe.ds.Option.Some(playOrder[currentPlayer]);
				var _g = winner = this.detectWinner();
				switch( (_g)[1] ) {
				case 1:
					currentPlayer = ++currentPlayer % 2;
					break;
				case 0:
					throw "__break__";
					break;
				}
			}
		} catch( e ) { if( e != "__break__" ) throw e; }
		return winner;
	}
}
var Symbol = { __constructs__ : ["Tic","Tac"] }
Symbol.Tic = ["Tic",0];
Symbol.Tic.toString = $estr;
Symbol.Tic.__enum__ = Symbol;
Symbol.Tac = ["Tac",1];
Symbol.Tac.toString = $estr;
Symbol.Tac.__enum__ = Symbol;
var Type = function() { }
Type.enumEq = function(a,b) {
	if(a == b) return true;
	try {
		if(a[0] != b[0]) return false;
		var _g1 = 2, _g = a.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(!Type.enumEq(a[i],b[i])) return false;
		}
		var e = a.__enum__;
		if(e != b.__enum__ || e == null) return false;
	} catch( e ) {
		return false;
	}
	return true;
}
var haxe = {}
haxe.ds = {}
haxe.ds.Option = { __constructs__ : ["Some","None"] }
haxe.ds.Option.Some = function(v) { var $x = ["Some",0,v]; $x.__enum__ = haxe.ds.Option; $x.toString = $estr; return $x; }
haxe.ds.Option.None = ["None",1];
haxe.ds.Option.None.toString = $estr;
haxe.ds.Option.None.__enum__ = haxe.ds.Option;
function $iterator(o) { if( o instanceof Array ) return function() { return HxOverrides.iter(o); }; return typeof(o.iterator) == 'function' ? $bind(o,o.iterator) : o.iterator; };
var $_, $fid = 0;
function $bind(o,m) { if( m == null ) return null; if( m.__id__ == null ) m.__id__ = $fid++; var f; if( o.hx__closures__ == null ) o.hx__closures__ = {}; else f = o.hx__closures__[m.__id__]; if( f == null ) { f = function(){ return f.method.apply(f.scope, arguments); }; f.scope = o; f.method = m; o.hx__closures__[m.__id__] = f; } return f; };
Math.__name__ = ["Math"];
Math.NaN = Number.NaN;
Math.NEGATIVE_INFINITY = Number.NEGATIVE_INFINITY;
Math.POSITIVE_INFINITY = Number.POSITIVE_INFINITY;
Math.isFinite = function(i) {
	return isFinite(i);
};
Math.isNaN = function(i) {
	return isNaN(i);
};
TicTacToe.main();
})();
