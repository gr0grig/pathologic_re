// @IMPORTS: SetVisibility/1,Hold/0,PlaySound/1,Trace/1,GetActorName/1,GetSceneByName/2,PlaySharedSound/1,Teleport/4,_strchr/3,_strsub/3,_strsub/4,GetProperty/2,SetProperty/2,GetInvItemByName/2
// @STRINGS: W:burah_father_key|W:door_closed|W:Door is locked|W:@|W:Wrong door name|W:pt_|W:Destination scene '|W:' not found|A:GetLocator|W:door_open|W:Locator |W: not found in destination scene |A:GetSubContainerCount|A:GetItemCount|A:GetItem|A:GetItemID|A:RemoveItem
// @RUN_OP: 0x15
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x0 vars=object
// @PE: 0x0,0x7a

task_0_event_0(var_0_object)
{
	var_1_bool = 0;
	func_115(var_1_bool);
	if(var_1_bool != 0) {
		var_6_bool = 0; var_7_object = Obj(); var_8_string = ""; var_9_bool = 0;
		var_0_object = var_7_object;
		func_127(var_6_bool, var_7_object, "burah_father_key", (bool)1);
		if(var_6_bool != 0) {
			var_31_bool = 0;
			func_122((bool)0);
		}
	}
	var_33_object = Obj();
	var_0_object = var_33_object;
	func_28(var_33_object);
	return 0;
}


main()
{
	SetVisibility((bool)1);
	
Label_24:
	Hold();
	goto Label_24;
}
EMIT "Return(); Pop(0)";


func_100(var_53_int, var_54_string, var_55_string)
{
	var_56_int = 0; var_57_int = 0;
	_strchr(var_57_int, var_54_string, var_55_string);
	var_57_int = var_53_int;
	return 2;
}


func_105(var_68_string, var_69_string, var_70_int)
{
	var_72_string = ""; var_73_string = "";
	_strsub(var_73_string, var_69_string, var_70_int);
	var_73_string = var_68_string;
	return 2;
}


func_110(var_61_string, var_62_string, var_63_int, var_64_int)
{
	var_65_string = ""; var_66_string = "";
	_strsub(var_66_string, var_62_string, var_63_int, var_64_int);
	var_66_string = var_61_string;
	return 2;
}


func_115(var_1_bool)
{
	var_2_int = 0; var_3_int = 0;
	GetProperty("locked", var_3_int);
	var_1_bool = var_3_int != (int)0;
	return 2;
}


func_122(var_31_bool)
{
	SetProperty("locked", var_31_bool);
	return 0;
}


func_28(var_33_object)
{
	var_34_string = ""; var_35_int = 0; var_36_string = ""; var_37_string = ""; var_38_object = Obj(); var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_int = 0; var_44_string = ""; var_45_string = ""; var_46_object = Obj(); var_47_bool = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	var_50_bool = 0;
	func_115(var_50_bool);
	if(var_50_bool != 0) {
		PlaySound("door_closed");
		Trace("Door is locked");
		return 16;
	}
	GetActorName(var_42_string);
	var_53_int = 0; var_54_string = ""; var_55_string = "";
	var_42_string = var_54_string;
	func_100(var_53_int, var_54_string, "@");
	var_53_int = var_43_int;
	var_59_bool = var_43_int == (int)-1;
	if(var_59_bool != 0) {
		Trace("Wrong door name");
		return 16;
	}
	var_61_string = ""; var_62_string = ""; var_63_int = 0; var_64_int = 0;
	var_42_string = var_62_string;
	var_43_int = var_64_int;
	func_110(var_61_string, var_62_string, (int)0, var_64_int);
	var_61_string = var_44_string;
	var_68_string = ""; var_69_string = ""; var_70_int = 0;
	var_42_string = var_69_string;
	var_70_int = var_43_int + (int)1;
	func_105(var_68_string, var_69_string, var_70_int);
	var_45_string = "pt_" + var_68_string;
	GetSceneByName(var_46_object, var_44_string);
	var_74_bool = var_46_object == 0; //@ne
	if(var_74_bool != 0) {
		var_76_int = "Destination scene '" + var_44_string;
		var_78_int = var_76_int + "' not found";
		Trace(var_78_int);
		return 16;
	}
	@@var_46_object:GetLocator(var_45_string, var_47_bool, var_48_cvector, var_49_cvector);
	var_79_bool = var_47_bool;
	if(var_79_bool != 0) {
		PlaySharedSound("door_open");
		Teleport(var_33_object, var_46_object, var_48_cvector, var_49_cvector);
	} else {
		var_82_int = "Locator " + var_45_string;
		var_84_int = var_82_int + " not found in destination scene ";
		var_85_int = var_84_int + var_44_string;
		Trace(var_85_int);
	}
	return 16;
	
}
EMIT "Stack[-4] = 0";


func_127(var_6_bool, var_7_object, var_8_string, var_9_bool)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_object = Obj(); var_23_int = 0;
	GetInvItemByName(var_17_int, var_8_string);
	@@var_7_object:GetSubContainerCount(var_18_int);
	var_19_int = 0;
	
Label_133:
	var_24_bool = var_19_int < var_18_int;
	if(var_24_bool != 0) {
		@@var_7_object:GetItemCount(var_20_int, var_19_int);
		var_21_int = 0;

	Label_138:
		var_25_bool = var_21_int < var_20_int;
		if(var_25_bool != 0) {
			@@var_7_object:GetItem(var_22_object, var_21_int, var_19_int);
			@@var_22_object:GetItemID(var_23_int);
			var_26_bool = var_23_int == var_17_int;
			if(var_26_bool != 0) {
				var_27_bool = var_9_bool;
				if(var_27_bool != 0) {
					@@var_7_object:RemoveItem(var_21_int, (int)1, var_19_int);
				}
				var_6_bool = 1;
				var_22_object = 0;
				var_21_int = var_21_int + (int)1;
				goto Label_138;
			}
			var_19_int = var_19_int + (int)1;
			goto Label_133;
		}
		return 14;
	}
	var_6_bool = 0;
	return 14;
}


