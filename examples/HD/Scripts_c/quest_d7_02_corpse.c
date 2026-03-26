// @IMPORTS: SetVariable/2,GetVariable/2,IsOverrideActive/1,Barter/1,sync/0,SetVisibility/1,Hold/0,IsLoaded/1,RemoveActor/1,self/1,FindActor/2,Trigger/2,CreateDiaryEntry/4,GetDiaryRoot/1,Trace/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:d7q02BirdBalahon|W:d7q02|W:quest_d7_02|W:completed|W:cleanup|W:restore|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x27
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool params=0
// @EVENT_0: op=0x0 vars=object
// @EVENT_6: op=0x38 vars=
// @EVENT_26: op=0x46 vars=string

task_0_event_0(var_0_bool, var_1_bool, var_2_object)
{
	var_3_int = 0; var_4_bool = 0; var_5_int = 0; var_6_bool = 0;
	SetVariable("d7q02BirdBalahon", (int)1);
	GetVariable("d7q02", var_5_int);
	var_11_bool = var_5_int == (int)4;
	if(var_11_bool != 0) {
		func_150();
		var_35_bool = 0; var_36_string = ""; var_37_string = "";
		func_125(var_35_bool, "quest_d7_02", "completed");
	} else {
		var_42_bool = var_0_bool == 0; //@nz
		if(var_42_bool == 0) goto Label_25;
		func_137();
	}
Label_25:
	var_0_bool = true;
	IsOverrideActive(var_6_bool);
	var_41_bool = var_6_bool == 0; //@nz
	if(var_41_bool != 0) {
		Barter(var_2_object);
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
	func_98();
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
			func_33(var_9_bool);
			if(var_9_bool != 0) {
				var_7_bool = 1;
			}
		}
		if(var_7_bool != 0) {
			var_13_object = Obj();
			func_119(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_2_string == "restore";
		if(var_17_bool == 0) goto Label_97;
		var_0_bool = false;
	}
Label_97:
	return 2;
	
}


main(var_0_bool, var_1_bool)
{
	sync();
	var_2_bool = 0;
	func_114(var_2_bool);
	var_5_bool = var_2_bool == 0; //@nz
	if(var_5_bool != 0) {
		SetVisibility((bool)1);
		var_1_bool = true;
	} else {
		var_1_bool = false;
	}
	func_66();
	return 0;
	
}


func_33(var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0;
	GetVariable("d7q02BirdBalahon", var_11_bool);
	var_11_bool = var_9_bool;
	return 2;
}


func_66()
{
	
Label_66:
	Hold();
	goto Label_66;
}
EMIT "Return(); Pop(0)";


func_163(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj();
	GetDiaryRoot(var_28_object);
	var_29_bool = var_28_object == 0; //@nz
	if(var_29_bool != 0) {
		Trace("Can't retrieve diary root");
		var_26_object = 0;
		return 2;
	}
	var_28_object = var_26_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_98()
{
	var_4_bool = 0;
	var_4_bool = 0;
	var_5_bool = var_0_bool;
	if(var_5_bool != 0) {
		var_6_bool = 0;
		func_33(var_6_bool);
		if(var_6_bool != 0) {
			var_4_bool = 1;
		}
	}
	if(var_4_bool != 0) {
		var_10_object = Obj();
		func_119(var_10_object);
		RemoveActor(var_10_object);
	}
	return 0;
}


func_137()
{
	var_43_object = Obj(); var_44_object = Obj();
	CreateDiaryEntry(var_44_object, (int)636, (int)2, (int)533145);
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0;
	var_44_object = var_49_object;
	func_176(var_48_bool, var_49_object, (int)170);
	return 2;
}
EMIT "Stack[-1] = 0";


func_176(var_17_bool, var_18_object, var_19_int)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0;
	func_163(Obj());
	var_26_object = var_23_object;
	@@var_23_object:Find(var_19_int, var_24_object);
	var_31_bool = var_24_object == 0; //@nz
	if(var_31_bool != 0) {
		var_33_int = "Can't find diary parent with id: " + var_19_int;
		Trace(var_33_int);
		var_17_bool = 0;
		return 6;
	}
	@@var_24_object:AddChild(var_18_object);
	SendWorldWndMessage((int)7);
	@@var_18_object:GetCategory(var_25_int);
	SetDiarySection(var_25_int);
	var_17_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_114(var_2_bool)
{
	var_3_bool = 0; var_4_bool = 0;
	IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
	return 2;
}


func_150()
{
	var_12_object = Obj(); var_13_object = Obj();
	CreateDiaryEntry(var_13_object, (int)174, (int)2, (int)515426);
	var_17_bool = 0; var_18_object = Obj(); var_19_int = 0;
	var_13_object = var_18_object;
	func_176(var_17_bool, var_18_object, (int)170);
	return 2;
}
EMIT "Stack[-1] = 0";


func_119(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj();
	self(var_15_object);
	var_15_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_125(var_35_bool, var_36_string, var_37_string)
{
	var_38_object = Obj(); var_39_object = Obj();
	FindActor(var_39_object, var_36_string);
	var_40_bool = var_39_object == 0; //@ne
	if(var_40_bool != 0) {
		var_35_bool = 0;
		return 2;
	}
	Trigger(var_39_object, var_37_string);
	var_35_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


