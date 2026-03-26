// @IMPORTS: SetSaveProperty/2,RegisterKeyCallback/1,sync/0,PlaySharedSound/1,Sleep/1,Hold/0,FindActor/2,GetSceneByName/2,Trace/1,Teleport/4,RemoveWorld/0,ActivateInitGameOverride/1,Trigger/2
// @STRINGS: W:escape|W:intro|W:exit|W:player|W:intro_theater|W:Intro scene not found|W:birth|A:GetLocator|W:exiting|W:choose_pers.xml|A:GetGroupActors|A:Next|W:off
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_24: op=0x20 vars=int
// @EVENT_26: op=0x3c vars=string
// @PE: 0x20,0x3c

task_0_event_24(var_0_object, var_1_int)
{
	var_2_string = "";
	var_2_string = "exit";
	func_60();
	return 0;
}


	task_0_event_26(var_0_object, var_31_string)
	{
	var_32_string = "exit";
	var_33_bool = var_31_string == var_32_string;
	if(var_33_bool != 0) {
		func_68();
	}
	return 0;
	}


main(var_0_object)
{
	SetSaveProperty((int)0, (int)3);
	RegisterKeyCallback("escape");
	func_38(var_0_object);
	sync();
	PlaySharedSound("intro");
	Sleep((float)188.0);
	func_77(var_0_object);
	Sleep((int)2);
	var_31_string = "";
	var_31_string = "exit";
	func_60();
	
Label_28:
	Hold();
	goto Label_28;
}
EMIT "Return(); Pop(0)";


func_68()
{
	Trace("exiting");
	RemoveWorld();
	ActivateInitGameOverride("choose_pers.xml");
	return 0;
}


func_77(var_0_object)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0;
	@@@var_0_object:GetGroupActors(var_23_object, (int)0);
	
Label_81:
	@@var_23_object:Next(var_25_bool, var_24_object);
	var_27_bool = var_25_bool;
	if(var_27_bool != 0) {
		var_28_object = var_24_object;
		if(var_28_object != 0) {
			Trigger(var_24_object, "off");
		}
		goto Label_81;
	}
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_38(var_0_object)
{
	var_4_object = Obj(); var_5_bool = 0; var_6_cvector = CVector(0,0,0); var_7_cvector = CVector(0,0,0); var_8_object = Obj(); var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0);
	FindActor(var_8_object, "player");
	GetSceneByName(var_0_object, "intro_theater");
	var_14_bool = var_0_object == 0; //@nz
	if(var_14_bool != 0) {
		Trace("Intro scene not found");
		return 8;
	}
	@@@var_0_object:GetLocator("birth", var_9_bool, var_10_cvector, var_11_cvector);
	var_17_bool = var_9_bool;
	if(var_17_bool != 0) {
		Teleport(var_8_object, var_0_object, var_10_cvector, var_11_cvector);
	}
	return 8;
}
EMIT "Stack[-4] = 0";


