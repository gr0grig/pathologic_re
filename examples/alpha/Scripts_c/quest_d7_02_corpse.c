// @IMPORTS: SetVariable/2,GetVariable/2,IsOverrideActive/1,WorkWithCorpse/1,sync/0,SetVisibility/1,Hold/0,IsLoaded/1,RemoveActor/1,self/1,FindActor/2,Trigger/2
// @STRINGS: W:d7q02BirdBalahon|W:d7q02|W:quest_d7_02|W:completed|W:cleanup|W:restore
// @RUN_OP: 0x1e
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool params=0
// @EVENT_0: op=0x0 vars=object
// @EVENT_6: op=0x2f vars=
// @EVENT_26: op=0x3d vars=string

task_0_event_0(var_0_bool, var_1_bool, var_2_object)
{
	var_3_int = 0; var_4_bool = 0; var_5_int = 0; var_6_bool = 0;
	SetVariable("d7q02BirdBalahon", (int)1);
	var_0_bool = true;
	GetVariable("d7q02", var_5_int);
	var_11_bool = var_5_int == (int)4;
	if(var_11_bool != 0) {
		var_12_bool = 0; var_13_string = ""; var_14_string = "";
		func_116(var_12_bool, "quest_d7_02", "completed");
	}
	IsOverrideActive(var_6_bool);
	var_18_bool = var_6_bool == 0; //@nz
	if(var_18_bool != 0) {
		WorkWithCorpse(var_2_object);
	}
	return 4;
}


task_0_event_6(var_0_bool, var_1_bool)
{
	var_2_bool = var_1_bool == 0; //@nz
	if(var_2_bool != 0) {
		SetVisibility((bool)1);
		var_1_bool = true;
	}
	func_89();
	return 0;
}


task_0_event_26(var_0_bool, var_1_bool, var_2_string)
{
	var_3_bool = 0; var_4_bool = 0;
	var_6_bool = var_2_string == "cleanup";
	if(var_6_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_4_bool);
		var_7_bool = 0;
		var_7_bool = 0;
		var_8_bool = var_4_bool == 0; //@nz
		if(var_8_bool != 0) {
			var_9_bool = 0;
			func_24(var_9_bool);
			if(var_9_bool != 0) {
				var_7_bool = 1;
			}
		}
		if(var_7_bool != 0) {
			var_13_object = Obj();
			func_110(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_2_string == "restore";
		if(var_17_bool == 0) goto Label_88;
		var_0_bool = false;
	}
Label_88:
	return 2;
	
}


main(var_0_bool, var_1_bool)
{
	sync();
	var_2_bool = 0;
	func_105(var_2_bool);
	var_5_bool = var_2_bool == 0; //@nz
	if(var_5_bool != 0) {
		SetVisibility((bool)1);
		var_1_bool = true;
	} else {
		var_1_bool = false;
	}
	func_57();
	return 0;
	
}


func_105(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0;
	IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
	return 2;
}


func_110(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj();
	self(var_15_object);
	var_15_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_116(var_12_bool, var_13_string, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj();
	FindActor(var_16_object, var_13_string);
	var_17_bool = var_16_object == 0; //@ne
	if(var_17_bool != 0) {
		var_12_bool = 0;
		return 2;
	}
	Trigger(var_16_object, var_14_string);
	var_12_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_24(var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0;
	GetVariable("d7q02BirdBalahon", var_11_bool);
	var_11_bool = var_9_bool;
	return 2;
}


func_89()
{
	var_4_bool = 0;
	var_4_bool = 0;
	var_5_bool = var_0_bool;
	if(var_5_bool != 0) {
		var_6_bool = 0;
		func_24(var_6_bool);
		if(var_6_bool != 0) {
			var_4_bool = 1;
		}
	}
	if(var_4_bool != 0) {
		var_10_object = Obj();
		func_110(var_10_object);
		RemoveActor(var_10_object);
	}
	return 0;
}


func_57()
{
	
Label_57:
	Hold();
	goto Label_57;
}
EMIT "Return(); Pop(0)";


