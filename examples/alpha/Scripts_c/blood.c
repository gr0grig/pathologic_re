// @IMPORTS: SetDeathStateAndRemove/0,FindParticleSystem/2,Sleep/1,sync/0,IsLoaded/1
// @STRINGS: W:blood|A:Enable|A:AddSource|A:Fade
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_6: op=0x20 vars=

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
	func_37(var_2_bool);
	var_5_bool = var_2_bool == 0; //@nz
	if(var_5_bool != 0) {
		SetDeathStateAndRemove();
		return 2;
	}
	FindParticleSystem("blood", var_1_object);
	@@var_1_object:Enable();
	@@var_1_object:AddSource(CVector(0.0, 0.0, 0.0), CVector(0.0, 400.0, 0.0), (float)1.5);
	Sleep((float)0.5);
	@@var_1_object:Fade((bool)1);
	Sleep((float)1.0);
	SetDeathStateAndRemove();
	return 2;
}
EMIT "Stack[-1] = 0";


func_37(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0;
	IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
	return 2;
}


