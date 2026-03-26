// @IMPORTS: RemoveActor/1,IsLoaded/1,FindGeometry/2,Hold/0,GetItem/2,GetItemAmount/2,GetScene/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,FindActor/2,Trigger/2
// @STRINGS: W:quest_b6_03|W:diary_taken|W:cleanup|W:object|A:Enable|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:add|A:GetItemID|W:Category|A:AddItem
// @RUN_OP: 0xb
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_26: op=0x18 vars=string
// @EVENT_6: op=0x27 vars=
// @EVENT_0: op=0x37 vars=object
// @PE: 0x0,0x27,0x52

task_0_event_26(var_0_bool, var_1_string)
{
	var_2_bool = 0; var_3_bool = 0;
	var_5_bool = var_1_string == "cleanup";
	if(var_5_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_3_bool);
		var_6_bool = var_3_bool == 0; //@nz
		if(var_6_bool != 0) {
			var_7_object = Obj();
			func_166(var_7_object);
			RemoveActor(var_7_object);
		}
	}
	return 2;
}


task_0_event_6(var_0_bool)
{
	func_16();
	return 0;
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0;
	var_6_bool = 0; var_7_object = Obj();
	var_1_object = var_7_object;
	func_142(var_6_bool, var_7_object);
	var_40_bool = var_6_bool == 0; //@nz
	if(var_40_bool != 0) {
		return 4;
	}
	GetItem(var_4_object, (int)0);
	GetItemAmount(var_5_int, (int)0);
	var_43_bool = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0;
	var_1_object = var_44_object;
	var_4_object = var_45_object;
	var_5_int = var_46_int;
	func_184(var_43_bool, var_44_object, var_45_object, var_46_int);
	if(var_43_bool != 0) {
		var_60_object = Obj();
		var_1_object = var_60_object;
		func_0(var_60_object);
	}
	return 4;
}
EMIT "Stack[-2] = 0";


main(var_0_bool)
{
	var_0_bool = false;
	func_43();
	return 0;
}


func_0(var_60_object)
{
	var_61_bool = 0; var_62_string = ""; var_63_string = "";
	func_201(var_61_bool, "quest_b6_03", "diary_taken");
	var_60_object = Obj();
	func_82();
	return 0;
}


func_101(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	@@var_22_object:IsDead(var_24_bool);
	var_24_bool = var_21_bool;
	return 2;
}


func_166(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj();
	self(var_70_object);
	var_70_object = var_68_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_201(var_61_bool, var_62_string, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj();
	FindActor(var_65_object, var_62_string);
	var_66_bool = var_65_object == 0; //@ne
	if(var_66_bool != 0) {
		var_61_bool = 0;
		return 2;
	}
	Trigger(var_65_object, var_63_string);
	var_61_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_106(var_10_bool, var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj();
	var_16_bool = var_11_object == 0; //@ne
	if(var_16_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	var_17_bool = 0;
	var_17_bool = 0;
	var_20_bool = IsFuncExist(var_11_object, "IsDead", (int)1);
	if(var_20_bool != 0) {
		var_21_bool = 0; var_22_object = Obj();
		var_11_object = var_22_object;
		func_101(var_21_bool, var_22_object);
		if(var_21_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	GetScene(var_14_object);
	var_25_bool = var_14_object == 0; //@ne
	if(var_25_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	@@var_11_object:GetScene(var_15_object);
	var_26_bool = var_14_object != var_15_object;
	if(var_26_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	var_10_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_43()
{
	var_1_object = Obj(); var_2_object = Obj();
	FindGeometry("object", var_2_object);
	@@var_2_object:Enable((bool)1);
	
Label_50:
	Hold();
	goto Label_50;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_172(var_55_int, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateIntVector(var_58_object);
	@@var_58_object:add(var_55_int);
	@@var_58_object:add(var_56_int);
	SendWorldWndMessage((int)3, var_58_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_142(var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0;
	var_10_bool = 0; var_11_object = Obj();
	var_7_object = var_11_object;
	func_106(var_10_bool, var_11_object);
	var_27_bool = var_10_bool == 0; //@nz
	if(var_27_bool != 0) {
		var_6_bool = 0;
		return 2;
	}
	var_28_bool = 0; var_29_object = Obj(); var_30_string = "";
	var_7_object = var_29_object;
	func_89(var_28_bool, var_29_object, "noaccess");
	var_37_bool = var_28_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_6_bool = 1;
		return 2;
	}
	@@var_7_object:GetProperty("noaccess", var_9_int);
	var_6_bool = var_9_int == (int)0;
	return 2;
}


func_16()
{
	var_1_bool = var_0_bool;
	if(var_1_bool != 0) {
		var_2_object = Obj();
		func_166(var_2_object);
		RemoveActor(var_2_object);
	}
	return 0;
}


func_82()
{
	var_68_object = Obj();
	func_166(var_68_object);
	RemoveActor(var_68_object);
	return 0;
}


func_184(var_43_bool, var_44_object, var_45_object, var_46_int)
{
	var_47_int = 0; var_48_int = 0; var_49_bool = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0;
	@@var_45_object:GetItemID(var_50_int);
	GetInvItemProperty(var_51_int, var_50_int, "Category");
	@@var_44_object:AddItem(var_52_bool, var_45_object, var_51_int, var_46_int);
	var_54_bool = var_52_bool;
	if(var_54_bool != 0) {
		var_55_int = 0; var_56_int = 0;
		var_50_int = var_55_int;
		var_46_int = var_56_int;
		func_172(var_55_int, var_56_int);
	}
	var_52_bool = var_43_bool;
	return 6;
}


func_89(var_28_bool, var_29_object, var_30_string)
{
	var_31_bool = 0; var_32_bool = 0;
	var_35_bool = IsFuncExist(var_29_object, "HasProperty", (int)2);
	var_36_bool = var_35_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_28_bool = 0;
		return 2;
	}
	@@var_29_object:HasProperty(var_30_string, var_32_bool);
	var_32_bool = var_28_bool;
	return 2;
}


