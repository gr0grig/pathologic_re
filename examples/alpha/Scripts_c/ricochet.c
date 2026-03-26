// @IMPORTS: SetDeathStateAndRemove/0,PlayGlobalSound/3,FindParticleSystem/2,Sleep/1,sync/0,IsLoaded/1
// @STRINGS: W:richochet|A:Enable|A:AddSource|A:Fade|W:wood|W:metal|W:ground|W:stone
// @GLOBALS: 0:int:Material
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_6: op=0x2a vars=
// @PE: 0x2f

task_0_event_6()
{
	SetDeathStateAndRemove();
	sync();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj();
	var_2_bool = 0;
	func_67(var_2_bool);
	var_5_bool = var_2_bool == 0; //@nz
	if(var_5_bool != 0) {
		SetDeathStateAndRemove();
		return 2;
	}
	var_6_string = ""; var_7_int = 0;
	var_8_int = GlobalVars[0];
	var_8_int = var_7_int;
	func_47(var_6_string, var_7_int);
	PlayGlobalSound(var_6_string, CVector(0.0, 0.0, 0.0), (int)500);
	FindParticleSystem("richochet", var_1_object);
	@@var_1_object:Enable();
	@@var_1_object:AddSource(CVector(0.0, 0.0, 0.0), CVector(0.0, 400.0, 0.0), (float)1.5);
	Sleep((float)0.5);
	@@var_1_object:Fade((bool)1);
	Sleep((float)0.5);
	SetDeathStateAndRemove();
	return 2;
}
EMIT "Stack[-1] = 0";


func_67(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0;
	IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
	return 2;
}


func_47(var_6_string, var_7_int)
{
	var_10_bool = var_7_int == (int)1;
	if(var_10_bool != 0) {
		var_6_string = "wood";
		return 0;
	EMIT "GOTO 0x41";
	}
	var_12_bool = var_7_int == (int)2;
	if(var_12_bool != 0) {
		var_6_string = "metal";
		return 0;
	EMIT "GOTO 0x41";
	}
	var_14_bool = var_7_int == (int)3;
	if(var_14_bool != 0) {
		var_6_string = "ground";
		return 0;
	}
	var_6_string = "stone";
	return 0;
}


