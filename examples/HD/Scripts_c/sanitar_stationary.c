// @IMPORTS: SetTimer/2,GetDirection/1,Hold/0,Rotate/3,ResetAAS/0,StopGroup0/0,Face/1,SetAttackState/1,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,KillTimer/1,GetScene/1,RemoveActor/1,IsPlayerActor/2,SetRTEnvelope/2,IsOverrideActive/1,GetPosition/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,irand/2,AddActorByType/6,AddItem/4,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateObjectSet/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,Trace/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetAttackDistance/1,AddActorByType/4,GetHeight/1,PlayLoopedGlobalSound/5,ReportReputationChange/3,ReportReputationChange/4,GetProperty/2,SignalDeath/1,CanSee/2
// @STRINGS: W:all|W:attack_on|W:attack_off|A:RemoveStationaryActor|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:woman|W:worker|W:butcher|W:wasted_girl|W:boy|W:vaxxabitka|W:unosha|W:wasted_male|W:alkash|W:dohodyaga|W:vaxxabit|W:nudegirl|W:morlok|W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:rusk|W:alpha_pills|W:beta_pills|W:gamma_pills|W:ognemet_ammo|W:class|W:patrol|W:sanitar|W:soldier|W:little_girl|W:flame|A:Attach|A:SetLength|A:GetLength|W:flame_loop|A:FadeIn|A:FadeOut|W:cattack|W:@GetHeight|A:GetHeight|A:in|W:reputation|W:disease|W:bomber|W:hunter|W:grabitel|W:rat_big|W:dog|A:Intersect|A:Next
// @GLOBALS: 0:object:,1:object:,2:float:,3:bool:,4:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_1: op=0x15 vars=object
// @EVENT_3: op=0x21 vars=object
// @EVENT_17: op=0x2d vars=object
// @EVENT_30: op=0x3d vars=object,object,bool
// @EVENT_7: op=0x54 vars=int
// @TASK_1: vars=object,bool params=2
// @EVENT_1: op=0xb4 vars=object
// @EVENT_3: op=0xcb vars=object
// @EVENT_17: op=0xe2 vars=object
// @EVENT_30: op=0xfd vars=object,object,bool
// @EVENT_7: op=0x10a vars=int
// @TASK_2: vars= params=1
// @EVENT_0: op=0x155 vars=object
// @EVENT_22: op=0x1d4 vars=object,int,float,float
// @EVENT_16: op=0x1d6 vars=object,string
// @EVENT_41: op=0x1d8 vars=object
// @STANDALONE_EVENT_22: op=0x61e vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x626 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x630 vars=object,string
// @STANDALONE_EVENT_41: op=0x63d vars=object
// @PE: 0x15,0x21,0x2d,0x3d,0x54,0x60,0x6b,0xb4,0xcb,0xe2,0xfd,0x10a,0x146,0x1ba,0x1d4,0x1d6,0x1d8,0x1da,0x348,0x3af,0x3b6,0x3ee,0x60f,0x61e,0x626,0x63d,0x6c1,0x6ce,0x6dc,0x6ea,0x704

task_0_event_1(var_0_object, var_1_object, var_2_bool)
{
	var_3_bool = 0; var_4_object = Obj();
	var_2_bool = var_4_object;
	func_1742(var_3_bool, var_4_object);
	if(var_3_bool != 0) {
		var_142_object = Obj(); var_143_bool = 0;
		var_2_bool = var_142_object;
		func_96(var_142_object, (bool)0);
	}
	return 0;
}


task_0_event_3(var_0_object, var_1_object, var_2_bool)
{
	var_3_bool = 0; var_4_object = Obj();
	var_2_bool = var_4_object;
	func_1756(var_3_bool, var_4_object);
	if(var_3_bool != 0) {
		var_142_object = Obj(); var_143_bool = 0;
		var_2_bool = var_142_object;
		func_96(var_142_object, (bool)0);
	}
	return 0;
}


task_0_event_17(var_0_object, var_1_object, var_2_bool)
{
	var_3_bool = 0; var_4_object = Obj();
	var_2_bool = var_4_object;
	func_634(var_3_bool, var_4_object);
	if(var_3_bool != 0) {
		var_37_object = Obj();
		var_2_bool = var_37_object;
		func_1527(var_37_object);
		var_52_object = Obj(); var_53_bool = 0;
		var_2_bool = var_52_object;
		func_96(var_52_object, (bool)1);
	}
	return 0;
}


task_0_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_bool)
{
	var_5_bool = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_bool = 0;
	var_2_bool = var_6_object;
	var_3_object = var_7_object;
	var_4_bool = var_8_bool;
	func_1603(var_5_bool, var_6_object, var_7_object, var_8_bool);
	if(var_5_bool != 0) {
		var_91_bool = 0; var_92_object = Obj();
		var_2_bool = var_92_object;
		func_634(var_91_bool, var_92_object);
		if(var_91_bool != 0) {
			var_119_object = Obj();
			var_2_bool = var_119_object;
			func_1527(var_119_object);
			var_134_object = Obj(); var_135_bool = 0;
			var_2_bool = var_134_object;
			func_96(var_134_object, (bool)0);
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
		func_1629(var_5_int);
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
	func_1742(var_5_bool, var_6_object);
	if(var_5_bool != 0) {
		var_144_bool = 0; var_145_object = Obj(); var_146_object = Obj();
		var_145_object = var_0_object;
		var_2_object = var_146_object;
		func_1770(var_144_bool, var_145_object, var_146_object);
		if(var_144_bool != 0) {
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
	func_1756(var_5_bool, var_6_object);
	if(var_5_bool != 0) {
		var_144_bool = 0; var_145_object = Obj(); var_146_object = Obj();
		var_145_object = var_0_object;
		var_2_object = var_146_object;
		func_1770(var_144_bool, var_145_object, var_146_object);
		if(var_144_bool != 0) {
			var_4_bool = 1;
		}
	}
	if(var_4_bool != 0) {
		var_0_object = var_2_object;
		Face(var_2_object);
	}
	return 0;
}


	task_1_event_17(var_0_object, var_1_bool, var_2_object, var_3_object, var_4_bool, var_91_object)
	{
	var_92_object = Obj();
	var_91_object = var_92_object;
	func_1527(var_92_object);
	var_107_bool = 0;
	var_107_bool = 1;
	var_108_bool = 0; var_109_object = Obj();
	var_91_object = var_109_object;
	func_634(var_108_bool, var_109_object);
	var_136_bool = var_108_bool == 0; //@nz
	if(var_136_bool != 1) {
		var_137_bool = 0; var_138_object = Obj();
		var_91_object = var_138_object;
		func_1729(var_137_bool, var_138_object);
		var_144_bool = var_137_bool == 0; //@nz
		if(var_144_bool != 1) {
			var_107_bool = 0;
		}
	}
	if(var_107_bool != 0) {
		return 0;
	}
	var_0_object = var_91_object;
	var_1_bool = true;
	Face(var_91_object);
	return 0;
	}


task_1_event_30(var_0_object, var_1_bool, var_2_object, var_3_object, var_4_bool)
{
	var_5_bool = 0; var_6_object = Obj(); var_7_object = Obj(); var_8_bool = 0;
	var_2_object = var_6_object;
	var_3_object = var_7_object;
	var_4_bool = var_8_bool;
	func_1603(var_5_bool, var_6_object, var_7_object, var_8_bool);
	if(var_5_bool != 0) {
		var_2_object = Obj();
		func_226();
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
		func_1629(var_5_int);
	}
	return 0;
	
}


task_2_event_0(var_0_object, var_1_bool, var_2_object)
{
	var_3_bool = 0; var_4_bool = 0;
	IsOverrideActive(var_4_bool);
	var_5_bool = var_4_bool == 0; //@nz
	if(var_5_bool != 0) {
		var_6_object = Obj();
		var_2_object = var_6_object;
		func_1006(var_6_object);
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
	func_702(var_6_object, var_7_int, var_8_float);
	return 0;
}


event_43(var_0_object, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float, var_6_cvector, var_7_cvector)
{
	var_8_object = Obj(); var_9_int = 0; var_10_float = 0; var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0);
	var_2_object = var_8_object;
	var_3_int = var_9_int;
	var_4_float = var_10_float;
	var_6_cvector = var_11_cvector;
	var_7_cvector = var_12_cvector;
	func_770(var_10_float, var_11_cvector, var_12_cvector);
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
	func_1551(var_3_object);
	return 0;
}


main(var_0_object, var_1_bool)
{
	var_2_cvector = CVector(0,0,0); var_3_bool = 0; var_4_cvector = CVector(0,0,0); var_5_bool = 0;
	func_1278();
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


func_770(var_8_object, var_11_cvector, var_12_cvector)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj();
	GetScene(var_15_object);
	AddActorByType(var_16_object, "scripted", var_15_object, var_11_cvector, var_12_cvector, "blood_dir.xml");
	var_19_object = Obj();
	var_8_object = var_19_object;
	func_658(var_19_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1527(var_92_object)
{
	var_93_bool = 0; var_94_bool = 0;
	var_95_bool = var_92_object == 0; //@ne
	if(var_95_bool != 0) {
		return 2;
	}
	var_96_object = GlobalVars[4];
	@@var_96_object:in(var_94_bool, var_92_object);
	var_97_bool = var_94_bool == 0; //@nz
	if(var_97_bool != 0) {
		var_98_object = GlobalVars[4];
		@@var_98_object:add(var_92_object);
	}
	var_99_bool = 0; var_100_object = Obj();
	var_92_object = var_100_object;
	func_503(var_99_bool, var_100_object);
	if(var_99_bool != 0) {
		var_103_object = Obj();
		func_927(var_103_object);
		ReportReputationChange(var_92_object, var_103_object, (float)-0.07000000029802322);
	}
	return 2;
}


func_1796(var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1425(var_9_bool, var_10_object);
	var_9_bool = var_7_bool;
	return 0;
}


func_520(var_57_float, var_58_object, var_59_float, var_60_int)
{
	var_61_int = 0; var_62_string = ""; var_63_int = 0; var_64_float = 0; var_65_float = 0; var_66_float = 0; var_67_int = 0; var_68_string = ""; var_69_int = 0; var_70_float = 0; var_71_float = 0; var_72_float = 0;
	var_73_bool = 0; var_74_object = Obj(); var_75_string = "";
	var_58_object = var_74_object;
	func_508(var_73_bool, var_74_object, "health");
	var_76_bool = var_73_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_57_float = 0.0;
		return 12;
	}
	var_77_bool = 0; var_78_object = Obj(); var_79_string = "";
	var_58_object = var_78_object;
	func_508(var_77_bool, var_78_object, "armor");
	var_80_bool = var_77_bool == 0; //@nz
	if(var_80_bool != 0) {
		var_67_int = 0;
	} else {
			@@var_58_object:GetProperty("armor", var_67_int);
	}
	var_82_string = ""; var_83_int = 0;
	var_60_int = var_83_int;
	func_474(var_82_string, var_83_int);
	var_68_string = "armor_" + var_82_string;
	var_88_bool = 0; var_89_object = Obj(); var_90_string = "";
	var_58_object = var_89_object;
	var_68_string = var_90_string;
	func_508(var_88_bool, var_89_object, var_90_string);
	var_91_bool = var_88_bool == 0; //@nz
	if(var_91_bool != 0) {
		var_69_int = 0;
	} else {
		@@var_58_object:GetProperty(var_68_string, var_69_int);

	}
	var_92_float = 0; var_93_float = 0; var_94_float = 0;
	var_95_int = var_67_int + var_69_int;
	var_93_float = var_95_int / (float)100.0;
	func_943(var_92_float, var_93_float, (float)1);
	var_92_float = var_70_float;
	@@var_58_object:GetProperty("health", var_71_float);
	var_99_int = (int)1 - var_70_float;
	var_72_float = var_59_float * var_99_int;
	var_101_float = 0; var_102_float = 0; var_103_float = 0; var_104_float = 0;
	var_102_float = var_71_float - var_72_float;
	func_950(var_101_float, var_102_float, (float)0, (float)1);
	@@var_58_object:SetProperty("health", var_101_float);
	var_107_bool = 0; var_108_object = Obj();
	var_58_object = var_108_object;
	func_503(var_107_bool, var_108_object);
	if(var_107_bool != 0) {
		var_111_float = 0;
		var_111_float = -var_72_float;
		func_972(var_111_float);
	}
	var_72_float = var_57_float;
	return 12;
	
}


func_1551(var_3_object)
{
	var_4_object = Obj();
	func_927(var_4_object);
	ReportReputationChange(var_3_object, var_4_object, (float)-0.12999999523162842, (bool)1);
	var_9_object = Obj();
	var_3_object = var_9_object;
	TaskCall(2);
	func_278(var_9_object);
	TaskReturn();
	return 0;
}


func_784(var_81_string, var_82_int, var_83_int, var_84_int)
{
	var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_bool = 0;
	var_89_bool = 0; var_90_int = 0; var_91_int = 0;
	var_82_int = var_90_int;
	var_83_int = var_91_int;
	func_961(var_89_bool, var_90_int, var_91_int);
	if(var_89_bool != 0) {
		irand(var_87_int, var_84_int);
		var_96_int = var_87_int + (int)1;
		AddItem(var_88_bool, var_81_string, (int)0, var_96_int);
	}
	return 4;
}


func_1425(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_float = 0; var_13_float = 0; var_14_string = ""; var_15_float = 0; var_16_bool = 0; var_17_float = 0; var_18_float = 0; var_19_string = ""; var_20_float = 0;
	var_21_bool = 0; var_22_object = Obj();
	var_10_object = var_22_object;
	func_634(var_21_bool, var_22_object);
	var_55_bool = var_21_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_9_bool = 0;
		return 10;
	}
	var_56_object = GlobalVars[4];
	@@var_56_object:in(var_16_bool, var_10_object);
	var_57_bool = var_16_bool;
	if(var_57_bool != 0) {
		var_9_bool = 1;
		return 10;
	}
	var_58_bool = 0; var_59_object = Obj();
	var_10_object = var_59_object;
	func_503(var_58_bool, var_59_object);
	if(var_58_bool != 0) {
		@@var_10_object:GetProperty("reputation", var_17_float);
		var_64_bool = var_17_float < (float)0.33000001311302185;
		if(var_64_bool != 0) {
			var_9_bool = 1;
			return 10;
		}
		@@var_10_object:GetProperty("disease", var_18_float);
		var_9_bool = var_18_float > (float)0.33000001311302185;
		return 10;
	}
	var_67_bool = 0; var_68_object = Obj(); var_69_string = "";
	var_10_object = var_68_object;
	func_508(var_67_bool, var_68_object, "class");
	var_70_bool = var_67_bool == 0; //@nz
	if(var_70_bool != 0) {
		var_9_bool = 0;
		return 10;
	}
	@@var_10_object:GetProperty("class", var_19_string);
	var_72_bool = 0;
	var_72_bool = 1;
	var_73_bool = 0;
	var_73_bool = 1;
	var_74_bool = 0;
	var_74_bool = 1;
	var_76_bool = var_19_string == "bomber";
	if(var_76_bool != 1) {
		var_78_bool = var_19_string == "hunter";
		if(var_78_bool != 1) {
			var_74_bool = 0;
		}
	}
	if(var_74_bool != 1) {
		var_80_bool = var_19_string == "grabitel";
		if(var_80_bool != 1) {
			var_73_bool = 0;
		}
	}
	if(var_73_bool != 1) {
		var_82_bool = var_19_string == "rat_big";
		if(var_82_bool != 1) {
			var_72_bool = 0;
		}
	}
	if(var_72_bool != 0) {
		var_9_bool = 1;
		return 10;
	}
	var_83_bool = 0; var_84_object = Obj(); var_85_string = "";
	var_10_object = var_84_object;
	func_508(var_83_bool, var_84_object, "disease");
	var_86_bool = var_83_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_9_bool = 0;
		return 10;
	}
	var_87_bool = 0;
	var_87_bool = 1;
	var_88_bool = 0; var_89_string = "";
	var_19_string = var_89_string;
	func_840(var_88_bool, var_89_string);
	if(var_88_bool != 1) {
		var_128_bool = var_19_string == "dog";
		if(var_128_bool != 1) {
			var_87_bool = 0;
		}
	}
	if(var_87_bool != 0) {
		@@var_10_object:GetProperty("disease", var_20_float);
		var_9_bool = var_20_float > (int)0;
		return 10;
	}
	var_9_bool = 0;
	return 10;
}


func_658(var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = "";
	var_34_bool = var_19_object == 0; //@ne
	if(var_34_bool != 0) {
		return 14;
	}
	IsDead(var_27_bool);
	var_35_bool = var_27_bool;
	if(var_35_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_28_int);
	var_37_bool = var_28_int < (int)0;
	if(var_37_bool != 0) {
		return 14;
	}
	@@var_19_object:GetPosition(var_29_cvector);
	GetPosition(var_30_cvector);
	GetDirection(var_31_cvector);
	var_32_cvector = var_30_cvector - var_29_cvector;
	var_38_float = GetByIndex(var_32_cvector, 0);
	var_39_float = GetByIndex(var_31_cvector, 0);
	var_40_float = var_38_float * var_39_float;
	var_41_float = GetByIndex(var_32_cvector, 2);
	var_42_float = GetByIndex(var_31_cvector, 2);
	var_43_float = var_41_float * var_42_float;
	var_44_int = var_40_float + var_43_float;
	var_46_bool = var_44_int >= (int)0;
	if(var_46_bool != 0) {
		var_33_string = "fhit";
	} else {
		var_33_string = "bhit";
	}
	var_49_int = var_33_string + "1";
	var_51_int = var_33_string + "2";
	FadeSecondaryAnimation("hit_react", var_49_int, var_51_int, (int)-10);
	return 14;
	
}


func_278(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	KillTimer((int)75);
	var_13_bool = 0; var_14_object = Obj();
	var_9_object = var_14_object;
	func_503(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		GetScene(var_11_object);
		var_17_object = Obj();
		func_927(var_17_object);
		@@var_11_object:RemoveStationaryActor(var_17_object);
		var_11_object = 0;
	}
	var_18_object = Obj();
	var_9_object = var_18_object;
	func_300(var_18_object);
	return 2;
}


func_1050(var_119_string)
{
	var_120_object = Obj(); var_121_int = 0; var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; var_125_bool = 0;
	CreateInvItem(var_123_object);
	@@var_123_object:SetItemName(var_119_string);
	@@var_123_object:SetProperty("Organ", (int)1);
	@@var_123_object:GetItemID(var_124_int);
	AddItem(var_125_bool, var_123_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1278()
{
	var_6_float = 0; var_7_object = Obj(); var_8_object = Obj(); var_9_float = 0; var_10_object = Obj(); var_11_object = Obj();
	var_12_object = GlobalVars[4];
	func_966(Obj());
	var_13_object = var_12_object;
	GlobalVars[4] = var_12_object;
	GetAttackDistance(var_9_float);
	var_16_float = GlobalVars[2];
	var_16_float = var_9_float / (float)600.0;
	GlobalVars[2] = var_16_float;
	GetScene(var_10_object);
	AddActorByType(var_11_object, "flame", var_10_object, CVector(0.0, 0.0, 0.0));
	var_20_object = Obj();
	func_927(var_20_object);
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


func_927(var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj();
	self(var_22_object);
	var_22_object = var_20_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_799(var_157_string)
{
	var_158_bool = 0; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_bool = 0; var_163_float = 0; var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_bool = 0; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_bool = 0; var_171_float = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0);
	IsExisting3DSound(var_166_bool, var_157_string);
	var_174_bool = var_166_bool == 0; //@nz
	if(var_174_bool != 0) {
		var_167_int = 0;

	Label_805:
		var_176_int = var_167_int + (int)1;
		var_177_int = var_157_string + var_176_int;
		IsExisting3DSound(var_168_bool, var_177_int);
		var_178_bool = var_168_bool == 0; //@nz
		if(var_178_bool != 0) {
		} else {
			var_167_int = var_167_int + (int)1;
			goto Label_805;
		}
		var_179_bool = var_167_int == 0; //@nz
		if(var_179_bool != 0) {
			return 16;
		}
		irand(var_169_int, var_167_int);
		var_181_int = var_169_int + (int)1;
		var_157_string = var_157_string + var_181_int;
	}
	Is3DSoundLoaded(var_170_bool, var_157_string);
	var_182_bool = var_170_bool;
	if(var_182_bool != 0) {
		GetEyesHeight(var_171_float);
		GetDirection(var_172_cvector);
		var_173_cvector = var_172_cvector * (int)50;
		var_184_float = GetByIndex(var_173_cvector, 1);
		var_184_float = var_184_float + var_171_float;
		SetByIndex(var_173_cvector, 1) = var_184_float;
		PlayGlobalSound(var_157_string, var_173_cvector);
	}
	return 16;
	
}


func_933(var_34_cvector, var_35_cvector)
{
	var_42_float = 0; var_43_float = 0;
	var_44_int = var_35_cvector | var_35_cvector;
	var_43_float = sqrt(var_44_int);
	var_45_float = 9.999999974752427e-07;
	var_46_bool = var_43_float < var_45_float;
	if(var_46_bool != 0) {
		var_34_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_34_cvector = var_35_cvector / var_43_float;
	return 2;
}


func_1319(var_22_bool)
{
	var_23_float = 0; var_24_float = 0; var_25_object = Obj(); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_float = 0; var_29_float = 0; var_30_object = Obj(); var_31_cvector = CVector(0,0,0); var_32_float = 0;
	var_33_bool = var_22_bool;
	if(var_33_bool != 0) {
		var_34_float = GlobalVars[2];
		var_34_float = var_28_float;
	} else {
				var_28_float = 0.05000000074505806;
	}
	var_35_object = GlobalVars[0];
	@@var_35_object:GetLength(var_29_float);
	var_36_bool = var_28_float < var_29_float;
	if(var_36_bool != 0) {
		var_28_float = var_29_float;
	}
	var_37_object = GlobalVars[0];
	@@var_37_object:SetLength(var_29_float);
	var_38_bool = GlobalVars[3];
	var_39_bool = var_38_bool != var_22_bool;
	if(var_39_bool != 0) {
		var_40_bool = var_22_bool;
		if(var_40_bool != 0) {
			var_41_object = GlobalVars[1];
			var_42_bool = var_41_object == 0; //@ne
			if(var_42_bool != 0) {
				var_31_cvector = CVector(0.0, 0.0, 0.0);
				GetHeight(var_32_float);
				var_43_float = GetByIndex(var_31_cvector, 1);
				var_32_float = var_43_float;
				SetByIndex(var_31_cvector, 1) = var_43_float;
				PlayLoopedGlobalSound(var_30_object, "flame_loop", var_31_cvector, (int)0, (int)200);
				var_47_object = GlobalVars[1];
				var_30_object = var_47_object;
				GlobalVars[1] = var_47_object;
				var_30_object = 0;
			}
			var_48_object = GlobalVars[1];
			@@var_48_object:FadeIn((int)2);
		} else {
			var_51_object = GlobalVars[1];
			var_52_bool = var_51_object != 0; //@nn
			if(var_52_bool == 0) goto Label_1371;
			var_53_object = GlobalVars[1];
			@@var_53_object:FadeOut((int)2);

		}
	Label_1371:
		var_50_bool = GlobalVars[3];
		var_22_bool = var_50_bool;
		GlobalVars[3] = var_50_bool;
	}
	return 10;
	
}


func_1067()
{
	var_113_int = 0;
	func_1000(var_113_int);
	var_118_bool = var_113_int != (int)1;
	if(var_118_bool != 0) {
		return 0;
	}
	var_119_string = "";
	func_1050("liver");
	var_130_string = "";
	func_1050("kidney");
	var_131_string = "";
	func_1050("heart");
	var_132_string = "";
	func_1050("blood");
	return 0;
}


func_300(var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	KillTimer((int)70);
	var_22_bool = 0;
	func_1319((bool)0);
	var_55_object = GlobalVars[0];
	RemoveActor(var_55_object);
	IsPlayerActor(var_18_object, var_20_bool);
	var_56_bool = var_20_bool;
	if(var_56_bool != 0) {
		func_1091();
	}
	func_1067();
	var_133_object = Obj();
	var_18_object = var_133_object;
	func_326(var_133_object);
	return 2;
}


func_943(var_29_float, var_30_float, var_31_float)
{
	var_33_bool = var_30_float < var_31_float;
	if(var_33_bool != 0) {
		var_30_float = var_29_float;
	} else {
		var_31_float = var_29_float;
	}
	return 0;
	
}


func_950(var_101_float, var_102_float, var_103_float, var_104_float)
{
	var_105_bool = var_102_float < var_103_float;
	if(var_105_bool != 0) {
		var_103_float = var_101_float;
		return 0;
	}
	var_106_bool = var_102_float > var_104_float;
	if(var_106_bool != 0) {
		var_104_float = var_101_float;
		return 0;
	}
	var_102_float = var_101_float;
	return 0;
}


func_442(var_156_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_157_string = "";
	var_156_string = var_157_string;
	func_799(var_157_string);
	PlayAnimation("all", var_156_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_156_string);
	RemoveEnvelope();
	return 0;
}


func_702(var_6_object, var_7_int, var_8_float)
{
	var_9_cvector = CVector(0,0,0); var_10_object = Obj(); var_11_int = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_int = 0; var_16_int = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0);
	var_27_bool = 0;
	var_27_bool = 0;
	var_28_bool = 0;
	var_28_bool = 0;
	var_29_object = var_6_object;
	if(var_29_object != 0) {
		var_31_bool = var_7_int != (int)4;
		if(var_31_bool != 0) {
			var_28_bool = 1;
		}
	}
	if(var_28_bool != 0) {
		var_33_bool = var_7_int != (int)5;
		if(var_33_bool != 0) {
			var_27_bool = 1;
		}
	}
	if(var_27_bool != 0) {
		var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0);
		var_36_cvector = CVector(0,0,0); var_37_object = Obj();
		var_6_object = var_37_object;
		func_488(var_36_cvector, var_37_object);
		var_36_cvector = var_35_cvector;
		func_933(var_34_cvector, var_35_cvector);
		var_34_cvector = var_18_cvector;
		CreateVectorVector(var_19_object);
		var_20_int = 1;

	Label_731:
		var_48_int = "hit" + var_20_int;
		GetGeometryLocator(var_48_int, var_21_bool, var_22_cvector, var_23_cvector);
		var_49_bool = var_21_bool == 0; //@nz
		if(var_49_bool != 0) {
		} else {
			var_97_int = var_23_cvector | var_18_cvector;
			var_99_bool = var_97_int >= (float)0.7071067690849304;
			if(var_99_bool != 0) {
				@@var_19_object:add(var_22_cvector);
			}
			var_20_int = var_20_int + (int)1;
			goto Label_731;
		}
		@@var_19_object:size(var_24_int);
		var_50_int = var_24_int;
		if(var_50_int != 0) {
			irand(var_25_int, var_24_int);
			@@var_19_object:get(var_26_cvector, var_25_int);
			var_51_object = Obj(); var_52_int = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
			var_6_object = var_51_object;
			var_7_int = var_52_int;
			var_8_float = var_53_float;
			var_26_cvector = var_54_cvector;
			var_55_cvector = -var_18_cvector;
			func_770(var_53_float, var_54_cvector, var_55_cvector);
			return 18;
		}
		var_19_object = 0;
	}
	var_96_object = Obj();
	var_6_object = var_96_object;
	func_658(var_96_object);
	return 18;
	
}


func_1729(var_137_bool, var_138_object)
{
	var_137_bool = 0;
	var_139_bool = var_138_object != 0; //@nn
	if(var_139_bool != 0) {
		var_140_float = 0; var_141_object = Obj();
		var_138_object = var_141_object;
		func_495(var_140_float, var_141_object);
		var_143_bool = var_140_float <= (float)302500.0;
		if(var_143_bool != 0) {
			var_137_bool = 1;
		}
	}
	return 0;
}


func_961(var_89_bool, var_90_int, var_91_int)
{
	var_92_int = 0; var_93_int = 0;
	irand(var_93_int, var_91_int);
	var_89_bool = var_93_int < var_90_int;
	return 2;
}


func_1603(var_5_bool, var_6_object, var_7_object, var_8_bool)
{
	var_9_bool = 0; var_10_bool = 0;
	var_11_bool = 0; var_12_object = Obj(); var_13_bool = 0;
	var_7_object = var_12_object;
	var_13_bool = !var_8_bool;
	func_1142(var_11_bool, var_12_object, var_13_bool);
	if(var_11_bool != 0) {
		CanSee(var_10_bool, var_6_object);
		var_79_bool = 0;
		var_79_bool = 1;
		var_80_bool = var_10_bool;
		if(var_80_bool != 1) {
			var_81_float = 0; var_82_object = Obj();
			var_6_object = var_82_object;
			func_495(var_81_float, var_82_object);
			var_90_bool = var_81_float <= (float)490000.0;
			if(var_90_bool != 1) {
				var_79_bool = 0;
			}
		}
		if(var_79_bool != 0) {
			var_5_bool = 1;
			return 2;
		}
	}
	var_5_bool = 0;
	return 2;
}


func_1091()
{
	var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0;
	ClearSubContainer((int)0);
	var_62_int = 0; var_63_int = 0;
	func_1019((int)600, (int)1500);
	var_81_string = ""; var_82_int = 0; var_83_int = 0; var_84_int = 0;
	func_784("rusk", (int)1, (int)3, (int)2);
	var_97_string = ""; var_98_int = 0; var_99_int = 0; var_100_int = 0;
	func_784("alpha_pills", (int)1, (int)3, (int)5);
	var_101_string = ""; var_102_int = 0; var_103_int = 0; var_104_int = 0;
	func_784("beta_pills", (int)1, (int)6, (int)4);
	var_105_string = ""; var_106_int = 0; var_107_int = 0; var_108_int = 0;
	func_784("gamma_pills", (int)1, (int)12, (int)3);
	var_109_int = 0; var_110_string = "";
	func_1137(var_109_int, "ognemet_ammo");
	AddItem(var_60_bool, var_109_int, (int)0, (int)1);
	return 4;
}


func_326(var_133_object)
{
	EventDisable(0);
	var_134_object = Obj();
	var_133_object = var_134_object;
	func_351(var_134_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_337:
	Hold();
	goto Label_337;
}
EMIT "Return(); Pop(0)";


func_966(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj();
	CreateObjectSet(var_15_object);
	var_15_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_840(var_88_bool, var_89_string)
{
	var_88_bool = 1;
	var_90_bool = 0;
	var_90_bool = 1;
	var_91_bool = 0;
	var_91_bool = 1;
	var_92_bool = 0;
	var_92_bool = 1;
	var_93_bool = 0;
	var_93_bool = 1;
	var_94_bool = 0;
	var_94_bool = 1;
	var_95_bool = 0;
	var_95_bool = 1;
	var_96_bool = 0;
	var_96_bool = 1;
	var_97_bool = 0;
	var_97_bool = 1;
	var_98_bool = 0;
	var_98_bool = 1;
	var_99_bool = 0;
	var_99_bool = 1;
	var_100_bool = 0;
	var_100_bool = 1;
	var_102_bool = var_89_string == "woman";
	if(var_102_bool != 1) {
		var_104_bool = var_89_string == "worker";
		if(var_104_bool != 1) {
			var_100_bool = 0;
		}
	}
	if(var_100_bool != 1) {
		var_106_bool = var_89_string == "butcher";
		if(var_106_bool != 1) {
			var_99_bool = 0;
		}
	}
	if(var_99_bool != 1) {
		var_108_bool = var_89_string == "wasted_girl";
		if(var_108_bool != 1) {
			var_98_bool = 0;
		}
	}
	if(var_98_bool != 1) {
		var_110_bool = var_89_string == "boy";
		if(var_110_bool != 1) {
			var_97_bool = 0;
		}
	}
	if(var_97_bool != 1) {
		var_112_bool = var_89_string == "vaxxabitka";
		if(var_112_bool != 1) {
			var_96_bool = 0;
		}
	}
	if(var_96_bool != 1) {
		var_114_bool = var_89_string == "unosha";
		if(var_114_bool != 1) {
			var_95_bool = 0;
		}
	}
	if(var_95_bool != 1) {
		var_116_bool = var_89_string == "wasted_male";
		if(var_116_bool != 1) {
			var_94_bool = 0;
		}
	}
	if(var_94_bool != 1) {
		var_118_bool = var_89_string == "alkash";
		if(var_118_bool != 1) {
			var_93_bool = 0;
		}
	}
	if(var_93_bool != 1) {
		var_120_bool = var_89_string == "dohodyaga";
		if(var_120_bool != 1) {
			var_92_bool = 0;
		}
	}
	if(var_92_bool != 1) {
		var_122_bool = var_89_string == "vaxxabit";
		if(var_122_bool != 1) {
			var_91_bool = 0;
		}
	}
	if(var_91_bool != 1) {
		var_124_bool = var_89_string == "nudegirl";
		if(var_124_bool != 1) {
			var_90_bool = 0;
		}
	}
	if(var_90_bool != 1) {
		var_126_bool = var_89_string == "morlok";
		if(var_126_bool != 1) {
			var_88_bool = 0;
		}
	}
	return 0;
}


func_972(var_111_float)
{
	var_112_object = Obj(); var_113_object = Obj();
	CreateFloatVector(var_113_object);
	@@var_113_object:add(var_111_float);
	var_115_bool = var_111_float < (int)0;
	if(var_115_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_113_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1742(var_5_bool, var_6_object)
{
	var_5_bool = 0;
	var_7_bool = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	func_1796(var_7_bool, var_8_object);
	if(var_7_bool != 0) {
		var_131_bool = 0; var_132_object = Obj();
		var_6_object = var_132_object;
		func_1729(var_131_bool, var_132_object);
		if(var_131_bool != 0) {
			var_5_bool = 1;
		}
	}
	return 0;
}


func_593(var_123_bool, var_124_object)
{
	var_125_bool = 0; var_126_bool = 0;
	@@var_124_object:IsDead(var_126_bool);
	var_126_bool = var_123_bool;
	return 2;
}


func_598(var_112_bool, var_113_object)
{
	var_114_object = Obj(); var_115_object = Obj(); var_116_object = Obj(); var_117_object = Obj();
	var_118_bool = var_113_object == 0; //@ne
	if(var_118_bool != 0) {
		var_112_bool = 0;
		return 4;
	}
	var_119_bool = 0;
	var_119_bool = 0;
	var_122_bool = IsFuncExist(var_113_object, "IsDead", (int)1);
	if(var_122_bool != 0) {
		var_123_bool = 0; var_124_object = Obj();
		var_113_object = var_124_object;
		func_593(var_123_bool, var_124_object);
		if(var_123_bool != 0) {
			var_119_bool = 1;
		}
	}
	if(var_119_bool != 0) {
		var_112_bool = 0;
		return 4;
	}
	GetScene(var_116_object);
	var_127_bool = var_116_object == 0; //@ne
	if(var_127_bool != 0) {
		var_112_bool = 0;
		return 4;
	}
	@@var_113_object:GetScene(var_117_object);
	var_128_bool = var_116_object != var_117_object;
	if(var_128_bool != 0) {
		var_112_bool = 0;
		return 4;
	}
	var_112_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_474(var_82_string, var_83_int)
{
	var_85_bool = var_83_int == (int)2;
	if(var_85_bool != 0) {
		var_82_string = "fire";
		return 0;
	EMIT "GOTO 0x1e6";
	}
	var_87_bool = var_83_int == (int)1;
	if(var_87_bool != 0) {
		var_82_string = "bullet";
		return 0;
	}
	var_82_string = "phys";
	return 0;
}


func_1756(var_5_bool, var_6_object)
{
	var_5_bool = 0;
	var_7_bool = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	func_1796(var_7_bool, var_8_object);
	if(var_7_bool != 0) {
		var_131_bool = 0; var_132_object = Obj();
		var_6_object = var_132_object;
		func_1729(var_131_bool, var_132_object);
		if(var_131_bool != 0) {
			var_5_bool = 1;
		}
	}
	return 0;
}


func_1629(var_5_int)
{
	var_6_object = Obj(); var_7_float = 0; var_8_object = Obj(); var_9_bool = 0; var_10_string = ""; var_11_float = 0; var_12_float = 0; var_13_float = 0; var_14_object = Obj(); var_15_float = 0; var_16_object = Obj(); var_17_bool = 0; var_18_string = ""; var_19_float = 0; var_20_float = 0; var_21_float = 0;
	var_23_bool = var_5_int != (int)70;
	if(var_23_bool != 0) {
		return 16;
	}
	var_24_object = GlobalVars[0];
	var_25_bool = var_24_object == 0; //@ne
	if(var_25_bool != 0) {
		return 16;
	}
	var_26_object = GlobalVars[0];
	@@var_26_object:Intersect(var_14_object, var_15_float);
	var_27_object = GlobalVars[0];
	var_28_bool = GlobalVars[3];
	if(var_28_bool != 0) {
		var_29_float = 0; var_30_float = 0; var_31_float = 0;
		var_15_float = var_30_float;
		var_32_float = GlobalVars[2];
		var_32_float = var_31_float;
		func_943(var_29_float, var_30_float, var_31_float);
	} else {
						var_135_float = 0.05000000074505806;
	}
	@@var_27_object:SetLength(var_29_float);
	func_989();
	
Label_1658:
	@@var_14_object:Next(var_17_bool, var_16_object);
	var_40_bool = var_17_bool;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		var_41_bool = 0;
		var_42_bool = var_16_object != 0; //@nn
		if(var_42_bool != 0) {
			var_43_object = Obj();
			func_927(var_43_object);
			var_44_bool = var_16_object != var_43_object;
			if(var_44_bool != 0) {
				var_41_bool = 1;
			}
		}
		if(var_41_bool != 0) {
			var_45_bool = 0; var_46_object = Obj(); var_47_string = "";
			var_16_object = var_46_object;
			func_508(var_45_bool, var_46_object, "class");
			if(var_45_bool != 0) {
				@@var_16_object:GetProperty("class", var_18_string);
			}
			var_56_bool = var_18_string != "sanitar";
			if(var_56_bool != 0) {
				var_57_float = 0; var_58_object = Obj(); var_59_float = 0; var_60_int = 0;
				var_16_object = var_58_object;
				func_520(var_57_float, var_58_object, (float)0.10000000149011612, (int)2);
				var_57_float = var_19_float;
				var_120_bool = 0; var_121_object = Obj(); var_122_string = "";
				var_16_object = var_121_object;
				func_508(var_120_bool, var_121_object, "disease");
				if(var_120_bool != 0) {
					@@var_16_object:GetProperty("disease", var_20_float);
					var_125_bool = var_20_float <= (float)0.10000000149011612;
					if(var_125_bool != 0) {
					} else {
						(float)0 = (float)0 - (float)0.10000000149011612;
	}
					return 16;

				}
				@@var_16_object:SetProperty("disease", var_20_float);
			}
			var_127_bool = 0; var_128_object = Obj(); var_129_string = "";
			var_16_object = var_128_object;
			func_508(var_127_bool, var_128_object, "fire");
			if(var_127_bool != 0) {
				@@var_16_object:GetProperty("fire", var_21_float);
				var_133_int = var_21_float + (float)0.10000000149011612;
				@@var_16_object:SetProperty("fire", var_133_int);
			}
		}
	}
	goto Label_1658;
	
}
EMIT "Stack[-6] = 0";
EMIT "Stack[-8] = 0";


func_989()
{
	var_34_object = Obj(); var_35_object = Obj();
	GetScene(var_35_object);
	var_37_object = Obj();
	func_927(var_37_object);
	BroadcastMessage("battle", var_37_object, var_35_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_351(var_134_object)
{
	var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_string = ""; var_140_object = Obj(); var_141_bool = 0; var_142_bool = 0; var_143_float = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_string = ""; var_150_object = Obj(); var_151_bool = 0; var_152_bool = 0; var_153_float = 0; var_154_cvector = CVector(0,0,0);
	var_155_bool = var_134_object == 0; //@ne
	if(var_155_bool != 0) {
		var_156_string = "";
		func_442("fdie");
	} else {
		@@var_134_object:GetPosition(var_145_cvector);
		GetPosition(var_146_cvector);
		GetDirection(var_147_cvector);
		var_148_cvector = var_146_cvector - var_145_cvector;
		var_188_float = GetByIndex(var_148_cvector, 0);
		var_189_float = GetByIndex(var_147_cvector, 0);
		var_190_float = var_188_float * var_189_float;
		var_191_float = GetByIndex(var_148_cvector, 2);
		var_192_float = GetByIndex(var_147_cvector, 2);
		var_193_float = var_191_float * var_192_float;
		var_194_int = var_190_float + var_193_float;
		var_196_bool = var_194_int >= (int)0;
		if(var_196_bool != 0) {
			var_149_string = "fdie";
		} else {
				var_149_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_134_object = var_150_object;
		var_199_bool = IsFuncExist(var_134_object, "GetScriptProperty", (int)2);
		if(var_199_bool != 0) {
			@@var_134_object:HasScriptProperty(var_151_bool, "Owner");
			var_201_bool = var_151_bool;
			if(var_201_bool != 0) {
				@@var_134_object:GetScriptProperty(var_150_object, "Owner");
				var_203_bool = var_150_object == 0; //@ne
				if(var_203_bool != 0) {
					var_134_object = var_150_object;
				}
			}
		}
		var_206_bool = IsFuncExist(var_150_object, "@GetEyesHeight", (int)1);
		if(var_206_bool != 0) {
			@@var_150_object:GetEyesHeight(var_153_float);
			var_154_cvector = CVector(0.0, 0.0, 0.0);
			var_207_float = GetByIndex(var_154_cvector, 1);
			var_153_float = var_207_float;
			SetByIndex(var_154_cvector, 1) = var_207_float;
			LookAsync(var_134_object, "head", var_154_cvector);
			var_152_bool = 1;
		} else {
			var_152_bool = 0;

		}
		var_209_string = "";
		var_149_string = var_209_string;
		func_799(var_209_string);
		PlayAnimation("all", var_149_string);
		WaitForAnimEnd();
		var_211_bool = var_152_bool;
		if(var_211_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_149_string);
		RemoveEnvelope();
		var_150_object = 0;
	}
	return 20;
	
}


func_96(var_134_object, var_135_bool)
{
	StopGroup0();
	var_136_object = Obj(); var_137_bool = 0;
	var_134_object = var_136_object;
	var_135_bool = var_137_bool;
	TaskCall(1);
	func_107(var_138_object, var_139_bool, var_136_object, var_137_bool);
	TaskReturn();
	return 0;
}


func_1375(var_296_cvector)
{
	var_297_cvector = CVector(0,0,0); var_298_float = 0; var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_bool = 0; var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_cvector = CVector(0,0,0); var_305_float = 0; var_306_bool = 0;
	GetPosition(var_302_cvector);
	GetHeight(var_303_float);
	var_307_float = GetByIndex(var_302_cvector, 1);
	var_309_float = var_303_float / (int)2;
	var_307_float = var_307_float + var_309_float;
	SetByIndex(var_302_cvector, 1) = var_307_float;
	var_304_cvector = var_296_cvector - var_302_cvector;
	var_310_int = var_304_cvector | var_304_cvector;
	var_305_float = sqrt(var_310_int);
	var_312_bool = var_305_float < (int)50;
	if(var_312_bool != 0) {
		var_306_bool = 0;
	} else {
			var_317_float = GetByIndex(var_304_cvector, 1);
			var_318_float = var_317_float / var_305_float;
			var_306_bool = var_318_float < (float)-0.1428571492433548;
	}
	var_314_bool = var_306_bool;
	if(var_314_bool != 0) {
		var_315_string = "cattack";
	} else {
		var_316_string = "attack";

	}
	PlayAnimation("all", var_315_string);
	return 10;
	
}


func_488(var_36_cvector, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0);
	GetPosition(var_40_cvector);
	@@var_37_object:GetPosition(var_41_cvector);
	var_36_cvector = var_41_cvector - var_40_cvector;
	return 4;
}


func_1000(var_113_int)
{
	var_114_int = 0; var_115_int = 0;
	GetVariable("branch", var_115_int);
	var_115_int = var_113_int;
	return 2;
}


func_1770(var_144_bool, var_145_object, var_146_object)
{
	var_147_bool = var_146_object == 0; //@ne
	if(var_147_bool != 0) {
		var_144_bool = 0;
		return 0;
	}
	var_144_bool = 1;
	var_148_bool = 0; var_149_object = Obj();
	var_145_object = var_149_object;
	func_1796(var_148_bool, var_149_object);
	var_150_bool = var_148_bool == 0; //@nz
	if(var_150_bool != 1) {
		var_151_float = 0; var_152_object = Obj();
		var_146_object = var_152_object;
		func_495(var_151_float, var_152_object);
		var_153_float = 0; var_154_object = Obj();
		var_145_object = var_154_object;
		func_495(var_153_float, var_154_object);
		var_156_int = var_153_float - (int)25;
		var_157_bool = var_151_float < var_156_int;
		if(var_157_bool != 1) {
			var_144_bool = 0;
		}
	}
	return 0;
}


func_107(var_0_object, var_1_object, var_136_object, var_137_bool)
{
	var_0_object = var_136_object;
	var_1_object = var_137_bool;
	Face(var_0_object);
	
Label_112:
	var_140_bool = 0;
	func_1319((bool)1);
	SetAttackState((bool)1);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	
Label_125:
	var_176_bool = 0;
	var_176_bool = 0;
	var_177_bool = 0;
	var_177_bool = 1;
	var_178_bool = var_0_object == 0; //@ne
	if(var_178_bool != 1) {
		var_179_bool = var_1_object == 0; //@nz
		if(var_179_bool != 1) {
			var_177_bool = 0;
		}
	}
	if(var_177_bool != 0) {
		var_180_bool = 0;
		var_180_bool = 1;
		var_181_bool = 0; var_182_object = Obj();
		var_182_object = var_0_object;
		func_1796(var_181_bool, var_182_object);
		var_271_bool = var_181_bool == 0; //@nz
		if(var_271_bool != 1) {
			var_272_bool = 0; var_273_object = Obj();
			var_273_object = var_0_object;
			func_1729(var_272_bool, var_273_object);
			var_279_bool = var_272_bool == 0; //@nz
			if(var_279_bool != 1) {
				var_180_bool = 0;
			}
		}
		if(var_180_bool != 0) {
			var_176_bool = 1;
		}
	}
	if(var_176_bool != 0) {
	} else {
		var_285_object = Obj();
		var_285_object = var_0_object;
		func_1406(var_285_object);
		WaitForAnimEnd();
		goto Label_125;
	}
	SetAttackState((bool)0);
	var_281_bool = 0;
	func_1319((bool)0);
	StopAsync();
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_284_bool = Obj() != 0; //@nn
	if(var_284_bool == 1) goto Label_112;
	return 0;
	
}


func_1006(var_6_object)
{
	var_7_int = 0;
	func_1000(var_7_int);
	var_12_bool = var_7_int == (int)1;
	if(var_12_bool != 0) {
		WorkWithCorpse(var_6_object);
	} else {
		Barter(var_6_object);
	}
	return 0;
	
}


func_495(var_81_float, var_82_object)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0);
	GetPosition(var_86_cvector);
	@@var_82_object:GetPosition(var_87_cvector);
	var_88_cvector = var_87_cvector - var_86_cvector;
	var_81_float = var_88_cvector | var_88_cvector;
	return 6;
}


func_1137(var_74_int, var_75_string)
{
	var_76_int = 0; var_77_int = 0;
	GetInvItemByName(var_77_int, var_75_string);
	var_77_int = var_74_int;
	return 2;
}


func_1142(var_11_bool, var_12_object, var_13_bool)
{
	var_14_string = ""; var_15_string = "";
	var_16_bool = 0; var_17_object = Obj(); var_18_string = "";
	var_12_object = var_17_object;
	func_508(var_16_bool, var_17_object, "class");
	var_25_bool = var_16_bool == 0; //@nz
	if(var_25_bool != 0) {
		var_11_bool = 0;
		return 2;
	}
	@@var_12_object:GetProperty("class", var_15_string);
	var_27_bool = 0;
	var_27_bool = 1;
	var_28_bool = 0;
	var_28_bool = 1;
	var_29_bool = 0;
	var_29_bool = 1;
	var_30_bool = 0;
	var_30_bool = 1;
	var_31_bool = 0;
	var_31_bool = 1;
	var_32_bool = 0;
	var_32_bool = 1;
	var_33_bool = 0;
	var_33_bool = 1;
	var_34_bool = 0;
	var_34_bool = 1;
	var_35_bool = 0;
	var_35_bool = 1;
	var_36_bool = 0;
	var_36_bool = 1;
	var_38_bool = var_15_string == "patrol";
	if(var_38_bool != 1) {
		var_40_bool = var_15_string == "sanitar";
		if(var_40_bool != 1) {
			var_36_bool = 0;
		}
	}
	if(var_36_bool != 1) {
		var_42_bool = var_15_string == "soldier";
		if(var_42_bool != 1) {
			var_35_bool = 0;
		}
	}
	if(var_35_bool != 1) {
		var_44_bool = var_15_string == "woman";
		if(var_44_bool != 1) {
			var_34_bool = 0;
		}
	}
	if(var_34_bool != 1) {
		var_46_bool = var_15_string == "wasted_girl";
		if(var_46_bool != 1) {
			var_33_bool = 0;
		}
	}
	if(var_33_bool != 1) {
		var_48_bool = var_15_string == "vaxxabitka";
		if(var_48_bool != 1) {
			var_32_bool = 0;
		}
	}
	if(var_32_bool != 1) {
		var_50_bool = var_15_string == "vaxxabit";
		if(var_50_bool != 1) {
			var_31_bool = 0;
		}
	}
	if(var_31_bool != 1) {
		var_52_bool = var_15_string == "little_girl";
		if(var_52_bool != 1) {
			var_30_bool = 0;
		}
	}
	if(var_30_bool != 1) {
		var_54_bool = var_15_string == "girl";
		if(var_54_bool != 1) {
			var_29_bool = 0;
		}
	}
	if(var_29_bool != 1) {
		var_56_bool = var_15_string == "dohodyaga";
		if(var_56_bool != 1) {
			var_28_bool = 0;
		}
	}
	if(var_28_bool != 1) {
		var_58_bool = var_15_string == "nudegirl";
		if(var_58_bool != 1) {
			var_27_bool = 0;
		}
	}
	if(var_27_bool != 0) {
		var_11_bool = 1;
		return 2;
	}
	var_59_bool = var_13_bool;
	if(var_59_bool != 0) {
		var_11_bool = 0;
		return 2;
	}
	var_11_bool = 1;
	var_60_bool = 0;
	var_60_bool = 1;
	var_61_bool = 0;
	var_61_bool = 1;
	var_62_bool = 0;
	var_62_bool = 1;
	var_63_bool = 0;
	var_63_bool = 1;
	var_64_bool = 0;
	var_64_bool = 1;
	var_66_bool = var_15_string == "worker";
	if(var_66_bool != 1) {
		var_68_bool = var_15_string == "butcher";
		if(var_68_bool != 1) {
			var_64_bool = 0;
		}
	}
	if(var_64_bool != 1) {
		var_70_bool = var_15_string == "boy";
		if(var_70_bool != 1) {
			var_63_bool = 0;
		}
	}
	if(var_63_bool != 1) {
		var_72_bool = var_15_string == "unosha";
		if(var_72_bool != 1) {
			var_62_bool = 0;
		}
	}
	if(var_62_bool != 1) {
		var_74_bool = var_15_string == "wasted_male";
		if(var_74_bool != 1) {
			var_61_bool = 0;
		}
	}
	if(var_61_bool != 1) {
		var_76_bool = var_15_string == "alkash";
		if(var_76_bool != 1) {
			var_60_bool = 0;
		}
	}
	if(var_60_bool != 1) {
		var_78_bool = var_15_string == "morlok";
		if(var_78_bool != 1) {
			var_11_bool = 0;
		}
	}
	return 2;
}


func_503(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsPlayerActor(var_14_object, var_16_bool);
	var_16_bool = var_13_bool;
	return 2;
}


func_634(var_108_bool, var_109_object)
{
	var_110_int = 0; var_111_int = 0;
	var_112_bool = 0; var_113_object = Obj();
	var_109_object = var_113_object;
	func_598(var_112_bool, var_113_object);
	var_129_bool = var_112_bool == 0; //@nz
	if(var_129_bool != 0) {
		var_108_bool = 0;
		return 2;
	}
	var_130_bool = 0; var_131_object = Obj(); var_132_string = "";
	var_109_object = var_131_object;
	func_508(var_130_bool, var_131_object, "noaccess");
	var_133_bool = var_130_bool == 0; //@nz
	if(var_133_bool != 0) {
		var_108_bool = 1;
		return 2;
	}
	@@var_109_object:GetProperty("noaccess", var_111_int);
	var_108_bool = var_111_int == (int)0;
	return 2;
}


func_1019(var_62_int, var_63_int)
{
	var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_bool = 0;
	var_68_bool = var_62_int > var_63_int;
	if(var_68_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_66_int = 0;
	var_70_bool = var_62_int != var_63_int;
	if(var_70_bool != 0) {
		var_71_int = var_63_int - var_62_int;
		irand(var_66_int, var_71_int);
	} else {
		var_80_bool = var_62_int == (int)0;
		if(var_80_bool == 0) goto Label_1037;
		return 4;
	}
Label_1037:
	var_66_int = var_66_int + var_62_int;
	var_73_bool = var_66_int == (int)0;
	if(var_73_bool != 0) {
		return 4;
	}
	var_74_int = 0; var_75_string = "";
	func_1137(var_74_int, "Money");
	AddItem(var_67_bool, var_74_int, (int)0, var_66_int);
	return 4;
	
}


func_508(var_45_bool, var_46_object, var_47_string)
{
	var_48_bool = 0; var_49_bool = 0;
	var_52_bool = IsFuncExist(var_46_object, "HasProperty", (int)2);
	var_53_bool = var_52_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_45_bool = 0;
		return 2;
	}
	@@var_46_object:HasProperty(var_47_string, var_49_bool);
	var_49_bool = var_45_bool;
	return 2;
}


func_1406(var_285_object)
{
	var_286_cvector = CVector(0,0,0); var_287_float = 0; var_288_cvector = CVector(0,0,0); var_289_float = 0;
	@@var_285_object:GetPosition(var_288_cvector);
	var_292_bool = IsFuncExist(var_285_object, "@GetHeight", (int)1);
	if(var_292_bool != 0) {
		@@var_285_object:GetHeight(var_289_float);
		var_293_float = GetByIndex(var_288_cvector, 1);
		var_295_float = var_289_float / (int)2;
		var_293_float = var_293_float + var_295_float;
		SetByIndex(var_288_cvector, 1) = var_293_float;
	}
	var_296_cvector = CVector(0,0,0);
	var_288_cvector = var_296_cvector;
	func_1375(var_296_cvector);
	return 4;
}


