package ;

import haxe.ds.Option;

using StringTools ;
using Lambda ;

class TicTacToe
{

	private static var leaderboards:Array<Player> ;

	private var grid:Array<Array<Cell>> ;
	private var playerTic : Player ;
	private var playerTac : Player ;

	public function new( _p1:Player, _p2:Player ) {

		grid = [
				[ None, None, None ],
				[ None, None, None ],
				[ None, None, None ]
			] ;

		playerTic = _p1 ;
		playerTac = _p2 ;

	}

	public function play():Option<Player>
	{

		var winner:Option<Player> = None ;

		var moves:Array<{x:Int,y:Int}> ;

		var moveIterator = {
			hasNext:function(){
					moves = [ for ( i in 0...grid.length) for ( j in 0...grid[i].length ) if ( Type.enumEq( grid[i][j], None ) ) {x:i,y:j} ] ;
					return moves.length > 0 ;
				},
			next:function() return moves[Std.int(Math.random()*moves.length)]
		} ;

		var playOrder = [Tic,Tac] ;
		var currentPlayer = Std.int( Math.random()*2 ) ; // yields 0 or 1

		for( move in moveIterator )
		{

			grid[move.x][move.y] = Some( playOrder[currentPlayer] ) ;

			switch ( winner = detectWinner() ){
				case None : currentPlayer = ++currentPlayer % 2 ;
				case Some(_) : break ;
			}

		}

		return winner ;

	}

	private function detectWinner():haxe.ds.Option<Player>
	{

		var t = [
				[ grid[0][0], grid[1][0], grid[2][0] ],
				[ grid[0][1], grid[1][1], grid[2][1] ],
				[ grid[0][2], grid[1][0], grid[2][2] ]
			] ;

		var winningSchemes = [
				grid[0], grid[1], grid[2],
				t[0], t[1], t[2],
				[ grid[0][0], grid[1][1], grid[2][2] ],
				[ grid[2][0], grid[1][1], grid[0][2] ]
			] ;

		for ( scheme in winningSchemes ){

			var winnerSymbol:Option<Symbol> = None ;
			for ( symbol in [Tic, Tac] ){

				if( scheme.count( Type.enumEq.bind( Some( symbol ) ) ) == 3 )
				{
					winnerSymbol = Some( symbol ) ;
					break ;
				}

			}

			switch ( winnerSymbol ) {
				case None :// do nothing
				case Some( Tic ) : return Some( playerTic ) ;
				case Some( Tac ) : return Some( playerTac ) ;
			}

		}

		return None ;

	}

	public static function main()
	{

		leaderboards = 
		[
			{ name : "Adam", points : 0 },
			{ name : "Alex", points : 0 },
			{ name : "Alexis", points : 0 },
			{ name : "Arnaud", points : 0 },
			{ name : "Corentin", points : 0 },
			{ name : "Francois", points : 0 },
			{ name : "Kevin", points : 0 },
			{ name : "Lizhao", points : 0 },
			{ name : "Olivier", points : 0 },
			{ name : "Peter", points : 0 },
			{ name : "Renaud", points : 0 },
			{ name : "Titi", points : 0 }
		] ;

		var players = leaderboards.copy() ;

		for ( i in 0...players.length )
		{

			var playerA = players[i] ;
			for ( j in (i+1)...players.length )
			{
				var playerB = players[j] ;

				trace( "matching " + playerA.name +" and "+ playerB.name ) ;

				var ttt = new TicTacToe( playerA, playerB ) ;
				var winner = ttt.play() ;

				switch (winner) {
					case None : trace('draw! nobody gets any points') ;
					case Some(p) : 
						++p.points ;

						trace( '${p.name} wins!' ) ;

						sortleaderboards() ;

						var pos = leaderboards.indexOf( p ) + 1 ;

						trace( 
							'${p.name} is now $pos[th] with ${p.points} points.'
								.replace( "[th]",
									if (pos%10 == 1) "st"
									else if (pos%10 == 2) "nd"
									else if (pos%10 == 3) "rd"
									else "th"
								)
						) ;
				}

			}

		}

		trace( "End of the tournament!, and the winner is:" ) ;
		trace( leaderboards[0].name + '!' ) ;
		trace( leaderboards ) ;

	}

	private static function sortleaderboards()
	{

		leaderboards.sort( function(a,b) return b.points - a.points ) ;

	}

}

enum Symbol {
	Tic ;
	Tac ;
}

typedef Cell = Option<Symbol> ;

typedef Player = {
	name : String,
	points : Int
}