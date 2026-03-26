// @IMPORTS: FindGeometry/2,Hold/0,GetProperty/2,CreateInvItem/1,GetScene/1,RemoveActor/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3
// @STRINGS: W:object|A:Enable|W:Item|A:SetItemName|A:RemoveStationaryActor|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|A:add|A:GetItemID|W:Category|A:AddItem
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0xc vars=object

task_0_event_0(var_0_object)
{
	var_1_string = ""; var_2_object = Obj(); var_3_object = Obj(); var_4_string = ""; var_5_object = Obj(); var_6_object = Obj();
	var_7_bool = 0; var_8_object = Obj();
	var_0_object = var_8_object;
	func_102(var_7_bool, var_8_object);
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
	func_144(var_43_bool, var_44_object, var_45_object, (int)1);
	if(var_43_bool != 0) {
		GetScene(var_6_object);
		var_60_object = Obj();
		func_126(var_60_object);
		@@var_6_object:RemoveStationaryActor(var_60_object);
		var_63_object = Obj();
		func_126(var_63_object);
		RemoveActor(var_63_object);
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


func_66(var_11_bool, var_12_object)
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
		func_61(var_22_bool, var_23_object);
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


func_132(var_55_int, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj();
	CreateIntVector(var_58_object);
	@@var_58_object:add(var_55_int);
	@@var_58_object:add(var_56_int);
	SendWorldWndMessage((int)3, var_58_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_102(var_7_bool, var_8_object)
{
	var_9_int = 0; var_10_int = 0;
	var_11_bool = 0; var_12_object = Obj();
	var_8_object = var_12_object;
	func_66(var_11_bool, var_12_object);
	var_28_bool = var_11_bool == 0; //@nz
	if(var_28_bool != 0) {
		var_7_bool = 0;
		return 2;
	}
	var_29_bool = 0; var_30_object = Obj(); var_31_string = "";
	var_8_object = var_30_object;
	func_49(var_29_bool, var_30_object, "noaccess");
	var_38_bool = var_29_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_7_bool = 1;
		return 2;
	}
	@@var_8_object:GetProperty("noaccess", var_10_int);
	var_7_bool = var_10_int == (int)0;
	return 2;
}


func_144(var_43_bool, var_44_object, var_45_object, var_46_int)
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
		func_132(var_55_int, var_56_int);
	}
	var_52_bool = var_43_bool;
	return 6;
}


func_49(var_29_bool, var_30_object, var_31_string)
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


func_61(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_bool = 0;
	@@var_23_object:IsDead(var_25_bool);
	var_25_bool = var_22_bool;
	return 2;
}


func_126(var_60_object)
{
	var_61_object = Obj(); var_62_object = Obj();
	self(var_62_object);
	var_62_object = var_60_object;
	return 2;
}
EMIT "Stack[-1] = 0";


