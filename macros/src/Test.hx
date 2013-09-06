
package ;

import flash.Lib;
import flash.display.Bitmap;

@:build(Macros.loadLogos())
class Test {

	public static function main(){

		var logos = [
			new logos.Haxe(),
			new logos.Freshplanet()
		] ;

		for ( i in 0...logos.length )
		{
			var logo = new Bitmap( logos[i] ) ;

			logo.width = 150 ;
			logo.scaleY = logo.scaleX ;

			Lib.current.addChild( logo ) ;

			logo.x = ((i+1)*(Lib.current.stage.stageWidth/(logos.length+1))) - logo.width/2 ;
			logo.y = (Lib.current.stage.stageHeight - logo.height) /2 ;
		}

	}

}