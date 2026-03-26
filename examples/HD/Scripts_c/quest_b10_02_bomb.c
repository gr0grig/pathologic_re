// @IMPORTS: SetVisibility/1,IsPlayerActor/2,GetScene/1,GetPosition/1,AddActorByType/6,PlaySound/1,Hold/0,IsLoaded/1,RemoveActor/1,self/1
// @STRINGS: W:health|A:SetProperty|W:scripted|W:fire.xml|W:explode|W:cleanup|W:restore
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_10: op=0x7 vars=object
// @EVENT_26: op=0x23 vars=string
// @EVENT_6: op=0x3f vars=

task_0_event_10(var_0_bool, var_1_object)
{
	var_2_bool = 0; var_3_object = Obj(); var_4_cvector = CVector(0,0,0); var_5_object = Obj(); var_6_bool = 0; var_7_object = Obj(); var_8_cvector = CVector(0,0,0); var_9_object = Obj();
	IsPlayerActor(var_1_object, var_6_bool);
	var_10_bool = var_6_bool;
	if(var_10_bool != 0) {
		@@var_1_object:SetProperty("health", (int)0);
		GetScene(var_7_object);
		GetPosition(var_8_cvector);
		AddActorByType(var_9_object, "scripted", var_7_object, var_8_cvector, CVector(0.0, 0.0, 0.0), "fire.xml");
		PlaySound("explode");
		var_9_object = 0;
		var_7_object = 0;
	}
	return 8;
}


task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0;
	var_5_bool = var_1_string == "cleanup";
	if(var_5_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_3_bool);
		var_6_bool = 0;
		var_6_bool = 0;
		var_7_bool = var_3_bool == 0; //@nz
		if(var_7_bool != 0) {
			var_8_bool = 0;
			func_79(var_8_bool);
			if(var_8_bool != 0) {
				var_6_bool = 1;
			}
		}
		if(var_6_bool != 0) {
			var_9_object = Obj();
			func_81(var_9_object);
			RemoveActor(var_9_object);
		}
	} else {
		var_13_bool = var_1_string == "restore";
		if(var_13_bool == 0) goto Label_62;
		var_0_bool = false;
	}
Label_62:
	return 2;
	
}


task_0_event_6(var_0_bool)
{
	var_1_bool = 0;
	var_1_bool = 0;
	var_2_bool = var_0_bool;
	if(var_2_bool != 0) {
		var_3_bool = 0;
		func_79(var_3_bool);
		if(var_3_bool != 0) {
			var_1_bool = 1;
		}
	}
	if(var_1_bool != 0) {
		var_4_object = Obj();
		func_81(var_4_object);
		RemoveActor(var_4_object);
	}
	return 0;
}


main(var_0_bool)
{
	SetVisibility((bool)1);
	func_31();
	return 0;
}


func_81(var_4_object)
{
	var_5_object = Obj(); var_6_object = Obj();
	self(var_6_object);
	var_6_object = var_4_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_79(var_3_bool)
{
	var_3_bool = 1;
	return 0;
}


func_31()
{
	
Label_31:
	Hold();
	goto Label_31;
}
EMIT "Return(); Pop(0)";


