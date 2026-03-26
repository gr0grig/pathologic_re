// @IMPORTS: Face/1,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,GetScene/1,GetGeometryLocator/3,AddActorByType/6,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,rand/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,WaitForAnimEnd/1,rand/2,ResetAAS/0,StopAnimation/0,StopGroup0/0,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Rotate/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,RotateAsync/2,IsLoaded/1,AddItem/3,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,Trace/1,AddItem/4,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1
// @STRINGS: W:all|W:aattack_begin1|W:aattack_end1|W:knife|W:scripted|W:grabitel_knife.xml|W:Owner|A:SetScriptProperty|W:Target|A:GetPosition|A:GetEyesHeight|W:StartDirection|W:kill|W:attack_off|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:reputation|W:battle|W:god_mode|W:idle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:Knife|W:lockpick|W:grabitel_mark|A:RemoveStationaryActor
// @GLOBALS: 0:bool:
// @RUN_OP: 0x477
// @RUN_TASK: 3
// @TASK_0: vars=bool params=2
// @EVENT_17: op=0x6b vars=object
// @EVENT_30: op=0x71 vars=object,object,bool
// @EVENT_26: op=0x78 vars=string
// @TASK_1: vars=object,int,int,bool,float,int params=2
// @EVENT_17: op=0xb6 vars=object
// @EVENT_30: op=0xbc vars=object,object,bool
// @EVENT_26: op=0xc3 vars=string
// @TASK_2: vars=bool,object,bool params=6
// @EVENT_17: op=0x35f vars=object
// @EVENT_30: op=0x365 vars=object,object,bool
// @EVENT_26: op=0x36c vars=string
// @EVENT_7: op=0x3a8 vars=int
// @EVENT_1: op=0x3c3 vars=object
// @EVENT_2: op=0x3d2 vars=object
// @EVENT_10: op=0x458 vars=object
// @EVENT_41: op=0x463 vars=object
// @TASK_3: vars= params=0
// @EVENT_17: op=0x47f vars=object
// @EVENT_1: op=0x48d vars=object
// @EVENT_3: op=0x497 vars=object
// @TASK_4: vars= params=1
// @EVENT_0: op=0x512 vars=object
// @EVENT_22: op=0x591 vars=object,int,float,float
// @EVENT_16: op=0x593 vars=object,string
// @EVENT_41: op=0x595 vars=object
// @TASK_5: vars= params=2
// @STANDALONE_EVENT_22: op=0x8fb vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x903 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x90d vars=object,string
// @STANDALONE_EVENT_41: op=0x91a vars=object
// @PE: 0x6b,0x71,0x78,0x7e,0x9a,0x9d,0xa2,0xb6,0xbc,0xc3,0x35f,0x365,0x36c,0x3a8,0x3c3,0x3d2,0x446,0x458,0x463,0x46c,0x47f,0x4f7,0x503,0x577,0x591,0x593,0x595,0x5bc,0x799,0x7a0,0x7b8,0x7c3,0x7d0,0x869,0x8fb,0x903,0x91a,0x920,0x927,0x92d,0x92f

task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_10_bool = Obj();
	func_2349();
	return 0;
}


task_0_event_30(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_float, var_9_int, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_bool = var_14_object;
	var_11_object = var_15_object;
	func_2351(var_15_object);
	return 0;
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_12_bool = var_10_bool == "kill";
	if(var_12_bool != 0) {
		var_0_bool = true;
	}
	return 0;
}


task_1_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_bool, var_9_object, var_10_bool)
{
	var_10_bool = Obj();
	func_2349();
	return 0;
}


task_1_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_bool = var_14_object;
	var_11_object = var_15_object;
	func_2351(var_15_object);
	return 0;
}


task_1_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_string, var_8_bool, var_9_object, var_10_bool)
{
	var_12_bool = var_10_bool == "kill";
	if(var_12_bool != 0) {
		var_13_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
	}
	return 0;
}


task_2_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_10_object = Obj();
	func_2349();
	return 0;
}


task_2_event_30(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_10_object = var_14_object;
	var_11_object = var_15_object;
	func_2351(var_15_object);
	return 0;
}


task_2_event_26(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_string)
{
	var_12_bool = var_10_string == "kill";
	if(var_12_bool != 0) {
		var_13_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_950(var_10_string);
	}
	return 0;
}


task_2_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_12_bool = var_10_int == (int)1;
	if(var_12_bool != 0) {
		var_13_object = Obj();
		var_13_object = var_1_object;
		func_2062(var_13_object);
	} else {
		var_18_int = 0;
		var_10_int = var_18_int;
		func_1094(var_9_bool, var_10_int, var_18_int);
	}
	return 0;
	
}


task_2_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_1_object == var_10_object;
	if(var_12_bool != 0) {
		var_13_bool = var_2_int == 0; //@nz
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_2_int = true;
		var_14_object = Obj();
		var_10_object = var_14_object;
		func_1866(var_14_object);
	}
	return 0;
}


task_2_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_1_object == var_10_object;
	if(var_12_bool != 0) {
		var_13_int = var_2_int;
		if(var_13_int != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	return 0;
}


task_2_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	RequestClearPath(var_10_object);
	return 0;
}


task_2_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	func_950(var_10_object);
	var_10_object = Obj();
	func_2330();
	return 0;
}


	task_3_event_17(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_14_object)
	{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_2336(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		func_1266();
		var_51_object = Obj();
		var_14_object = var_51_object;
		func_2343(var_51_object);
	}
	return 0;
	}


task_3_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_object, var_12_bool);
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_10_object = Obj();
		func_1151();
	}
	return 2;
}


task_3_event_3(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_object, var_12_bool);
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_10_object = Obj();
		func_1151();
	}
	return 2;
}


task_4_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsOverrideActive(var_12_bool);
	var_13_bool = var_12_bool == 0; //@nz
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_10_object = var_14_object;
		func_2153(var_14_object);
	}
	return 2;
}


task_4_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0;
}


task_4_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	return 0;
}


task_4_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_1768(var_14_object, var_15_int, var_16_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_10_object = var_16_object;
	var_11_int = var_17_int;
	var_12_float = var_18_float;
	var_14_cvector = var_19_cvector;
	var_15_cvector = var_20_cvector;
	func_1836(var_18_float, var_19_cvector, var_20_cvector);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0;
	var_15_bool = var_11_string == "health";
	if(var_15_bool != 0) {
		GetProperty("health", var_13_float);
		var_18_bool = var_13_float <= (int)0;
		if(var_18_bool != 0) {
			SignalDeath(var_10_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_2273(var_11_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	
Label_1143:
	Sleep((int)3);
	func_1185();
	goto Label_1143;
}
EMIT "Return(); Pop(0)";


func_1536(var_534_float, var_535_object, var_536_float, var_537_int)
{
	var_541_int = 0; var_542_string = ""; var_543_int = 0; var_544_float = 0; var_545_float = 0; var_546_float = 0; var_547_int = 0; var_548_string = ""; var_549_int = 0; var_550_float = 0; var_551_float = 0; var_552_float = 0;
	var_553_bool = 0; var_554_object = Obj(); var_555_string = "";
	var_535_object = var_554_object;
	func_1502(var_553_bool, var_554_object, "health");
	var_556_bool = var_553_bool == 0; //@nz
	if(var_556_bool != 0) {
		var_534_float = 0.0;
		return 12;
	}
	var_557_bool = 0; var_558_object = Obj(); var_559_string = "";
	var_535_object = var_558_object;
	func_1502(var_557_bool, var_558_object, "armor");
	var_560_bool = var_557_bool == 0; //@nz
	if(var_560_bool != 0) {
		var_547_int = 0;
	} else {
			@@var_535_object:GetProperty("armor", var_547_int);
	}
	var_562_string = ""; var_563_int = 0;
	var_537_int = var_563_int;
	func_1468(var_562_string, var_563_int);
	var_548_string = "armor_" + var_562_string;
	var_568_bool = 0; var_569_object = Obj(); var_570_string = "";
	var_535_object = var_569_object;
	var_548_string = var_570_string;
	func_1502(var_568_bool, var_569_object, var_570_string);
	var_571_bool = var_568_bool == 0; //@nz
	if(var_571_bool != 0) {
		var_549_int = 0;
	} else {
		@@var_535_object:GetProperty(var_548_string, var_549_int);

	}
	var_572_float = 0; var_573_float = 0; var_574_float = 0;
	var_575_int = var_547_int + var_549_int;
	var_573_float = var_575_int / (float)100.0;
	func_1945(var_572_float, var_573_float, (float)1);
	var_572_float = var_550_float;
	@@var_535_object:GetProperty("health", var_551_float);
	var_580_int = (int)1 - var_550_float;
	var_552_float = var_536_float * var_580_int;
	var_582_float = 0; var_583_float = 0; var_584_float = 0; var_585_float = 0;
	var_583_float = var_551_float - var_552_float;
	func_1976(var_582_float, var_583_float, (float)0, (float)1);
	@@var_535_object:SetProperty("health", var_582_float);
	var_588_bool = 0; var_589_object = Obj();
	var_535_object = var_589_object;
	func_1497(var_588_bool, var_589_object);
	if(var_588_bool != 0) {
		var_590_float = 0;
		var_590_float = -var_552_float;
		func_2035(var_590_float);
	}
	var_552_float = var_534_float;
	return 12;
	
}


func_0(var_0_bool, var_79_bool, var_80_object, var_197_object)
{
	var_82_object = Obj(); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_object = Obj(); var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_object = Obj(); var_90_cvector = CVector(0,0,0); var_91_bool = 0; var_92_object = Obj(); var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_cvector = CVector(0,0,0);
	var_96_object = Obj();
	var_80_object = var_96_object;
	func_2062(var_96_object);
	var_0_bool = false;
	var_101_bool = 0; var_102_object = Obj();
	var_80_object = var_102_object;
	func_1715(var_101_bool, var_102_object);
	var_115_bool = 0; var_116_object = Obj();
	var_80_object = var_116_object;
	func_1681(var_115_bool, var_116_object);
	var_117_bool = var_115_bool == 0; //@nz
	if(var_117_bool != 0) {
		var_79_bool = 0;
		return 14;
	}
	func_2071();
	Face(var_80_object);
	PlayAnimation("all", "aattack_begin1");
	WaitForAnimEnd();
	var_124_bool = 0; var_125_object = Obj();
	var_80_object = var_125_object;
	func_1681(var_124_bool, var_125_object);
	var_126_bool = var_124_bool == 0; //@nz
	if(var_126_bool != 0) {
		StopAsync();
		var_79_bool = 0;
		return 14;
	}
	PlayAnimation("all", "aattack_end1");
	GetScene(var_89_object);
	GetGeometryLocator("knife", var_91_bool, var_90_cvector);
	AddActorByType(var_92_object, "scripted", var_89_object, var_90_cvector, CVector(0.0, 0.0, 1.0), "grabitel_knife.xml");
	var_134_object = Obj();
	func_1929(var_134_object);
	@@var_92_object:SetScriptProperty("Owner", var_134_object);
	@@var_92_object:SetScriptProperty("Target", var_80_object);
	@@var_80_object:GetPosition(var_93_cvector);
	@@var_80_object:GetEyesHeight(var_94_float);
	var_136_float = GetByIndex(var_93_cvector, 1);
	var_138_int = var_94_float - (int)10;
	var_136_float = var_136_float + var_138_int;
	SetByIndex(var_93_cvector, 1) = var_136_float;
	var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_float = 0;
	var_90_cvector = var_140_cvector;
	var_93_cvector = var_141_cvector;
	func_2112(var_139_cvector, var_140_cvector, var_141_cvector, (float)2000.0);
	var_139_cvector = var_95_cvector;
	@@var_92_object:SetScriptProperty("StartDirection", var_95_cvector);
	WaitForAnimEnd();
	StopAsync();
	var_191_bool = var_0_bool;
	if(var_191_bool != 0) {
		var_79_bool = 1;
		return 14;
	}
	var_192_bool = 0; var_193_object = Obj();
	var_80_object = var_193_object;
	func_1681(var_192_bool, var_193_object);
	var_194_bool = var_192_bool == 0; //@nz
	if(var_194_bool != 0) {
		var_79_bool = 0;
		return 14;
	}
	var_195_bool = 0; var_196_object = Obj();
	var_80_object = var_196_object;
	TaskCall(1);
	func_126(var_195_bool, var_196_object);
	TaskReturn();
	var_197_object = var_79_bool;
	return 14;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


func_2052(var_28_float)
{
	var_29_object = Obj(); var_30_object = Obj();
	CreateFloatVector(var_30_object);
	@@var_30_object:add(var_28_float);
	SendWorldWndMessage((int)16, var_30_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2062(var_96_object)
{
	var_97_bool = 0; var_98_bool = 0;
	IsPlayerActor(var_96_object, var_98_bool);
	var_99_bool = var_98_bool;
	if(var_99_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_2071()
{
	var_118_object = Obj(); var_119_object = Obj();
	GetScene(var_119_object);
	var_121_object = Obj();
	func_1929(var_121_object);
	BroadcastMessage("battle", var_121_object, var_119_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2082(var_616_bool)
{
	var_617_bool = 0; var_618_bool = 0;
	GetVariable("god_mode", var_618_bool);
	var_618_bool = var_616_bool;
	return 2;
}


func_2088(var_35_string, var_36_int)
{
	var_37_string = ""; var_38_string = "";
	var_39_int = var_36_int;
	if(var_39_int != 0) {
		"idle" = "idle" + var_36_int;
	}
	var_38_string = var_35_string;
	return 2;
}


func_2095(var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0;
	var_32_int = 0;
	
Label_2097:
	var_35_string = ""; var_36_int = 0;
	var_32_int = var_36_int;
	func_2088(var_35_string, var_36_int);
	HasAnimation(var_33_bool, "all", var_35_string);
	var_40_bool = var_33_bool == 0; //@nz
	if(var_40_bool != 0) {
	} else {
		var_32_int = var_32_int + (int)1;
		goto Label_2097;
	}
	var_32_int = var_29_int;
	return 4;
	
}


func_2112(var_139_cvector, var_140_cvector, var_141_cvector, var_142_float)
{
	var_143_cvector = CVector(0,0,0); var_144_float = 0; var_145_float = 0; var_146_float = 0; var_147_float = 0; var_148_float = 0; var_149_cvector = CVector(0,0,0); var_150_float = 0; var_151_float = 0; var_152_float = 0; var_153_float = 0; var_154_float = 0;
	var_149_cvector = var_141_cvector - var_140_cvector;
	var_150_float = 250000;
	var_155_float = GetByIndex(var_149_cvector, 1);
	var_157_float = var_155_float * (int)1000;
	var_158_float = var_142_float * var_142_float;
	var_151_float = var_157_float - var_158_float;
	var_152_float = var_149_cvector | var_149_cvector;
	var_159_float = 0; var_160_float = 0; var_161_float = 0; var_162_float = 0;
	var_150_float = var_160_float;
	var_151_float = var_161_float;
	var_152_float = var_162_float;
	func_1952(var_159_float, var_160_float, var_161_float, var_162_float);
	var_159_float = var_153_float;
	var_168_bool = var_153_float < (int)0;
	if(var_168_bool != 0) {
		var_154_float = 1;
	} else {
		var_173_float = 0; var_174_float = 0; var_175_float = 0; var_176_float = 0; var_177_float = 0;
		var_150_float = var_174_float;
		var_151_float = var_175_float;
		var_152_float = var_176_float;
		var_177_float = sqrt(var_153_float);
		func_1959(var_174_float, var_175_float, var_176_float, var_177_float);
		var_154_float = sqrt(var_173_float);
	}
	var_170_float = CVector(0.0, 500.0, 0.0) * var_154_float;
	var_171_float = var_170_float * var_154_float;
	var_172_int = var_149_cvector + var_171_float;
	var_139_cvector = var_172_int / var_154_float;
	return 12;
	
}


func_1094(var_0_bool, var_1_object, var_18_int)
{
	var_20_bool = var_18_int != (int)0;
	if(var_20_bool != 0) {
		return 0;
	}
	var_21_bool = 0; var_22_object = Obj();
	var_22_object = var_1_object;
	func_1132(var_21_bool, var_22_object);
	var_57_bool = var_21_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1609(var_605_bool, var_606_object)
{
	var_607_float = 0; var_608_float = 0;
	var_609_bool = 0; var_610_object = Obj(); var_611_string = "";
	var_606_object = var_610_object;
	func_1502(var_609_bool, var_610_object, "health");
	var_612_bool = var_609_bool == 0; //@nz
	if(var_612_bool != 0) {
		var_605_bool = 0;
		return 2;
	}
	var_613_bool = 0;
	var_613_bool = 0;
	var_614_bool = 0; var_615_object = Obj();
	var_606_object = var_615_object;
	func_1497(var_614_bool, var_615_object);
	if(var_614_bool != 0) {
		var_616_bool = 0;
		func_2082(var_616_bool);
		if(var_616_bool != 0) {
			var_613_bool = 1;
		}
	}
	if(var_613_bool != 0) {
		var_605_bool = 0;
		return 2;
	}
	@@var_606_object:GetProperty("health", var_608_float);
	var_605_bool = var_608_float <= (float)0.0;
	return 2;
}


func_1116(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_2147(var_102_int)
{
	var_103_int = 0; var_104_int = 0;
	GetVariable("branch", var_104_int);
	var_104_int = var_102_int;
	return 2;
}


func_1640(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	@@var_33_object:IsDead(var_35_bool);
	var_35_bool = var_32_bool;
	return 2;
}


func_2153(var_14_object)
{
	var_15_int = 0;
	func_2147(var_15_int);
	var_20_bool = var_15_int == (int)1;
	if(var_20_bool != 0) {
		WorkWithCorpse(var_14_object);
	} else {
		Barter(var_14_object);
	}
	return 0;
	
}


func_1132(var_320_bool, var_321_object)
{
	var_322_bool = 0; var_323_object = Obj();
	var_321_object = var_323_object;
	func_1681(var_322_bool, var_323_object);
	var_322_bool = var_320_bool;
	return 0;
}


func_1645(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj();
	var_27_bool = var_22_object == 0; //@ne
	if(var_27_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	var_28_bool = 0;
	var_28_bool = 0;
	var_31_bool = IsFuncExist(var_22_object, "IsDead", (int)1);
	if(var_31_bool != 0) {
		var_32_bool = 0; var_33_object = Obj();
		var_22_object = var_33_object;
		func_1640(var_32_bool, var_33_object);
		if(var_32_bool != 0) {
			var_28_bool = 1;
		}
	}
	if(var_28_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	GetScene(var_25_object);
	var_36_bool = var_25_object == 0; //@ne
	if(var_36_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	@@var_22_object:GetScene(var_26_object);
	var_37_bool = var_25_object != var_26_object;
	if(var_37_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	var_21_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1139(var_338_string)
{
	var_338_string = "walk";
	return 0;
}


func_1141(var_339_string)
{
	var_339_string = "run";
	return 0;
}


func_2166(var_65_int, var_66_int)
{
	var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_bool = 0;
	var_71_bool = var_65_int > var_66_int;
	if(var_71_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_69_int = 0;
	var_73_bool = var_65_int != var_66_int;
	if(var_73_bool != 0) {
		var_74_int = var_66_int - var_65_int;
		irand(var_69_int, var_74_int);
	} else {
		var_83_bool = var_65_int == (int)0;
		if(var_83_bool == 0) goto Label_2184;
		return 4;
	}
Label_2184:
	var_69_int = var_69_int + var_65_int;
	var_76_bool = var_69_int == (int)0;
	if(var_76_bool != 0) {
		return 4;
	}
	var_77_int = 0; var_78_string = "";
	func_2268(var_77_int, "Money");
	AddItem(var_70_bool, var_77_int, (int)0, var_69_int);
	return 4;
	
}


func_126(var_195_bool, var_196_object)
{
	var_203_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_204_object = Obj(); var_205_bool = 0; var_206_float = 0;
	var_196_object = var_204_object;
	func_203(var_200_bool, var_201_float, var_202_int, var_195_bool, var_196_object, var_204_object, (bool)1, (float)200.0);
	var_678_bool = 0;
	var_678_bool = 0;
	var_679_bool = GlobalVars[0];
	if(var_679_bool != 0) {
		var_680_int = var_3_int;
		if(var_680_int != 0) {
			var_678_bool = 1;
		}
	}
	if(var_678_bool != 0) {
		PlayAnimation("all", "attack_off");
		WaitForAnimEnd();
	}
	var_683_bool = GlobalVars[0];
	var_683_bool = var_195_bool;
	return 0;
}


func_643(var_3_int)
{
	var_3_int = true;
	return 0;
}


func_645(var_646_bool, var_647_float)
{
	var_648_float = 0; var_649_bool = 0; var_650_float = 0; var_651_bool = 0;
	rand(var_650_float);
	var_652_bool = var_650_float < var_647_float;
	if(var_652_bool != 0) {

	Label_650:
		IsAnimationPlaying(var_651_bool);
		var_653_bool = var_651_bool == 0; //@nz
		if(var_653_bool != 0) {
		} else {
			var_654_bool = 0;
			func_743(var_654_bool);
			if(var_654_bool != 0) {
				var_646_bool = 1;
				sync();
				goto Label_650;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_847(var_651_bool);
	}
	goto Label_670;
	
Label_670:
	var_646_bool = 0;
	return 4;
	
}


func_1681(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj();
	var_18_object = var_22_object;
	func_1645(var_21_bool, var_22_object);
	var_38_bool = var_21_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_17_bool = 0;
		return 2;
	}
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_18_object = var_40_object;
	func_1502(var_39_bool, var_40_object, "noaccess");
	var_48_bool = var_39_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_17_bool = 1;
		return 2;
	}
	@@var_18_object:GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == (int)0;
	return 2;
}


func_2197(var_108_string)
{
	var_109_object = Obj(); var_110_int = 0; var_111_bool = 0; var_112_object = Obj(); var_113_int = 0; var_114_bool = 0;
	CreateInvItem(var_112_object);
	@@var_112_object:SetItemName(var_108_string);
	@@var_112_object:SetProperty("Organ", (int)1);
	@@var_112_object:GetItemID(var_113_int);
	AddItem(var_114_bool, var_112_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_154(var_531_float)
{
	var_531_float = 0.15000000596046448;
	return 0;
}


func_157(var_538_int)
{
	var_538_int = 0;
	return 0;
}


func_672(var_0_bool, var_426_bool, var_427_float)
{
	var_428_bool = 0; var_429_cvector = CVector(0,0,0); var_430_cvector = CVector(0,0,0); var_431_cvector = CVector(0,0,0); var_432_float = 0; var_433_bool = 0; var_434_cvector = CVector(0,0,0); var_435_cvector = CVector(0,0,0); var_436_cvector = CVector(0,0,0); var_437_float = 0;
	
Label_673:
	IsAnimationPlaying(var_433_bool);
	var_438_bool = var_433_bool == 0; //@nz
	if(var_438_bool != 0) {
	} else {
		var_439_bool = 0;
		func_743(var_439_bool);
		if(var_439_bool != 0) {
			var_426_bool = 1;
			return 10;
		}
		var_482_bool = 0; var_483_object = Obj();
		var_483_object = var_0_bool;
		func_1681(var_482_bool, var_483_object);
		var_484_bool = var_482_bool == 0; //@nz
		if(var_484_bool != 0) {
			var_426_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_434_cvector);
		GetPFPosition(var_435_cvector);
		var_436_cvector = var_434_cvector - var_435_cvector;
		var_437_float = var_436_cvector | var_436_cvector;
		var_485_float = var_427_float * var_427_float;
		var_486_bool = var_437_float < var_485_float;
		if(var_486_bool != 0) {
			var_487_bool = 0; var_488_float = 0;
			var_427_float = var_488_float;
			func_506(var_436_cvector, var_437_float, var_487_bool, var_488_float);
			var_426_bool = 1;
			sync();
			goto Label_673;
		}
		return 10;
	}
	func_847(var_437_float);
	var_426_bool = 0;
	return 10;
	
}


func_160(var_599_int)
{
	var_599_int = 1;
	return 0;
}


func_162(var_600_object, var_601_float)
{
	var_602_bool = 0;
	var_602_bool = 0;
	var_604_bool = var_601_float > (int)0;
	if(var_604_bool != 0) {
		var_605_bool = 0; var_606_object = Obj();
		var_600_object = var_606_object;
		func_1609(var_605_bool, var_606_object);
		if(var_605_bool != 0) {
			var_602_bool = 1;
		}
	}
	if(var_602_bool != 0) {
		var_622_bool = GlobalVars[0];
		GlobalVars[0] = (bool)1;
		func_643(var_601_float);
	}
	return 0;
}


func_1185()
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_float = 0; var_24_bool = 0;
	WaitForAnimEnd();
	var_25_bool = 0;
	func_1861(var_25_bool);
	var_28_bool = var_25_bool == 0; //@nz
	if(var_28_bool != 0) {
		return 14;
	}
	func_2095((int)0);
	var_29_int = var_18_int;
	var_19_int = 0;
	
Label_1199:
	var_42_bool = 0;
	var_42_bool = 0;
	var_44_bool = var_19_int < (int)5;
	if(var_44_bool != 0) {
		var_45_bool = 0;
		func_1861(var_45_bool);
		if(var_45_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		irand(var_20_int, (int)3);
		var_48_bool = var_20_int == (int)0;
		if(var_48_bool != 0) {
			var_49_int = var_18_int;
			if(var_49_int == 0) goto Label_1232;
			irand(var_21_int, var_18_int);
			var_51_string = ""; var_52_int = 0;
			var_21_int = var_52_int;
			func_2088(var_51_string, var_52_int);
			PlayAnimation("all", var_51_string);
			WaitForAnimEnd(var_22_bool);
			var_53_bool = var_22_bool == 0; //@nz
			if(var_53_bool != 0) {
			} else {
		} else {
				var_58_bool = var_20_int == (int)1;
				if(var_58_bool != 0) {
					rand(var_23_float, (int)4);
					var_61_int = var_23_float + (int)1;
					Sleep(var_61_int, var_24_bool);
					var_62_bool = var_24_bool == 0; //@nz
					if(var_62_bool != 0) {
						goto Label_1261;
					}
					goto Label_1250;
				}
				var_63_int = var_19_int;
				if(var_63_int == 0) goto Label_1250;
				goto Label_1261;
		}
		Label_1250:
			var_54_bool = 0;
			func_1264(var_54_bool);
			var_55_bool = var_54_bool == 0; //@nz
			if(var_55_bool != 0) {
				goto Label_1261;
			}
			ResetAAS();
			var_19_int = var_19_int + (int)1;
			goto Label_1199;

		}
	}
Label_1261:
	ResetAAS();
	return 14;
	
}


func_2214()
{
	var_102_int = 0;
	func_2147(var_102_int);
	var_107_bool = var_102_int != (int)1;
	if(var_107_bool != 0) {
		return 0;
	}
	var_108_string = "";
	func_2197("liver");
	var_119_string = "";
	func_2197("kidney");
	var_120_string = "";
	func_2197("heart");
	var_121_string = "";
	func_2197("blood");
	return 0;
}


func_1705(var_105_bool, var_106_cvector)
{
	var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_bool = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_bool = 0;
	GetPosition(var_110_cvector);
	var_111_cvector = var_106_cvector - var_110_cvector;
	var_113_float = GetByIndex(var_111_cvector, 0);
	var_114_float = GetByIndex(var_111_cvector, 2);
	Rotate(var_113_float, var_114_float, var_112_bool);
	var_112_bool = var_105_bool;
	return 6;
}


func_1715(var_101_bool, var_102_object)
{
	var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0);
	@@var_102_object:GetPosition(var_104_cvector);
	var_105_bool = 0; var_106_cvector = CVector(0,0,0);
	var_104_cvector = var_106_cvector;
	func_1705(var_105_bool, var_106_cvector);
	var_105_bool = var_101_bool;
	return 2;
}


func_1724(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = "";
	var_42_bool = var_27_object == 0; //@ne
	if(var_42_bool != 0) {
		return 14;
	}
	IsDead(var_35_bool);
	var_43_bool = var_35_bool;
	if(var_43_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_36_int);
	var_45_bool = var_36_int < (int)0;
	if(var_45_bool != 0) {
		return 14;
	}
	@@var_27_object:GetPosition(var_37_cvector);
	GetPosition(var_38_cvector);
	GetDirection(var_39_cvector);
	var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_48_float = var_46_float * var_47_float;
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	var_51_float = var_49_float * var_50_float;
	var_52_int = var_48_float + var_51_float;
	var_54_bool = var_52_int >= (int)0;
	if(var_54_bool != 0) {
		var_41_string = "fhit";
	} else {
		var_41_string = "bhit";
	}
	var_57_int = var_41_string + "1";
	var_59_int = var_41_string + "2";
	FadeSecondaryAnimation("hit_react", var_57_int, var_59_int, (int)-10);
	return 14;
	
}


func_2238()
{
	var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0;
	ClearSubContainer((int)0);
	var_65_int = 0; var_66_int = 0;
	func_2166((int)300, (int)750);
	var_84_string = ""; var_85_int = 0; var_86_int = 0;
	func_1877("Knife", (int)1, (int)8);
	var_95_string = ""; var_96_int = 0; var_97_int = 0;
	func_1877("lockpick", (int)1, (int)6);
	var_98_int = 0; var_99_string = "";
	func_2268(var_98_int, "grabitel_mark");
	AddItem(var_63_bool, var_98_int, (int)0, (int)1);
	return 4;
}


func_203(var_0_bool, var_3_int, var_5_float, var_204_object, var_205_bool, var_206_float, var_275_bool, var_367_bool)
{
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_bool = 0; var_211_bool = 0; var_212_float = 0; var_213_cvector = CVector(0,0,0); var_214_float = 0; var_215_cvector = CVector(0,0,0); var_216_bool = 0; var_217_float = 0; var_218_float = 0; var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_bool = 0; var_222_bool = 0; var_223_float = 0; var_224_cvector = CVector(0,0,0); var_225_float = 0; var_226_cvector = CVector(0,0,0); var_227_bool = 0; var_228_float = 0;
	func_432(var_226_cvector, var_227_bool, var_228_float);
	var_5_float = 0;
	var_253_bool = IsFuncExist(var_204_object, "@GetAttackDistance", (int)1);
	if(var_253_bool != 0) {
		@@var_204_object:GetAttackDistance(var_218_float);
		var_218_float = var_218_float + (int)50;
	} else {
							var_206_float = var_218_float;
	}
	var_256_bool = var_218_float >= (int)150;
	if(var_256_bool != 0) {
		var_218_float = 150;
	}
	var_3_int = false;
	var_0_bool = var_204_object;
	IsPlayerActor(var_0_bool, var_221_bool);
	var_257_bool = var_221_bool;
	if(var_257_bool != 0) {
		PlayGlobalMusic("attack");
		var_259_object = Obj();
		func_1929(var_259_object);
		SendPlayerEnemy(var_204_object, var_259_object);
	}
	var_260_bool = var_205_bool;
	if(var_260_bool != 0) {
		var_222_bool = 0;
	} else {
						var_222_bool = 1;

	}
	var_223_float = (float)300.0 + var_218_float;
	
Label_243:
	var_262_bool = 0;
	var_262_bool = 0;
	var_263_bool = 0; var_264_object = Obj();
	var_264_object = var_0_bool;
	func_1681(var_263_bool, var_264_object);
	if(var_263_bool != 0) {
		var_265_bool = var_3_int == 0; //@nz
		if(var_265_bool != 0) {
			var_262_bool = 1;
		}
	}
	if(var_262_bool != 0) {
		func_847(var_228_float);
		@@@var_0_bool:GetPFPosition(var_219_cvector);
		GetPFPosition(var_220_cvector);
		var_224_cvector = var_219_cvector - var_220_cvector;
		var_225_float = var_224_cvector | var_224_cvector;
		var_267_float = var_223_float * var_223_float;
		var_268_bool = var_225_float >= var_267_float;
		if(var_268_bool != 0) {
			var_269_bool = 0; var_270_object = Obj(); var_271_float = 0; var_272_float = 0; var_273_bool = 0; var_274_bool = 0;
			var_270_object = var_0_bool;
			var_218_float = var_271_float;
			TaskCall(2);
			func_887(var_277_bool, var_269_bool, var_270_object, var_271_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_352_bool = var_275_bool == 0; //@nz
			if(var_352_bool != 0) {
			} else {
				var_222_bool = 0;
		} else {
				var_358_float = var_206_float * var_206_float;
				var_359_bool = var_225_float >= var_358_float;
				if(var_359_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_226_cvector);
					CanReachByPF(var_227_bool, var_226_cvector);
					var_360_bool = var_227_bool == 0; //@nz
					if(var_360_bool != 0) {
						var_361_bool = 0; var_362_object = Obj(); var_363_float = 0; var_364_float = 0; var_365_bool = 0; var_366_bool = 0;
						var_362_object = var_0_bool;
						var_218_float = var_363_float;
						TaskCall(2);
						func_887(var_369_bool, var_361_bool, var_362_object, var_363_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_370_bool = var_367_bool == 0; //@nz
						if(var_370_bool != 0) {
							goto Label_415;
						}
						var_222_bool = 0;
						goto Label_243;
					}
					var_371_bool = var_222_bool == 0; //@nz
					if(var_371_bool != 0) {
						var_372_object = Obj();
						var_372_object = var_0_bool;
						func_1850(var_372_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_847(var_228_float);
						StopAsync();
						var_222_bool = 1;
						var_383_bool = 0; var_384_object = Obj();
						var_384_object = var_0_bool;
						func_1681(var_383_bool, var_384_object);
						var_385_bool = var_383_bool == 0; //@nz
						if(var_385_bool != 0) {
							goto Label_415;
						}
					}
					rand(var_228_float);
					var_386_bool = 0;
					var_388_bool = var_228_float < (float)0.19999998807907104;
					if(var_388_bool != 1) {
						var_389_bool = 0;
						func_804((bool)1, var_389_bool);
						if(var_389_bool != 1) {
							var_386_bool = 0;
						}
					}
					if(var_386_bool != 0) {
						Face(var_0_bool);
						func_852();
						PlayAnimation("all", "attack_stay");
						var_426_bool = 0; var_427_float = 0;
						var_206_float = var_427_float;
						func_672(var_228_float, var_426_bool, var_427_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_847(var_228_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_665_bool = 0;
						func_804(var_228_float, var_665_bool);
						var_666_bool = var_665_bool == 0; //@nz
						if(var_666_bool == 0) goto Label_405;
						var_667_bool = 0; var_668_object = Obj();
						var_668_object = var_0_bool;
						func_1681(var_667_bool, var_668_object);
						var_669_bool = var_667_bool == 0; //@nz
						if(var_669_bool != 0) {
							goto Label_415;
						}
						@@@var_0_bool:GetPFPosition(var_219_cvector);
						GetPFPosition(var_220_cvector);
						var_224_cvector = var_219_cvector - var_220_cvector;
						var_225_float = var_224_cvector | var_224_cvector;
						var_670_float = var_206_float * var_206_float;
						var_671_bool = var_225_float < var_670_float;
						if(var_671_bool == 0) goto Label_405;
						var_672_bool = 0; var_673_float = 0;
						var_206_float = var_673_float;
						func_506(var_227_bool, var_228_float, var_672_bool, var_673_float);
						var_674_bool = var_672_bool == 0; //@nz
						if(var_674_bool == 0) goto Label_405;
						goto Label_415;
				}
					var_675_bool = 0; var_676_float = 0;
					var_206_float = var_676_float;
					func_506(var_227_bool, var_228_float, var_675_bool, var_676_float);
					var_677_bool = var_675_bool == 0; //@nz
					if(var_677_bool != 0) {
						goto Label_415;
					}
					var_222_bool = 1;

				}
			Label_405:
				goto Label_414;
		}
		Label_414:
			goto Label_243;

		}
	}
Label_415:
	WaitForAnimEnd();
	var_353_int = var_3_int;
	if(var_353_int != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_356_bool = var_221_bool;
	if(var_356_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_715(var_0_bool, var_441_bool)
{
	var_442_cvector = CVector(0,0,0); var_443_cvector = CVector(0,0,0); var_444_cvector = CVector(0,0,0); var_445_float = 0; var_446_float = 0; var_447_cvector = CVector(0,0,0); var_448_cvector = CVector(0,0,0); var_449_cvector = CVector(0,0,0); var_450_float = 0; var_451_float = 0;
	var_452_bool = 0; var_453_object = Obj();
	var_453_object = var_0_bool;
	func_1681(var_452_bool, var_453_object);
	var_454_bool = var_452_bool == 0; //@nz
	if(var_454_bool != 0) {
		var_441_bool = 0;
		return 10;
	}
	var_455_bool = 0;
	func_804(var_451_float, var_455_bool);
	if(var_455_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_447_cvector);
		GetPFPosition(var_448_cvector);
		var_449_cvector = var_447_cvector - var_448_cvector;
		var_450_float = var_449_cvector | var_449_cvector;
		@@@var_0_bool:GetAttackDistance(var_451_float);
		var_451_float = var_451_float + (int)50;
		var_457_float = var_451_float * var_451_float;
		var_441_bool = var_450_float <= var_457_float;
		return 10;
	}
	var_441_bool = 0;
	return 10;
}


func_2268(var_77_int, var_78_string)
{
	var_79_int = 0; var_80_int = 0;
	GetInvItemByName(var_80_int, var_78_string);
	var_80_int = var_77_int;
	return 2;
}


func_2273(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	GetScene(var_13_object);
	var_14_object = Obj();
	func_1929(var_14_object);
	@@var_13_object:RemoveStationaryActor(var_14_object);
	var_17_bool = 0; var_18_object = Obj();
	var_11_object = var_18_object;
	func_1497(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		var_21_bool = 0; var_22_object = Obj(); var_23_float = 0;
		var_11_object = var_22_object;
		func_2000(var_21_bool, var_22_object, (float)0.019999999552965164);
	}
	var_59_object = Obj();
	var_11_object = var_59_object;
	TaskCall(4);
	func_1271(var_59_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_743(var_439_bool)
{
	var_440_bool = 0;
	var_440_bool = 0;
	var_441_bool = 0;
	func_715(var_440_bool, var_441_bool);
	if(var_441_bool != 0) {
		var_458_bool = 0;
		func_759(var_439_bool, var_440_bool, var_458_bool);
		if(var_458_bool != 0) {
			var_440_bool = 1;
		}
	}
	if(var_440_bool != 0) {
		var_439_bool = 1;
		return 0;
	}
	var_439_bool = 0;
	return 0;
}


func_1768(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0);
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_object = var_14_object;
	if(var_37_object != 0) {
		var_39_bool = var_15_int != (int)4;
		if(var_39_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_41_bool = var_15_int != (int)5;
		if(var_41_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
		var_44_cvector = CVector(0,0,0); var_45_object = Obj();
		var_14_object = var_45_object;
		func_1482(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1935(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		CreateVectorVector(var_27_object);
		var_28_int = 1;

	Label_1797:
		var_56_int = "hit" + var_28_int;
		GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector);
		var_57_bool = var_29_bool == 0; //@nz
		if(var_57_bool != 0) {
		} else {
			var_105_int = var_31_cvector | var_26_cvector;
			var_107_bool = var_105_int >= (float)0.7071067690849304;
			if(var_107_bool != 0) {
				@@var_27_object:add(var_30_cvector);
			}
			var_28_int = var_28_int + (int)1;
			goto Label_1797;
		}
		@@var_27_object:size(var_32_int);
		var_58_int = var_32_int;
		if(var_58_int != 0) {
			irand(var_33_int, var_32_int);
			@@var_27_object:get(var_34_cvector, var_33_int);
			var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
			var_14_object = var_59_object;
			var_15_int = var_60_int;
			var_16_float = var_61_float;
			var_34_cvector = var_62_cvector;
			var_63_cvector = -var_26_cvector;
			func_1836(var_61_float, var_62_cvector, var_63_cvector);
			return 18;
		}
		var_27_object = 0;
	}
	var_104_object = Obj();
	var_14_object = var_104_object;
	func_1724(var_104_object);
	return 18;
	
}


func_1264(var_54_bool)
{
	var_54_bool = 1;
	return 0;
}


func_1266()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_759(var_0_bool, var_4_bool, var_458_bool)
{
	var_459_object = Obj(); var_460_bool = 0; var_461_float = 0; var_462_cvector = CVector(0,0,0); var_463_cvector = CVector(0,0,0); var_464_object = Obj(); var_465_bool = 0; var_466_float = 0; var_467_cvector = CVector(0,0,0); var_468_cvector = CVector(0,0,0);
	GetScene(var_464_object);
	var_465_bool = 0;
	
Label_763:
	var_469_cvector = CVector(0,0,0); var_470_object = Obj();
	var_470_object = var_0_bool;
	func_1482(var_469_cvector, var_470_object);
	var_475_int = -var_469_cvector;
	FindDirLength(var_466_float, var_475_int, var_4_bool);
	var_476_bool = var_466_float < var_4_bool;
	if(var_476_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_467_cvector);
		GetPFPosition(var_468_cvector);
		WaitForAnimEnd();
		func_847(var_468_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_465_bool = 1;
		var_480_bool = 0;
		func_715(var_468_cvector, var_480_bool);
		var_481_bool = var_480_bool == 0; //@nz
		if(var_481_bool != 0) {
			goto Label_801;
		}
		goto Label_763;
	}
Label_801:
	var_465_bool = var_458_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1271(var_59_object)
{
	func_2238();
	func_2214();
	var_122_object = Obj();
	var_59_object = var_122_object;
	func_1283(var_122_object);
	return 0;
}


func_1283(var_122_object)
{
	EventDisable(0);
	var_123_object = Obj();
	var_122_object = var_123_object;
	func_1308(var_123_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1294:
	Hold();
	goto Label_1294;
}
EMIT "Return(); Pop(0)";


func_1308(var_123_object)
{
	var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_string = ""; var_129_object = Obj(); var_130_bool = 0; var_131_bool = 0; var_132_float = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_string = ""; var_139_object = Obj(); var_140_bool = 0; var_141_bool = 0; var_142_float = 0; var_143_cvector = CVector(0,0,0);
	var_144_bool = var_123_object == 0; //@ne
	if(var_144_bool != 0) {
		var_145_string = "";
		func_1399("fdie");
	} else {
		@@var_123_object:GetPosition(var_134_cvector);
		GetPosition(var_135_cvector);
		GetDirection(var_136_cvector);
		var_137_cvector = var_135_cvector - var_134_cvector;
		var_177_float = GetByIndex(var_137_cvector, 0);
		var_178_float = GetByIndex(var_136_cvector, 0);
		var_179_float = var_177_float * var_178_float;
		var_180_float = GetByIndex(var_137_cvector, 2);
		var_181_float = GetByIndex(var_136_cvector, 2);
		var_182_float = var_180_float * var_181_float;
		var_183_int = var_179_float + var_182_float;
		var_185_bool = var_183_int >= (int)0;
		if(var_185_bool != 0) {
			var_138_string = "fdie";
		} else {
				var_138_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_123_object = var_139_object;
		var_188_bool = IsFuncExist(var_123_object, "GetScriptProperty", (int)2);
		if(var_188_bool != 0) {
			@@var_123_object:HasScriptProperty(var_140_bool, "Owner");
			var_190_bool = var_140_bool;
			if(var_190_bool != 0) {
				@@var_123_object:GetScriptProperty(var_139_object, "Owner");
				var_192_bool = var_139_object == 0; //@ne
				if(var_192_bool != 0) {
					var_123_object = var_139_object;
				}
			}
		}
		var_195_bool = IsFuncExist(var_139_object, "@GetEyesHeight", (int)1);
		if(var_195_bool != 0) {
			@@var_139_object:GetEyesHeight(var_142_float);
			var_143_cvector = CVector(0.0, 0.0, 0.0);
			var_196_float = GetByIndex(var_143_cvector, 1);
			var_142_float = var_196_float;
			SetByIndex(var_143_cvector, 1) = var_196_float;
			LookAsync(var_123_object, "head", var_143_cvector);
			var_141_bool = 1;
		} else {
			var_141_bool = 0;

		}
		var_198_string = "";
		var_138_string = var_198_string;
		func_1888(var_198_string);
		PlayAnimation("all", var_138_string);
		WaitForAnimEnd();
		var_200_bool = var_141_bool;
		if(var_200_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_138_string);
		RemoveEnvelope();
		var_139_object = 0;
	}
	return 20;
	
}


func_2336(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_1681(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
	return 0;
}


func_804(var_0_bool, var_389_bool)
{
	var_390_bool = 0; var_391_bool = 0;
	var_394_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_394_bool != 0) {
		@@@var_0_bool:IsAttacking(var_391_bool);
		var_391_bool = var_389_bool;
		return 2;
	}
	var_389_bool = 0;
	return 2;
}


func_2343(var_51_object)
{
	var_52_object = Obj();
	var_51_object = var_52_object;
	func_2354(var_52_object);
	return 0;
}


func_1836(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_23_object);
	AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	var_27_object = Obj();
	var_16_object = var_27_object;
	func_1724(var_27_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2349()
{
	return 0;
}


func_2351(var_13_bool)
{
	var_13_bool = 0;
	return 0;
}


func_815(var_2_int, var_5_float)
{
	var_502_float = 0; var_503_int = 0; var_504_float = 0; var_505_int = 0;
	var_506_bool = var_2_int == 0; //@nz
	if(var_506_bool != 0) {
		return 4;
	}
	var_507_float = var_5_float;
	if(var_507_float != 0) {
		var_5_float = var_5_float + (int)-1;
		var_510_bool = var_5_float > (int)0;
		if(var_510_bool != 0) {
			return 4;
		}
	}
	rand(var_504_float);
	var_511_float = 0;
	func_861(var_511_float);
	var_512_bool = var_504_float < var_511_float;
	if(var_512_bool != 0) {
		irand(var_505_int, var_2_int);
		var_505_int = var_505_int + (int)1;
		var_515_int = "attack" + var_505_int;
		Speak(var_515_int);
		var_516_int = 0;
		func_859(var_516_int);
		var_5_float = var_516_int;
	}
	return 4;
}


func_2354(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj();
	GetScene(var_54_object);
	var_55_object = Obj();
	func_1929(var_55_object);
	@@var_54_object:RemoveStationaryActor(var_55_object);
	var_58_bool = 0; var_59_object = Obj();
	var_52_object = var_59_object;
	TaskCall(5);
	func_1431(var_53_object, var_54_object, var_58_bool, var_59_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1850(var_372_object)
{
	var_373_cvector = CVector(0,0,0); var_374_cvector = CVector(0,0,0); var_375_cvector = CVector(0,0,0); var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0);
	@@var_372_object:GetPosition(var_376_cvector);
	GetPosition(var_377_cvector);
	var_378_cvector = var_376_cvector - var_377_cvector;
	var_379_float = GetByIndex(var_378_cvector, 0);
	var_380_float = GetByIndex(var_378_cvector, 2);
	RotateAsync(var_379_float, var_380_float);
	return 6;
}


func_1861(var_25_bool)
{
	var_26_bool = 0; var_27_bool = 0;
	IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
	return 2;
}


func_1866(var_286_object)
{
	var_287_float = 0; var_288_cvector = CVector(0,0,0); var_289_float = 0; var_290_cvector = CVector(0,0,0);
	@@var_286_object:GetEyesHeight(var_289_float);
	var_290_cvector = CVector(0.0, 0.0, 0.0);
	var_291_float = GetByIndex(var_290_cvector, 1);
	var_289_float = var_291_float;
	SetByIndex(var_290_cvector, 1) = var_291_float;
	LookAsync(var_286_object, "head", var_290_cvector);
	return 4;
}


func_847(var_0_bool)
{
	var_266_object = Obj();
	var_266_object = var_0_bool;
	func_2062(var_266_object);
	return 0;
}


func_852()
{
	var_395_string = "";
	func_1888("attack_stay");
	return 0;
}


func_1877(var_84_string, var_85_int, var_86_int)
{
	var_87_bool = 0; var_88_bool = 0;
	var_89_bool = 0; var_90_int = 0; var_91_int = 0;
	var_85_int = var_90_int;
	var_86_int = var_91_int;
	func_1995(var_89_bool, var_90_int, var_91_int);
	if(var_89_bool != 0) {
		AddItem(var_88_bool, var_84_string, (int)0);
	}
	return 2;
}


func_857(var_645_bool)
{
	var_645_bool = 1;
	return 0;
}


func_859(var_516_int)
{
	var_516_int = 1;
	return 0;
}


func_861(var_511_float)
{
	var_511_float = 0.5;
	return 0;
}


func_1888(var_146_string)
{
	var_147_bool = 0; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_bool = 0; var_152_float = 0; var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_bool = 0; var_156_int = 0; var_157_bool = 0; var_158_int = 0; var_159_bool = 0; var_160_float = 0; var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0);
	IsExisting3DSound(var_155_bool, var_146_string);
	var_163_bool = var_155_bool == 0; //@nz
	if(var_163_bool != 0) {
		var_156_int = 0;

	Label_1894:
		var_165_int = var_156_int + (int)1;
		var_166_int = var_146_string + var_165_int;
		IsExisting3DSound(var_157_bool, var_166_int);
		var_167_bool = var_157_bool == 0; //@nz
		if(var_167_bool != 0) {
		} else {
			var_156_int = var_156_int + (int)1;
			goto Label_1894;
		}
		var_168_bool = var_156_int == 0; //@nz
		if(var_168_bool != 0) {
			return 16;
		}
		irand(var_158_int, var_156_int);
		var_170_int = var_158_int + (int)1;
		var_146_string = var_146_string + var_170_int;
	}
	Is3DSoundLoaded(var_159_bool, var_146_string);
	var_171_bool = var_159_bool;
	if(var_171_bool != 0) {
		GetEyesHeight(var_160_float);
		GetDirection(var_161_cvector);
		var_162_cvector = var_161_cvector * (int)50;
		var_173_float = GetByIndex(var_162_cvector, 1);
		var_173_float = var_173_float + var_160_float;
		SetByIndex(var_162_cvector, 1) = var_173_float;
		PlayGlobalSound(var_146_string, var_162_cvector);
	}
	return 16;
	
}


func_887(var_2_int, var_269_bool, var_270_object, var_271_float, var_272_float, var_273_bool, var_274_bool)
{
	var_278_bool = 0; var_279_bool = 0; var_280_bool = 0; var_281_bool = 0;
	var_282_object = Obj();
	var_270_object = var_282_object;
	func_2062(var_282_object);
	SetTimer((int)1, (int)5);
	CanSee(var_280_bool, var_270_object);
	var_285_bool = var_280_bool;
	if(var_285_bool != 0) {
		var_2_int = true;
		var_286_object = Obj();
		var_270_object = var_286_object;
		func_1866(var_286_object);
	} else {
		var_2_int = false;
	}
	var_293_bool = 0; var_294_object = Obj();
	var_270_object = var_294_object;
	func_1497(var_293_bool, var_294_object);
	if(var_293_bool != 0) {
		var_297_object = Obj();
		func_1929(var_297_object);
		SendPlayerEnemy(var_270_object, var_297_object);
	}
	var_298_bool = 0; var_299_object = Obj(); var_300_float = 0; var_301_float = 0; var_302_bool = 0; var_303_bool = 0;
	var_270_object = var_299_object;
	var_271_float = var_300_float;
	var_272_float = var_301_float;
	var_273_bool = var_302_bool;
	var_274_bool = var_303_bool;
	func_992(var_280_bool, var_281_bool, var_298_bool, var_299_object, var_300_float, var_301_float, var_302_bool, var_303_bool);
	var_298_bool = var_281_bool;
	var_349_int = var_2_int;
	if(var_349_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_281_bool = var_269_bool;
	return 4;
	
}


func_1399(var_145_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_146_string = "";
	var_145_string = var_146_string;
	func_1888(var_146_string);
	PlayAnimation("all", var_145_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_145_string);
	RemoveEnvelope();
	return 0;
}


func_1929(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	self(var_16_object);
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1935(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0;
	var_52_int = var_43_cvector | var_43_cvector;
	var_51_float = sqrt(var_52_int);
	var_53_float = 9.999999974752427e-07;
	var_54_bool = var_51_float < var_53_float;
	if(var_54_bool != 0) {
		var_42_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_42_cvector = var_43_cvector / var_51_float;
	return 2;
}


func_1431(var_58_bool, var_59_object, var_81_bool, var_686_object)
{
	var_60_float = 0; var_61_float = 0;
	var_62_bool = 0; var_63_object = Obj();
	var_59_object = var_63_object;
	func_1681(var_62_bool, var_63_object);
	var_64_bool = var_62_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_58_bool = 0;
		return 2;
	}
	var_65_float = 0; var_66_object = Obj();
	var_59_object = var_66_object;
	func_1489(var_65_float, var_66_object);
	var_65_float = var_61_float;
	var_73_bool = 0; var_74_float = 0; var_75_float = 0; var_76_float = 0;
	var_61_float = var_74_float;
	func_1987(var_73_bool, var_74_float, (float)250000.0, (float)3240000.0);
	if(var_73_bool != 0) {
		var_79_bool = 0; var_80_object = Obj();
		var_59_object = var_80_object;
		TaskCall(0);
		func_0(var_61_float, var_81_bool, var_79_bool, var_80_object);
		TaskReturn();
		var_81_bool = var_58_bool;
		return 2;
	}
	var_684_bool = 0; var_685_object = Obj();
	var_59_object = var_685_object;
	TaskCall(1);
	func_126(var_684_bool, var_685_object);
	TaskReturn();
	var_686_object = var_58_bool;
	return 2;
}


func_1945(var_572_float, var_573_float, var_574_float)
{
	var_577_bool = var_573_float < var_574_float;
	if(var_577_bool != 0) {
		var_573_float = var_572_float;
	} else {
		var_574_float = var_572_float;
	}
	return 0;
	
}


func_1952(var_159_float, var_160_float, var_161_float, var_162_float)
{
	var_163_float = var_161_float * var_161_float;
	var_165_float = (int)4 * var_160_float;
	var_166_float = var_165_float * var_162_float;
	var_159_float = var_163_float - var_166_float;
	return 0;
}


func_1959(var_173_float, var_174_float, var_175_float, var_177_float)
{
	var_178_float = 0; var_179_float = 0;
	var_180_int = -var_175_float;
	var_181_int = var_180_int - var_177_float;
	var_183_float = (int)2 * var_174_float;
	var_179_float = var_181_int / var_183_float;
	var_185_bool = var_179_float > (int)0;
	if(var_185_bool != 0) {
		var_179_float = var_173_float;
		return 2;
	}
	var_186_int = -var_175_float;
	var_187_int = var_186_int + var_177_float;
	var_189_float = (int)2 * var_174_float;
	var_173_float = var_187_int / var_189_float;
	return 2;
}


func_432(var_1_object, var_2_int, var_4_bool)
{
	var_229_bool = 0; var_230_bool = 0; var_231_cvector = CVector(0,0,0); var_232_bool = 0; var_233_bool = 0; var_234_cvector = CVector(0,0,0);
	var_1_object = 0;
	
Label_434:
	var_238_int = var_1_object + (int)1;
	var_239_int = "attack_begin" + var_238_int;
	HasAnimation(var_232_bool, "all", var_239_int);
	var_240_bool = var_232_bool == 0; //@nz
	if(var_240_bool != 0) {
	} else {
			var_1_object = var_1_object + (int)1;
			goto Label_434;
	}
	var_2_int = 0;
	
Label_448:
	var_243_int = var_2_int + (int)1;
	var_244_int = "attack" + var_243_int;
	IsExisting3DSound(var_233_bool, var_244_int);
	var_245_bool = var_233_bool == 0; //@nz
	if(var_245_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_448;

	}
	GetAnimationOffset(var_234_cvector, "all", "bjump");
	var_248_float = GetByIndex(var_234_cvector, 2);
	var_4_bool = -var_248_float;
	return 6;
	
}


func_950(var_2_int)
{
	KillTimer((int)1);
	var_12_int = var_2_int;
	if(var_12_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1116(var_10_object);
	return 0;
}


func_1976(var_50_float, var_51_float, var_52_float, var_53_float)
{
	var_54_bool = var_51_float < var_52_float;
	if(var_54_bool != 0) {
		var_52_float = var_50_float;
		return 0;
	}
	var_55_bool = var_51_float > var_53_float;
	if(var_55_bool != 0) {
		var_53_float = var_50_float;
		return 0;
	}
	var_51_float = var_50_float;
	return 0;
}


func_1468(var_562_string, var_563_int)
{
	var_565_bool = var_563_int == (int)2;
	if(var_565_bool != 0) {
		var_562_string = "fire";
		return 0;
	EMIT "GOTO 0x5c8";
	}
	var_567_bool = var_563_int == (int)1;
	if(var_567_bool != 0) {
		var_562_string = "bullet";
		return 0;
	}
	var_562_string = "phys";
	return 0;
}


func_1987(var_73_bool, var_74_float, var_75_float, var_76_float)
{
	var_73_bool = 0;
	var_77_bool = var_74_float >= var_75_float;
	if(var_77_bool != 0) {
		var_78_bool = var_74_float <= var_76_float;
		if(var_78_bool != 0) {
			var_73_bool = 1;
		}
	}
	return 0;
}


func_1482(var_44_cvector, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_48_cvector);
	@@var_45_object:GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
	return 4;
}


func_1995(var_89_bool, var_90_int, var_91_int)
{
	var_92_int = 0; var_93_int = 0;
	irand(var_93_int, var_91_int);
	var_89_bool = var_93_int < var_90_int;
	return 2;
}


func_2000(var_21_bool, var_22_object, var_23_float)
{
	var_24_bool = var_22_object == 0; //@nz
	if(var_24_bool != 0) {
		var_21_bool = 0;
		return 0;
	}
	var_26_bool = var_23_float > (int)0;
	if(var_26_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_57_bool = var_23_float < (int)0;
		if(var_57_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_2021;
		}
		var_21_bool = 0;
		return 0;
	}
Label_2021:
	var_28_float = 0;
	var_23_float = var_28_float;
	func_2052(var_28_float);
	var_32_bool = 0; var_33_object = Obj(); var_34_string = ""; var_35_float = 0; var_36_float = 0; var_37_float = 0;
	var_22_object = var_33_object;
	var_23_float = var_35_float;
	func_1514(var_32_bool, var_33_object, "reputation", var_35_float, (float)0, (float)1);
	var_21_bool = 1;
	return 0;
	
}


func_1489(var_65_float, var_66_object)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetPosition(var_70_cvector);
	@@var_66_object:GetPosition(var_71_cvector);
	var_72_cvector = var_71_cvector - var_70_cvector;
	var_65_float = var_72_cvector | var_72_cvector;
	return 6;
}


func_467(var_0_bool, var_520_float, var_521_int)
{
	var_522_object = Obj(); var_523_float = 0; var_524_float = 0; var_525_object = Obj(); var_526_float = 0; var_527_float = 0;
	var_529_float = var_520_float * (float)0.8999999761581421;
	GetVictim(var_529_float, var_525_object);
	ReportAttack(var_0_bool);
	var_530_bool = var_525_object == var_0_bool;
	if(var_530_bool != 0) {
		var_531_float = 0; var_532_object = Obj(); var_533_int = 0;
		var_525_object = var_532_object;
		var_521_int = var_533_int;
		func_154(var_533_int);
		var_531_float = var_526_float;
		var_534_float = 0; var_535_object = Obj(); var_536_float = 0; var_537_int = 0;
		var_525_object = var_535_object;
		var_526_float = var_536_float;
		var_538_int = 0; var_539_object = Obj(); var_540_int = 0;
		var_525_object = var_539_object;
		var_521_int = var_540_int;
		func_157(var_540_int);
		var_538_int = var_537_int;
		func_1536(var_534_float, var_535_object, var_536_float, var_537_int);
		var_534_float = var_527_float;
		var_599_int = 0;
		func_160(var_599_int);
		ReportHit(var_0_bool, var_599_int, var_527_float, var_526_float);
		var_600_object = Obj(); var_601_float = 0;
		var_525_object = var_600_object;
		var_527_float = var_601_float;
		func_162(var_600_object, var_601_float);
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1497(var_17_bool, var_18_object)
{
	var_19_bool = 0; var_20_bool = 0;
	IsPlayerActor(var_18_object, var_20_bool);
	var_20_bool = var_17_bool;
	return 2;
}


func_1502(var_40_bool, var_41_object, var_42_string)
{
	var_43_bool = 0; var_44_bool = 0;
	var_47_bool = IsFuncExist(var_41_object, "HasProperty", (int)2);
	var_48_bool = var_47_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_40_bool = 0;
		return 2;
	}
	@@var_41_object:HasProperty(var_42_string, var_44_bool);
	var_44_bool = var_40_bool;
	return 2;
}


func_992(var_0_bool, var_1_object, var_298_bool, var_299_object, var_300_float, var_301_float, var_302_bool, var_303_bool)
{
	var_304_bool = 0; var_305_bool = 0; var_306_object = Obj(); var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_float = 0; var_311_object = Obj(); var_312_bool = 0; var_313_bool = 0; var_314_object = Obj(); var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_float = 0; var_319_object = Obj();
	var_0_bool = false;
	var_1_object = var_299_object;
	var_303_bool = var_313_bool;
	
Label_996:
	var_320_bool = 0; var_321_object = Obj();
	var_299_object = var_321_object;
	func_1132(var_320_bool, var_321_object);
	var_324_bool = var_320_bool == 0; //@nz
	if(var_324_bool != 0) {
		var_298_bool = 0;
		return 16;
	}
	@@var_299_object:GetPosition(var_315_cvector);
	GetPosition(var_316_cvector);
	var_317_cvector = var_315_cvector - var_316_cvector;
	var_318_float = var_317_cvector | var_317_cvector;
	var_325_bool = 0;
	var_325_bool = 0;
	var_327_bool = var_301_float > (int)0;
	if(var_327_bool != 0) {
		var_328_float = var_301_float * var_301_float;
		var_329_bool = var_318_float > var_328_float;
		if(var_329_bool != 0) {
			var_325_bool = 1;
		}
	}
	if(var_325_bool != 0) {
		Stop();
		var_298_bool = 0;
		return 16;
	}
	var_330_float = var_300_float * var_300_float;
	var_331_bool = var_318_float > var_330_float;
	if(var_331_bool != 0) {
		@@var_299_object:GetPFPosition(var_315_cvector);
		FindPathTo(var_319_object, var_315_cvector);
		var_332_bool = var_319_object != 0; //@nn
		if(var_332_bool != 0) {
			var_319_object = var_314_object;
			var_319_object = 0;
		}
		var_333_bool = var_314_object != 0; //@nn
		if(var_333_bool != 0) {
			var_334_bool = var_313_bool;
			if(var_334_bool == 0) goto Label_1045;
			var_313_bool = 0;
			RotatePath(var_314_object, var_312_bool);
			var_335_bool = var_312_bool == 0; //@nz
			if(var_335_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_338_string = "";
				func_1139(var_338_string);
				var_339_string = "";
				func_1141(var_339_string);
				FollowPath(var_314_object, var_302_bool, var_312_bool, var_338_string, var_339_string);
				var_340_bool = var_312_bool == 0; //@nz
				if(var_340_bool != 0) {
					var_341_bool = var_0_bool;
					if(var_341_bool != 0) {
						var_314_object = 0;
						goto Label_1092;
					EMIT "GOTO 0x429";
					}
				} else {
					var_314_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_312_bool);
					var_344_bool = var_312_bool == 0; //@nz
					if(var_344_bool != 0) {
						var_345_bool = var_0_bool;
						if(var_345_bool != 0) {
							var_314_object = 0;
							goto Label_1092;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1092;
	}
			var_319_object = 0;
			goto Label_1090;

		Label_1090:
			var_314_object = 0;

		}
		goto Label_996;
	}
Label_1092:
	var_298_bool = !var_0_bool;
	return 16;
	
}


func_1514(var_32_bool, var_33_object, var_34_string, var_35_float, var_36_float, var_37_float)
{
	var_38_float = 0; var_39_float = 0;
	var_40_bool = 0; var_41_object = Obj(); var_42_string = "";
	var_33_object = var_41_object;
	var_34_string = var_42_string;
	func_1502(var_40_bool, var_41_object, var_42_string);
	var_49_bool = var_40_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	@@var_33_object:GetProperty(var_34_string, var_39_float);
	var_50_float = 0; var_51_float = 0; var_52_float = 0; var_53_float = 0;
	var_51_float = var_39_float + var_35_float;
	var_36_float = var_52_float;
	var_37_float = var_53_float;
	func_1976(var_50_float, var_51_float, var_52_float, var_53_float);
	@@var_33_object:SetProperty(var_34_string, var_50_float);
	var_32_bool = 1;
	return 2;
}


func_2035(var_590_float)
{
	var_591_object = Obj(); var_592_object = Obj();
	CreateFloatVector(var_592_object);
	@@var_592_object:add(var_590_float);
	var_594_bool = var_590_float < (int)0;
	if(var_594_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_592_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_506(var_0_bool, var_1_object, var_487_bool, var_488_float)
{
	var_489_int = 0; var_490_bool = 0; var_491_int = 0; var_492_string = ""; var_493_int = 0; var_494_bool = 0; var_495_int = 0; var_496_string = "";
	func_847(var_496_string);
	irand(var_493_int, var_1_object);
	var_493_int = var_493_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_2071();
	var_501_int = "attack_begin" + var_493_int;
	PlayAnimation("all", var_501_int);
	WaitForAnimEnd();
	func_815(var_495_int, var_496_string);
	var_517_bool = 0; var_518_object = Obj();
	var_518_object = var_0_bool;
	func_1681(var_517_bool, var_518_object);
	var_519_bool = var_517_bool == 0; //@nz
	if(var_519_bool != 0) {
		StopAsync();
		var_487_bool = 0;
		return 8;
	}
	var_520_float = 0; var_521_int = 0;
	var_488_float = var_520_float;
	var_493_int = var_521_int;
	func_467(var_496_string, var_520_float, var_521_int);
	var_625_int = "attack_middle" + var_493_int;
	HasAnimation(var_494_bool, "all", var_625_int);
	var_626_bool = var_494_bool;
	if(var_626_bool != 0) {
		func_2071();
		var_629_int = "attack_middle" + var_493_int;
		PlayAnimation("all", var_629_int);
		WaitForAnimEnd();
		func_847(var_496_string);
		var_630_bool = 0; var_631_object = Obj();
		var_631_object = var_0_bool;
		func_1681(var_630_bool, var_631_object);
		var_632_bool = var_630_bool == 0; //@nz
		if(var_632_bool != 0) {
			StopAsync();
			var_487_bool = 0;
			return 8;
		}
		var_633_float = 0; var_634_int = 0;
		var_488_float = var_633_float;
		var_493_int = var_634_int;
		func_467(var_496_string, var_633_float, var_634_int);
		var_495_int = 1;

	Label_583:
		var_636_int = "attack_middle" + var_493_int;
		var_638_int = var_636_int + "_";
		var_496_string = var_638_int + var_495_int;
		HasAnimation(var_494_bool, "all", var_496_string);
		var_640_bool = var_494_bool == 0; //@nz
		if(var_640_bool != 0) {
		} else {
			func_2071();
			PlayAnimation("all", var_496_string);
			WaitForAnimEnd();
			func_847(var_496_string);
			var_656_bool = 0; var_657_object = Obj();
			var_657_object = var_0_bool;
			func_1681(var_656_bool, var_657_object);
			var_658_bool = var_656_bool == 0; //@nz
			if(var_658_bool != 0) {
				StopAsync();
				var_487_bool = 0;
				var_659_float = 0; var_660_int = 0;
				var_488_float = var_659_float;
				var_493_int = var_660_int;
				func_467(var_496_string, var_659_float, var_660_int);
				var_495_int = var_495_int + (int)1;
				goto Label_583;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_644_int = "attack_end" + var_493_int;
	PlayAnimation("all", var_644_int);
	var_645_bool = 0;
	func_857(var_645_bool);
	if(var_645_bool != 0) {
		var_646_bool = 0; var_647_float = 0;
		func_645(var_646_bool, (float)0.44999998807907104);
		StopAsync();
	}
	var_487_bool = 1;
	return 8;
	
}


