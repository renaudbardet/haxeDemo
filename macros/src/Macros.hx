
package ;

import haxe.macro.Expr;

using Lambda ;

class Macros
{

	macro public static function loadLogos() : Array<Field>
	{

		// parse the logos folder
		var logoDir = sys.FileSystem.readDirectory( "logos" ) ;

		for ( file in logoDir ) {

			if ( !["png","jpeg","jpg","gif"].has(file.split('.')[1]) )
				continue ;

			var filePath = "logos/" + file ;
			var typeName = file.split('.')[0] ;
			typeName = typeName.substr(0,1).toUpperCase() + typeName.substr(1).toLowerCase() ;

			var debugPos:haxe.macro.Position = haxe.macro.Context.currentPos() ;

			var type = {
				pos:debugPos,
				params:[],
				pack:["logos"],
				name:typeName,
				meta:[{pos:debugPos,params:[{pos:debugPos,expr:EConst(CString(filePath))}],name:":bitmap"}],
				kind:TDClass({sub:null,params:[],pack:["flash","display"],name:"BitmapData"},[],false),
				isExtern:false,
				fields:[{
						name : "new", 
						doc : null,
						meta : [],
						access : [APublic], 
						kind : FFun({
							args: [],
							expr: { expr: EBlock([
								{expr: ECall({ 
									expr: EConst(CIdent("super")), pos: debugPos}, [
									{expr:EConst(CInt('0')),pos:debugPos}, 
									{expr:EConst(CInt('0')),pos:debugPos}]),
								pos: debugPos}
							]), pos: debugPos},
				            params: [], 
				            ret: null 
						}), 
						pos: debugPos
					}]
			} ;

			haxe.macro.Context.defineType(type) ;

		}

		return null ;

	}

}