// @IMPORTS: SetVariable/2,IsOverrideActive/1,WorkWithCorpse/1,GetItemCountOfType/2,GetVariable/2,sync/0,SetVisibility/1,Hold/0,IsLoaded/1,RemoveActor/1,self/1
// @STRINGS: W:d5q02KnowNudeIsDead|W:d5q01_heart|W:d5q01|W:cleanup|W:restore
// @RUN_OP: 0x1d
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool params=0
// @EVENT_0: op=0x0 vars=object
// @EVENT_6: op=0x2e vars=
// @EVENT_26: op=0x3c vars=string
// @PE: 0x73

task_0_event_0(var_0_bool, var_1_bool, var_2_object)
{
	var_3_bool = 0; var_4_bool = 0;
	SetVariable("d5q02KnowNudeIsDead", (int)1);
	IsOverrideActive(var_4_bool);
	var_7_bool = var_4_bool == 0; //@nz
	if(var_7_bool != 0) {
		WorkWithCorpse(var_2_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool)
{
	var_2_bool = var_1_bool == 0; //@nz
	if(var_2_bool != 0) {
		SetVisibility((bool)1);
		var_1_bool = true;
	}
	func_88();
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
			func_12(var_9_bool);
			if(var_9_bool != 0) {
				var_7_bool = 1;
			}
		}
		if(var_7_bool != 0) {
			var_23_object = Obj();
			func_109(var_23_object);
			RemoveActor(var_23_object);
		}
	} else {
		var_27_bool = var_2_string == "restore";
		if(var_27_bool == 0) goto Label_87;
		var_0_bool = false;
	}
Label_87:
	return 2;
	
}


main(var_0_bool, var_1_bool)
{
	sync();
	var_2_bool = 0;
	func_104(var_2_bool);
	var_5_bool = var_2_bool == 0; //@nz
	if(var_5_bool != 0) {
		SetVisibility((bool)1);
		var_1_bool = true;
	} else {
		var_1_bool = false;
	}
	func_56();
	return 0;
	
}


func_104(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0;
	IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
	return 2;
}


func_12(var_9_bool)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0;
	GetItemCountOfType(var_12_int, "d5q01_heart");
	var_15_bool = var_12_int == 0; //@nz
	if(var_15_bool != 0) {
		var_9_bool = 1;
		return 4;
	}
	GetVariable("d5q01", var_13_int);
	var_17_bool = 0; var_18_int = 0;
	var_13_int = var_18_int;
	func_115(var_17_bool, var_18_int);
	var_9_bool = !var_17_bool;
	return 4;
}


func_109(var_23_object)
{
	var_24_object = Obj(); var_25_object = Obj();
	self(var_25_object);
	var_25_object = var_23_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_115(var_17_bool, var_18_int)
{
	var_17_bool = 0;
	var_20_bool = var_18_int >= (int)1;
	if(var_20_bool != 0) {
		var_22_bool = var_18_int < (int)1000;
		if(var_22_bool != 0) {
			var_17_bool = 1;
		}
	}
	return 0;
}


func_88()
{
	var_4_bool = 0;
	var_4_bool = 0;
	var_5_bool = var_0_bool;
	if(var_5_bool != 0) {
		var_6_bool = 0;
		func_12(var_6_bool);
		if(var_6_bool != 0) {
			var_4_bool = 1;
		}
	}
	if(var_4_bool != 0) {
		var_20_object = Obj();
		func_109(var_20_object);
		RemoveActor(var_20_object);
	}
	return 0;
}


func_56()
{
	
Label_56:
	Hold();
	goto Label_56;
}
EMIT "Return(); Pop(0)";


