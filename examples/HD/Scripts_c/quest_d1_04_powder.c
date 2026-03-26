// @IMPORTS: RemoveActor/1,IsLoaded/1,FindGeometry/2,Hold/0,GetItem/2,GetItemAmount/2,GetScene/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateDiaryEntry/4,GetDiaryRoot/1,Trace/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:cleanup|W:object|A:Enable|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:add|A:GetItemID|W:Category|A:AddItem|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x9
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_26: op=0x16 vars=string
// @EVENT_6: op=0x25 vars=
// @EVENT_0: op=0x35 vars=object
// @PE: 0x0,0x25,0x50

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
			func_164(var_7_object);
			RemoveActor(var_7_object);
		}
	}
	return 2;
}


task_0_event_6(var_0_bool)
{
	func_14();
	return 0;
}


task_0_event_0(var_0_bool, var_1_object)
{
	var_2_object = Obj(); var_3_int = 0; var_4_object = Obj(); var_5_int = 0;
	var_6_bool = 0; var_7_object = Obj();
	var_1_object = var_7_object;
	func_140(var_6_bool, var_7_object);
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
	func_182(var_43_bool, var_44_object, var_45_object, var_46_int);
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
	func_41();
	return 0;
}


func_0(var_60_object)
{
	func_199();
	var_60_object = Obj();
	func_80();
	return 0;
}


func_225(var_66_bool, var_67_object, var_68_int)
{
	var_69_object = Obj(); var_70_object = Obj(); var_71_int = 0; var_72_object = Obj(); var_73_object = Obj(); var_74_int = 0;
	func_212(Obj());
	var_75_object = var_72_object;
	@@var_72_object:Find(var_68_int, var_73_object);
	var_80_bool = var_73_object == 0; //@nz
	if(var_80_bool != 0) {
		var_82_int = "Can't find diary parent with id: " + var_68_int;
		Trace(var_82_int);
		var_66_bool = 0;
		return 6;
	}
	@@var_73_object:AddChild(var_67_object);
	SendWorldWndMessage((int)7);
	@@var_67_object:GetCategory(var_74_int);
	SetDiarySection(var_74_int);
	var_66_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_99(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	@@var_22_object:IsDead(var_24_bool);
	var_24_bool = var_21_bool;
	return 2;
}


func_164(var_85_object)
{
	var_86_object = Obj(); var_87_object = Obj();
	self(var_87_object);
	var_87_object = var_85_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_199()
{
	var_61_object = Obj(); var_62_object = Obj();
	CreateDiaryEntry(var_62_object, (int)45, (int)2, (int)512127);
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0;
	var_62_object = var_67_object;
	func_225(var_66_bool, var_67_object, (int)43);
	return 2;
}
EMIT "Stack[-1] = 0";


func_104(var_10_bool, var_11_object)
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
		func_99(var_21_bool, var_22_object);
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


func_41()
{
	var_1_object = Obj(); var_2_object = Obj();
	FindGeometry("object", var_2_object);
	@@var_2_object:Enable((bool)1);
	
Label_48:
	Hold();
	goto Label_48;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_170(var_55_int, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateIntVector(var_58_object);
	@@var_58_object:add(var_55_int);
	@@var_58_object:add(var_56_int);
	SendWorldWndMessage((int)3, var_58_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_140(var_6_bool, var_7_object)
{
	var_8_int = 0; var_9_int = 0;
	var_10_bool = 0; var_11_object = Obj();
	var_7_object = var_11_object;
	func_104(var_10_bool, var_11_object);
	var_27_bool = var_10_bool == 0; //@nz
	if(var_27_bool != 0) {
		var_6_bool = 0;
		return 2;
	}
	var_28_bool = 0; var_29_object = Obj(); var_30_string = "";
	var_7_object = var_29_object;
	func_87(var_28_bool, var_29_object, "noaccess");
	var_37_bool = var_28_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_6_bool = 1;
		return 2;
	}
	@@var_7_object:GetProperty("noaccess", var_9_int);
	var_6_bool = var_9_int == (int)0;
	return 2;
}


func_14()
{
	var_1_bool = var_0_bool;
	if(var_1_bool != 0) {
		var_2_object = Obj();
		func_164(var_2_object);
		RemoveActor(var_2_object);
	}
	return 0;
}


func_80()
{
	var_85_object = Obj();
	func_164(var_85_object);
	RemoveActor(var_85_object);
	return 0;
}


func_212(var_75_object)
{
	var_76_object = Obj(); var_77_object = Obj();
	GetDiaryRoot(var_77_object);
	var_78_bool = var_77_object == 0; //@nz
	if(var_78_bool != 0) {
		Trace("Can't retrieve diary root");
		var_75_object = 0;
		return 2;
	}
	var_77_object = var_75_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_182(var_43_bool, var_44_object, var_45_object, var_46_int)
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
		func_170(var_55_int, var_56_int);
	}
	var_52_bool = var_43_bool;
	return 6;
}


func_87(var_28_bool, var_29_object, var_30_string)
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


