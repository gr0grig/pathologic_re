// @IMPORTS: AddItem/3,IsOverrideActive/1,Barter/1,GetItemCountOfType/2,GetVariable/2,GetProperty/2,FindActor/2,SetVisibility/1,GetScene/1,RemoveActor/1,Hold/0,IsLoaded/1,self/1,Trace/1,AddActorByType/6
// @STRINGS: W:put_item|W:d3q01_blood|A:IsOnGround|W:d3q01|W:light|A:Switch|W:fire_loc|W:scripted|W:bonfire.xml|W:cleanup|W:restore|A:GetLocator|W:Locator |W: doesn't exist|W:nouse_container
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,object,object,bool params=0
// @EVENT_26: op=0x5 vars=string
// @EVENT_0: op=0x16 vars=object
// @EVENT_32: op=0x5e vars=
// @EVENT_6: op=0x88 vars=
// @PE: 0xb6

task_0_event_26(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_string)
{
	var_5_bool = 0; var_6_bool = 0;
	var_8_bool = var_4_string == "put_item";
	if(var_8_bool != 0) {
		var_9_bool = var_3_bool == 0; //@nz
		if(var_9_bool != 0) {
			AddItem(var_6_bool, "d3q01_blood", (int)0);
			var_3_bool = true;
		}
	} else {
		var_12_string = "";
		var_4_string = var_12_string;
		func_108(var_6_bool, var_12_string);
	}
	return 2;
	
}


task_0_event_0(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object)
{
	var_5_bool = 0; var_6_bool = 0; var_7_bool = 0; var_8_bool = 0;
	var_9_bool = 0;
	func_176(var_9_bool);
	var_13_bool = var_9_bool == 0; //@nz
	if(var_13_bool != 0) {
		return 4;
	}
	@@var_4_object:IsOnGround(var_7_bool);
	var_14_bool = var_7_bool;
	if(var_14_bool != 0) {
		EventDisable(0);
		IsOverrideActive(var_8_bool);
		var_15_bool = var_8_bool == 0; //@nz
		if(var_15_bool != 0) {
			Barter(var_4_object);
		}
		EventEnable(0);
	}
	return 4;
}


task_0_event_32(var_0_bool, var_1_object, var_2_object, var_3_bool)
{
	var_4_object = var_2_object;
	if(var_4_object != 0) {
		RemoveActor(var_2_object);
	}
	var_5_object = var_1_object;
	if(var_5_object != 0) {
		@@@var_1_object:Switch((bool)0);
	}
	return 0;
}


task_0_event_6(var_0_bool, var_1_object, var_2_object, var_3_bool)
{
	var_4_bool = 0;
	var_4_bool = 0;
	var_5_bool = var_0_bool;
	if(var_5_bool != 0) {
		var_6_bool = 0;
		func_42(var_6_bool);
		if(var_6_bool != 0) {
			var_4_bool = 1;
		}
	}
	if(var_4_bool != 0) {
		var_20_object = Obj();
		func_152(var_20_object);
		RemoveActor(var_20_object);
	}
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_bool)
{
	var_3_bool = false;
	func_59(var_3_bool);
	return 0;
}


func_104()
{
	
Label_104:
	Hold();
	goto Label_104;
}
EMIT "Return(); Pop(0)";


func_42(var_6_bool)
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0;
	GetItemCountOfType(var_9_int, "d3q01_blood");
	var_12_bool = var_9_int == 0; //@nz
	if(var_12_bool != 0) {
		var_6_bool = 1;
		return 4;
	}
	GetVariable("d3q01", var_10_int);
	var_14_bool = 0; var_15_int = 0;
	var_10_int = var_15_int;
	func_182(var_14_bool, var_15_int);
	var_6_bool = !var_14_bool;
	return 4;
}


func_108(var_0_bool, var_12_string)
{
	var_13_bool = 0; var_14_bool = 0;
	var_16_bool = var_12_string == "cleanup";
	if(var_16_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_14_bool);
		var_17_bool = 0;
		var_17_bool = 0;
		var_18_bool = var_14_bool == 0; //@nz
		if(var_18_bool != 0) {
			var_19_bool = 0;
			func_42(var_19_bool);
			if(var_19_bool != 0) {
				var_17_bool = 1;
			}
		}
		if(var_17_bool != 0) {
			var_33_object = Obj();
			func_152(var_33_object);
			RemoveActor(var_33_object);
		}
	} else {
		var_37_bool = var_12_string == "restore";
		if(var_37_bool == 0) goto Label_135;
		var_0_bool = false;
	}
Label_135:
	return 2;
	
}


func_78(var_2_object)
{
	var_9_object = Obj(); var_10_string = ""; var_11_object = Obj(); var_12_string = "";
	GetScene(var_11_object);
	GetProperty("fire_loc", var_12_string);
	var_14_object = Obj(); var_15_object = Obj(); var_16_string = ""; var_17_string = ""; var_18_string = "";
	var_11_object = var_15_object;
	var_12_string = var_16_string;
	func_158(var_14_object, var_15_object, var_16_string, "scripted", "bonfire.xml");
	var_2_object = var_14_object;
	return 4;
}
EMIT "Stack[-2] = 0";


func_176(var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	GetVariable("nouse_container", var_11_int);
	var_9_bool = !var_11_int;
	return 2;
}


func_182(var_14_bool, var_15_int)
{
	var_14_bool = 0;
	var_17_bool = var_15_int >= (int)1;
	if(var_17_bool != 0) {
		var_19_bool = var_15_int < (int)1000;
		if(var_19_bool != 0) {
			var_14_bool = 1;
		}
	}
	return 0;
}


func_152(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	self(var_22_object);
	var_22_object = var_20_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_59(var_1_object)
{
	var_4_string = ""; var_5_string = "";
	GetProperty("light", var_5_string);
	FindActor(var_1_object, var_5_string);
	@@@var_1_object:Switch((bool)1);
	SetVisibility((bool)1);
	func_78(var_5_string);
	func_104();
	return 2;
}


func_158(var_14_object, var_15_object, var_16_string, var_17_string, var_18_string)
{
	var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_object = Obj(); var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj();
	@@var_15_object:GetLocator(var_16_string, var_23_bool, var_24_cvector, var_25_cvector);
	var_27_bool = var_23_bool == 0; //@nz
	if(var_27_bool != 0) {
		var_29_int = "Locator " + var_16_string;
		var_31_int = var_29_int + " doesn't exist";
		Trace(var_31_int);
	} else {
		AddActorByType(Obj(), var_17_string, var_15_object, var_24_cvector, var_25_cvector, var_18_string);
	}
	var_26_object = var_14_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


