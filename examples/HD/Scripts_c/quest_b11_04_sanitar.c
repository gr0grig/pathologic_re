// @IMPORTS: PlayAnimation/2,WaitForAnimEnd/1,IsPlayerActor/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetAttackDistance/1,GetScene/1,AddActorByType/4,SetTimer/2,GetHeight/1,PlayLoopedGlobalSound/5
// @STRINGS: W:all|W:attack_on|W:cattack|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:add|W:flame|A:Attach|A:SetLength|A:Intersect|A:Next|W:disease|A:GetLength|W:flame_loop|A:FadeIn|A:FadeOut
// @GLOBALS: 0:float:,1:bool:,2:object:,3:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @STANDALONE_EVENT_7: op=0xca vars=int
// @PE: 0x16,0x84,0x8b

event_7(var_0_int)
{
	var_1_object = Obj(); var_2_float = 0; var_3_object = Obj(); var_4_bool = 0; var_5_float = 0; var_6_float = 0; var_7_float = 0; var_8_object = Obj(); var_9_float = 0; var_10_object = Obj(); var_11_bool = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0;
	var_16_bool = var_0_int != (int)70;
	if(var_16_bool != 0) {
		return 14;
	}
	var_17_object = GlobalVars[2];
	var_18_bool = var_17_object == 0; //@ne
	if(var_18_bool != 0) {
		return 14;
	}
	var_19_object = GlobalVars[2];
	@@var_19_object:Intersect(var_8_object, var_9_float);
	var_20_object = GlobalVars[2];
	var_21_bool = GlobalVars[1];
	if(var_21_bool != 0) {
		var_22_float = 0; var_23_float = 0; var_24_float = 0;
		var_9_float = var_23_float;
		var_25_float = GlobalVars[0];
		var_25_float = var_24_float;
		func_132(var_22_float, var_23_float, var_24_float);
	} else {
					var_118_float = 0.05000000074505806;
	}
	@@var_20_object:SetLength(var_22_float);
	
Label_228:
	@@var_8_object:Next(var_11_bool, var_10_object);
	var_27_bool = var_11_bool;
	if(var_27_bool != 0) {
		var_28_bool = 0;
		var_28_bool = 0;
		var_29_bool = var_10_object != 0; //@nn
		if(var_29_bool != 0) {
			var_30_object = Obj();
			func_126(var_30_object);
			var_33_bool = var_10_object != var_30_object;
			if(var_33_bool != 0) {
				var_28_bool = 1;
			}
		}
		if(var_28_bool != 0) {
			var_34_float = 0; var_35_object = Obj(); var_36_float = 0; var_37_int = 0;
			var_10_object = var_35_object;
			func_53(var_34_float, var_35_object, (float)0.10000000149011612, (int)2);
			var_34_float = var_12_float;
			var_103_bool = 0; var_104_object = Obj(); var_105_string = "";
			var_10_object = var_104_object;
			func_41(var_103_bool, var_104_object, "disease");
			if(var_103_bool != 0) {
				@@var_10_object:GetProperty("disease", var_13_float);
				var_108_bool = var_13_float <= (float)0.019999999552965164;
				if(var_108_bool != 0) {
				} else {
					(float)0 = (float)0 - (float)0.019999999552965164;
	}
				return 14;

			}
			@@var_10_object:SetProperty("disease", var_13_float);
		}
		var_110_bool = 0; var_111_object = Obj(); var_112_string = "";
		var_10_object = var_111_object;
		func_41(var_110_bool, var_111_object, "fire");
		if(var_110_bool != 0) {
			@@var_10_object:GetProperty("fire", var_14_float);
			var_116_int = var_14_float + (float)0.10000000149011612;
			@@var_10_object:SetProperty("fire", var_116_int);
		}
	}
	goto Label_228;
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-7] = 0";


main()
{
	var_0_bool = 0; var_1_bool = 0;
	func_167();
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd(var_1_bool);
	var_23_bool = 0;
	func_287((bool)1);
	
Label_14:
	PlayAnimation("all", "cattack");
	WaitForAnimEnd(var_1_bool);
	goto Label_14;
}
EMIT "Return(); Pop(2)";


func_132(var_22_float, var_23_float, var_24_float)
{
	var_26_bool = var_23_float < var_24_float;
	if(var_26_bool != 0) {
		var_23_float = var_22_float;
	} else {
		var_24_float = var_22_float;
	}
	return 0;
	
}


func_36(var_90_bool, var_91_object)
{
	var_92_bool = 0; var_93_bool = 0;
	IsPlayerActor(var_91_object, var_93_bool);
	var_93_bool = var_90_bool;
	return 2;
}


func_167()
{
	var_2_float = 0; var_3_object = Obj(); var_4_object = Obj(); var_5_float = 0; var_6_object = Obj(); var_7_object = Obj();
	GetAttackDistance(var_5_float);
	var_8_float = GlobalVars[0];
	var_8_float = var_5_float / (float)600.0;
	GlobalVars[0] = var_8_float;
	GetScene(var_6_object);
	AddActorByType(var_7_object, "flame", var_6_object, CVector(0.0, 0.0, 0.0));
	var_12_object = Obj();
	func_126(var_12_object);
	@@var_7_object:Attach(var_12_object, "flame");
	var_16_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	@@var_7_object:SetLength((float)0.05000000074505806);
	var_18_object = GlobalVars[2];
	var_7_object = var_18_object;
	GlobalVars[2] = var_18_object;
	SetTimer((int)70, (float)0.10000000149011612);
	return 6;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_41(var_50_bool, var_51_object, var_52_string)
{
	var_53_bool = 0; var_54_bool = 0;
	var_57_bool = IsFuncExist(var_51_object, "HasProperty", (int)2);
	var_58_bool = var_57_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_50_bool = 0;
		return 2;
	}
	@@var_51_object:HasProperty(var_52_string, var_54_bool);
	var_54_bool = var_50_bool;
	return 2;
}


func_139(var_84_float, var_85_float, var_86_float, var_87_float)
{
	var_88_bool = var_85_float < var_86_float;
	if(var_88_bool != 0) {
		var_86_float = var_84_float;
		return 0;
	}
	var_89_bool = var_85_float > var_87_float;
	if(var_89_bool != 0) {
		var_87_float = var_84_float;
		return 0;
	}
	var_85_float = var_84_float;
	return 0;
}


func_53(var_34_float, var_35_object, var_36_float, var_37_int)
{
	var_38_int = 0; var_39_string = ""; var_40_int = 0; var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_int = 0; var_45_string = ""; var_46_int = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0;
	var_50_bool = 0; var_51_object = Obj(); var_52_string = "";
	var_35_object = var_51_object;
	func_41(var_50_bool, var_51_object, "health");
	var_59_bool = var_50_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_34_float = 0.0;
		return 12;
	}
	var_60_bool = 0; var_61_object = Obj(); var_62_string = "";
	var_35_object = var_61_object;
	func_41(var_60_bool, var_61_object, "armor");
	var_63_bool = var_60_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_44_int = 0;
	} else {
			@@var_35_object:GetProperty("armor", var_44_int);
	}
	var_65_string = ""; var_66_int = 0;
	var_37_int = var_66_int;
	func_22(var_65_string, var_66_int);
	var_45_string = "armor_" + var_65_string;
	var_71_bool = 0; var_72_object = Obj(); var_73_string = "";
	var_35_object = var_72_object;
	var_45_string = var_73_string;
	func_41(var_71_bool, var_72_object, var_73_string);
	var_74_bool = var_71_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_46_int = 0;
	} else {
		@@var_35_object:GetProperty(var_45_string, var_46_int);

	}
	var_75_float = 0; var_76_float = 0; var_77_float = 0;
	var_78_int = var_44_int + var_46_int;
	var_76_float = var_78_int / (float)100.0;
	func_132(var_75_float, var_76_float, (float)1);
	var_75_float = var_47_float;
	@@var_35_object:GetProperty("health", var_48_float);
	var_82_int = (int)1 - var_47_float;
	var_49_float = var_36_float * var_82_int;
	var_84_float = 0; var_85_float = 0; var_86_float = 0; var_87_float = 0;
	var_85_float = var_48_float - var_49_float;
	func_139(var_84_float, var_85_float, (float)0, (float)1);
	@@var_35_object:SetProperty("health", var_84_float);
	var_90_bool = 0; var_91_object = Obj();
	var_35_object = var_91_object;
	func_36(var_90_bool, var_91_object);
	if(var_90_bool != 0) {
		var_94_float = 0;
		var_94_float = -var_49_float;
		func_150(var_94_float);
	}
	var_49_float = var_34_float;
	return 12;
	
}


func_22(var_65_string, var_66_int)
{
	var_68_bool = var_66_int == (int)2;
	if(var_68_bool != 0) {
		var_65_string = "fire";
		return 0;
	EMIT "GOTO 0x22";
	}
	var_70_bool = var_66_int == (int)1;
	if(var_70_bool != 0) {
		var_65_string = "bullet";
		return 0;
	}
	var_65_string = "phys";
	return 0;
}


func_150(var_94_float)
{
	var_95_object = Obj(); var_96_object = Obj();
	CreateFloatVector(var_96_object);
	@@var_96_object:add(var_94_float);
	var_98_bool = var_94_float < (int)0;
	if(var_98_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_96_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_126(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	self(var_14_object);
	var_14_object = var_12_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_287(var_23_bool)
{
	var_24_float = 0; var_25_float = 0; var_26_object = Obj(); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_object = Obj(); var_32_cvector = CVector(0,0,0); var_33_float = 0;
	var_34_bool = var_23_bool;
	if(var_34_bool != 0) {
		var_35_float = GlobalVars[0];
		var_35_float = var_29_float;
	} else {
				var_29_float = 0.05000000074505806;
	}
	var_36_object = GlobalVars[2];
	@@var_36_object:GetLength(var_30_float);
	var_37_bool = var_29_float < var_30_float;
	if(var_37_bool != 0) {
		var_29_float = var_30_float;
	}
	var_38_object = GlobalVars[2];
	@@var_38_object:SetLength(var_30_float);
	var_39_bool = GlobalVars[1];
	var_40_bool = var_39_bool != var_23_bool;
	if(var_40_bool != 0) {
		var_41_bool = var_23_bool;
		if(var_41_bool != 0) {
			var_42_object = GlobalVars[3];
			var_43_bool = var_42_object == 0; //@ne
			if(var_43_bool != 0) {
				var_32_cvector = CVector(0.0, 0.0, 0.0);
				GetHeight(var_33_float);
				var_44_float = GetByIndex(var_32_cvector, 1);
				var_33_float = var_44_float;
				SetByIndex(var_32_cvector, 1) = var_44_float;
				PlayLoopedGlobalSound(var_31_object, "flame_loop", var_32_cvector, (int)0, (int)200);
				var_48_object = GlobalVars[3];
				var_31_object = var_48_object;
				GlobalVars[3] = var_48_object;
				var_31_object = 0;
			}
			var_49_object = GlobalVars[3];
			@@var_49_object:FadeIn((int)2);
		} else {
			var_52_object = GlobalVars[3];
			var_53_bool = var_52_object != 0; //@nn
			if(var_53_bool == 0) goto Label_339;
			var_54_object = GlobalVars[3];
			@@var_54_object:FadeOut((int)2);

		}
	Label_339:
		var_51_bool = GlobalVars[1];
		var_23_bool = var_51_bool;
		GlobalVars[1] = var_51_bool;
	}
	return 10;
	
}


