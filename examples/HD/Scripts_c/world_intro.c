// @IMPORTS: SetSaveProperty/2,sync/0,PlaySharedSound/1,Sleep/1,Hold/0,FindActor/2,GetSceneByName/2,Trace/1,Teleport/4,RemoveWorld/0,ActivateInitGameOverride/1,Trigger/2
// @STRINGS: W:intro|W:player|W:intro_theater|W:Intro scene not found|W:birth|A:GetLocator|W:exit|W:exiting|W:choose_pers.xml|A:GetGroupActors|A:Next|W:off
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object params=0
// @EVENT_26: op=0x2c vars=string
// @PE: 0x2c

task_0_event_26(var_0_object, var_1_string)
{
	var_3_bool = var_1_string == "exit";
	if(var_3_bool != 0) {
		func_52();
	}
	return 0;
}


main(var_0_object)
{
	SetSaveProperty((int)0, (int)3);
	func_22(var_0_object);
	sync();
	PlaySharedSound("intro");
	Sleep((float)188.0);
	func_61(var_0_object);
	
Label_18:
	Hold();
	goto Label_18;
}
EMIT "Return(); Pop(0)";


func_52()
{
	Trace("exiting");
	RemoveWorld();
	ActivateInitGameOverride("choose_pers.xml");
	return 0;
}


func_61(var_0_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_bool = 0; var_22_object = Obj(); var_23_object = Obj(); var_24_bool = 0;
	@@@var_0_object:GetGroupActors(var_22_object, (int)0);
	
Label_65:
	@@var_22_object:Next(var_24_bool, var_23_object);
	var_26_bool = var_24_bool;
	if(var_26_bool != 0) {
		var_27_object = var_23_object;
		if(var_27_object != 0) {
			Trigger(var_23_object, "off");
		}
		goto Label_65;
	}
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_22(var_0_object)
{
	var_3_object = Obj(); var_4_bool = 0; var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_object = Obj(); var_8_bool = 0; var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0);
	FindActor(var_7_object, "player");
	GetSceneByName(var_0_object, "intro_theater");
	var_13_bool = var_0_object == 0; //@nz
	if(var_13_bool != 0) {
		Trace("Intro scene not found");
		return 8;
	}
	@@@var_0_object:GetLocator("birth", var_8_bool, var_9_cvector, var_10_cvector);
	var_16_bool = var_8_bool;
	if(var_16_bool != 0) {
		Teleport(var_7_object, var_0_object, var_9_cvector, var_10_cvector);
	}
	return 8;
}
EMIT "Stack[-4] = 0";


