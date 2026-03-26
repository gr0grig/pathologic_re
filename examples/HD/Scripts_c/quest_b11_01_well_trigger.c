// @IMPORTS: Hold/0,IsPlayerActor/2,GetSceneByName/2,RemoveScene/1,GetMainOutdoorScene/1,Teleport/4
// @STRINGS: W:boiny_well|W:pt_b11q01_well_return|A:GetLocator|W:activate
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_23: op=0x4 vars=object
// @EVENT_26: op=0x1a vars=string
// @PE: 0x1a

task_0_event_23(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_object = Obj(); var_4_bool = 0; var_5_cvector = CVector(0,0,0); var_6_cvector = CVector(0,0,0); var_7_bool = 0; var_8_object = Obj(); var_9_bool = 0; var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0);
	var_12_bool = var_0_bool == 0; //@nz
	if(var_12_bool != 0) {
		return 10;
	}
	IsPlayerActor(var_1_object, var_7_bool);
	var_13_bool = var_7_bool;
	if(var_13_bool != 0) {
		GetSceneByName(var_8_object, "boiny_well");
		RemoveScene(var_8_object);
		GetMainOutdoorScene(var_8_object);
		@@var_8_object:GetLocator("pt_b11q01_well_return", var_9_bool, var_10_cvector, var_11_cvector);
		Teleport(var_1_object, var_8_object, var_10_cvector, var_11_cvector);
		var_8_object = 0;
	}
	return 10;
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_3_bool = var_1_string == "activate";
	if(var_3_bool != 0) {
		var_0_bool = true;
	}
	return 0;
}


main(var_0_bool)
{
	
Label_0:
	Hold();
	goto Label_0;
}
EMIT "Return(); Pop(0)";


