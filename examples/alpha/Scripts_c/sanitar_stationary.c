// @IMPORTS: SetTimer/2,GetDirection/1,Hold/0,Rotate/3,ResetAAS/0,StopGroup0/0,Face/1,SetAttackState/1,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,KillTimer/1,RemoveActor/1,SetRTEnvelope/2,IsOverrideActive/1,WorkWithCorpse/1,GetPosition/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,self/1,CreateObjectSet/1,Trace/1,irand/2,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,GetAttackDistance/1,AddActorByType/4,GetHeight/1,PlayLoopedGlobalSound/5,IsPlayerActor/2,GetProperty/2,SignalDeath/1,CanSee/2,ReportReputationChange/3
// @STRINGS: W:all|W:attack_on|W:attack_off|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:GenerateMoney: iMin > iMax|W:Money|W:ognemet_ammo|W:rusk|W:flame|A:Attach|A:SetLength|A:GetLength|W:flame_loop|A:FadeIn|A:FadeOut|W:cattack|W:@GetHeight|A:GetHeight|A:in|W:disease|A:add|W:reputation|A:Intersect|A:Next
// @GLOBALS: 0:object:,1:object:,2:float:,3:bool:,4:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_1: op=0x15 vars=object
// @EVENT_3: op=0x21 vars=object
// @EVENT_17: op=0x2d vars=object
// @EVENT_30: op=0x3d vars=object,object
// @EVENT_7: op=0x53 vars=int
// @TASK_1: vars=object,bool params=2
// @EVENT_1: op=0xb3 vars=object
// @EVENT_3: op=0xca vars=object
// @EVENT_17: op=0xe1 vars=object
// @EVENT_30: op=0xfc vars=object,object
// @EVENT_7: op=0x108 vars=int
// @TASK_2: vars= params=1
// @EVENT_0: op=0x13f vars=object
// @EVENT_22: op=0x1b4 vars=object,int,float,float
// @EVENT_16: op=0x1b6 vars=object,string
// @EVENT_41: op=0x1b8 vars=object
// @STANDALONE_EVENT_22: op=0x3cb vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x3d3 vars=object,string
// @STANDALONE_EVENT_41: op=0x3e0 vars=object
// @PE: 0x15,0x21,0x2d,0x3d,0x53,0x5f,0x6a,0xb3,0xca,0xe1,0xfc,0x108,0x114,0x11d,0x130,0x19e,0x1b4,0x1b6,0x1b8,0x1ba,0x2a0,0x2a7,0x3c3,0x3cb,0x3e0,0x463,0x470,0x47e,0x48c,0x4a6

task_0_event_1(var_0_object, var_1_object, var_2_bool)
{
	var_3_bool = 0; var_4_object = Obj();
	var_2_bool = var_4_object;
	func_1136(var_3_bool, var_4_object);
	if(var_3_bool != 0) {
		var_69_object = Obj(); var_70_bool = 0;
		var_2_bool = var_69_object;
		func_95(var_69_object, (bool)0);
	}
	return 0;
}


task_0_event_3(var_0_object, var_1_object, var_2_bool)
{
	var_3_bool = 0; var_4_object = Obj();
	var_2_bool = var_4_object;
	func_1150(var_3_bool, var_4_object);
	if(var_3_bool != 0) {
		var_69_object = Obj(); var_70_bool = 0;
		var_2_bool = var_69_object;
		func_95(var_69_object, (bool)0);
	}
	return 0;
}


task_0_event_17(var_0_object, var_1_object, var_2_bool)
{
	var_3_bool = 0; var_4_object = Obj();
	var_2_bool = var_4_object;
	func_575(var_3_bool, var_4_object);
	if(var_3_bool != 0) {
		var_37_object = Obj();
		var_2_bool = var_37_object;
		func_946(var_37_object);
		var_47_object = Obj(); var_48_bool = 0;
		var_2_bool = var_47_object;
		func_95(var_47_object, (bool)1);
	}
	return 0;
}


task_0_event_30(var_0_object, var_1_object, var_2_object, var_3_bool)
{
	var_4_bool = 0; var_5_object = Obj(); var_6_object = Obj();
	var_2_object = var_5_object;
	var_3_bool = var_6_object;
	func_998(var_4_bool, var_5_object, var_6_object);
	if(var_4_bool != 0) {
		var_37_bool = 0; var_38_object = Obj();
		var_2_object = var_38_object;
		func_575(var_37_bool, var_38_object);
		if(var_37_bool != 0) {
			var_65_object = Obj();
			var_2_object = var_65_object;
			func_946(var_65_object);
			var_75_object = Obj(); var_76_bool = 0;
			var_2_object = var_75_object;
			func_95(var_75_object, (bool)0);
		}
	}
	return 0;
}


task_0_event_7(var_0_int, var_1_object, var_2_bool)
{
	var_4_bool = var_2_bool == (int)75;
	if(var_4_bool != 0) {
		ResetAAS();
	} else {
		var_5_int = 0;
		var_2_bool = var_5_int;
		func_1038(var_5_int);
	}
	return 0;
	
}


task_1_event_1(var_0_object, var_1_bool, var_2_object)
{
	var_3_bool = var_1_bool;
	if(var_3_bool != 0) {
		return 0;
	}
	var_4_bool = 0;
	var_4_bool = 0;
	var_5_bool = 0; var_6_object = Obj();
	var_2_object = var_6_object;
	func_1136(var_5_bool, var_6_object);
	if(var_5_bool != 0) {
		var_71_bool = 0; var_72_object = Obj(); var_73_object = Obj();
		var_72_object = var_0_object;
		var_2_object = var_73_object;
		func_1164(var_71_bool, var_72_object, var_73_object);
		if(var_71_bool != 0) {
			var_4_bool = 1;
		}
	}
	if(var_4_bool != 0) {
		var_0_object = var_2_object;
		Face(var_2_object);
	}
	return 0;
}


task_1_event_3(var_0_object, var_1_bool, var_2_object)
{
	var_3_bool = var_1_bool;
	if(var_3_bool != 0) {
		return 0;
	}
	var_4_bool = 0;
	var_4_bool = 0;
	var_5_bool = 0; var_6_object = Obj();
	var_2_object = var_6_object;
	func_1150(var_5_bool, var_6_object);
	if(var_5_bool != 0) {
		var_71_bool = 0; var_72_object = Obj(); var_73_object = Obj();
		var_72_object = var_0_object;
		var_2_object = var_73_object;
		func_1164(var_71_bool, var_72_object, var_73_object);
		if(var_71_bool != 0) {
			var_4_bool = 1;
		}
	}
	if(var_4_bool != 0) {
		var_0_object = var_2_object;
		Face(var_2_object);
	}
	return 0;
}


	task_1_event_17(var_0_object, var_1_bool, var_2_object, var_3_object, var_37_object)
	{
	var_38_object = Obj();
	var_37_object = var_38_object;
	func_946(var_38_object);
	var_48_bool = 0;
	var_48_bool = 1;
	var_49_bool = 0; var_50_object = Obj();
	var_37_object = var_50_object;
	func_575(var_49_bool, var_50_object);
	var_77_bool = var_49_bool == 0; //@nz
	if(var_77_bool != 1) {
		var_78_bool = 0; var_79_object = Obj();
		var_37_object = var_79_object;
		func_1123(var_78_bool, var_79_object);
		var_85_bool = var_78_bool == 0; //@nz
		if(var_85_bool != 1) {
			var_48_bool = 0;
		}
	}
	if(var_48_bool != 0) {
		return 0;
	}
	var_0_object = var_37_object;
	var_1_bool = true;
	Face(var_37_object);
	return 0;
	}


task_1_event_30(var_0_object, var_1_bool, var_2_object, var_3_object)
{
	var_4_bool = 0; var_5_object = Obj(); var_6_object = Obj();
	var_2_object = var_5_object;
	var_3_object = var_6_object;
	func_998(var_4_bool, var_5_object, var_6_object);
	if(var_4_bool != 0) {
		var_2_object = Obj();
		func_225();
	}
	return 0;
}


task_1_event_7(var_0_object, var_1_bool, var_2_int)
{
	var_4_bool = var_2_int == (int)75;
	if(var_4_bool != 0) {
		ResetAAS();
	} else {
		var_5_int = 0;
		var_2_int = var_5_int;
		func_1038(var_5_int);
	}
	return 0;
	
}


task_2_event_0(var_0_object, var_1_bool, var_2_object)
{
	var_3_bool = 0; var_4_bool = 0;
	IsOverrideActive(var_4_bool);
	var_5_bool = var_4_bool == 0; //@nz
	if(var_5_bool != 0) {
		WorkWithCorpse(var_2_object);
	}
	return 2;
}


task_2_event_22(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float)
{
	return 0;
}


task_2_event_16(var_0_object, var_1_bool, var_2_object, var_3_string)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_bool, var_2_object)
{
	return 0;
}


event_22(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float)
{
	var_6_object = Obj(); var_7_int = 0; var_8_float = 0;
	var_2_object = var_6_object;
	var_3_int = var_7_int;
	var_4_float = var_8_float;
	func_599(var_7_int, var_8_float);
	return 0;
}


event_16(var_0_object, var_1_bool, var_2_object, var_3_string)
{
	var_4_float = 0; var_5_float = 0;
	var_7_bool = var_3_string == "health";
	if(var_7_bool != 0) {
		GetProperty("health", var_5_float);
		var_10_bool = var_5_float <= (int)0;
		if(var_10_bool != 0) {
			SignalDeath(var_2_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_bool, var_2_object)
{
	var_3_object = Obj();
	var_2_object = var_3_object;
	func_963(var_3_object);
	return 0;
}


main(var_0_object, var_1_bool)
{
	var_2_cvector = CVector(0,0,0); var_3_bool = 0; var_4_cvector = CVector(0,0,0); var_5_bool = 0;
	func_768();
	SetTimer((int)75, (float)0.5);
	GetDirection(var_4_cvector);
	
Label_10:
	Hold();
	
Label_12:
	var_31_float = GetByIndex(var_4_cvector, 0);
	var_32_float = GetByIndex(var_4_cvector, 2);
	Rotate(var_31_float, var_32_float, var_5_bool);
	var_33_bool = var_5_bool == 0; //@nz
	if(var_33_bool != 0) {
		goto Label_12;
	}
	goto Label_10;
}
EMIT "Return(); Pop(4)";


func_768()
{
	var_6_float = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_float = 0; var_10_object = Obj(); var_11_object = Obj();
	var_12_object = GlobalVars[4];
	func_690(Obj());
	var_13_object = var_12_object;
	GlobalVars[4] = var_12_object;
	GetAttackDistance(var_9_float);
	var_16_float = GlobalVars[2];
	var_16_float = var_9_float / (float)600.0;
	GlobalVars[2] = var_16_float;
	GetScene(var_10_object);
	AddActorByType(var_11_object, "flame", var_10_object, CVector(0.0, 0.0, 0.0));
	var_20_object = Obj();
	func_666(var_20_object);
	@@var_11_object:Attach(var_20_object, "flame");
	var_24_bool = GlobalVars[3];
	GlobalVars[3] = (bool)0;
	@@var_11_object:SetLength((float)0.05000000074505806);
	var_26_object = GlobalVars[0];
	var_11_object = var_26_object;
	GlobalVars[0] = var_26_object;
	SetTimer((int)70, (float)0.10000000149011612);
	return 6;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_896(var_155_object)
{
	var_156_cvector = CVector(0,0,0); var_157_float = 0; var_158_cvector = CVector(0,0,0); var_159_float = 0;
	@@var_155_object:GetPosition(var_158_cvector);
	var_162_bool = IsFuncExist(var_155_object, "@GetHeight", (int)1);
	if(var_162_bool != 0) {
		@@var_155_object:GetHeight(var_159_float);
		var_163_float = GetByIndex(var_158_cvector, 1);
		var_165_float = var_159_float / (int)2;
		var_163_float = var_163_float + var_165_float;
		SetByIndex(var_158_cvector, 1) = var_163_float;
	}
	var_166_cvector = CVector(0,0,0);
	var_158_cvector = var_166_cvector;
	func_865(var_166_cvector);
	return 4;
}


func_1164(var_71_bool, var_72_object, var_73_object)
{
	var_74_bool = var_73_object == 0; //@ne
	if(var_74_bool != 0) {
		var_71_bool = 0;
		return 0;
	}
	var_71_bool = 1;
	var_75_bool = 0; var_76_object = Obj();
	var_72_object = var_76_object;
	func_1190(var_75_bool, var_76_object);
	var_77_bool = var_75_bool == 0; //@nz
	if(var_77_bool != 1) {
		var_78_float = 0; var_79_object = Obj();
		var_73_object = var_79_object;
		func_450(var_78_float, var_79_object);
		var_80_float = 0; var_81_object = Obj();
		var_72_object = var_81_object;
		func_450(var_80_float, var_81_object);
		var_83_int = var_80_float - (int)25;
		var_84_bool = var_78_float < var_83_int;
		if(var_84_bool != 1) {
			var_71_bool = 0;
		}
	}
	return 0;
}


func_1038(var_5_int)
{
	var_6_object = Obj(); var_7_float = 0; var_8_object = Obj(); var_9_bool = 0; var_10_float = 0; var_11_float = 0; var_12_float = 0; var_13_object = Obj(); var_14_float = 0; var_15_object = Obj(); var_16_bool = 0; var_17_float = 0; var_18_float = 0; var_19_float = 0;
	var_21_bool = var_5_int != (int)70;
	if(var_21_bool != 0) {
		return 14;
	}
	var_22_object = GlobalVars[0];
	var_23_bool = var_22_object == 0; //@ne
	if(var_23_bool != 0) {
		return 14;
	}
	var_24_object = GlobalVars[0];
	@@var_24_object:Intersect(var_13_object, var_14_float);
	var_25_object = GlobalVars[0];
	var_26_bool = GlobalVars[3];
	if(var_26_bool != 0) {
		var_27_float = 0; var_28_float = 0; var_29_float = 0;
		var_14_float = var_28_float;
		var_30_float = GlobalVars[2];
		var_30_float = var_29_float;
		func_672(var_27_float, var_28_float, var_29_float);
	} else {
					var_109_float = 0.05000000074505806;
	}
	@@var_25_object:SetLength(var_27_float);
	
Label_1064:
	@@var_13_object:Next(var_16_bool, var_15_object);
	var_32_bool = var_16_bool;
	if(var_32_bool != 0) {
		var_33_bool = 0;
		var_33_bool = 0;
		var_34_bool = var_15_object != 0; //@nn
		if(var_34_bool != 0) {
			var_35_object = Obj();
			func_666(var_35_object);
			var_38_bool = var_15_object != var_35_object;
			if(var_38_bool != 0) {
				var_33_bool = 1;
			}
		}
		if(var_33_bool != 0) {
			var_39_float = 0; var_40_object = Obj(); var_41_float = 0; var_42_int = 0;
			var_15_object = var_40_object;
			func_470(var_39_float, var_40_object, (float)0.10000000149011612, (int)1);
			var_39_float = var_17_float;
			var_94_bool = 0; var_95_object = Obj(); var_96_string = "";
			var_15_object = var_95_object;
			func_458(var_94_bool, var_95_object, "disease");
			if(var_94_bool != 0) {
				@@var_15_object:GetProperty("disease", var_18_float);
				var_99_bool = var_18_float <= (float)0.019999999552965164;
				if(var_99_bool != 0) {
				} else {
					(float)0 = (float)0 - (float)0.019999999552965164;
	}
				return 14;

			}
			@@var_15_object:SetProperty("disease", var_18_float);
		}
		var_101_bool = 0; var_102_object = Obj(); var_103_string = "";
		var_15_object = var_102_object;
		func_458(var_101_bool, var_102_object, "fire");
		if(var_101_bool != 0) {
			@@var_15_object:GetProperty("fire", var_19_float);
			var_107_int = var_19_float + (float)0.10000000149011612;
			@@var_15_object:SetProperty("fire", var_107_int);
		}
	}
	goto Label_1064;
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-7] = 0";


func_915(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_float = 0; var_13_bool = 0; var_14_float = 0;
	var_15_bool = 0; var_16_object = Obj();
	var_10_object = var_16_object;
	func_575(var_15_bool, var_16_object);
	var_49_bool = var_15_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_9_bool = 0;
		return 4;
	}
	var_50_object = GlobalVars[4];
	@@var_50_object:in(var_13_bool, var_10_object);
	var_51_bool = var_13_bool;
	if(var_51_bool != 0) {
		var_9_bool = 1;
		return 4;
	}
	var_52_bool = 0; var_53_object = Obj(); var_54_string = "";
	var_10_object = var_53_object;
	func_458(var_52_bool, var_53_object, "disease");
	var_55_bool = var_52_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_9_bool = 0;
		return 4;
	}
	@@var_10_object:GetProperty("disease", var_14_float);
	var_9_bool = var_14_float > (int)0;
	return 4;
}


func_276(var_4_object)
{
	KillTimer((int)75);
	var_6_object = Obj();
	var_4_object = var_6_object;
	func_285(var_6_object);
	return 0;
}


func_534(var_64_bool, var_65_object)
{
	var_66_bool = 0; var_67_bool = 0;
	@@var_65_object:IsDead(var_67_bool);
	var_67_bool = var_64_bool;
	return 2;
}


func_666(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	self(var_22_object);
	var_22_object = var_20_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_539(var_53_bool, var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj();
	var_59_bool = var_54_object == 0; //@ne
	if(var_59_bool != 0) {
		var_53_bool = 0;
		return 4;
	}
	var_60_bool = 0;
	var_60_bool = 0;
	var_63_bool = IsFuncExist(var_54_object, "IsDead", (int)1);
	if(var_63_bool != 0) {
		var_64_bool = 0; var_65_object = Obj();
		var_54_object = var_65_object;
		func_534(var_64_bool, var_65_object);
		if(var_64_bool != 0) {
			var_60_bool = 1;
		}
	}
	if(var_60_bool != 0) {
		var_53_bool = 0;
		return 4;
	}
	GetScene(var_57_object);
	var_68_bool = var_57_object == 0; //@ne
	if(var_68_bool != 0) {
		var_53_bool = 0;
		return 4;
	}
	@@var_54_object:GetScene(var_58_object);
	var_69_bool = var_57_object != var_58_object;
	if(var_69_bool != 0) {
		var_53_bool = 0;
		return 4;
	}
	var_53_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_285(var_6_object)
{
	KillTimer((int)70);
	var_8_bool = 0;
	func_809((bool)0);
	var_41_object = GlobalVars[0];
	RemoveActor(var_41_object);
	func_726();
	var_82_object = Obj();
	var_6_object = var_82_object;
	func_304(var_82_object);
	return 0;
}


func_414(var_105_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_105_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_105_string);
	RemoveEnvelope();
	return 0;
}


func_672(var_27_float, var_28_float, var_29_float)
{
	var_31_bool = var_28_float < var_29_float;
	if(var_31_bool != 0) {
		var_28_float = var_27_float;
	} else {
		var_29_float = var_27_float;
	}
	return 0;
	
}


func_1190(var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_915(var_9_bool, var_10_object);
	var_9_bool = var_7_bool;
	return 0;
}


func_679(var_87_float, var_88_float, var_89_float, var_90_float)
{
	var_91_bool = var_88_float < var_89_float;
	if(var_91_bool != 0) {
		var_89_float = var_87_float;
		return 0;
	}
	var_92_bool = var_88_float > var_90_float;
	if(var_92_bool != 0) {
		var_90_float = var_87_float;
		return 0;
	}
	var_88_float = var_87_float;
	return 0;
}


func_809(var_8_bool)
{
	var_9_float = 0; var_10_float = 0; var_11_object = Obj(); var_12_cvector = CVector(0,0,0); var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_object = Obj(); var_17_cvector = CVector(0,0,0); var_18_float = 0;
	var_19_bool = var_8_bool;
	if(var_19_bool != 0) {
		var_20_float = GlobalVars[2];
		var_20_float = var_14_float;
	} else {
				var_14_float = 0.05000000074505806;
	}
	var_21_object = GlobalVars[0];
	@@var_21_object:GetLength(var_15_float);
	var_22_bool = var_14_float < var_15_float;
	if(var_22_bool != 0) {
		var_14_float = var_15_float;
	}
	var_23_object = GlobalVars[0];
	@@var_23_object:SetLength(var_15_float);
	var_24_bool = GlobalVars[3];
	var_25_bool = var_24_bool != var_8_bool;
	if(var_25_bool != 0) {
		var_26_bool = var_8_bool;
		if(var_26_bool != 0) {
			var_27_object = GlobalVars[1];
			var_28_bool = var_27_object == 0; //@ne
			if(var_28_bool != 0) {
				var_17_cvector = CVector(0.0, 0.0, 0.0);
				GetHeight(var_18_float);
				var_29_float = GetByIndex(var_17_cvector, 1);
				var_18_float = var_29_float;
				SetByIndex(var_17_cvector, 1) = var_29_float;
				PlayLoopedGlobalSound(var_16_object, "flame_loop", var_17_cvector, (int)0, (int)200);
				var_33_object = GlobalVars[1];
				var_16_object = var_33_object;
				GlobalVars[1] = var_33_object;
				var_16_object = 0;
			}
			var_34_object = GlobalVars[1];
			@@var_34_object:FadeIn((int)2);
		} else {
			var_37_object = GlobalVars[1];
			var_38_bool = var_37_object != 0; //@nn
			if(var_38_bool == 0) goto Label_861;
			var_39_object = GlobalVars[1];
			@@var_39_object:FadeOut((int)2);

		}
	Label_861:
		var_36_bool = GlobalVars[3];
		var_8_bool = var_36_bool;
		GlobalVars[3] = var_36_bool;
	}
	return 10;
	
}


func_304(var_82_object)
{
	EventDisable(0);
	var_83_object = Obj();
	var_82_object = var_83_object;
	func_327(var_83_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_315:
	Hold();
	goto Label_315;
}
EMIT "Return(); Pop(0)";


func_946(var_38_object)
{
	var_39_bool = 0; var_40_bool = 0; var_41_bool = 0; var_42_bool = 0;
	var_43_bool = var_38_object == 0; //@ne
	if(var_43_bool != 0) {
		return 4;
	}
	var_44_object = GlobalVars[4];
	@@var_44_object:in(var_41_bool, var_38_object);
	var_45_bool = var_41_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_46_object = GlobalVars[4];
		@@var_46_object:add(var_38_object);
	}
	IsPlayerActor(var_38_object, var_42_bool);
	var_47_bool = var_42_bool;
	if(var_47_bool != 0) {
	}
	return 4;
}


func_690(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj();
	CreateObjectSet(var_15_object);
	var_15_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_696(var_47_int, var_48_int)
{
	var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0;
	var_57_bool = var_47_int > var_48_int;
	if(var_57_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_59_bool = var_47_int != var_48_int;
	if(var_59_bool != 0) {
		var_60_int = var_48_int - var_47_int;
		irand(var_54_int, var_60_int);
	} else {
		var_66_bool = var_47_int == (int)0;
		if(var_66_bool == 0) goto Label_714;
		return 8;
	}
Label_714:
	(int)0 = (int)0 + var_47_int;
	var_62_bool = var_53_int == (int)0;
	if(var_62_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_55_int, "Money");
	AddItem(var_56_bool, var_55_int, (int)0, var_53_int);
	return 8;
	
}


func_442(var_70_string, var_71_int)
{
	var_73_bool = var_71_int == (int)1;
	if(var_73_bool != 0) {
		var_70_string = "fire";
		return 0;
	}
	var_70_string = "phys";
	return 0;
}


func_575(var_49_bool, var_50_object)
{
	var_51_int = 0; var_52_int = 0;
	var_53_bool = 0; var_54_object = Obj();
	var_50_object = var_54_object;
	func_539(var_53_bool, var_54_object);
	var_70_bool = var_53_bool == 0; //@nz
	if(var_70_bool != 0) {
		var_49_bool = 0;
		return 2;
	}
	var_71_bool = 0; var_72_object = Obj(); var_73_string = "";
	var_50_object = var_72_object;
	func_458(var_71_bool, var_72_object, "noaccess");
	var_74_bool = var_71_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_49_bool = 1;
		return 2;
	}
	@@var_50_object:GetProperty("noaccess", var_52_int);
	var_49_bool = var_52_int == (int)0;
	return 2;
}


func_450(var_26_float, var_27_object)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	GetPosition(var_31_cvector);
	@@var_27_object:GetPosition(var_32_cvector);
	var_33_cvector = var_32_cvector - var_31_cvector;
	var_26_float = var_33_cvector | var_33_cvector;
	return 6;
}


func_963(var_3_object)
{
	var_4_object = Obj();
	var_3_object = var_4_object;
	TaskCall(2);
	func_276(var_4_object);
	TaskReturn();
	return 0;
}


func_327(var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_string = ""; var_89_object = Obj(); var_90_bool = 0; var_91_bool = 0; var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_string = ""; var_99_object = Obj(); var_100_bool = 0; var_101_bool = 0; var_102_float = 0; var_103_cvector = CVector(0,0,0);
	var_104_bool = var_83_object == 0; //@ne
	if(var_104_bool != 0) {
		var_105_string = "";
		func_414("fdie");
	} else {
		@@var_83_object:GetPosition(var_94_cvector);
		GetPosition(var_95_cvector);
		GetDirection(var_96_cvector);
		var_97_cvector = var_95_cvector - var_94_cvector;
		var_108_float = GetByIndex(var_97_cvector, 0);
		var_109_float = GetByIndex(var_96_cvector, 0);
		var_110_float = var_108_float * var_109_float;
		var_111_float = GetByIndex(var_97_cvector, 2);
		var_112_float = GetByIndex(var_96_cvector, 2);
		var_113_float = var_111_float * var_112_float;
		var_114_int = var_110_float + var_113_float;
		var_116_bool = var_114_int >= (int)0;
		if(var_116_bool != 0) {
			var_98_string = "fdie";
		} else {
				var_98_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_83_object = var_99_object;
		var_119_bool = IsFuncExist(var_83_object, "GetScriptProperty", (int)2);
		if(var_119_bool != 0) {
			@@var_83_object:HasScriptProperty(var_100_bool, "Owner");
			var_121_bool = var_100_bool;
			if(var_121_bool != 0) {
				@@var_83_object:GetScriptProperty(var_99_object, "Owner");
				var_123_bool = var_99_object == 0; //@ne
				if(var_123_bool != 0) {
					var_83_object = var_99_object;
				}
			}
		}
		var_126_bool = IsFuncExist(var_99_object, "@GetEyesHeight", (int)1);
		if(var_126_bool != 0) {
			@@var_99_object:GetEyesHeight(var_102_float);
			var_103_cvector = CVector(0.0, 0.0, 0.0);
			var_127_float = GetByIndex(var_103_cvector, 1);
			var_102_float = var_127_float;
			SetByIndex(var_103_cvector, 1) = var_127_float;
			LookAsync(var_83_object, "head", var_103_cvector);
			var_101_bool = 1;
		} else {
			var_101_bool = 0;

		}
		PlayAnimation("all", var_98_string);
		WaitForAnimEnd();
		var_130_bool = var_101_bool;
		if(var_130_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_98_string);
		RemoveEnvelope();
		var_99_object = 0;
	}
	return 20;
	
}


func_458(var_55_bool, var_56_object, var_57_string)
{
	var_58_bool = 0; var_59_bool = 0;
	var_62_bool = IsFuncExist(var_56_object, "HasProperty", (int)2);
	var_63_bool = var_62_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_55_bool = 0;
		return 2;
	}
	@@var_56_object:HasProperty(var_57_string, var_59_bool);
	var_59_bool = var_55_bool;
	return 2;
}


func_726()
{
	var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_bool = 0;
	ClearSubContainer((int)0);
	var_47_int = 0; var_48_int = 0;
	func_696((int)600, (int)1500);
	irand(var_44_int, (int)200);
	var_69_bool = var_44_int != (int)0;
	if(var_69_bool != 0) {
		var_70_int = 0; var_71_string = "";
		func_763(var_70_int, "ognemet_ammo");
		AddItem(var_45_bool, var_70_int, (int)0, var_44_int);
	}
	irand(var_44_int, (int)3);
	var_77_bool = var_44_int == (int)0;
	if(var_77_bool != 0) {
		var_78_int = 0; var_79_string = "";
		func_763(var_78_int, "rusk");
		AddItem(var_45_bool, var_78_int, (int)0, (int)1);
	}
	return 4;
}


func_599(var_6_object, var_7_int)
{
	var_9_object = Obj(); var_10_object = Obj(); var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_int = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_string = ""; var_19_object = Obj(); var_20_object = Obj(); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = "";
	var_29_bool = 0;
	var_29_bool = 0;
	var_31_bool = var_7_int != (int)4;
	if(var_31_bool != 0) {
		var_33_bool = var_7_int != (int)5;
		if(var_33_bool != 0) {
			var_29_bool = 1;
		}
	}
	if(var_29_bool != 0) {
		GetScene(var_19_object);
		GetPosition(var_21_cvector);
		GetEyesHeight(var_22_float);
		var_34_float = GetByIndex(var_21_cvector, 1);
		var_36_float = var_22_float / (int)2;
		var_34_float = var_34_float + var_36_float;
		SetByIndex(var_21_cvector, 1) = var_34_float;
		AddActorByType(var_20_object, "scripted", var_19_object, var_21_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_20_object = 0;
		var_19_object = 0;
	}
	var_40_bool = var_6_object == 0; //@ne
	if(var_40_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_23_int);
	var_42_bool = var_23_int < (int)0;
	if(var_42_bool != 0) {
		return 20;
	}
	@@var_6_object:GetPosition(var_24_cvector);
	GetPosition(var_25_cvector);
	GetDirection(var_26_cvector);
	var_27_cvector = var_25_cvector - var_24_cvector;
	var_43_float = GetByIndex(var_27_cvector, 0);
	var_44_float = GetByIndex(var_26_cvector, 0);
	var_45_float = var_43_float * var_44_float;
	var_46_float = GetByIndex(var_27_cvector, 2);
	var_47_float = GetByIndex(var_26_cvector, 2);
	var_48_float = var_46_float * var_47_float;
	var_49_int = var_45_float + var_48_float;
	var_51_bool = var_49_int >= (int)0;
	if(var_51_bool != 0) {
		var_28_string = "fhit";
	} else {
		var_28_string = "bhit";
	}
	var_54_int = var_28_string + "1";
	var_56_int = var_28_string + "2";
	FadeSecondaryAnimation("hit_react", var_54_int, var_56_int, (int)-10);
	return 20;
	
}


func_470(var_39_float, var_40_object, var_41_float, var_42_int)
{
	var_43_int = 0; var_44_string = ""; var_45_int = 0; var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_int = 0; var_50_string = ""; var_51_int = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0;
	var_55_bool = 0; var_56_object = Obj(); var_57_string = "";
	var_40_object = var_56_object;
	func_458(var_55_bool, var_56_object, "health");
	var_64_bool = var_55_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_39_float = 0.0;
		return 12;
	}
	var_65_bool = 0; var_66_object = Obj(); var_67_string = "";
	var_40_object = var_66_object;
	func_458(var_65_bool, var_66_object, "armor");
	var_68_bool = var_65_bool == 0; //@nz
	if(var_68_bool != 0) {
		var_49_int = 0;
	} else {
			@@var_40_object:GetProperty("armor", var_49_int);
	}
	var_70_string = ""; var_71_int = 0;
	var_42_int = var_71_int;
	func_442(var_70_string, var_71_int);
	var_50_string = "armor_" + var_70_string;
	var_74_bool = 0; var_75_object = Obj(); var_76_string = "";
	var_40_object = var_75_object;
	var_50_string = var_76_string;
	func_458(var_74_bool, var_75_object, var_76_string);
	var_77_bool = var_74_bool == 0; //@nz
	if(var_77_bool != 0) {
		var_51_int = 0;
	} else {
		@@var_40_object:GetProperty(var_50_string, var_51_int);

	}
	var_78_float = 0; var_79_float = 0; var_80_float = 0;
	var_81_int = var_49_int + var_51_int;
	var_79_float = var_81_int / (float)100.0;
	func_672(var_78_float, var_79_float, (float)1);
	var_78_float = var_52_float;
	@@var_40_object:GetProperty("health", var_53_float);
	var_85_int = (int)1 - var_52_float;
	var_54_float = var_41_float * var_85_int;
	var_87_float = 0; var_88_float = 0; var_89_float = 0; var_90_float = 0;
	var_88_float = var_53_float - var_54_float;
	func_679(var_87_float, var_88_float, (float)0, (float)1);
	@@var_40_object:SetProperty("health", var_87_float);
	var_54_float = var_39_float;
	return 12;
	
}


func_95(var_75_object, var_76_bool)
{
	StopGroup0();
	var_77_object = Obj(); var_78_bool = 0;
	var_75_object = var_77_object;
	var_76_bool = var_78_bool;
	TaskCall(1);
	func_106(var_79_object, var_80_bool, var_77_object, var_78_bool);
	TaskReturn();
	return 0;
}


func_865(var_166_cvector)
{
	var_167_cvector = CVector(0,0,0); var_168_float = 0; var_169_cvector = CVector(0,0,0); var_170_float = 0; var_171_bool = 0; var_172_cvector = CVector(0,0,0); var_173_float = 0; var_174_cvector = CVector(0,0,0); var_175_float = 0; var_176_bool = 0;
	GetPosition(var_172_cvector);
	GetHeight(var_173_float);
	var_177_float = GetByIndex(var_172_cvector, 1);
	var_179_float = var_173_float / (int)2;
	var_177_float = var_177_float + var_179_float;
	SetByIndex(var_172_cvector, 1) = var_177_float;
	var_174_cvector = var_166_cvector - var_172_cvector;
	var_180_int = var_174_cvector | var_174_cvector;
	var_175_float = sqrt(var_180_int);
	var_182_bool = var_175_float < (int)50;
	if(var_182_bool != 0) {
		var_176_bool = 0;
	} else {
			var_187_float = GetByIndex(var_174_cvector, 1);
			var_188_float = var_187_float / var_175_float;
			var_176_bool = var_188_float < (float)-0.1428571492433548;
	}
	var_184_bool = var_176_bool;
	if(var_184_bool != 0) {
		var_185_string = "cattack";
	} else {
		var_186_string = "attack";

	}
	PlayAnimation("all", var_185_string);
	return 10;
	
}


func_1123(var_78_bool, var_79_object)
{
	var_78_bool = 0;
	var_80_bool = var_79_object != 0; //@nn
	if(var_80_bool != 0) {
		var_81_float = 0; var_82_object = Obj();
		var_79_object = var_82_object;
		func_450(var_81_float, var_82_object);
		var_84_bool = var_81_float <= (float)302500.0;
		if(var_84_bool != 0) {
			var_78_bool = 1;
		}
	}
	return 0;
}


func_998(var_4_bool, var_5_object, var_6_object)
{
	var_7_float = 0; var_8_bool = 0; var_9_float = 0; var_10_bool = 0;
	var_11_bool = 0; var_12_object = Obj(); var_13_string = "";
	var_6_object = var_12_object;
	func_458(var_11_bool, var_12_object, "reputation");
	var_20_bool = var_11_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_4_bool = 0;
		return 4;
	}
	@@var_6_object:GetProperty("reputation", var_9_float);
	var_23_bool = var_9_float < (float)0.5;
	if(var_23_bool != 0) {
		var_4_bool = 0;
		return 4;
	}
	CanSee(var_10_bool, var_5_object);
	var_24_bool = 0;
	var_24_bool = 1;
	var_25_bool = var_10_bool;
	if(var_25_bool != 1) {
		var_26_float = 0; var_27_object = Obj();
		var_5_object = var_27_object;
		func_450(var_26_float, var_27_object);
		var_35_bool = var_26_float <= (float)160000.0;
		if(var_35_bool != 1) {
			var_24_bool = 0;
		}
	}
	if(var_24_bool != 0) {
		ReportReputationChange(var_5_object, var_6_object, (float)-0.20000000298023224);
		var_4_bool = 1;
		return 4;
	}
	var_4_bool = 0;
	return 4;
}


func_106(var_0_object, var_1_object, var_77_object, var_78_bool)
{
	var_0_object = var_77_object;
	var_1_object = var_78_bool;
	Face(var_0_object);
	
Label_111:
	var_81_bool = 0;
	func_809((bool)1);
	SetAttackState((bool)1);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	
Label_124:
	var_117_bool = 0;
	var_117_bool = 0;
	var_118_bool = 0;
	var_118_bool = 1;
	var_119_bool = var_0_object == 0; //@ne
	if(var_119_bool != 1) {
		var_120_bool = var_1_object == 0; //@nz
		if(var_120_bool != 1) {
			var_118_bool = 0;
		}
	}
	if(var_118_bool != 0) {
		var_121_bool = 0;
		var_121_bool = 1;
		var_122_bool = 0; var_123_object = Obj();
		var_123_object = var_0_object;
		func_1190(var_122_bool, var_123_object);
		var_141_bool = var_122_bool == 0; //@nz
		if(var_141_bool != 1) {
			var_142_bool = 0; var_143_object = Obj();
			var_143_object = var_0_object;
			func_1123(var_142_bool, var_143_object);
			var_149_bool = var_142_bool == 0; //@nz
			if(var_149_bool != 1) {
				var_121_bool = 0;
			}
		}
		if(var_121_bool != 0) {
			var_117_bool = 1;
		}
	}
	if(var_117_bool != 0) {
	} else {
		var_155_object = Obj();
		var_155_object = var_0_object;
		func_896(var_155_object);
		WaitForAnimEnd();
		goto Label_124;
	}
	SetAttackState((bool)0);
	var_151_bool = 0;
	func_809((bool)0);
	StopAsync();
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_154_bool = Obj() != 0; //@nn
	if(var_154_bool == 1) goto Label_111;
	return 0;
	
}


func_1136(var_5_bool, var_6_object)
{
	var_5_bool = 0;
	var_7_bool = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	func_1190(var_7_bool, var_8_object);
	if(var_7_bool != 0) {
		var_58_bool = 0; var_59_object = Obj();
		var_6_object = var_59_object;
		func_1123(var_58_bool, var_59_object);
		if(var_58_bool != 0) {
			var_5_bool = 1;
		}
	}
	return 0;
}


func_763(var_70_int, var_71_string)
{
	var_72_int = 0; var_73_int = 0;
	GetInvItemByName(var_73_int, var_71_string);
	var_73_int = var_70_int;
	return 2;
}


func_1150(var_5_bool, var_6_object)
{
	var_5_bool = 0;
	var_7_bool = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	func_1190(var_7_bool, var_8_object);
	if(var_7_bool != 0) {
		var_58_bool = 0; var_59_object = Obj();
		var_6_object = var_59_object;
		func_1123(var_58_bool, var_59_object);
		if(var_58_bool != 0) {
			var_5_bool = 1;
		}
	}
	return 0;
}


