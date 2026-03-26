// @IMPORTS: Hold/0,FindParticleSystem/2,Trace/1,PlayLoopedGlobalSound/3,StopGroup0/0,IsLoaded/1
// @STRINGS: W:bonfire|W:Can't find fire particle system|A:AddSource|A:Enable|W:fire_loop
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_5: op=0x4c vars=

task_0_event_5()
{
	StopGroup0();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj();
	var_4_bool = 0;
	func_79(var_4_bool);
	var_7_bool = var_4_bool == 0; //@nz
	if(var_7_bool != 0) {
		Hold();
	}
	FindParticleSystem("bonfire", var_2_object);
	var_9_bool = var_2_object == 0; //@ne
	if(var_9_bool != 0) {
		Trace("Can't find fire particle system");
		return 4;
	}
	@@var_2_object:AddSource(CVector(0.0, 0.0, 0.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_2_object:AddSource(CVector(10.0, 0.0, 0.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_2_object:AddSource(CVector(0.0, 0.0, 10.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_2_object:AddSource(CVector(-10.0, 0.0, 0.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_2_object:AddSource(CVector(0.0, 0.0, -10.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_2_object:AddSource(CVector(10.0, 0.0, 10.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_2_object:AddSource(CVector(-10.0, 0.0, -10.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_2_object:AddSource(CVector(-10.0, 0.0, 10.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_2_object:AddSource(CVector(10.0, 0.0, -10.0), CVector(0.0, 1.0, 0.0), (float)0.0);
	@@var_2_object:Enable();
	
Label_64:
	if((bool)1 != 0) {
		PlayLoopedGlobalSound(var_3_object, "fire_loop", CVector(0.0, 10.0, 0.0));
		Hold();
		var_3_object = 0;
		goto Label_64;
	}
	return 4;
}
EMIT "Stack[-2] = 0";


func_79(var_4_bool)
{
	var_5_bool = 0; var_6_bool = 0;
	IsLoaded(var_6_bool);
	var_6_bool = var_4_bool;
	return 2;
}


