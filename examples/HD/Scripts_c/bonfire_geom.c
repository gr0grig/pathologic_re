// @IMPORTS: GetProperty/2,FindActor/2,SetVisibility/1,GetScene/1,RemoveActor/1,Hold/0,IsLoaded/1,self/1,Trace/1,AddActorByType/6
// @STRINGS: W:light|A:Switch|W:fire_loc|W:scripted|W:bonfire.xml|W:cleanup|W:restore|A:GetLocator|W:Locator |W: doesn't exist
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,object,object params=0
// @EVENT_32: op=0x23 vars=
// @EVENT_26: op=0x31 vars=string
// @EVENT_6: op=0x4d vars=

task_0_event_32(var_0_bool, var_1_object, var_2_object)
{
	var_3_object = var_2_object;
	if(var_3_object != 0) {
		RemoveActor(var_2_object);
	}
	var_4_object = var_1_object;
	if(var_4_object != 0) {
		@@@var_1_object:Switch((bool)0);
	}
	return 0;
}


task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_string)
{
	var_4_bool = 0; var_5_bool = 0;
	var_7_bool = var_3_string == "cleanup";
	if(var_7_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_5_bool);
		var_8_bool = 0;
		var_8_bool = 0;
		var_9_bool = var_5_bool == 0; //@nz
		if(var_9_bool != 0) {
			var_10_bool = 0;
			func_93(var_10_bool);
			if(var_10_bool != 0) {
				var_8_bool = 1;
			}
		}
		if(var_8_bool != 0) {
			var_11_object = Obj();
			func_95(var_11_object);
			RemoveActor(var_11_object);
		}
	} else {
		var_15_bool = var_3_string == "restore";
		if(var_15_bool == 0) goto Label_76;
		var_0_bool = false;
	}
Label_76:
	return 2;
	
}


task_0_event_6(var_0_bool, var_1_object, var_2_object)
{
	var_3_bool = 0;
	var_3_bool = 0;
	var_4_bool = var_0_bool;
	if(var_4_bool != 0) {
		var_5_bool = 0;
		func_93(var_5_bool);
		if(var_5_bool != 0) {
			var_3_bool = 1;
		}
	}
	if(var_3_bool != 0) {
		var_6_object = Obj();
		func_95(var_6_object);
		RemoveActor(var_6_object);
	}
	return 0;
}


main(var_0_bool, var_1_object, var_2_object)
{
	var_3_string = ""; var_4_string = "";
	GetProperty("light", var_4_string);
	FindActor(var_1_object, var_4_string);
	@@@var_1_object:Switch((bool)1);
	SetVisibility((bool)1);
	func_19(var_4_string);
	func_45();
	return 2;
}


func_101(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string)
{
	var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj();
	@@var_14_object:GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector);
	var_26_bool = var_22_bool == 0; //@nz
	if(var_26_bool != 0) {
		var_28_int = "Locator " + var_15_string;
		var_30_int = var_28_int + " doesn't exist";
		Trace(var_30_int);
	} else {
		AddActorByType(Obj(), var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string);
	}
	var_25_object = var_13_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_45()
{
	
Label_45:
	Hold();
	goto Label_45;
}
EMIT "Return(); Pop(0)";


func_19(var_2_object)
{
	var_8_object = Obj(); var_9_string = ""; var_10_object = Obj(); var_11_string = "";
	GetScene(var_10_object);
	GetProperty("fire_loc", var_11_string);
	var_13_object = Obj(); var_14_object = Obj(); var_15_string = ""; var_16_string = ""; var_17_string = "";
	var_10_object = var_14_object;
	var_11_string = var_15_string;
	func_101(var_13_object, var_14_object, var_15_string, "scripted", "bonfire.xml");
	var_2_object = var_13_object;
	return 4;
}
EMIT "Stack[-2] = 0";


func_93(var_5_bool)
{
	var_5_bool = 1;
	return 0;
}


func_95(var_6_object)
{
	var_7_object = Obj(); var_8_object = Obj();
	self(var_8_object);
	var_8_object = var_6_object;
	return 2;
}
EMIT "Stack[-1] = 0";


