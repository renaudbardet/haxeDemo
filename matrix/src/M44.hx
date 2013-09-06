
package ;

abstract M44(Array<Array<Float>>) from Array<Array<Float>> to Array<Array<Float>>
{

	inline function new(a:Array<Array<Float>>) this = a ;

	@:from static public inline function fromList(i:Iterable<Float>) {
		var m44 = new Array<Array<Float>>() ;
		var col = 0 ;
		var row = 0 ;
		for ( el in i )
		{
			if( m44[row] == null ) m44[row] = new Array<Float>() ;
			m44[row][col] = el ;
			if ( (col=(++col)%4) == 0 ) ++row ;
			if ( row > 3 ) break ;
		}
		return new M44(m44) ;
	}

	@:commutative @:op(A * B) static public function scalarMultiply(m:M44, s:Float){
		var a:Array<Array<Float>> = m ;
		var res:Array<Array<Float>> = [[],[],[],[]] ;
		for (i in 0...4)
			for (j in 0...4)
				res[i][j] = a[i][j] * s ;
		return new M44(res) ;
	}
	
}