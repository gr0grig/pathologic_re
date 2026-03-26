// @IMPORTS: GetSeeThreshold/1,GetSeeFOV/1,SetSeeThreshold/1,SetSeeFOV/1,PlayAnimation/2,WaitForAnimEnd/1,Face/1,SetTimer/2,irand/2,Sleep/2,StopAsync/0,KillTimer/1,Stop/0,StopGroup0/0,FindActor/2,CanSee/2,GetPFPosition/1,GetDirection/1,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,Sleep/1,GetPosition/1,FollowPath/5,RequestClearPath/1,IsPlayerActor/2,CanReachByPF/2,WaitForAnimEnd/0,rand/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,CreateObjectSet/1,GetGameTime/1,Trace/1,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,ResetAAS/0,GetProperty/2,SignalDeath/1,ReportReputationChange/3
// @STRINGS: W:all|W:hunt|W:player|A:GetPosition|A:GetPFPosition|W:walk|W:run|W:@GetAttackDistance|A:GetAttackDistance|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:attack|W:bjump|W:attack_middle|W:attack_end|W:IsAttacking|A:IsAttacking|W:reputation|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:fire|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:GenerateMoney: iMin > iMax|W:Money|W:bottle_water|W:rusk|W:bandage|W:tourniquet|W:packet|W:hook|W:watch|W:alpha_pills|W:beta_pills|W:gamma_pills|W:revolver_ammo|W:rifle_ammo|A:in|A:add
// @GLOBALS: 0:object:
// @RUN_OP: 0xa7
// @RUN_TASK: 1
// @TASK_0: vars=object,float,float params=1
// @EVENT_1: op=0xe vars=object
// @EVENT_17: op=0x1c vars=object
// @EVENT_7: op=0x30 vars=int
// @EVENT_30: op=0x39 vars=object,object
// @EVENT_41: op=0x4d vars=object
// @EVENT_3: op=0x80 vars=object
// @EVENT_4: op=0x93 vars=object
// @TASK_1: vars=cvector,cvector,int params=0
// @EVENT_41: op=0xb2 vars=object
// @EVENT_1: op=0xbc vars=object
// @EVENT_3: op=0xca vars=object
// @EVENT_17: op=0xd8 vars=object
// @EVENT_30: op=0xec vars=object,object
// @EVENT_7: op=0xfe vars=int
// @TASK_2: vars=bool,object params=6
// @EVENT_17: op=0x177 vars=object
// @EVENT_30: op=0x17d vars=object,object
// @EVENT_7: op=0x1ea vars=int
// @EVENT_10: op=0x1fc vars=object
// @EVENT_41: op=0x207 vars=object
// @TASK_3: vars=object,int,int,bool,float,int params=2
// @EVENT_17: op=0x229 vars=object
// @EVENT_30: op=0x22f vars=object,object
// @TASK_4: vars= params=1
// @EVENT_0: op=0x473 vars=object
// @EVENT_22: op=0x4e8 vars=object,int,float,float
// @EVENT_16: op=0x4ea vars=object,string
// @EVENT_41: op=0x4ec vars=object
// @STANDALONE_EVENT_22: op=0x777 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x77f vars=object,string
// @STANDALONE_EVENT_41: op=0x78c vars=object
// @PE: 0x0,0xe,0x1c,0x30,0x39,0x4d,0x80,0x93,0xb2,0xbc,0xca,0xd8,0xec,0xf8,0x177,0x17d,0x1ea,0x1fc,0x207,0x210,0x21b,0x223,0x226,0x229,0x22f,0x449,0x464,0x4d2,0x4e8,0x4ea,0x4ec,0x4ee,0x5fa,0x601,0x739,0x741,0x748,0x760,0x76f,0x777,0x78c

task_0_event_1(var_0_object, var_1_float, var_2_float, var_3_object, var_4_cvector, var_5_cvector, var_6_int, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_int = var_16_object;
	func_1857(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_69(var_13_float, var_14_int);
		var_67_object = Obj();
		var_14_int = var_67_object;
		func_1864(var_67_object);
	}
	return 0;
}


	task_0_event_17(var_0_object, var_1_float, var_2_float, var_3_object, var_4_object, var_5_cvector, var_6_cvector, var_7_int, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_49_object)
	{
	var_50_bool = 0; var_51_object = Obj();
	var_49_object = var_51_object;
	func_1424(var_50_bool, var_51_object);
	var_78_bool = var_50_bool == 0; //@nz
	if(var_78_bool != 0) {
		var_79_object = Obj();
		var_49_object = var_79_object;
		func_1875(var_79_object);
		return 0;
	}
	func_69(var_15_int, var_49_object);
	var_87_object = Obj();
	var_49_object = var_87_object;
	func_1888(var_87_object);
	return 0;
	}


task_0_event_7(var_0_object, var_1_float, var_2_float, var_3_int, var_4_cvector, var_5_cvector, var_6_int, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int)
{
	var_16_bool = var_14_int != (int)100;
	if(var_16_bool != 0) {
		return 0;
	}
	func_69(var_13_float, var_14_int);
	return 0;
}


task_0_event_30(var_0_object, var_1_float, var_2_float, var_3_object, var_4_object, var_5_cvector, var_6_cvector, var_7_int, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj();
	var_14_float = var_17_object;
	var_15_int = var_18_object;
	func_1938(var_16_bool, var_17_object, var_18_object);
	if(var_16_bool != 0) {
		var_14_float = Obj();
		func_28();
	}
	return 0;
}


task_0_event_41(var_0_object, var_1_float, var_2_float, var_3_object, var_4_cvector, var_5_cvector, var_6_int, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int)
{
	func_69(var_13_float, var_14_int);
	var_14_int = Obj();
	func_1932();
	return 0;
}


task_0_event_3(var_0_object, var_1_float, var_2_float, var_3_object, var_4_cvector, var_5_cvector, var_6_int, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int)
{
	var_15_bool = 0;
	var_15_bool = 0;
	var_16_bool = var_14_int == var_0_object;
	if(var_16_bool != 0) {
		var_17_bool = 0; var_18_object = Obj();
		var_14_int = var_18_object;
		func_1836(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			var_15_bool = 1;
		}
	}
	if(var_15_bool != 0) {
		Face(var_0_object);
		SetTimer((int)100, (int)15);
	}
	return 0;
}


task_0_event_4(var_0_object, var_1_float, var_2_float, var_3_object, var_4_cvector, var_5_cvector, var_6_int, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int)
{
	var_15_bool = var_14_int == var_0_object;
	if(var_15_bool != 0) {
		StopAsync();
		KillTimer((int)100);
	}
	return 0;
}


task_1_event_41(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int)
{
	func_174();
	var_14_int = Obj();
	func_1932();
	return 0;
}


task_1_event_1(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_int = var_16_object;
	func_1857(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_174();
		var_66_object = Obj();
		var_14_int = var_66_object;
		func_1864(var_66_object);
	}
	return 0;
}


task_1_event_3(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_int = var_16_object;
	func_1836(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_174();
		var_69_object = Obj();
		var_14_int = var_69_object;
		func_1849(var_69_object);
	}
	return 0;
}


	task_1_event_17(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_object, var_16_bool, var_17_object, var_18_bool, var_37_object, var_38_object)
	{
	var_39_bool = 0; var_40_object = Obj();
	var_38_object = var_40_object;
	func_1424(var_39_bool, var_40_object);
	var_73_bool = var_39_bool == 0; //@nz
	if(var_73_bool != 0) {
		var_74_object = Obj();
		var_38_object = var_74_object;
		func_1875(var_74_object);
		return 0;
	}
	func_174();
	var_81_object = Obj();
	var_38_object = var_81_object;
	func_1888(var_81_object);
	return 0;
	}


task_1_event_30(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj();
	var_14_float = var_17_object;
	var_15_int = var_18_object;
	func_1938(var_16_bool, var_17_object, var_18_object);
	if(var_16_bool != 0) {
		var_14_float = Obj();
		func_216();
	}
	return 0;
}


task_1_event_7(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_int, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int)
{
	var_15_object = Obj(); var_16_bool = 0; var_17_object = Obj(); var_18_bool = 0;
	var_20_bool = var_14_int == (int)25;
	if(var_20_bool != 0) {
		FindActor(var_17_object, "player");
		CanSee(var_18_bool, var_17_object);
		var_22_bool = 0;
		var_22_bool = 1;
		var_23_bool = var_18_bool;
		if(var_23_bool != 1) {
			var_24_float = 0; var_25_object = Obj();
			var_17_object = var_25_object;
			func_1277(var_24_float, var_25_object);
			var_33_bool = var_24_float <= (int)22500;
			if(var_33_bool != 1) {
				var_22_bool = 0;
			}
		}
		if(var_22_bool != 0) {
			var_2_float = var_2_float + (int)1;
			var_36_bool = var_2_float > (int)5;
			if(var_36_bool != 0) {
				var_37_object = Obj();
				var_17_object = var_37_object;
				func_248(var_37_object);
				var_2_float = 0;
			}
		}
		var_17_object = 0;
	}
	return 4;
}


task_2_event_17(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int)
{
	var_15_object = Obj();
	var_14_int = var_15_object;
	func_1875(var_15_object);
	return 0;
}


task_2_event_30(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj();
	var_14_float = var_17_object;
	var_15_int = var_18_object;
	func_1938(var_16_bool, var_17_object, var_18_object);
	return 0;
}


task_2_event_7(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_int, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int)
{
	var_16_bool = var_14_int != (int)0;
	if(var_16_bool != 0) {
		return 0;
	}
	var_17_bool = 0; var_18_object = Obj();
	var_18_object = var_1_float;
	func_528(var_17_bool, var_18_object);
	var_53_bool = var_17_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_2_event_10(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int)
{
	RequestClearPath(var_14_int);
	return 0;
}


task_2_event_41(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int)
{
	func_512(var_14_int);
	var_14_int = Obj();
	func_1932();
	return 0;
}


task_3_event_17(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_object)
{
	var_15_object = Obj();
	var_14_object = var_15_object;
	func_1875(var_15_object);
	return 0;
}


task_3_event_30(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_object, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj();
	var_14_object = var_17_object;
	var_15_object = var_18_object;
	func_1938(var_16_bool, var_17_object, var_18_object);
	return 0;
}


task_4_event_0(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsOverrideActive(var_16_bool);
	var_17_bool = var_16_bool == 0; //@nz
	if(var_17_bool != 0) {
		WorkWithCorpse(var_14_object);
	}
	return 2;
}


task_4_event_22(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_object, var_15_int, var_16_float, var_17_float)
{
	return 0;
}


task_4_event_16(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_object, var_15_string)
{
	return 0;
}


task_4_event_41(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_object)
{
	return 0;
}


event_22(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_object, var_15_int, var_16_float, var_17_float)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0;
	var_14_object = var_18_object;
	var_15_int = var_19_int;
	var_16_float = var_20_float;
	func_1448(var_19_int, var_20_float);
	return 0;
}


event_16(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_object, var_15_string)
{
	var_16_float = 0; var_17_float = 0;
	var_19_bool = var_15_string == "health";
	if(var_19_bool != 0) {
		GetProperty("health", var_17_float);
		var_22_bool = var_17_float <= (int)0;
		if(var_22_bool != 0) {
			SignalDeath(var_14_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_object)
{
	var_15_object = Obj();
	var_14_object = var_15_object;
	func_1903(var_15_object);
	return 0;
}


main(var_0_object, var_1_float, var_2_float, var_3_cvector, var_4_cvector, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int)
{
	func_1798();
	func_288(var_12_float, var_13_int);
	return 0;
}


func_512(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1537(var_38_float, var_39_float, var_40_float, var_41_float)
{
	var_42_bool = var_39_float < var_40_float;
	if(var_42_bool != 0) {
		var_40_float = var_38_float;
		return 0;
	}
	var_43_bool = var_39_float > var_41_float;
	if(var_43_bool != 0) {
		var_41_float = var_38_float;
		return 0;
	}
	var_39_float = var_38_float;
	return 0;
}


func_1793(var_84_int, var_85_string)
{
	var_86_int = 0; var_87_int = 0;
	GetInvItemByName(var_87_int, var_85_string);
	var_87_int = var_84_int;
	return 2;
}


func_0(var_1_float, var_2_float, var_70_object)
{
	GetSeeThreshold(var_1_float);
	GetSeeFOV(var_2_float);
	var_75_float = var_1_float / (float)1.5;
	SetSeeThreshold(var_75_float);
	var_76_object = Obj();
	var_70_object = var_76_object;
	func_101(var_70_object, var_76_object);
	return 0;
}


func_388(var_0_object, var_1_float, var_152_bool, var_153_object, var_154_float, var_155_float, var_156_bool, var_157_bool)
{
	var_160_bool = 0; var_161_bool = 0; var_162_object = Obj(); var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_float = 0; var_167_object = Obj(); var_168_bool = 0; var_169_bool = 0; var_170_object = Obj(); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_float = 0; var_175_object = Obj();
	var_0_object = false;
	var_1_float = var_153_object;
	var_157_bool = var_169_bool;
	
Label_392:
	var_176_bool = 0; var_177_object = Obj();
	var_153_object = var_177_object;
	func_528(var_176_bool, var_177_object);
	var_180_bool = var_176_bool == 0; //@nz
	if(var_180_bool != 0) {
		var_152_bool = 0;
		return 16;
	}
	@@var_153_object:GetPosition(var_171_cvector);
	GetPosition(var_172_cvector);
	var_173_cvector = var_171_cvector - var_172_cvector;
	var_174_float = var_173_cvector | var_173_cvector;
	var_181_bool = 0;
	var_181_bool = 0;
	var_183_bool = var_155_float > (int)0;
	if(var_183_bool != 0) {
		var_184_float = var_155_float * var_155_float;
		var_185_bool = var_174_float > var_184_float;
		if(var_185_bool != 0) {
			var_181_bool = 1;
		}
	}
	if(var_181_bool != 0) {
		Stop();
		var_152_bool = 0;
		return 16;
	}
	var_186_float = var_154_float * var_154_float;
	var_187_bool = var_174_float > var_186_float;
	if(var_187_bool != 0) {
		@@var_153_object:GetPFPosition(var_171_cvector);
		FindPathTo(var_175_object, var_171_cvector);
		var_188_bool = var_175_object != 0; //@nn
		if(var_188_bool != 0) {
			var_175_object = var_170_object;
			var_175_object = 0;
		}
		var_189_bool = var_170_object != 0; //@nn
		if(var_189_bool != 0) {
			var_190_bool = var_169_bool;
			if(var_190_bool == 0) goto Label_441;
			var_169_bool = 0;
			RotatePath(var_170_object, var_168_bool);
			var_191_bool = var_168_bool == 0; //@nz
			if(var_191_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_194_string = "";
				func_535(var_194_string);
				var_195_string = "";
				func_537(var_195_string);
				FollowPath(var_170_object, var_156_bool, var_168_bool, var_194_string, var_195_string);
				var_196_bool = var_168_bool == 0; //@nz
				if(var_196_bool != 0) {
					var_197_object = var_0_object;
					if(var_197_object != 0) {
						var_170_object = 0;
						goto Label_488;
					EMIT "GOTO 0x1cd";
					}
				} else {
					var_170_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_168_bool);
					var_200_bool = var_168_bool == 0; //@nz
					if(var_200_bool != 0) {
						var_201_object = var_0_object;
						if(var_201_object != 0) {
							var_170_object = 0;
							goto Label_488;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_488;
	}
			var_175_object = 0;
			goto Label_486;

		Label_486:
			var_170_object = 0;

		}
		goto Label_392;
	}
Label_488:
	var_152_bool = !var_0_object;
	return 16;
	
}


func_1285(var_28_bool, var_29_object, var_30_string)
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


func_1798()
{
	var_14_object = GlobalVars[0];
	func_1548(Obj());
	var_15_object = var_14_object;
	GlobalVars[0] = var_14_object;
	return 0;
}


func_1548(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	CreateObjectSet(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1805(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_float = 0; var_24_bool = 0; var_25_float = 0;
	var_26_bool = 0; var_27_object = Obj();
	var_21_object = var_27_object;
	func_1424(var_26_bool, var_27_object);
	var_60_bool = var_26_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	var_61_object = GlobalVars[0];
	@@var_61_object:in(var_24_bool, var_21_object);
	var_62_bool = var_24_bool;
	if(var_62_bool != 0) {
		var_20_bool = 1;
		return 4;
	}
	var_63_bool = 0; var_64_object = Obj(); var_65_string = "";
	var_21_object = var_64_object;
	func_1285(var_63_bool, var_64_object, "reputation");
	var_66_bool = var_63_bool == 0; //@nz
	if(var_66_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	@@var_21_object:GetProperty("reputation", var_25_float);
	var_20_bool = var_25_float < (float)0.10000000149011612;
	return 4;
}


func_1424(var_19_bool, var_20_object)
{
	var_21_int = 0; var_22_int = 0;
	var_23_bool = 0; var_24_object = Obj();
	var_20_object = var_24_object;
	func_1388(var_23_bool, var_24_object);
	var_40_bool = var_23_bool == 0; //@nz
	if(var_40_bool != 0) {
		var_19_bool = 0;
		return 2;
	}
	var_41_bool = 0; var_42_object = Obj(); var_43_string = "";
	var_20_object = var_42_object;
	func_1285(var_41_bool, var_42_object, "noaccess");
	var_50_bool = var_41_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_19_bool = 1;
		return 2;
	}
	@@var_20_object:GetProperty("noaccess", var_22_int);
	var_19_bool = var_22_int == (int)0;
	return 2;
}


func_528(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	func_1424(var_19_bool, var_20_object);
	var_19_bool = var_17_bool;
	return 0;
}


func_1938(var_16_bool, var_17_object, var_18_object)
{
	var_19_float = 0; var_20_bool = 0; var_21_float = 0; var_22_bool = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_string = "";
	var_18_object = var_24_object;
	func_1285(var_23_bool, var_24_object, "reputation");
	var_32_bool = var_23_bool == 0; //@nz
	if(var_32_bool != 0) {
		var_16_bool = 0;
		return 4;
	}
	@@var_18_object:GetProperty("reputation", var_21_float);
	var_35_bool = var_21_float < (float)0.5;
	if(var_35_bool != 0) {
		var_16_bool = 0;
		return 4;
	}
	CanSee(var_22_bool, var_17_object);
	var_36_bool = 0;
	var_36_bool = 1;
	var_37_bool = var_22_bool;
	if(var_37_bool != 1) {
		var_38_float = 0; var_39_object = Obj();
		var_17_object = var_39_object;
		func_1277(var_38_float, var_39_object);
		var_47_bool = var_38_float <= (float)160000.0;
		if(var_47_bool != 1) {
			var_36_bool = 0;
		}
	}
	if(var_36_bool != 0) {
		ReportReputationChange(var_17_object, var_18_object, (float)-0.20000000298023224);
		var_16_bool = 1;
		return 4;
	}
	var_16_bool = 0;
	return 4;
}


func_1297(var_20_bool, var_21_object, var_22_string, var_23_float, var_24_float, var_25_float)
{
	var_26_float = 0; var_27_float = 0;
	var_28_bool = 0; var_29_object = Obj(); var_30_string = "";
	var_21_object = var_29_object;
	var_22_string = var_30_string;
	func_1285(var_28_bool, var_29_object, var_30_string);
	var_37_bool = var_28_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	@@var_21_object:GetProperty(var_22_string, var_27_float);
	var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0;
	var_39_float = var_27_float + var_23_float;
	var_24_float = var_40_float;
	var_25_float = var_41_float;
	func_1537(var_38_float, var_39_float, var_40_float, var_41_float);
	@@var_21_object:SetProperty(var_22_string, var_38_float);
	var_20_bool = 1;
	return 2;
}


func_1554(var_54_int)
{
	var_55_float = 0; var_56_float = 0;
	GetGameTime(var_56_float);
	var_58_int = 0;
	var_58_int = var_56_float / (int)24;
	var_54_int = (int)1 + var_58_int;
	return 2;
}


func_1530(var_381_float, var_382_float, var_383_float)
{
	var_386_bool = var_382_float < var_383_float;
	if(var_386_bool != 0) {
		var_382_float = var_381_float;
	} else {
		var_383_float = var_381_float;
	}
	return 0;
	
}


func_535(var_194_string)
{
	var_194_string = "walk";
	return 0;
}


func_920(var_417_bool, var_418_float)
{
	var_419_float = 0; var_420_bool = 0; var_421_float = 0; var_422_bool = 0;
	rand(var_421_float);
	var_423_bool = var_421_float < var_418_float;
	if(var_423_bool != 0) {

	Label_925:
		IsAnimationPlaying(var_422_bool);
		var_424_bool = var_422_bool == 0; //@nz
		if(var_424_bool != 0) {
		} else {
			var_425_bool = 0;
			func_984(var_422_bool, var_425_bool);
			if(var_425_bool != 0) {
				var_417_bool = 1;
				sync();
				goto Label_925;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_942;
	
Label_942:
	var_417_bool = 0;
	return 4;
	
}


func_537(var_195_string)
{
	var_195_string = "run";
	return 0;
}


func_1563(var_51_int, var_52_int)
{
	var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_int = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0;
	var_70_bool = var_51_int > var_52_int;
	if(var_70_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_72_bool = var_51_int != var_52_int;
	if(var_72_bool != 0) {
		var_73_int = var_52_int - var_51_int;
		irand(var_67_int, var_73_int);
	} else {
		var_79_bool = var_51_int == (int)0;
		if(var_79_bool == 0) goto Label_1581;
		return 8;
	}
Label_1581:
	(int)0 = (int)0 + var_51_int;
	var_75_bool = var_66_int == (int)0;
	if(var_75_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_68_int, "Money");
	AddItem(var_69_bool, var_68_int, (int)0, var_66_int);
	return 8;
	
}


func_156(var_0_object)
{
	Stop();
	StopGroup0();
	StopAsync();
	KillTimer((int)100);
	var_0_object = 0;
	return 0;
}


func_1052(var_0_object, var_238_bool)
{
	var_239_bool = 0; var_240_bool = 0;
	var_243_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_243_bool != 0) {
		@@@var_0_object:IsAttacking(var_240_bool);
		var_240_bool = var_238_bool;
		return 2;
	}
	var_238_bool = 0;
	return 2;
}


func_539(var_83_object, var_84_bool)
{
	var_91_object = Obj(); var_92_bool = 0; var_93_float = 0;
	var_83_object = var_91_object;
	var_84_bool = var_92_bool;
	func_566(var_88_bool, var_89_float, var_90_int, var_83_object, var_84_bool, var_91_object, var_92_bool, (float)180.0);
	return 0;
}


func_288(var_0_object, var_1_float)
{
	var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_object = Obj(); var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_object = Obj();
	GetPFPosition(var_1_float);
	GetDirection(var_0_object);
	
Label_293:
	SetTimer((int)25, (int)1);
	irand(var_22_int, (int)60);
	var_30_int = var_22_int + (int)30;
	Sleep(var_30_int, var_23_bool);
	var_31_bool = var_23_bool;
	if(var_31_bool != 0) {
		func_187();
	} else {
		GetPFPosition(var_24_cvector);
		var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0);
		var_33_cvector = var_1_float;
		var_24_cvector = var_34_cvector;
		func_1526(var_32_float, var_33_cvector, var_34_cvector);
		var_38_bool = var_32_float > (int)40000;
		if(var_38_bool != 0) {
			FindPathTo(var_25_object, var_1_float);
			var_39_bool = var_25_object != 0; //@nn
			if(var_39_bool != 0) {
				RotatePath(var_25_object, var_23_bool);
				var_40_bool = var_23_bool == 0; //@nz
				if(var_40_bool != 0) {
				} else {
					FollowPath(var_25_object, (bool)0, var_23_bool);
					var_42_bool = var_23_bool == 0; //@nz
					if(var_42_bool != 0) {
						goto Label_367;
					}
					var_43_float = GetByIndex(var_0_object, 0);
					var_44_float = GetByIndex(var_0_object, 2);
					Rotate(var_43_float, var_44_float, var_23_bool);
					var_45_bool = var_23_bool == 0; //@nz
					if(var_45_bool != 0) {
						goto Label_367;
					}
					WaitForAnimEnd(var_23_bool);
					var_46_bool = var_23_bool == 0; //@nz
					if(var_46_bool != 0) {
						goto Label_367;
					}
					goto Label_368;
				EMIT "GOTO 0x160";
			}
				Sleep((int)1);
				var_25_object = 0;
				goto Label_367;
		}
			var_48_float = GetByIndex(var_0_object, 0);
			var_49_float = GetByIndex(var_0_object, 2);
			Rotate(var_48_float, var_49_float, var_23_bool);
			var_50_bool = var_23_bool == 0; //@nz
			if(var_50_bool != 0) {
				goto Label_367;
			}
			WaitForAnimEnd(var_23_bool);
			var_51_bool = var_23_bool == 0; //@nz
			if(var_51_bool != 0) {
				goto Label_367;
			}
			goto Label_368;
		}
	Label_367:
		goto Label_310;
	}
Label_368:
	goto Label_293;
	
}
EMIT "Return(); Pop(8)";


func_801(var_0_object, var_331_float, var_332_int)
{
	var_333_object = Obj(); var_334_float = 0; var_335_float = 0; var_336_object = Obj(); var_337_float = 0; var_338_float = 0;
	var_340_float = var_331_float * (float)0.8999999761581421;
	GetVictim(var_340_float, var_336_object);
	ReportAttack(var_0_object);
	var_341_bool = var_336_object == var_0_object;
	if(var_341_bool != 0) {
		var_342_float = 0; var_343_object = Obj(); var_344_int = 0;
		var_336_object = var_343_object;
		var_332_int = var_344_int;
		func_547(var_344_int);
		var_342_float = var_337_float;
		var_345_float = 0; var_346_object = Obj(); var_347_float = 0; var_348_int = 0;
		var_336_object = var_346_object;
		var_337_float = var_347_float;
		var_349_int = 0; var_350_object = Obj(); var_351_int = 0;
		var_336_object = var_350_object;
		var_332_int = var_351_int;
		func_550(var_351_int);
		var_349_int = var_348_int;
		func_1319(var_345_float, var_346_object, var_347_float, var_348_int);
		var_345_float = var_338_float;
		var_398_int = 0;
		func_1095(var_398_int);
		ReportHit(var_0_object, var_398_int, var_338_float, var_337_float);
		var_399_object = Obj(); var_400_float = 0;
		var_336_object = var_399_object;
		var_338_float = var_400_float;
		func_1097();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_547(var_342_float)
{
	var_342_float = 0.10000000149011612;
	return 0;
}


func_550(var_349_int)
{
	var_349_int = 0;
	return 0;
}


func_1319(var_345_float, var_346_object, var_347_float, var_348_int)
{
	var_352_int = 0; var_353_string = ""; var_354_int = 0; var_355_float = 0; var_356_float = 0; var_357_float = 0; var_358_int = 0; var_359_string = ""; var_360_int = 0; var_361_float = 0; var_362_float = 0; var_363_float = 0;
	var_364_bool = 0; var_365_object = Obj(); var_366_string = "";
	var_346_object = var_365_object;
	func_1285(var_364_bool, var_365_object, "health");
	var_367_bool = var_364_bool == 0; //@nz
	if(var_367_bool != 0) {
		var_345_float = 0.0;
		return 12;
	}
	var_368_bool = 0; var_369_object = Obj(); var_370_string = "";
	var_346_object = var_369_object;
	func_1285(var_368_bool, var_369_object, "armor");
	var_371_bool = var_368_bool == 0; //@nz
	if(var_371_bool != 0) {
		var_358_int = 0;
	} else {
			@@var_346_object:GetProperty("armor", var_358_int);
	}
	var_373_string = ""; var_374_int = 0;
	var_348_int = var_374_int;
	func_1262(var_373_string, var_374_int);
	var_359_string = "armor_" + var_373_string;
	var_377_bool = 0; var_378_object = Obj(); var_379_string = "";
	var_346_object = var_378_object;
	var_359_string = var_379_string;
	func_1285(var_377_bool, var_378_object, var_379_string);
	var_380_bool = var_377_bool == 0; //@nz
	if(var_380_bool != 0) {
		var_360_int = 0;
	} else {
		@@var_346_object:GetProperty(var_359_string, var_360_int);

	}
	var_381_float = 0; var_382_float = 0; var_383_float = 0;
	var_384_int = var_358_int + var_360_int;
	var_382_float = var_384_int / (float)100.0;
	func_1530(var_381_float, var_382_float, (float)1);
	var_381_float = var_361_float;
	@@var_346_object:GetProperty("health", var_362_float);
	var_389_int = (int)1 - var_361_float;
	var_363_float = var_347_float * var_389_int;
	var_391_float = 0; var_392_float = 0; var_393_float = 0; var_394_float = 0;
	var_392_float = var_362_float - var_363_float;
	func_1537(var_391_float, var_392_float, (float)0, (float)1);
	@@var_346_object:SetProperty("health", var_391_float);
	var_363_float = var_345_float;
	return 12;
	
}


func_1063(var_2_float, var_5_int)
{
	var_313_float = 0; var_314_int = 0; var_315_float = 0; var_316_int = 0;
	var_317_bool = var_2_float == 0; //@nz
	if(var_317_bool != 0) {
		return 4;
	}
	var_318_int = var_5_int;
	if(var_318_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_321_bool = var_5_int > (int)0;
		if(var_321_bool != 0) {
			return 4;
		}
	}
	rand(var_315_float);
	var_322_float = 0;
	func_1101(var_322_float);
	var_323_bool = var_315_float < var_322_float;
	if(var_323_bool != 0) {
		irand(var_316_int, var_2_float);
		var_316_int = var_316_int + (int)1;
		var_326_int = "attack" + var_316_int;
		Speak(var_326_int);
		var_327_int = 0;
		func_1099(var_327_int);
		var_5_int = var_327_int;
	}
	return 4;
}


func_1448(var_18_object, var_19_int)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_object = Obj(); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = "";
	var_41_bool = 0;
	var_41_bool = 0;
	var_43_bool = var_19_int != (int)4;
	if(var_43_bool != 0) {
		var_45_bool = var_19_int != (int)5;
		if(var_45_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		GetScene(var_31_object);
		GetPosition(var_33_cvector);
		GetEyesHeight(var_34_float);
		var_46_float = GetByIndex(var_33_cvector, 1);
		var_48_float = var_34_float / (int)2;
		var_46_float = var_46_float + var_48_float;
		SetByIndex(var_33_cvector, 1) = var_46_float;
		AddActorByType(var_32_object, "scripted", var_31_object, var_33_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_32_object = 0;
		var_31_object = 0;
	}
	var_52_bool = var_18_object == 0; //@ne
	if(var_52_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_35_int);
	var_54_bool = var_35_int < (int)0;
	if(var_54_bool != 0) {
		return 20;
	}
	@@var_18_object:GetPosition(var_36_cvector);
	GetPosition(var_37_cvector);
	GetDirection(var_38_cvector);
	var_39_cvector = var_37_cvector - var_36_cvector;
	var_55_float = GetByIndex(var_39_cvector, 0);
	var_56_float = GetByIndex(var_38_cvector, 0);
	var_57_float = var_55_float * var_56_float;
	var_58_float = GetByIndex(var_39_cvector, 2);
	var_59_float = GetByIndex(var_38_cvector, 2);
	var_60_float = var_58_float * var_59_float;
	var_61_int = var_57_float + var_60_float;
	var_63_bool = var_61_int >= (int)0;
	if(var_63_bool != 0) {
		var_40_string = "fhit";
	} else {
		var_40_string = "bhit";
	}
	var_66_int = var_40_string + "1";
	var_68_int = var_40_string + "2";
	FadeSecondaryAnimation("hit_react", var_66_int, var_68_int, (int)-10);
	return 20;
	
}


func_1836(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	IsPlayerActor(var_16_object, var_18_bool);
	var_19_bool = var_18_bool == 0; //@nz
	if(var_19_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_16_object = var_21_object;
	func_1805(var_20_bool, var_21_object);
	var_20_bool = var_15_bool;
	return 2;
}


func_174()
{
	func_370();
	return 0;
}


func_944(var_0_object, var_246_bool, var_247_float)
{
	var_248_bool = 0; var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_float = 0; var_253_bool = 0; var_254_cvector = CVector(0,0,0); var_255_cvector = CVector(0,0,0); var_256_cvector = CVector(0,0,0); var_257_float = 0;
	
Label_945:
	IsAnimationPlaying(var_253_bool);
	var_258_bool = var_253_bool == 0; //@nz
	if(var_258_bool != 0) {
	} else {
		var_259_bool = 0;
		func_984(var_257_float, var_259_bool);
		if(var_259_bool != 0) {
			var_246_bool = 1;
			return 10;
		}
		var_297_bool = 0; var_298_object = Obj();
		var_298_object = var_0_object;
		func_1424(var_297_bool, var_298_object);
		var_299_bool = var_297_bool == 0; //@nz
		if(var_299_bool != 0) {
			var_246_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_254_cvector);
		GetPFPosition(var_255_cvector);
		var_256_cvector = var_254_cvector - var_255_cvector;
		var_257_float = var_256_cvector | var_256_cvector;
		var_300_float = var_247_float * var_247_float;
		var_301_bool = var_257_float < var_300_float;
		if(var_301_bool != 0) {
			var_302_bool = 0; var_303_float = 0;
			var_247_float = var_303_float;
			func_840(var_256_cvector, var_257_float, var_302_bool, var_303_float);
			var_246_bool = 1;
			sync();
			goto Label_945;
		}
		return 10;
	}
	var_246_bool = 0;
	return 10;
	
}


func_566(var_0_object, var_3_cvector, var_5_int, var_91_object, var_92_bool, var_93_float, var_158_bool, var_220_bool)
{
	var_94_float = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_bool = 0; var_99_float = 0; var_100_cvector = CVector(0,0,0); var_101_float = 0; var_102_cvector = CVector(0,0,0); var_103_bool = 0; var_104_float = 0; var_105_float = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_bool = 0; var_109_bool = 0; var_110_float = 0; var_111_cvector = CVector(0,0,0); var_112_float = 0; var_113_cvector = CVector(0,0,0); var_114_bool = 0; var_115_float = 0;
	func_766(var_113_cvector, var_114_bool, var_115_float);
	var_5_int = 0;
	var_140_bool = IsFuncExist(var_91_object, "@GetAttackDistance", (int)1);
	if(var_140_bool != 0) {
		@@var_91_object:GetAttackDistance(var_105_float);
		var_105_float = var_105_float + (int)50;
	} else {
							var_93_float = var_105_float;
	}
	var_143_bool = var_105_float >= (int)150;
	if(var_143_bool != 0) {
		var_105_float = 150;
	}
	var_3_cvector = false;
	var_0_object = var_91_object;
	IsPlayerActor(var_0_object, var_108_bool);
	var_144_bool = var_92_bool;
	if(var_144_bool != 0) {
		var_109_bool = 0;
	} else {
						var_109_bool = 1;

	}
	var_110_float = (float)300.0 + var_105_float;
	
Label_596:
	var_146_bool = 0;
	var_146_bool = 0;
	var_147_bool = 0; var_148_object = Obj();
	var_148_object = var_0_object;
	func_1424(var_147_bool, var_148_object);
	if(var_147_bool != 0) {
		var_149_bool = var_3_cvector == 0; //@nz
		if(var_149_bool != 0) {
			var_146_bool = 1;
		}
	}
	if(var_146_bool != 0) {
		@@@var_0_object:GetPFPosition(var_106_cvector);
		GetPFPosition(var_107_cvector);
		var_111_cvector = var_106_cvector - var_107_cvector;
		var_112_float = var_111_cvector | var_111_cvector;
		var_150_float = var_110_float * var_110_float;
		var_151_bool = var_112_float >= var_150_float;
		if(var_151_bool != 0) {
			var_152_bool = 0; var_153_object = Obj(); var_154_float = 0; var_155_float = 0; var_156_bool = 0; var_157_bool = 0;
			var_153_object = var_0_object;
			var_105_float = var_154_float;
			TaskCall(2);
			func_388(var_158_bool, var_159_object, var_152_bool, var_153_object, var_154_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_205_bool = var_158_bool == 0; //@nz
			if(var_205_bool != 0) {
			} else {
				var_109_bool = 0;
		} else {
				var_211_float = var_93_float * var_93_float;
				var_212_bool = var_112_float >= var_211_float;
				if(var_212_bool != 0) {
					@@@var_0_object:GetPFPosition(var_113_cvector);
					CanReachByPF(var_114_bool, var_113_cvector);
					var_213_bool = var_114_bool == 0; //@nz
					if(var_213_bool != 0) {
						var_214_bool = 0; var_215_object = Obj(); var_216_float = 0; var_217_float = 0; var_218_bool = 0; var_219_bool = 0;
						var_215_object = var_0_object;
						var_105_float = var_216_float;
						TaskCall(2);
						func_388(var_220_bool, var_221_object, var_214_bool, var_215_object, var_216_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_222_bool = var_220_bool == 0; //@nz
						if(var_222_bool != 0) {
							goto Label_749;
						}
						var_109_bool = 0;
						goto Label_596;
					}
					var_223_bool = var_109_bool == 0; //@nz
					if(var_223_bool != 0) {
						var_224_object = Obj();
						var_224_object = var_0_object;
						func_1515(var_224_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_109_bool = 1;
					}
					rand(var_115_float);
					var_235_bool = 0;
					var_237_bool = var_115_float < (float)0.6000000238418579;
					if(var_237_bool != 1) {
						var_238_bool = 0;
						func_1052((bool)1, var_238_bool);
						if(var_238_bool != 1) {
							var_235_bool = 0;
						}
					}
					if(var_235_bool != 0) {
						Face(var_0_object);
						PlayAnimation("all", "attack_stay");
						var_246_bool = 0; var_247_float = 0;
						var_93_float = var_247_float;
						func_944(var_115_float, var_246_bool, var_247_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_429_bool = 0;
						func_1052(var_115_float, var_429_bool);
						var_430_bool = var_429_bool == 0; //@nz
						if(var_430_bool == 0) goto Label_739;
						var_431_bool = 0; var_432_object = Obj();
						var_432_object = var_0_object;
						func_1424(var_431_bool, var_432_object);
						var_433_bool = var_431_bool == 0; //@nz
						if(var_433_bool != 0) {
							goto Label_749;
						}
						@@@var_0_object:GetPFPosition(var_106_cvector);
						GetPFPosition(var_107_cvector);
						var_111_cvector = var_106_cvector - var_107_cvector;
						var_112_float = var_111_cvector | var_111_cvector;
						var_434_float = var_93_float * var_93_float;
						var_435_bool = var_112_float < var_434_float;
						if(var_435_bool == 0) goto Label_739;
						var_436_bool = 0; var_437_float = 0;
						var_93_float = var_437_float;
						func_840(var_114_bool, var_115_float, var_436_bool, var_437_float);
						var_438_bool = var_436_bool == 0; //@nz
						if(var_438_bool == 0) goto Label_739;
						goto Label_749;
				}
					var_439_bool = 0; var_440_float = 0;
					var_93_float = var_440_float;
					func_840(var_114_bool, var_115_float, var_439_bool, var_440_float);
					var_441_bool = var_439_bool == 0; //@nz
					if(var_441_bool != 0) {
						goto Label_749;
					}
					var_109_bool = 1;

				}
			Label_739:
				goto Label_748;
		}
		Label_748:
			goto Label_596;

		}
	}
Label_749:
	WaitForAnimEnd();
	var_206_cvector = var_3_cvector;
	if(var_206_cvector != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_209_bool = var_108_bool;
	if(var_209_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1849(var_69_object)
{
	var_70_object = Obj();
	var_69_object = var_70_object;
	TaskCall(0);
	func_0(var_72_float, var_73_float, var_70_object);
	TaskReturn();
	return 0;
}


func_1593()
{
	var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0;
	ClearSubContainer((int)0);
	var_51_int = 0; var_52_int = 0;
	var_54_int = 0;
	func_1554(var_54_int);
	var_61_float = var_54_int * (int)100;
	var_52_int = (int)100 + var_61_float;
	func_1563((int)0, var_52_int);
	func_1554((int)0);
	var_80_int = var_49_int;
	irand(var_47_int, (int)3);
	var_83_bool = var_47_int == (int)0;
	if(var_83_bool != 0) {
		var_84_int = 0; var_85_string = "";
		func_1793(var_84_int, "bottle_water");
		AddItem(var_48_bool, var_84_int, (int)0, (int)1);
	}
	irand(var_47_int, (int)3);
	var_92_bool = var_47_int == (int)0;
	if(var_92_bool != 0) {
		var_93_int = 0; var_94_string = "";
		func_1793(var_93_int, "rusk");
		AddItem(var_48_bool, var_93_int, (int)0, (int)1);
	}
	irand(var_47_int, (int)7);
	var_99_bool = var_47_int == (int)0;
	if(var_99_bool != 0) {
		var_100_int = 0; var_101_string = "";
		func_1793(var_100_int, "bandage");
		AddItem(var_48_bool, var_100_int, (int)0, (int)1);
	}
	irand(var_47_int, (int)7);
	var_106_bool = var_47_int == (int)0;
	if(var_106_bool != 0) {
		var_107_int = 0; var_108_string = "";
		func_1793(var_107_int, "tourniquet");
		AddItem(var_48_bool, var_107_int, (int)0, (int)1);
	}
	irand(var_47_int, (int)20);
	var_113_bool = var_47_int == (int)0;
	if(var_113_bool != 0) {
		var_114_int = 0; var_115_string = "";
		func_1793(var_114_int, "packet");
		AddItem(var_48_bool, var_114_int, (int)0, (int)1);
	}
	irand(var_47_int, (int)20);
	var_120_bool = var_47_int == (int)0;
	if(var_120_bool != 0) {
		var_121_int = 0; var_122_string = "";
		func_1793(var_121_int, "hook");
		AddItem(var_48_bool, var_121_int, (int)0, (int)1);
	}
	irand(var_47_int, (int)30);
	var_127_bool = var_47_int == (int)0;
	if(var_127_bool != 0) {
		var_128_int = 0; var_129_string = "";
		func_1793(var_128_int, "watch");
		AddItem(var_48_bool, var_128_int, (int)0, (int)1);
	}
	var_133_bool = var_49_int >= (int)3;
	if(var_133_bool != 0) {
		irand(var_47_int, (int)2);
		var_136_bool = var_47_int == (int)0;
		if(var_136_bool != 0) {
			var_137_int = 0; var_138_string = "";
			func_1793(var_137_int, "alpha_pills");
			AddItem(var_48_bool, var_137_int, (int)0, (int)1);
		}
	}
	var_142_bool = var_49_int >= (int)4;
	if(var_142_bool != 0) {
		irand(var_47_int, (int)5);
		var_145_bool = var_47_int == (int)0;
		if(var_145_bool != 0) {
			var_146_int = 0; var_147_string = "";
			func_1793(var_146_int, "beta_pills");
			AddItem(var_48_bool, var_146_int, (int)0, (int)1);
		}
	}
	var_151_bool = var_49_int >= (int)6;
	if(var_151_bool != 0) {
		irand(var_47_int, (int)8);
		var_154_bool = var_47_int == (int)0;
		if(var_154_bool != 0) {
			var_155_int = 0; var_156_string = "";
			func_1793(var_155_int, "gamma_pills");
			AddItem(var_48_bool, var_155_int, (int)0, (int)1);
		}
	}
	var_160_bool = var_49_int >= (int)8;
	if(var_160_bool != 0) {
		irand(var_47_int, (int)2);
		var_163_bool = var_47_int == (int)0;
		if(var_163_bool != 0) {
			var_164_int = 0; var_165_string = "";
			func_1793(var_164_int, "revolver_ammo");
			AddItem(var_48_bool, var_164_int, (int)0, (int)1);
		}
		irand(var_47_int, (int)2);
		var_170_bool = var_47_int == (int)0;
		if(var_170_bool != 0) {
			var_171_int = 0; var_172_string = "";
			func_1793(var_171_int, "rifle_ammo");
			AddItem(var_48_bool, var_171_int, (int)0, (int)1);
		}
	}
	return 6;
}


func_187()
{
	return 0;
}


func_1857(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_1805(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
	return 0;
}


func_69(var_1_float, var_2_float)
{
	SetSeeThreshold(var_1_float);
	SetSeeFOV(var_2_float);
	func_156(var_80_int);
	return 0;
}


func_1095(var_398_int)
{
	var_398_int = 0;
	return 0;
}


func_1864(var_66_object)
{
	var_67_object = Obj(); var_68_bool = 0;
	var_66_object = var_67_object;
	TaskCall(3);
	func_539(var_67_object, (bool)1);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_840(var_0_object, var_1_float, var_302_bool, var_303_float)
{
	var_304_int = 0; var_305_bool = 0; var_306_int = 0; var_307_bool = 0;
	irand(var_306_int, var_1_float);
	var_306_int = var_306_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	var_312_int = "attack_begin" + var_306_int;
	PlayAnimation("all", var_312_int);
	WaitForAnimEnd();
	func_1063(var_306_int, var_307_bool);
	var_328_bool = 0; var_329_object = Obj();
	var_329_object = var_0_object;
	func_1424(var_328_bool, var_329_object);
	var_330_bool = var_328_bool == 0; //@nz
	if(var_330_bool != 0) {
		StopAsync();
		var_302_bool = 0;
		return 4;
	}
	var_331_float = 0; var_332_int = 0;
	var_303_float = var_331_float;
	var_306_int = var_332_int;
	func_801(var_307_bool, var_331_float, var_332_int);
	var_403_int = "attack_middle" + var_306_int;
	HasAnimation(var_307_bool, "all", var_403_int);
	var_404_bool = var_307_bool;
	if(var_404_bool != 0) {
		var_407_int = "attack_middle" + var_306_int;
		PlayAnimation("all", var_407_int);
		WaitForAnimEnd();
		var_408_bool = 0; var_409_object = Obj();
		var_409_object = var_0_object;
		func_1424(var_408_bool, var_409_object);
		var_410_bool = var_408_bool == 0; //@nz
		if(var_410_bool != 0) {
			StopAsync();
			var_302_bool = 0;
			return 4;
		}
		var_411_float = 0; var_412_int = 0;
		var_303_float = var_411_float;
		var_306_int = var_412_int;
		func_801(var_307_bool, var_411_float, var_412_int);
	}
	SetAttackState((bool)0);
	var_416_int = "attack_end" + var_306_int;
	PlayAnimation("all", var_416_int);
	var_417_bool = 0; var_418_float = 0;
	func_920(var_417_bool, (float)0.75);
	StopAsync();
	var_302_bool = 1;
	return 4;
}


func_1097()
{
	return 0;
}


func_1099(var_327_int)
{
	var_327_int = 1;
	return 0;
}


func_1101(var_322_float)
{
	var_322_float = 0.5;
	return 0;
}


func_1103(var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	IsPlayerActor(var_16_object, var_18_bool);
	var_19_bool = var_18_bool;
	if(var_19_bool != 0) {
		var_20_bool = 0; var_21_object = Obj(); var_22_string = ""; var_23_float = 0; var_24_float = 0; var_25_float = 0;
		var_16_object = var_21_object;
		func_1297(var_20_bool, var_21_object, "reputation", (float)-0.30000001192092896, (float)0, (float)1);
	}
	func_1593();
	var_175_object = Obj();
	var_16_object = var_175_object;
	func_1124(var_175_object);
	return 2;
}


func_1234(var_198_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_198_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_198_string);
	RemoveEnvelope();
	return 0;
}


func_1875(var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	var_18_bool = var_15_object == 0; //@ne
	if(var_18_bool != 0) {
		return 2;
	}
	var_19_object = GlobalVars[0];
	@@var_19_object:in(var_17_bool, var_15_object);
	var_20_bool = var_17_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_21_object = GlobalVars[0];
		@@var_21_object:add(var_15_object);
	}
	return 2;
}


func_86(var_2_float, var_87_bool)
{
	var_88_bool = 0; var_89_bool = 0;
	var_91_float = var_2_float * (float)1.7999999523162842;
	SetSeeFOV(var_91_float);
	PlayAnimation("all", "hunt");
	WaitForAnimEnd(var_89_bool);
	SetSeeFOV(var_2_float);
	var_87_bool = !var_89_bool;
	return 2;
}


func_984(var_0_object, var_259_bool)
{
	var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_float = 0; var_264_float = 0; var_265_cvector = CVector(0,0,0); var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); var_268_float = 0; var_269_float = 0;
	var_270_bool = 0; var_271_object = Obj();
	var_271_object = var_0_object;
	func_1424(var_270_bool, var_271_object);
	var_272_bool = var_270_bool == 0; //@nz
	if(var_272_bool != 0) {
		var_259_bool = 0;
		return 10;
	}
	var_273_bool = 0;
	func_1052(var_269_float, var_273_bool);
	if(var_273_bool != 0) {
		@@@var_0_object:GetPFPosition(var_265_cvector);
		GetPFPosition(var_266_cvector);
		var_267_cvector = var_265_cvector - var_266_cvector;
		var_268_float = var_267_cvector | var_267_cvector;
		@@@var_0_object:GetAttackDistance(var_269_float);
		var_269_float = var_269_float + (int)50;
		var_275_float = var_269_float * var_269_float;
		var_276_bool = var_268_float <= var_275_float;
		if(var_276_bool != 0) {
			var_277_bool = 0;
			func_1018(var_268_float, var_269_float, var_277_bool);
			if(var_277_bool != 0) {
				var_259_bool = 1;
				return 10;
			}
		}
	}
	var_259_bool = 0;
	return 10;
}


func_1888(var_81_object)
{
	var_82_object = Obj();
	var_81_object = var_82_object;
	func_1875(var_82_object);
	var_83_object = Obj(); var_84_bool = 0;
	var_81_object = var_83_object;
	TaskCall(3);
	func_539(var_83_object, (bool)1);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1124(var_175_object)
{
	EventDisable(0);
	var_176_object = Obj();
	var_175_object = var_176_object;
	func_1147(var_176_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1135:
	Hold();
	goto Label_1135;
}
EMIT "Return(); Pop(0)";


func_101(var_0_object, var_76_object)
{
	var_77_bool = 0; var_78_int = 0; var_79_bool = 0; var_80_int = 0;
	var_0_object = var_76_object;
	Face(var_0_object);
	SetTimer((int)100, (int)15);
	
Label_109:
	var_83_bool = var_0_object != 0; //@nn
	if(var_83_bool != 0) {
		irand(var_80_int, (int)5);
		var_86_int = var_80_int + (int)5;
		Sleep(var_86_int, var_79_bool);
		var_87_bool = 0;
		func_86(var_80_int, var_87_bool);
		if(var_87_bool != 0) {
		} else {
			goto Label_109;
		}
	}
	func_69(var_79_bool, var_80_int);
	return 4;
	
}


func_1383(var_34_bool, var_35_object)
{
	var_36_bool = 0; var_37_bool = 0;
	@@var_35_object:IsDead(var_37_bool);
	var_37_bool = var_34_bool;
	return 2;
}


func_1515(var_224_object)
{
	var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0);
	@@var_224_object:GetPosition(var_228_cvector);
	GetPosition(var_229_cvector);
	var_230_cvector = var_228_cvector - var_229_cvector;
	var_231_float = GetByIndex(var_230_cvector, 0);
	var_232_float = GetByIndex(var_230_cvector, 2);
	RotateAsync(var_231_float, var_232_float);
	return 6;
}


func_1388(var_23_bool, var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj();
	var_29_bool = var_24_object == 0; //@ne
	if(var_29_bool != 0) {
		var_23_bool = 0;
		return 4;
	}
	var_30_bool = 0;
	var_30_bool = 0;
	var_33_bool = IsFuncExist(var_24_object, "IsDead", (int)1);
	if(var_33_bool != 0) {
		var_34_bool = 0; var_35_object = Obj();
		var_24_object = var_35_object;
		func_1383(var_34_bool, var_35_object);
		if(var_34_bool != 0) {
			var_30_bool = 1;
		}
	}
	if(var_30_bool != 0) {
		var_23_bool = 0;
		return 4;
	}
	GetScene(var_27_object);
	var_38_bool = var_27_object == 0; //@ne
	if(var_38_bool != 0) {
		var_23_bool = 0;
		return 4;
	}
	@@var_24_object:GetScene(var_28_object);
	var_39_bool = var_27_object != var_28_object;
	if(var_39_bool != 0) {
		var_23_bool = 0;
		return 4;
	}
	var_23_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1262(var_373_string, var_374_int)
{
	var_376_bool = var_374_int == (int)1;
	if(var_376_bool != 0) {
		var_373_string = "fire";
		return 0;
	}
	var_373_string = "phys";
	return 0;
}


func_1903(var_15_object)
{
	var_16_object = Obj();
	var_15_object = var_16_object;
	TaskCall(4);
	func_1103(var_16_object);
	TaskReturn();
	return 0;
}


func_370()
{
	StopGroup0();
	Stop();
	return 0;
}


func_1526(var_32_float, var_33_cvector, var_34_cvector)
{
	var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0);
	var_36_cvector = var_34_cvector - var_33_cvector;
	var_32_float = var_36_cvector | var_36_cvector;
	return 2;
}


func_1270(var_286_cvector, var_287_object)
{
	var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0);
	GetPosition(var_290_cvector);
	@@var_287_object:GetPosition(var_291_cvector);
	var_286_cvector = var_291_cvector - var_290_cvector;
	return 4;
}


func_248(var_37_object)
{
	var_37_object = Obj();
	func_216();
	return 0;
}


func_1018(var_0_object, var_4_cvector, var_277_bool)
{
	var_278_object = Obj(); var_279_float = 0; var_280_cvector = CVector(0,0,0); var_281_cvector = CVector(0,0,0); var_282_object = Obj(); var_283_float = 0; var_284_cvector = CVector(0,0,0); var_285_cvector = CVector(0,0,0);
	GetScene(var_282_object);
	var_286_cvector = CVector(0,0,0); var_287_object = Obj();
	var_287_object = var_0_object;
	func_1270(var_286_cvector, var_287_object);
	var_292_int = -var_286_cvector;
	FindDirLength(var_283_float, var_292_int, var_4_cvector);
	var_293_bool = var_283_float < var_4_cvector;
	if(var_293_bool != 0) {
		var_277_bool = 0;
		return 8;
	}
	Face(var_0_object);
	PlayAnimation("all", "bjump");
	@@@var_0_object:GetPFPosition(var_284_cvector);
	GetPFPosition(var_285_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	var_277_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1147(var_176_object)
{
	var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0); var_181_string = ""; var_182_object = Obj(); var_183_bool = 0; var_184_bool = 0; var_185_float = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_string = ""; var_192_object = Obj(); var_193_bool = 0; var_194_bool = 0; var_195_float = 0; var_196_cvector = CVector(0,0,0);
	var_197_bool = var_176_object == 0; //@ne
	if(var_197_bool != 0) {
		var_198_string = "";
		func_1234("fdie");
	} else {
		@@var_176_object:GetPosition(var_187_cvector);
		GetPosition(var_188_cvector);
		GetDirection(var_189_cvector);
		var_190_cvector = var_188_cvector - var_187_cvector;
		var_201_float = GetByIndex(var_190_cvector, 0);
		var_202_float = GetByIndex(var_189_cvector, 0);
		var_203_float = var_201_float * var_202_float;
		var_204_float = GetByIndex(var_190_cvector, 2);
		var_205_float = GetByIndex(var_189_cvector, 2);
		var_206_float = var_204_float * var_205_float;
		var_207_int = var_203_float + var_206_float;
		var_209_bool = var_207_int >= (int)0;
		if(var_209_bool != 0) {
			var_191_string = "fdie";
		} else {
				var_191_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_176_object = var_192_object;
		var_212_bool = IsFuncExist(var_176_object, "GetScriptProperty", (int)2);
		if(var_212_bool != 0) {
			@@var_176_object:HasScriptProperty(var_193_bool, "Owner");
			var_214_bool = var_193_bool;
			if(var_214_bool != 0) {
				@@var_176_object:GetScriptProperty(var_192_object, "Owner");
				var_216_bool = var_192_object == 0; //@ne
				if(var_216_bool != 0) {
					var_176_object = var_192_object;
				}
			}
		}
		var_219_bool = IsFuncExist(var_192_object, "@GetEyesHeight", (int)1);
		if(var_219_bool != 0) {
			@@var_192_object:GetEyesHeight(var_195_float);
			var_196_cvector = CVector(0.0, 0.0, 0.0);
			var_220_float = GetByIndex(var_196_cvector, 1);
			var_195_float = var_220_float;
			SetByIndex(var_196_cvector, 1) = var_220_float;
			LookAsync(var_176_object, "head", var_196_cvector);
			var_194_bool = 1;
		} else {
			var_194_bool = 0;

		}
		PlayAnimation("all", var_191_string);
		WaitForAnimEnd();
		var_223_bool = var_194_bool;
		if(var_223_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_191_string);
		RemoveEnvelope();
		var_192_object = 0;
	}
	return 20;
	
}


func_1277(var_38_float, var_39_object)
{
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	GetPosition(var_43_cvector);
	@@var_39_object:GetPosition(var_44_cvector);
	var_45_cvector = var_44_cvector - var_43_cvector;
	var_38_float = var_45_cvector | var_45_cvector;
	return 6;
}


func_766(var_1_float, var_2_float, var_4_cvector)
{
	var_116_bool = 0; var_117_bool = 0; var_118_cvector = CVector(0,0,0); var_119_bool = 0; var_120_bool = 0; var_121_cvector = CVector(0,0,0);
	var_1_float = 0;
	
Label_768:
	var_125_int = var_1_float + (int)1;
	var_126_int = "attack_begin" + var_125_int;
	HasAnimation(var_119_bool, "all", var_126_int);
	var_127_bool = var_119_bool == 0; //@nz
	if(var_127_bool != 0) {
	} else {
			var_1_float = var_1_float + (int)1;
			goto Label_768;
	}
	var_2_float = 0;
	
Label_782:
	var_130_int = var_2_float + (int)1;
	var_131_int = "attack" + var_130_int;
	IsExisting3DSound(var_120_bool, var_131_int);
	var_132_bool = var_120_bool == 0; //@nz
	if(var_132_bool != 0) {
	} else {
		var_2_float = var_2_float + (int)1;
		goto Label_782;

	}
	GetAnimationOffset(var_121_cvector, "all", "bjump");
	var_135_float = GetByIndex(var_121_cvector, 2);
	var_4_cvector = -var_135_float;
	return 6;
	
}


