// @IMPORTS: SetVisibility/1,Hold/0,PlaySound/1,Trace/1,GetActorName/1,GetSceneByName/2,PlaySharedSound/1,Teleport/4,_strchr/3,_strsub/3,_strsub/4,GetProperty/2,SetProperty/2,GetInvItemByName/2
// @STRINGS: W:door_closed|W:Door is locked|W:@|W:Wrong door name|W:pt_|W:Destination scene '|W:' not found|A:GetLocator|W:door_open|W:Locator |W: not found in destination scene |W:uni_key|A:GetSubContainerCount|A:GetItemCount|A:GetItem|A:GetItemID|W:key_scene_name|A:HasProperty|A:GetProperty|A:RemoveItem
// @RUN_OP: 0x1a
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_0: op=0x0 vars=object
// @PE: 0x0,0x7f

task_0_event_0(var_0_object)
{
	var_1_bool = 0;
	func_120(var_1_bool);
	if(var_1_bool != 0) {
		var_6_bool = 0; var_7_object = Obj(); var_8_string = ""; var_9_bool = 0;
		var_0_object = var_7_object;
		func_132("");
		var_10_string = var_8_string;
		func_157(var_7_object, var_8_string, (bool)1);
		if(var_6_bool != 0) {
			var_60_bool = 0;
			func_127((bool)0);
		} else {
			return 0;
		}
	}
	var_62_object = Obj();
	var_0_object = var_62_object;
	func_33(var_62_object);
	return 0;
	
}


main()
{
	SetVisibility((bool)1);
	
Label_29:
	Hold();
	goto Label_29;
}
EMIT "Return(); Pop(0)";


func_33(var_62_object)
{
	var_63_string = ""; var_64_int = 0; var_65_string = ""; var_66_string = ""; var_67_object = Obj(); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_string = ""; var_72_int = 0; var_73_string = ""; var_74_string = ""; var_75_object = Obj(); var_76_bool = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0);
	var_79_bool = 0;
	func_120(var_79_bool);
	if(var_79_bool != 0) {
		PlaySound("door_closed");
		Trace("Door is locked");
		return 16;
	}
	GetActorName(var_71_string);
	var_82_int = 0; var_83_string = ""; var_84_string = "";
	var_71_string = var_83_string;
	func_105(var_82_int, var_83_string, "@");
	var_82_int = var_72_int;
	var_86_bool = var_72_int == (int)-1;
	if(var_86_bool != 0) {
		Trace("Wrong door name");
		return 16;
	}
	var_88_string = ""; var_89_string = ""; var_90_int = 0; var_91_int = 0;
	var_71_string = var_89_string;
	var_72_int = var_91_int;
	func_115(var_88_string, var_89_string, (int)0, var_91_int);
	var_88_string = var_73_string;
	var_93_string = ""; var_94_string = ""; var_95_int = 0;
	var_71_string = var_94_string;
	var_95_int = var_72_int + (int)1;
	func_110(var_93_string, var_94_string, var_95_int);
	var_74_string = "pt_" + var_93_string;
	GetSceneByName(var_75_object, var_73_string);
	var_99_bool = var_75_object == 0; //@ne
	if(var_99_bool != 0) {
		var_101_int = "Destination scene '" + var_73_string;
		var_103_int = var_101_int + "' not found";
		Trace(var_103_int);
		return 16;
	}
	@@var_75_object:GetLocator(var_74_string, var_76_bool, var_77_cvector, var_78_cvector);
	var_104_bool = var_76_bool;
	if(var_104_bool != 0) {
		PlaySharedSound("door_open");
		Teleport(var_62_object, var_75_object, var_77_cvector, var_78_cvector);
	} else {
		var_107_int = "Locator " + var_74_string;
		var_109_int = var_107_int + " not found in destination scene ";
		var_110_int = var_109_int + var_73_string;
		Trace(var_110_int);
	}
	return 16;
	
}
EMIT "Stack[-4] = 0";


func_132(var_10_string)
{
	var_11_string = ""; var_12_int = 0; var_13_string = ""; var_14_int = 0;
	GetActorName(var_13_string);
	var_15_int = 0; var_16_string = ""; var_17_string = "";
	var_13_string = var_16_string;
	func_105(var_15_int, var_16_string, "@");
	var_15_int = var_14_int;
	var_21_bool = var_14_int == (int)-1;
	if(var_21_bool != 0) {
		Trace("Wrong door name");
		var_10_string = "";
		return 4;
	}
	var_23_string = ""; var_24_string = ""; var_25_int = 0; var_26_int = 0;
	var_13_string = var_24_string;
	var_14_int = var_26_int;
	func_115(var_23_string, var_24_string, (int)0, var_26_int);
	var_23_string = var_10_string;
	return 4;
}


func_105(var_15_int, var_16_string, var_17_string)
{
	var_18_int = 0; var_19_int = 0;
	_strchr(var_19_int, var_16_string, var_17_string);
	var_19_int = var_15_int;
	return 2;
}


func_110(var_93_string, var_94_string, var_95_int)
{
	var_97_string = ""; var_98_string = "";
	_strsub(var_98_string, var_94_string, var_95_int);
	var_98_string = var_93_string;
	return 2;
}


func_115(var_23_string, var_24_string, var_25_int, var_26_int)
{
	var_27_string = ""; var_28_string = "";
	_strsub(var_28_string, var_24_string, var_25_int, var_26_int);
	var_28_string = var_23_string;
	return 2;
}


func_120(var_1_bool)
{
	var_2_int = 0; var_3_int = 0;
	GetProperty("locked", var_3_int);
	var_1_bool = var_3_int != (int)0;
	return 2;
}


func_157(var_6_bool, var_7_object, var_8_string)
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_string = ""; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_object = Obj(); var_44_int = 0; var_45_bool = 0; var_46_string = "";
	GetInvItemByName(var_38_int, "uni_key");
	@@var_7_object:GetSubContainerCount(var_39_int);
	var_40_int = 0;
	
Label_164:
	var_48_bool = var_40_int < var_39_int;
	if(var_48_bool != 0) {
		@@var_7_object:GetItemCount(var_41_int, var_40_int);
		var_42_int = 0;

	Label_169:
		var_49_bool = var_42_int < var_41_int;
		if(var_49_bool != 0) {
			@@var_7_object:GetItem(var_43_object, var_42_int, var_40_int);
			@@var_43_object:GetItemID(var_44_int);
			var_50_bool = var_44_int == var_38_int;
			if(var_50_bool != 0) {
				@@var_43_object:HasProperty(var_45_bool, "key_scene_name");
				var_52_bool = var_45_bool;
				if(var_52_bool != 0) {
					@@var_43_object:GetProperty(var_46_string, "key_scene_name");
					var_55_int = var_8_string + " ";
					var_56_int = var_55_int + var_46_string;
					Trace(var_56_int);
					var_57_bool = var_46_string == var_8_string;
					if(var_57_bool != 0) {
						@@var_7_object:RemoveItem(var_42_int, var_40_int);
						var_6_bool = 1;
						return 18;
					}
				}
			}
			var_43_object = 0;
			var_42_int = var_42_int + (int)1;
			goto Label_169;
		}
		var_40_int = var_40_int + (int)1;
		goto Label_164;
	}
	var_6_bool = 0;
	return 18;
}


func_127(var_60_bool)
{
	SetProperty("locked", var_60_bool);
	return 0;
}


