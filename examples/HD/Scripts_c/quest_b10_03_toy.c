// @IMPORTS: FindGeometry/2,Hold/0,GetProperty/2,CreateInvItem/1,GetScene/1,RemoveActor/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateDiaryEntry/4,GetDiaryRoot/1,Trace/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:object|A:Enable|W:Item|A:SetItemName|A:RemoveStationaryActor|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:add|A:GetItemID|W:Category|A:AddItem|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0xc vars=object

task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_object = Obj(); var_3_object = Obj(); var_4_string = ""; var_5_object = Obj(); var_6_object = Obj();
	var_7_bool = 0; var_8_object = Obj();
	var_0_object = var_8_object;
	func_105(var_7_bool, var_8_object);
	var_41_bool = var_7_bool == 0; //@nz
	if(var_41_bool != 0) {
		return 6;
	}
	GetProperty("Item", var_4_string);
	CreateInvItem(var_5_object);
	@@var_5_object:SetItemName(var_4_string);
	var_43_bool = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0;
	var_0_object = var_44_object;
	var_5_object = var_45_object;
	func_147(var_43_bool, var_44_object, var_45_object, (int)1);
	if(var_43_bool != 0) {
		GetScene(var_6_object);
		var_60_object = Obj();
		func_129(var_60_object);
		@@var_6_object:RemoveStationaryActor(var_60_object);
		func_164();
		var_86_object = Obj();
		func_129(var_86_object);
		RemoveActor(var_86_object);
		var_6_object = 0;
	}
	return 6;
}
EMIT "Stack[-2] = 0";


main()
{
	var_0_object = Obj(); var_1_object = Obj();
	FindGeometry("object", var_1_object);
	@@var_1_object:Enable((bool)1);
	
Label_7:
	Hold();
	goto Label_7;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_64(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_bool = 0;
	@@var_23_object:IsDead(var_25_bool);
	var_25_bool = var_22_bool;
	return 2;
}


func_129(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj();
	self(var_62_object);
	var_62_object = var_60_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_164()
{
	var_63_object = Obj(); var_64_object = Obj();
	CreateDiaryEntry(var_64_object, (int)597, (int)2, (int)531148);
	var_68_bool = 0; var_69_object = Obj(); var_70_int = 0;
	var_64_object = var_69_object;
	func_190(var_68_bool, var_69_object, (int)594);
	return 2;
}
EMIT "Stack[-1] = 0";


func_69(var_11_bool, var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj();
	var_17_bool = var_12_object == 0; //@ne
	if(var_17_bool != 0) {
		var_11_bool = 0;
		return 4;
	}
	var_18_bool = 0;
	var_18_bool = 0;
	var_21_bool = IsFuncExist(var_12_object, "IsDead", (int)1);
	if(var_21_bool != 0) {
		var_22_bool = 0; var_23_object = Obj();
		var_12_object = var_23_object;
		func_64(var_22_bool, var_23_object);
		if(var_22_bool != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		var_11_bool = 0;
		return 4;
	}
	GetScene(var_15_object);
	var_26_bool = var_15_object == 0; //@ne
	if(var_26_bool != 0) {
		var_11_bool = 0;
		return 4;
	}
	@@var_12_object:GetScene(var_16_object);
	var_27_bool = var_15_object != var_16_object;
	if(var_27_bool != 0) {
		var_11_bool = 0;
		return 4;
	}
	var_11_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_135(var_55_int, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateIntVector(var_58_object);
	@@var_58_object:add(var_55_int);
	@@var_58_object:add(var_56_int);
	SendWorldWndMessage((int)3, var_58_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_105(var_7_bool, var_8_object)
{
	var_9_int = 0; var_10_int = 0;
	var_11_bool = 0; var_12_object = Obj();
	var_8_object = var_12_object;
	func_69(var_11_bool, var_12_object);
	var_28_bool = var_11_bool == 0; //@nz
	if(var_28_bool != 0) {
		var_7_bool = 0;
		return 2;
	}
	var_29_bool = 0; var_30_object = Obj(); var_31_string = "";
	var_8_object = var_30_object;
	func_52(var_29_bool, var_30_object, "noaccess");
	var_38_bool = var_29_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_7_bool = 1;
		return 2;
	}
	@@var_8_object:GetProperty("noaccess", var_10_int);
	var_7_bool = var_10_int == (int)0;
	return 2;
}


func_177(var_77_object)
{
	var_78_object = Obj(); var_79_object = Obj();
	GetDiaryRoot(var_79_object);
	var_80_bool = var_79_object == 0; //@nz
	if(var_80_bool != 0) {
		Trace("Can't retrieve diary root");
		var_77_object = 0;
		return 2;
	}
	var_79_object = var_77_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_147(var_43_bool, var_44_object, var_45_object, var_46_int)
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
		func_135(var_55_int, var_56_int);
	}
	var_52_bool = var_43_bool;
	return 6;
}


func_52(var_29_bool, var_30_object, var_31_string)
{
	var_32_bool = 0; var_33_bool = 0;
	var_36_bool = IsFuncExist(var_30_object, "HasProperty", (int)2);
	var_37_bool = var_36_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	@@var_30_object:HasProperty(var_31_string, var_33_bool);
	var_33_bool = var_29_bool;
	return 2;
}


func_190(var_68_bool, var_69_object, var_70_int)
{
	var_71_object = Obj(); var_72_object = Obj(); var_73_int = 0; var_74_object = Obj(); var_75_object = Obj(); var_76_int = 0;
	func_177(Obj());
	var_77_object = var_74_object;
	@@var_74_object:Find(var_70_int, var_75_object);
	var_82_bool = var_75_object == 0; //@nz
	if(var_82_bool != 0) {
		var_84_int = "Can't find diary parent with id: " + var_70_int;
		Trace(var_84_int);
		var_68_bool = 0;
		return 6;
	}
	@@var_75_object:AddChild(var_69_object);
	SendWorldWndMessage((int)7);
	@@var_69_object:GetCategory(var_76_int);
	SetDiarySection(var_76_int);
	var_68_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


