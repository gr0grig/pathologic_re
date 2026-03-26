// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,IsLoaded/1,RemoveActor/1,Hold/0,GetDirection/1,FindActor/2,RotateAsync/2,CanSee/2,rand/3,SetTimer/2,KillTimer/1,lshStopSpeech/0,StopAsync/0,StopGroup0/0,Sleep/2,irand/2,WaitForAnimEnd/1,ResetAAS/0,GetPosition/1,Rotate/3,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,self/1,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemProperty/3,CreateInvItem/1,Trigger/2,GetGameTime/1,HasAnimation/3,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Isee|A:SetMessage|A:ClearReplies|A:AddReply|W:Neutral|W:all|W:idle|W:Threat|W:cleanup|W:restore|W:player|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |A:add|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:ood7AglajaPetr1|W:quest_d7_03|W:remove_maria|W:completed|W:samopal is given|W:Samopal|W:whitevaccine is given|W:white_vaccine|W:feromicin is given|W:feromicin|W:neomicin is given|W:neomicin|W:samopal ammo5 is given|W:samopal_ammo|W:d7q03|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|W:ui/NPC_Aglaja.png|W:ui/NPC_Aglaja_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x212
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xc8 vars=int,int
// @TASK_2: vars=cvector,bool params=0
// @EVENT_26: op=0x216 vars=string
// @EVENT_6: op=0x22a vars=
// @EVENT_5: op=0x237 vars=
// @EVENT_7: op=0x280 vars=int
// @EVENT_45: op=0x2c2 vars=bool
// @EVENT_0: op=0x2ce vars=object
// @PE: 0x51,0xb2,0xc8,0x20a,0x212,0x237,0x280,0x2a6,0x2c2,0x4db,0x4e1,0x4e8,0x4f2,0x4fd,0x508,0x513,0x51e,0x529,0x535,0x541

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	if((int)1 != 0) {
		func_1126();
		var_12_bool = var_8_bool == (int)34783;
		if(var_12_bool != 0) {
			var_13_object = Obj(); var_14_object = Obj();
			var_13_object = var_1_object;
			var_14_object = var_0_object;
			func_1266(var_14_object);
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_1310(var_38_object);
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_1256();
		}
		var_75_bool = var_8_bool == (int)34784;
		if(var_75_bool != 0) {
			var_76_object = Obj(); var_77_object = Obj();
			var_76_object = var_1_object;
			var_77_object = var_0_object;
			func_1256();
			var_78_object = Obj(); var_79_object = Obj();
			var_78_object = var_1_object;
			var_79_object = var_0_object;
			func_1277(var_79_object);
		}
		var_85_bool = var_8_bool == (int)34785;
		if(var_85_bool != 0) {
			var_86_object = Obj(); var_87_object = Obj();
			var_86_object = var_1_object;
			var_87_object = var_0_object;
			func_1256();
			var_88_object = Obj(); var_89_object = Obj();
			var_88_object = var_1_object;
			var_89_object = var_0_object;
			func_1288(var_89_object);
			var_94_object = Obj(); var_95_object = Obj();
			var_94_object = var_1_object;
			var_95_object = var_0_object;
			func_1299(var_95_object);
			var_100_object = Obj(); var_101_object = Obj();
			var_100_object = var_1_object;
			var_101_object = var_0_object;
			func_1299(var_101_object);
		}
		var_103_bool = var_8_bool == (int)34786;
		if(var_103_bool != 0) {
			var_104_object = Obj(); var_105_object = Obj();
			var_104_object = var_1_object;
			var_105_object = var_0_object;
			func_1256();
		}
		var_107_bool = var_7_cvector == (int)34782;
		if(var_107_bool != 0) {
			var_108_bool = 0;
			var_108_bool = 0;
			var_109_bool = 0; var_110_object = Obj();
			var_110_object = var_1_object;
			func_1321(var_110_object);
			if(var_109_bool != 0) {
				var_117_bool = 0; var_118_object = Obj();
				var_118_object = var_1_object;
				func_1333(var_118_object);
				if(var_117_bool != 0) {
					var_108_bool = 1;
				}
			}
			if(var_108_bool != 0) {
				var_123_object = Obj(); var_124_object = Obj();
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_1243();
				var_127_object = Obj(); var_128_object = Obj();
				var_127_object = var_1_object;
				var_128_object = var_0_object;
				func_1249();
				var_132_string = "";
				func_178(var_8_bool, "Isee");
				@@@var_0_object:SetMessage((int)533268);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)534543, (int)36176, (int)36175);
				return 0;
			}
			var_153_string = "";
			func_178(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)533273);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533274, (int)-1, (int)34788);
			@@@var_0_object:AddReply((int)534553, (int)-1, (int)36185);
			return 0;
		}
		var_162_bool = var_7_cvector == (int)36176;
		if(var_162_bool != 0) {
			var_163_string = "";
			func_178(var_8_bool, "Isee");
			@@@var_0_object:SetMessage((int)534544);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534545, (int)36178, (int)36177);
			return 0;
		}
		var_169_bool = var_7_cvector == (int)36178;
		if(var_169_bool != 0) {
			var_170_string = "";
			func_178(var_8_bool, "Isee");
			@@@var_0_object:SetMessage((int)534546);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534547, (int)36180, (int)36179);
			@@@var_0_object:AddReply((int)535169, (int)36835, (int)36834);
			return 0;
		}
		var_179_bool = var_7_cvector == (int)36835;
		if(var_179_bool != 0) {
			var_180_string = "";
			func_178(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535171, (int)36180, (int)36836);
			return 0;
		}
		var_186_bool = var_7_cvector == (int)36180;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_178(var_8_bool, "Isee");
			@@@var_0_object:SetMessage((int)534548);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534549, (int)36182, (int)36181);
			return 0;
		}
		var_193_bool = var_7_cvector == (int)36182;
		if(var_193_bool != 0) {
			var_194_string = "";
			func_178(var_8_bool, "Threat");
			@@@var_0_object:SetMessage((int)534550);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534551, (int)36841, (int)36183);
			@@@var_0_object:AddReply((int)535172, (int)36839, (int)36838);
			return 0;
		}
		var_203_bool = var_7_cvector == (int)36839;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_178(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535173);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535174, (int)36184, (int)36840);
			return 0;
		}
		var_210_bool = var_7_cvector == (int)36841;
		if(var_210_bool != 0) {
			var_211_string = "";
			func_178(var_8_bool, "Threat");
			@@@var_0_object:SetMessage((int)535175);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535176, (int)36184, (int)36842);
			var_216_bool = 0; var_217_object = Obj();
			var_217_object = var_1_object;
			func_1345(var_217_object);
			if(var_216_bool != 0) {
				@@@var_0_object:AddReply((int)535177, (int)-1, (int)36843);
			}
			return 0;
		}
		var_226_bool = var_7_cvector == (int)36184;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_178(var_8_bool, "Neutral");
			@@@var_0_object:SetMessage((int)534552);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)533269, (int)-1, (int)34783);
			@@@var_0_object:AddReply((int)533270, (int)-1, (int)34784);
			@@@var_0_object:AddReply((int)533271, (int)-1, (int)34785);
			@@@var_0_object:AddReply((int)533272, (int)-1, (int)34786);
			return 0;
		}
		var_3_string = true;
		var_241_bool = 0;
		func_1436(var_241_bool);
		if(var_241_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc9";
	
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0;
	var_11_bool = var_7_string == "cleanup";
	if(var_11_bool != 0) {
		var_1_object = true;
		IsLoaded(var_9_bool);
		var_12_bool = var_9_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_object = Obj();
			func_1133(var_13_object);
			RemoveActor(var_13_object);
		}
	} else {
		var_17_bool = var_7_string == "restore";
		if(var_17_bool == 0) goto Label_553;
		var_1_object = false;
	}
Label_553:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object;
	if(var_7_object != 0) {
		var_8_object = Obj();
		func_1133(var_8_object);
		RemoveActor(var_8_object);
		Hold();
	}
	func_678();
	return 0;
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_693();
	return 0;
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_9_bool = var_7_int == (int)10;
	if(var_9_bool != 0) {
		func_636();
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = 0;
		func_850(var_12_bool);
		if(var_12_bool != 0) {
			var_15_bool = 0;
			func_605(var_15_bool);
			if(var_15_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_32_bool = 0;
			func_585(var_32_bool);
			if(var_32_bool != 0) {
				var_51_bool = 0; var_52_object = Obj();
				func_1133(Obj());
				var_53_object = var_52_object;
				func_1000(var_51_bool, var_52_object);
			}
		} else {
			func_600(var_7_int);
			func_627();
		}
	}
	return 0;
	
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool;
	if(var_8_bool != 0) {
		func_627();
	} else {
		var_14_string = "";
		func_1080("Neutral");
	}
	return 0;
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	IsOverrideActive(var_9_bool);
	var_10_bool = var_9_bool == 0; //@nz
	if(var_10_bool != 0) {
		EventDisable(0);
		func_818();
		var_11_bool = 0; var_12_object = Obj();
		var_7_object = var_12_object;
		func_841(var_11_bool, var_12_object);
		EventEnable(0);
		var_25_object = Obj();
		var_7_object = var_25_object;
		func_522(var_25_object);
		var_283_string = "";
		func_1080("Neutral");
		func_636();
		func_627();
	}
	return 2;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_571(var_6_bool);
	return 0;
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0;
	var_0_object = var_27_object;
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0;
	var_27_object = var_38_object;
	func_855(var_37_bool, var_38_object, (float)70.0);
	var_84_bool = var_37_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	CreateDialog(var_33_object);
	var_85_int = 0;
	func_1430(var_85_int);
	@@var_33_object:SetNPCName(var_85_int);
	var_86_int = 0;
	func_1428(var_86_int);
	@@var_33_object:SetNPCDescription(var_86_int);
	var_87_string = "";
	func_1432(var_87_string);
	@@var_33_object:SetPhoto(var_87_string);
	var_88_string = "";
	func_1434(var_88_string);
	@@var_33_object:SetPhoto2(var_88_string);
	var_89_int = 0;
	func_1411(var_89_int);
	@@var_33_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_34_bool);
	var_97_bool = var_34_bool;
	if(var_97_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	DoDialog(var_33_object);
	var_98_bool = 0; var_99_object = Obj();
	func_1133(Obj());
	var_100_object = var_99_object;
	func_942(var_98_bool, var_99_object);
	var_193_object = Obj(); var_194_object = Obj();
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	@@var_33_object:IsDialogEnd(var_36_bool);
	
Label_63:
	var_274_bool = var_36_bool == 0; //@nz
	if(var_274_bool != 0) {
		sync();
		@@var_33_object:IsDialogEnd(var_36_bool);
		goto Label_63;
	}
	var_27_object = Obj();
	func_924();
	StopDialog(var_33_object);
	@@var_33_object:GetReturnValue((int)-1);
	var_35_int = var_26_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1154(var_32_int, var_33_int)
{
	var_34_object = Obj(); var_35_object = Obj();
	CreateIntVector(var_35_object);
	@@var_35_object:add(var_32_int);
	@@var_35_object:add(var_33_int);
	SendWorldWndMessage((int)3, var_35_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1411(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("branch", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x592";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
	return 2;
}


func_1288(var_88_object)
{
	Trace("feromicin is given");
	var_91_object = Obj(); var_92_string = ""; var_93_int = 0;
	var_88_object = var_91_object;
	func_1185(var_91_object, "feromicin", (int)1);
	return 0;
}


func_522(var_25_object)
{
	var_26_int = 0; var_27_object = Obj();
	var_25_object = var_27_object;
	TaskCall(0);
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
	return 0;
}


func_1037(var_140_bool, var_141_object)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = "";
	var_153_int = 0;
	func_1210(var_153_int);
	var_159_int = "d" + var_153_int;
	var_147_string = var_159_int + "m";
	var_148_int = 0;
	
Label_1046:
	if((int)1 != 0) {
		var_163_int = var_148_int + (int)1;
		var_164_int = var_147_string + var_163_int;
		@@var_141_object:HasProperty(var_164_int, var_149_bool);
		var_165_bool = var_149_bool == 0; //@nz
		if(var_165_bool != 0) {
		} else {
			var_148_int = var_148_int + (int)1;
			goto Label_1046;
		}
	}
	var_166_bool = var_148_int == 0; //@nz
	if(var_166_bool != 0) {
		var_140_bool = 0;
		return 10;
	}
	var_150_int = 0;
	var_168_bool = var_148_int > (int)1;
	if(var_168_bool != 0) {
		irand(var_150_int, var_148_int);
	}
	var_170_int = var_150_int + (int)1;
	var_171_int = var_147_string + var_170_int;
	@@var_141_object:GetProperty(var_171_int, var_151_string);
	var_172_bool = 0; var_173_string = "";
	var_151_string = var_173_string;
	func_1111(var_172_bool, var_173_string);
	var_172_bool = var_140_bool;
	return 10;
	
}


func_1166(var_21_object, var_22_object, var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0;
	@@var_22_object:GetItemID(var_27_int);
	GetInvItemProperty(var_28_int, var_27_int, "Category");
	@@var_21_object:AddItem(var_29_bool, var_22_object, var_28_int, var_23_int);
	var_31_bool = var_29_bool == 0; //@nz
	if(var_31_bool != 0) {
		@@var_21_object:DropItems(var_22_object, var_23_int);
	} else {
		var_32_int = 0; var_33_int = 0;
		var_27_int = var_32_int;
		var_23_int = var_33_int;
		func_1154(var_32_int, var_33_int);
	}
	return 6;
	
}


func_1299(var_94_object)
{
	Trace("neomicin is given");
	var_97_object = Obj(); var_98_string = ""; var_99_int = 0;
	var_94_object = var_97_object;
	func_1185(var_97_object, "neomicin", (int)1);
	return 0;
}


func_1428(var_86_int)
{
	var_86_int = 515527;
	return 0;
}


func_1430(var_85_int)
{
	var_85_int = 513334;
	return 0;
}


func_1432(var_87_string)
{
	var_87_string = "ui/NPC_Aglaja.png";
	return 0;
}


func_1277(var_78_object)
{
	Trace("whitevaccine is given");
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0;
	var_78_object = var_81_object;
	func_1185(var_81_object, "white_vaccine", (int)1);
	return 0;
}


func_1434(var_88_string)
{
	var_88_string = "ui/NPC_Aglaja_b.png";
	return 0;
}


func_924()
{
	var_276_bool = 0; var_277_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_279_bool = 0;
	func_1436(var_279_bool);
	if(var_279_bool != 0) {
	} else {
		HasAnimationTrack(var_277_bool, "head");
		var_281_bool = var_277_bool;
		if(var_281_bool == 0) goto Label_941;
		UnlookAsync("head");
	}
Label_941:
	return 2;
	
}


func_1436(var_80_bool)
{
	var_80_bool = 1;
	return 0;
}


func_1310(var_37_object)
{
	Trace("samopal ammo5 is given");
	var_40_object = Obj(); var_41_string = ""; var_42_int = 0;
	var_37_object = var_40_object;
	func_1185(var_40_object, "samopal_ammo", (int)5);
	return 0;
}


func_1185(var_16_object, var_17_string, var_18_int)
{
	var_19_object = Obj(); var_20_object = Obj();
	CreateInvItem(var_20_object);
	@@var_20_object:SetItemName(var_17_string);
	var_21_object = Obj(); var_22_object = Obj(); var_23_int = 0;
	var_16_object = var_21_object;
	var_20_object = var_22_object;
	var_18_int = var_23_int;
	func_1166(var_21_object, var_22_object, var_23_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_678()
{
	func_818();
	func_636();
	lshStopSpeech();
	lshStopAnimation();
	StopAsync();
	Hold();
	return 0;
}


func_1321(var_201_bool)
{
	var_203_int = 0; var_204_string = "";
	func_1149(var_203_int, "ood7AglajaPetr1");
	var_208_bool = var_203_int == (int)0;
	if(var_208_bool != 0) {
		var_201_bool = 1;
		return 0;
	}
	var_201_bool = 0;
	return 0;
}


func_942(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0;
	GetVariable("voice_common", var_105_int);
	var_108_int = var_105_int;
	if(var_108_int != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1000(var_109_bool, var_110_object);
		var_139_bool = var_109_bool == 0; //@nz
		if(var_139_bool != 0) {
			var_140_bool = 0; var_141_object = Obj();
			var_99_object = var_141_object;
			func_1037(var_140_bool, var_141_object);
			var_175_bool = var_140_bool == 0; //@nz
			if(var_175_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		irand(var_106_int, (int)2);
		var_177_int = var_106_int;
		if(var_177_int != 0) {
			var_180_int = var_105_int + (int)1;
			var_182_int = var_180_int % (int)3;
			SetVariable("voice_common", var_182_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_185_bool = 0; var_186_object = Obj();
		var_99_object = var_186_object;
		func_1037(var_185_bool, var_186_object);
		var_187_bool = var_185_bool == 0; //@nz
		if(var_187_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_99_object = var_189_object;
			func_1000(var_188_bool, var_189_object);
			var_190_bool = var_188_bool == 0; //@nz
			if(var_190_bool != 0) {
				var_98_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_998;
	
Label_998:
	var_98_bool = 1;
	return 4;
	
}


func_1198(var_221_bool, var_222_string, var_223_string)
{
	var_224_object = Obj(); var_225_object = Obj();
	FindActor(var_225_object, var_222_string);
	var_226_bool = var_225_object == 0; //@ne
	if(var_226_bool != 0) {
		var_221_bool = 0;
		return 2;
	}
	Trigger(var_225_object, var_223_string);
	var_221_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_816(var_45_bool)
{
	var_45_bool = 1;
	return 0;
}


func_178(var_2_object, var_227_string)
{
	var_228_bool = 0;
	func_1436(var_228_bool);
	var_229_bool = var_228_bool == 0; //@nz
	if(var_229_bool != 0) {
		return 0;
	}
	var_230_bool = var_227_string == var_2_object;
	if(var_230_bool != 0) {
		return 0;
	}
	var_231_string = ""; var_232_bool = 0;
	var_227_string = var_231_string;
	var_234_bool = var_227_string == "";
	if(var_234_bool != 0) {
		var_232_bool = 0;
	} else {
		var_232_bool = 1;
	}
	func_1096(var_231_string, var_232_bool);
	var_2_object = var_227_string;
	return 0;
	
}


func_818()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1333(var_209_bool)
{
	var_211_int = 0; var_212_string = "";
	func_1149(var_211_int, "d7q03");
	var_214_bool = var_211_int == (int)4;
	if(var_214_bool != 0) {
		var_209_bool = 1;
		return 0;
	}
	var_209_bool = 0;
	return 0;
}


func_693()
{
	StopGroup0();
	func_636();
	var_8_string = "";
	func_1080("Neutral");
	func_627();
	return 0;
}


func_823(var_22_float, var_23_object)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0);
	GetPosition(var_27_cvector);
	@@var_23_object:GetPosition(var_28_cvector);
	var_29_cvector = var_28_cvector - var_27_cvector;
	var_22_float = var_29_cvector | var_29_cvector;
	return 6;
}


func_1080(var_250_string)
{
	var_251_bool = 0; var_252_float = 0; var_253_float = 0; var_254_bool = 0; var_255_float = 0; var_256_float = 0;
	lshHasAnimation(var_254_bool, var_250_string);
	var_257_bool = var_254_bool;
	if(var_257_bool != 0) {
		lshGetAnimTimes(var_250_string, var_255_float, var_256_float);
		lshPlayAnimation(var_255_float, var_256_float, (bool)0);
	} else {
		var_260_int = "Can't find lsh animation : " + var_250_string;
		Trace(var_260_int);
	}
	return 6;
	
}


func_1210(var_153_int)
{
	var_154_float = 0; var_155_float = 0;
	GetGameTime(var_155_float);
	var_157_int = 0;
	var_157_int = var_155_float / (int)24;
	var_153_int = (int)1 + var_157_int;
	return 2;
}


func_571(var_0_object)
{
	var_7_bool = 0;
	func_850(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		Hold();
	}
	GetDirection(var_0_object);
	
Label_580:
	func_747();
	goto Label_580;
}
EMIT "Return(); Pop(0)";


func_831(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0;
	GetPosition(var_20_cvector);
	var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
	return 6;
}


func_1345(var_216_bool)
{
	var_218_int = 0; var_219_string = "";
	func_1149(var_218_int, "d7q03");
	var_221_bool = var_218_int == (int)1000;
	if(var_221_bool != 0) {
		var_216_bool = 1;
		return 0;
	}
	var_216_bool = 0;
	return 0;
}


func_1219(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = "";
	var_35_int = var_32_int;
	if(var_35_int != 0) {
		"idle" = "idle" + var_32_int;
	}
	var_34_string = var_31_string;
	return 2;
}


func_1096(var_231_string, var_232_bool)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0;
	lshHasAnimation(var_238_bool, var_231_string);
	var_241_bool = var_238_bool;
	if(var_241_bool != 0) {
		lshGetAnimTimes(var_231_string, var_239_float, var_240_float);
		lshPlayAnimation(var_239_float, var_240_float, var_232_bool);
	} else {
		var_243_int = "Can't find lsh animation : " + var_231_string;
		Trace(var_243_int);
	}
	return 6;
	
}


func_841(var_11_bool, var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	@@var_12_object:GetPosition(var_14_cvector);
	var_15_bool = 0; var_16_cvector = CVector(0,0,0);
	var_14_cvector = var_16_cvector;
	func_831(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
	return 2;
}


func_585(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj();
	FindActor(var_34_object, "player");
	var_36_bool = var_34_object == 0; //@nz
	if(var_36_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	var_37_bool = 0; var_38_object = Obj();
	var_34_object = var_38_object;
	func_841(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1226(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0;
	var_28_int = 0;
	
Label_1228:
	var_31_string = ""; var_32_int = 0;
	var_28_int = var_32_int;
	func_1219(var_31_string, var_32_int);
	HasAnimation(var_29_bool, "all", var_31_string);
	var_36_bool = var_29_bool == 0; //@nz
	if(var_36_bool != 0) {
	} else {
		var_28_int = var_28_int + (int)1;
		goto Label_1228;
	}
	var_28_int = var_25_int;
	return 4;
	
}


func_1357()
{
	var_45_object = Obj(); var_46_object = Obj();
	CreateDiaryEntry(var_46_object, (int)645, (int)2, (int)533279);
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0;
	var_46_object = var_51_object;
	func_1383(var_50_bool, var_51_object, (int)641);
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_200_bool = 0;
		var_200_bool = 0;
		var_201_bool = 0; var_202_object = Obj();
		var_202_object = var_1_object;
		func_1321(var_202_object);
		if(var_201_bool != 0) {
			var_209_bool = 0; var_210_object = Obj();
			var_210_object = var_1_object;
			func_1333(var_210_object);
			if(var_209_bool != 0) {
				var_200_bool = 1;
			}
		}
		if(var_200_bool != 0) {
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_1243();
			var_219_object = Obj(); var_220_object = Obj();
			var_219_object = var_1_object;
			var_220_object = var_0_object;
			func_1249();
			var_227_string = "";
			func_178(var_194_object, "Isee");
			@@@var_0_object:SetMessage((int)533268);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)534543, (int)36176, (int)36175);
		} else {
				var_266_string = "";
				func_178(var_194_object, "Neutral");
				@@@var_0_object:SetMessage((int)533273);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)533274, (int)-1, (int)34788);
				@@@var_0_object:AddReply((int)534553, (int)-1, (int)36185);
				goto Label_148;
		}
	}
Label_148:
	var_248_bool = 0;
	func_1436(var_248_bool);
	if(var_248_bool != 0) {

	Label_152:
		lshWaitForAnimEnd();
		var_249_string = var_3_string;
		if(var_249_string != 0) {
		} else {
			var_250_string = "";
			var_250_string = var_2_object;
			func_1080(var_250_string);
			goto Label_152;
	}
		PlayAnimation("all", "idle");

	Label_167:
		WaitForAnimEnd();
		var_263_string = var_3_string;
		if(var_263_string != 0) {
			goto Label_177;
		}
		PlayAnimation("all", "idle");
		goto Label_167;

	}
	goto Label_177;
	
Label_177:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_850(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_855(var_37_bool, var_38_object, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0;
	@@var_38_object:GetPosition(var_50_cvector);
	@@var_38_object:GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	var_58_float = var_58_float + var_49_float;
	SetByIndex(var_50_cvector, 1) = var_58_float;
	GetPosition(var_51_cvector);
	GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	var_59_float = var_59_float + var_49_float;
	SetByIndex(var_51_cvector, 1) = var_59_float;
	var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_61_int = var_52_cvector | var_52_cvector;
	var_62_float = sqrt(var_61_int);
	var_52_cvector = var_52_cvector / var_62_float;
	var_53_cvector = -var_52_cvector;
	var_63_float = var_52_cvector * var_39_float;
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_65_cvector = var_53_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1139(var_64_cvector, var_65_cvector);
	var_73_float = var_64_cvector * (int)25;
	var_74_int = var_63_float + var_73_float;
	var_54_cvector = var_74_int - CVector(0.0, 10.0, 0.0);
	var_55_cvector = var_51_cvector + var_54_cvector;
	IsOverrideActive(var_56_bool);
	var_76_bool = var_56_bool;
	if(var_76_bool != 0) {
		var_37_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_55_cvector, var_53_cvector, (bool)1);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	Rotate(var_78_float, var_79_float);
	var_80_bool = 0;
	func_1436(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		HasAnimationTrack(var_57_bool, "head");
		var_82_bool = var_57_bool;
		if(var_82_bool == 0) goto Label_918;
		LookAsyncCamera("head");
	}
Label_918:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_37_bool = 1;
	return 18;
	
}


func_600(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	RotateAsync(var_84_float, var_85_float);
	return 0;
}


func_1111(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0;
	var_136_bool = 0;
	func_1436(var_136_bool);
	if(var_136_bool != 0) {
		lshHasSpeech(var_135_bool, var_133_string);
		var_137_bool = var_135_bool;
		if(var_137_bool != 0) {
			lshPlaySpeech(var_133_string);
			var_132_bool = 1;
			return 2;
		}
	}
	var_132_bool = 0;
	return 2;
}


func_1370(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj();
	GetDiaryRoot(var_61_object);
	var_62_bool = var_61_object == 0; //@nz
	if(var_62_bool != 0) {
		Trace("Can't retrieve diary root");
		var_59_object = 0;
		return 2;
	}
	var_61_object = var_59_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1243()
{
	SetVariable("ood7AglajaPetr1", (int)1);
	return 0;
}


func_605(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0;
	FindActor(var_18_object, "player");
	var_21_bool = var_18_object == 0; //@nz
	if(var_21_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	var_22_float = 0; var_23_object = Obj();
	var_18_object = var_23_object;
	func_823(var_22_float, var_23_object);
	var_31_bool = var_22_float > (float)90000.0;
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	CanSee(var_19_bool, var_18_object);
	var_19_bool = var_15_bool;
	return 4;
}
EMIT "Stack[-2] = 0";


func_1249()
{
	var_221_bool = 0; var_222_string = ""; var_223_string = "";
	func_1198(var_221_bool, "quest_d7_03", "remove_maria");
	return 0;
}


func_1126()
{
	var_10_bool = 0;
	func_1436(var_10_bool);
	if(var_10_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1383(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0;
	func_1370(Obj());
	var_59_object = var_56_object;
	@@var_56_object:Find(var_52_int, var_57_object);
	var_64_bool = var_57_object == 0; //@nz
	if(var_64_bool != 0) {
		var_66_int = "Can't find diary parent with id: " + var_52_int;
		Trace(var_66_int);
		var_50_bool = 0;
		return 6;
	}
	@@var_57_object:AddChild(var_51_object);
	SendWorldWndMessage((int)7);
	@@var_51_object:GetCategory(var_58_int);
	SetDiarySection(var_58_int);
	var_50_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1256()
{
	func_1357();
	var_68_bool = 0; var_69_string = ""; var_70_string = "";
	func_1198(var_68_bool, "quest_d7_03", "completed");
	return 0;
}


func_1000(var_109_bool, var_110_object)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = "";
	var_116_string = "c";
	var_117_int = 0;
	
Label_1003:
	if((int)1 != 0) {
		var_123_int = var_117_int + (int)1;
		var_124_int = var_116_string + var_123_int;
		@@var_110_object:HasProperty(var_124_int, var_118_bool);
		var_125_bool = var_118_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			var_117_int = var_117_int + (int)1;
			goto Label_1003;
		}
	}
	var_126_bool = var_117_int == 0; //@nz
	if(var_126_bool != 0) {
		var_109_bool = 0;
		return 10;
	}
	var_119_int = 0;
	var_128_bool = var_117_int > (int)1;
	if(var_128_bool != 0) {
		irand(var_119_int, var_117_int);
	}
	var_130_int = var_119_int + (int)1;
	var_131_int = var_116_string + var_130_int;
	@@var_110_object:GetProperty(var_131_int, var_120_string);
	var_132_bool = 0; var_133_string = "";
	var_120_string = var_133_string;
	func_1111(var_132_bool, var_133_string);
	var_132_bool = var_109_bool;
	return 10;
	
}


func_747()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0;
	WaitForAnimEnd();
	var_23_bool = 0;
	func_850(var_23_bool);
	var_24_bool = var_23_bool == 0; //@nz
	if(var_24_bool != 0) {
		return 12;
	}
	func_1226((int)0);
	var_25_int = var_17_int;
	var_18_int = 0;
	
Label_761:
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_18_int < (int)5;
	if(var_40_bool != 0) {
		var_41_bool = 0;
		func_850(var_41_bool);
		if(var_41_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_42_bool = var_17_int == 0; //@nz
		if(var_42_bool != 0) {
			Sleep((int)3, var_19_bool);
			var_44_bool = var_19_bool == 0; //@nz
			if(var_44_bool != 0) {
			} else {
		} else {
				irand(var_20_int, var_17_int);
				irand(var_21_int, (int)5);
				var_50_bool = var_21_int != (int)0;
				if(var_50_bool != 0) {
					var_20_int = 0;
				}
				var_52_string = ""; var_53_int = 0;
				var_20_int = var_53_int;
				func_1219(var_52_string, var_53_int);
				PlayAnimation("all", var_52_string);
				WaitForAnimEnd(var_22_bool);
				var_54_bool = var_22_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_802;
				goto Label_813;
		}
		Label_802:
			var_45_bool = 0;
			func_816(var_45_bool);
			var_46_bool = var_45_bool == 0; //@nz
			if(var_46_bool != 0) {
				goto Label_813;
			}
			ResetAAS();
			var_18_int = var_18_int + (int)1;
			goto Label_761;

		}
	}
Label_813:
	ResetAAS();
	return 12;
	
}


func_1133(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj();
	self(var_102_object);
	var_102_object = var_100_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1266(var_13_object)
{
	Trace("samopal is given");
	var_16_object = Obj(); var_17_string = ""; var_18_int = 0;
	var_13_object = var_16_object;
	func_1185(var_16_object, "Samopal", (int)1);
	return 0;
}


func_627()
{
	var_285_float = 0; var_286_float = 0;
	rand(var_286_float, (int)8, (int)16);
	SetTimer((int)10, var_286_float);
	return 2;
}


func_1139(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0;
	var_69_int = var_65_cvector | var_65_cvector;
	var_68_float = sqrt(var_69_int);
	var_70_float = 9.999999974752427e-07;
	var_71_bool = var_68_float < var_70_float;
	if(var_71_bool != 0) {
		var_64_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_64_cvector = var_65_cvector / var_68_float;
	return 2;
}


func_636()
{
	KillTimer((int)10);
	return 0;
}


func_1149(var_203_int, var_204_string)
{
	var_205_int = 0; var_206_int = 0;
	GetVariable(var_204_string, var_206_int);
	var_206_int = var_203_int;
	return 2;
}


