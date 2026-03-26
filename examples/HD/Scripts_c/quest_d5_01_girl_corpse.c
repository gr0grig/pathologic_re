// @IMPORTS: SetVariable/2,IsOverrideActive/1,Barter/1,GetItemCountOfType/2,GetVariable/2,sync/0,SetVisibility/1,Hold/0,IsLoaded/1,RemoveActor/1,self/1,CreateDiaryEntry/4,GetDiaryRoot/1,Trace/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:d5q02KnowNudeIsDead|W:d5q01_heart|W:d5q01|W:cleanup|W:restore|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x2b
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool,bool params=0
// @EVENT_0: op=0x0 vars=object
// @EVENT_6: op=0x3c vars=
// @EVENT_26: op=0x4a vars=string
// @PE: 0xb7

task_0_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object)
{
	var_4_bool = 0; var_5_bool = 0;
	SetVariable("d5q02KnowNudeIsDead", (int)1);
	IsOverrideActive(var_5_bool);
	var_8_bool = var_5_bool == 0; //@nz
	if(var_8_bool != 0) {
		Barter(var_3_object);
	}
	var_9_bool = 0;
	var_9_bool = 0;
	var_10_bool = 0;
	func_26(var_10_bool);
	if(var_10_bool != 0) {
		var_24_bool = var_2_bool == 0; //@nz
		if(var_24_bool != 0) {
			var_9_bool = 1;
		}
	}
	if(var_9_bool != 0) {
		func_129();
		var_2_bool = true;
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool)
{
	var_3_bool = var_1_bool == 0; //@nz
	if(var_3_bool != 0) {
		SetVisibility((bool)1);
		var_1_bool = true;
	}
	func_102();
	return 0;
}


task_0_event_26(var_0_bool, var_1_bool, var_2_bool, var_3_string)
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
			func_26(var_10_bool);
			if(var_10_bool != 0) {
				var_8_bool = 1;
			}
		}
		if(var_8_bool != 0) {
			var_24_object = Obj();
			func_123(var_24_object);
			RemoveActor(var_24_object);
		}
	} else {
		var_28_bool = var_3_string == "restore";
		if(var_28_bool == 0) goto Label_101;
		var_0_bool = false;
	}
Label_101:
	return 2;
	
}


main(var_0_bool, var_1_bool, var_2_bool)
{
	sync();
	var_3_bool = 0;
	func_118(var_3_bool);
	var_6_bool = var_3_bool == 0; //@nz
	if(var_6_bool != 0) {
		SetVisibility((bool)1);
		var_1_bool = true;
	} else {
		var_1_bool = false;
	}
	func_70();
	return 0;
	
}


func_129()
{
	var_25_object = Obj(); var_26_object = Obj();
	CreateDiaryEntry(var_26_object, (int)634, (int)1, (int)533080);
	var_30_bool = 0; var_31_object = Obj(); var_32_int = 0;
	var_26_object = var_31_object;
	func_155(var_30_bool, var_31_object, (int)139);
	return 2;
}
EMIT "Stack[-1] = 0";


func_102()
{
	var_5_bool = 0;
	var_5_bool = 0;
	var_6_bool = var_0_bool;
	if(var_6_bool != 0) {
		var_7_bool = 0;
		func_26(var_7_bool);
		if(var_7_bool != 0) {
			var_5_bool = 1;
		}
	}
	if(var_5_bool != 0) {
		var_21_object = Obj();
		func_123(var_21_object);
		RemoveActor(var_21_object);
	}
	return 0;
}


func_70()
{
	
Label_70:
	Hold();
	goto Label_70;
}
EMIT "Return(); Pop(0)";


func_155(var_30_bool, var_31_object, var_32_int)
{
	var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; var_36_object = Obj(); var_37_object = Obj(); var_38_int = 0;
	func_142(Obj());
	var_39_object = var_36_object;
	@@var_36_object:Find(var_32_int, var_37_object);
	var_44_bool = var_37_object == 0; //@nz
	if(var_44_bool != 0) {
		var_46_int = "Can't find diary parent with id: " + var_32_int;
		Trace(var_46_int);
		var_30_bool = 0;
		return 6;
	}
	@@var_37_object:AddChild(var_31_object);
	SendWorldWndMessage((int)7);
	@@var_31_object:GetCategory(var_38_int);
	SetDiarySection(var_38_int);
	var_30_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_142(var_39_object)
{
	var_40_object = Obj(); var_41_object = Obj();
	GetDiaryRoot(var_41_object);
	var_42_bool = var_41_object == 0; //@nz
	if(var_42_bool != 0) {
		Trace("Can't retrieve diary root");
		var_39_object = 0;
		return 2;
	}
	var_41_object = var_39_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_118(var_3_bool)
{
	var_4_bool = 0; var_5_bool = 0;
	IsLoaded(var_5_bool);
	var_5_bool = var_3_bool;
	return 2;
}


func_183(var_18_bool, var_19_int)
{
	var_18_bool = 0;
	var_21_bool = var_19_int >= (int)1;
	if(var_21_bool != 0) {
		var_23_bool = var_19_int < (int)1000;
		if(var_23_bool != 0) {
			var_18_bool = 1;
		}
	}
	return 0;
}


func_26(var_10_bool)
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0;
	GetItemCountOfType(var_13_int, "d5q01_heart");
	var_16_bool = var_13_int == 0; //@nz
	if(var_16_bool != 0) {
		var_10_bool = 1;
		return 4;
	}
	GetVariable("d5q01", var_14_int);
	var_18_bool = 0; var_19_int = 0;
	var_14_int = var_19_int;
	func_183(var_18_bool, var_19_int);
	var_10_bool = !var_18_bool;
	return 4;
}


func_123(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj();
	self(var_26_object);
	var_26_object = var_24_object;
	return 2;
}
EMIT "Stack[-1] = 0";


