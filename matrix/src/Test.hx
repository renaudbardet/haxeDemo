
package ;

class Test 
{

	public static function main()
	{

		var m1, m2 : M44 ;
		m1 = [
				[1,2,3,4],
				[1,2,3,4],
				[1,2,3,4],
				[1,2,3,4]
			] ;

		m2 = [1,2,3,4,1,2,3,4,1,2,3,4,1,2,3,4] ;

		trace( m2 ) ;
		trace( m2 * 2.0 ) ;

	}

}