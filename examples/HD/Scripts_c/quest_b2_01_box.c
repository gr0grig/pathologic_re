// @IMPORTS: SetVisibility/1,GetProperty/2,SetProperty/2,PlaySound/1,Hold/0,IsOverrideActive/1,Barter/1,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,GetInvItemProperty/3,CreateDiaryEntry/4,GetDiaryRoot/1,Trace/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: W:locked|W:b2q01_key|W:unlock|A:IsOnGround|W:nouse_container|A:add|A:HasItem|W:Category|A:RemoveItemByType|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|A:Remove
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x7 vars=object

task_0_event_0(var_0_object)
{
	var_1_int = 0; var_2_int = 0;
	GetProperty("locked", var_2_int);
	var_4_int = var_2_int;
	if(var_4_int != 0) {
		var_5_bool = 0; var_6_object = Obj(); var_7_string = "";
		var_0_object = var_6_object;
		func_98(var_5_bool, var_6_object, "b2q01_key");
		if(var_5_bool != 0) {
			var_12_bool = 0; var_13_object = Obj(); var_14_string = "";
			var_0_object = var_13_object;
			func_105(var_12_bool, var_13_object, "b2q01_key");
			SetProperty("locked", (int)0);
			PlaySound("unlock");
			func_135();
			func_148();
			func_122();
		} else {
			PlaySound("locked");
			return 2;
		}
	}
	var_70_object = Obj();
	var_0_object = var_70_object;
	func_54(var_70_object);
	return 2;
	
}


main()
{
	SetVisibility((bool)1);
	func_50();
	return 0;
}


func_194(var_54_bool, var_55_int)
{
	var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj();
	func_153(Obj());
	var_60_object = var_58_object;
	@@var_58_object:Find(var_55_int, var_59_object);
	var_61_bool = var_59_object == 0; //@nz
	if(var_61_bool != 0) {
		var_54_bool = 0;
		return 4;
	}
	@@var_59_object:Remove();
	var_54_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_98(var_5_bool, var_6_object, var_7_string)
{
	var_8_int = 0; var_9_bool = 0; var_10_int = 0; var_11_bool = 0;
	GetInvItemByName(var_10_int, var_7_string);
	@@var_6_object:HasItem(var_10_int, var_11_bool);
	var_11_bool = var_5_bool;
	return 4;
}


func_166(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0;
	func_153(Obj());
	var_45_object = var_42_object;
	@@var_42_object:Find(var_38_int, var_43_object);
	var_50_bool = var_43_object == 0; //@nz
	if(var_50_bool != 0) {
		var_52_int = "Can't find diary parent with id: " + var_38_int;
		Trace(var_52_int);
		var_36_bool = 0;
		return 6;
	}
	@@var_43_object:AddChild(var_37_object);
	SendWorldWndMessage((int)7);
	@@var_37_object:GetCategory(var_44_int);
	SetDiarySection(var_44_int);
	var_36_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_135()
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateDiaryEntry(var_32_object, (int)572, (int)1, (int)530605);
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0;
	var_32_object = var_37_object;
	func_166(var_36_bool, var_37_object, (int)245);
	return 2;
}
EMIT "Stack[-1] = 0";


func_105(var_12_bool, var_13_object, var_14_string)
{
	var_15_int = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_bool = 0;
	GetInvItemByName(var_18_int, var_14_string);
	GetInvItemProperty(var_19_int, var_18_int, "Category");
	@@var_13_object:RemoveItemByType(var_20_bool, var_18_int, var_19_int);
	var_22_bool = var_20_bool;
	if(var_22_bool != 0) {
		var_23_int = 0; var_24_int = 0;
		var_18_int = var_23_int;
		func_86(var_23_int, (int)1);
	}
	var_20_bool = var_12_bool;
	return 6;
}


func_80(var_77_bool)
{
	var_78_int = 0; var_79_int = 0;
	GetVariable("nouse_container", var_79_int);
	var_77_bool = !var_79_int;
	return 2;
}


func_50()
{
	
Label_50:
	Hold();
	goto Label_50;
}
EMIT "Return(); Pop(0)";


func_148()
{
	var_54_bool = 0; var_55_int = 0;
	func_194(var_54_bool, (int)562);
	return 0;
}


func_54(var_70_object)
{
	var_71_bool = 0; var_72_bool = 0; var_73_bool = 0; var_74_bool = 0;
	var_75_bool = 0;
	var_75_bool = 1;
	var_76_bool = var_70_object == 0; //@nz
	if(var_76_bool != 1) {
		var_77_bool = 0;
		func_80(var_77_bool);
		var_81_bool = var_77_bool == 0; //@nz
		if(var_81_bool != 1) {
			var_75_bool = 0;
		}
	}
	if(var_75_bool != 0) {
		return 4;
	}
	@@var_70_object:IsOnGround(var_73_bool);
	var_82_bool = var_73_bool;
	if(var_82_bool != 0) {
		EventDisable(0);
		IsOverrideActive(var_74_bool);
		var_83_bool = var_74_bool == 0; //@nz
		if(var_83_bool != 0) {
			Barter(var_70_object);
		}
		EventEnable(0);
	}
	return 4;
}


func_86(var_23_int, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj();
	CreateIntVector(var_26_object);
	@@var_26_object:add(var_23_int);
	@@var_26_object:add(var_24_int);
	SendWorldWndMessage((int)4, var_26_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_153(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj();
	GetDiaryRoot(var_47_object);
	var_48_bool = var_47_object == 0; //@nz
	if(var_48_bool != 0) {
		Trace("Can't retrieve diary root");
		var_45_object = 0;
		return 2;
	}
	var_47_object = var_45_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_122()
{
	var_62_object = Obj(); var_63_object = Obj();
	CreateDiaryEntry(var_63_object, (int)563, (int)0, (int)530577);
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0;
	var_63_object = var_68_object;
	func_166(var_67_bool, var_68_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


