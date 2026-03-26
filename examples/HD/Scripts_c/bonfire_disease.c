// @IMPORTS: SetVisibility/1,Hold/0,GetPosition/1,GetScene/1,Trace/1,GetVariable/2,GetActorName/1,AddActor/6,AddActorByType/6,RemoveActor/1
// @STRINGS: A:GetRegionByPt|W:Invalid bonfire region|W:_light|W:light_fire.xml|W:scripted|W:Region|W:State
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_5: op=0x7 vars=
// @EVENT_6: op=0x37 vars=
// @PE: 0x40

task_0_event_5(var_0_object, var_1_object)
{
	var_2_cvector = CVector(0,0,0); var_3_object = Obj(); var_4_int = 0; var_5_int = 0; var_6_string = ""; var_7_cvector = CVector(0,0,0); var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_string = "";
	GetPosition(var_7_cvector);
	GetScene(var_8_object);
	@@var_8_object:GetRegionByPt(var_9_int, var_7_cvector);
	var_13_bool = var_9_int == (int)-1;
	if(var_13_bool != 0) {
		Trace("Invalid bonfire region");
		return 10;
	}
	var_15_string = ""; var_16_int = 0;
	var_9_int = var_16_int;
	func_64(var_15_string, var_16_int);
	GetVariable(var_15_string, var_10_int);
	var_10_int = var_10_int & (int)3;
	var_21_bool = 0;
	var_21_bool = 1;
	var_23_bool = var_10_int == (int)1;
	if(var_23_bool != 1) {
		var_25_bool = var_10_int == (int)2;
		if(var_25_bool != 1) {
			var_21_bool = 0;
		}
	}
	if(var_21_bool != 0) {
		GetActorName(var_11_string);
		var_27_int = var_11_string + "_light";
		AddActor(var_0_object, var_27_int, var_8_object, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 1.0), "light_fire.xml");
		AddActorByType(var_1_object, "scripted", var_8_object, var_7_cvector, CVector(0.0, 0.0, 1.0), "fire.xml");
	}
	return 10;
}
EMIT "Stack[-4] = 0";


task_0_event_6(var_0_object, var_1_object)
{
	var_2_object = var_0_object;
	if(var_2_object != 0) {
		RemoveActor(var_0_object);
	}
	var_3_object = var_1_object;
	if(var_3_object != 0) {
		RemoveActor(var_1_object);
	}
	return 0;
}


main(var_0_object, var_1_object)
{
	SetVisibility((bool)1);
	
Label_3:
	Hold();
	goto Label_3;
}
EMIT "Return(); Pop(0)";


func_64(var_15_string, var_16_int)
{
	var_18_int = "Region" + var_16_int;
	var_15_string = var_18_int + "State";
	return 0;
}


