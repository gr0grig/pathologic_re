// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetMainOutdoorScene/1,AddBlankActor/4,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,SetVariable/2,TriggerWorld/2,GetDiaryRoot/1,SetDiarySection/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|W:Crying|A:GetProperty|A:SetProperty|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |W:.bin|A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:No|W:ui/NPC_Anna.png|W:KnowKapella|W:money100 is given|W:money|W:playsound|W:givemoney|W:giveitem|W:KnowShabnak|W:ood1Anna7|W:ood1Anna8|W:ood1Anna9|W:ood1Anna10|W:ood2Anna1|W:ood2Anna2|W:KnowPochka|W:d2q01|W:d2q01AnnaGotoKapella|W:pt_map_kapella|A:AddMark|W:KnowZemlja|W:d1q02AnnaGotoLaska|W:pt_map_laska|A:ShowMap|W:d1q02|W:KnowNevod|W:pt_map_bigvlad|W:ood3Anna1|W:d3q02|W:ood4Anna1|W:d4q02AnnaGivesMedcine|W:d4q02JuliaGivesMedcine|W:d4q02LaraGivesMedcine|W:d4q02|W:d4q02BirdmaskNearHome|W:pt_d4q02_birdmask|W:quest_d4_02|W:ood4Anna2|W:d5q02|W:d5q02AnnaGotoGorbun|W:pt_map_gorbun|W:d5q02AnnaGotoGorbunSelf|W:pt_map_anna|W:quest_d5_02|W:place_gorbun|W:d5q02AnnaGotoKabak|W:pt_map_andrei|W:KnowMistresses|W:KnowNina|W:KnowViktoria|W:ood1Anna1|W:ood1Anna2|W:d5q01|W:place_girl|W:ood1Anna3|W:ood1Anna4|W:ood6Anna1|W:ood6Anna2|W:d6q01KnowKillerIsKlara|W:d6q01KillerIsKlara|W:pt_map_alexandr|W:quest_d6_01|W:saburov_klara|W:ood1Anna5|W:ood1Anna6|W:KnowAnna|W:anna blood is given|W:d6q01_anna_blood|W:ood6Anna3|W:KnowLaska|W:KnowMishka|W:ood3Anna2|W:ood3Anna3|W:beta_pills is given|W:beta_pills|W:gamma_pills is given|W:gamma_pills|W:delta_pills is given|W:delta_pills|W:ood5Anna1|W:d1q01FirstGeorgVisit|W:KnowSgustok|W:KnowDiamAce|W:d5q02KnowNudeIsDead|W:d6q01|W:microscope_d6q01_anna_blood|W:KnowAlexandr|W:KnowJulia|W:KnowOspina|W:KnowStamatins|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|A:GetLocator|W:Warning: outdoor scene locator |W: doesnt exist|W:Can't find map|A:SetMapParams|W:player|W:Adding diary entry
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x6
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars= params=0
// @EVENT_6: op=0x1d vars=
// @EVENT_0: op=0x23 vars=object
// @EVENT_10: op=0x29 vars=object
// @TASK_2: vars=object params=2
// @TASK_3: vars=object,object,string,bool params=2
// @EVENT_11: op=0xbf vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x268 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0x512 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb9d vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0xf24 vars=int,int
// @TASK_12: vars=object params=2
// @TASK_13: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1125 vars=int,int
// @TASK_14: vars=object params=2
// @TASK_15: vars=object,object,string,bool params=2
// @EVENT_11: op=0x1381 vars=int,int
// @PE: 0x23,0x29,0x70,0xaf,0xbf,0x1d6,0x258,0x268,0x3e0,0x502,0x512,0xb0e,0xb8d,0xb9d,0xeb8,0xf14,0xf24,0x10a6,0x1115,0x1125,0x130b,0x1371,0x1381,0x158f,0x15fa,0x160f,0x1615,0x1620,0x1626,0x162c,0x1632,0x1638,0x163e,0x1644,0x164a,0x1650,0x1656,0x1673,0x1689,0x1699,0x16a2,0x16a8,0x16b8,0x16be,0x16c4,0x16d4,0x16da,0x1724,0x176d,0x1773,0x1779,0x177f,0x1785,0x178b,0x17a4,0x17aa,0x17b0,0x17b6,0x17df,0x17e5,0x17eb,0x17f1,0x17ff,0x1805,0x180b,0x1811,0x1817,0x181d,0x1823,0x182e,0x1839,0x1844,0x184a,0x1856,0x1862,0x186e,0x187a,0x1886,0x1892,0x189e,0x18aa,0x18b6,0x18c2,0x18ce,0x18da,0x18e6,0x18f2,0x18fe,0x190a,0x1916,0x1922,0x192e,0x193a,0x1946,0x1952,0x195e,0x196a,0x1976,0x1982,0x198e,0x199a,0x19a6,0x19b2,0x19be,0x19ca,0x19d6,0x19e2,0x19ee,0x19fa,0x1a06,0x1a12,0x1a1e,0x1a2a,0x1a36,0x1a42,0x1a4e,0x1a5a,0x1a66,0x1b53

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_object = Obj();
	var_35_bool = var_36_object;
	func_6995(var_36_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj();
	var_35_bool = var_37_object;
	func_5446(var_36_bool, var_37_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_5541();
		var_40_bool = var_35_string == (int)260;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_6123();
			var_45_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)221);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)222, (int)263, (int)261);
			@@@var_0_object:AddReply((int)223, (int)266, (int)262);
			return 0;
		}
		var_68_bool = var_35_string == (int)266;
		if(var_68_bool != 0) {
			var_69_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)227);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)244, (int)268, (int)284);
			@@@var_0_object:AddReply((int)245, (int)-1, (int)286);
			return 0;
		}
		var_78_bool = var_35_string == (int)263;
		if(var_78_bool != 0) {
			var_79_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)224);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)228, (int)268, (int)267);
			@@@var_0_object:AddReply((int)225, (int)265, (int)264);
			return 0;
		}
		var_88_bool = var_35_string == (int)265;
		if(var_88_bool != 0) {
			var_89_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)226);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)243, (int)268, (int)282);
			return 0;
		}
		var_95_bool = var_35_string == (int)268;
		if(var_95_bool != 0) {
			var_96_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)229);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)234, (int)274, (int)273);
			@@@var_0_object:AddReply((int)230, (int)270, (int)269);
			return 0;
		}
		var_105_bool = var_35_string == (int)270;
		if(var_105_bool != 0) {
			var_106_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)231);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)233, (int)-1, (int)272);
			return 0;
		}
		var_112_bool = var_35_string == (int)274;
		if(var_112_bool != 0) {
			var_113_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)235);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)236, (int)280, (int)275);
			@@@var_0_object:AddReply((int)237, (int)277, (int)276);
			return 0;
		}
		var_122_bool = var_35_string == (int)277;
		if(var_122_bool != 0) {
			var_123_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)238);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)239, (int)-1, (int)278);
			@@@var_0_object:AddReply((int)240, (int)-1, (int)279);
			return 0;
		}
		var_132_bool = var_35_string == (int)280;
		if(var_132_bool != 0) {
			var_133_string = "";
			func_175(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)241);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)242, (int)-1, (int)281);
			return 0;
		}
		var_3_string = true;
		var_138_bool = 0;
		func_5645(var_138_bool);
		if(var_138_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xc0";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_5541();
		var_40_bool = var_36_bool == (int)4268;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_6064();
		}
		var_46_bool = var_36_bool == (int)4269;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_6064();
		}
		var_50_bool = var_36_bool == (int)4266;
		if(var_50_bool != 0) {
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_object;
			func_6064();
		}
		var_54_bool = var_36_bool == (int)13914;
		if(var_54_bool != 0) {
			var_55_object = Obj(); var_56_object = Obj();
			var_55_object = var_1_object;
			var_56_object = var_0_object;
			func_6070();
		}
		var_60_bool = var_36_bool == (int)13920;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_6076();
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_6129(var_119_object);
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_6143();
		}
		var_151_bool = var_36_bool == (int)14992;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_6149();
		}
		var_157_bool = var_35_string == (int)13912;
		if(var_157_bool != 0) {
			var_158_string = "";
			func_600(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12719);
			@@@var_0_object:ClearReplies();
			var_174_bool = 0;
			var_174_bool = 0;
			var_175_bool = 0; var_176_object = Obj();
			var_176_object = var_1_object;
			func_6554(var_176_object);
			if(var_175_bool != 0) {
				var_181_bool = 0; var_182_object = Obj();
				var_182_object = var_1_object;
				func_6518(var_182_object);
				if(var_181_bool != 0) {
					var_174_bool = 1;
				}
			}
			if(var_174_bool != 0) {
				@@@var_0_object:AddReply((int)12720, (int)4261, (int)13913);
			}
			var_190_bool = 0;
			var_190_bool = 0;
			var_191_bool = 0; var_192_object = Obj();
			var_192_object = var_1_object;
			func_6530(var_192_object);
			if(var_191_bool != 0) {
				var_197_bool = 0; var_198_object = Obj();
				var_198_object = var_1_object;
				func_6566(var_198_object);
				if(var_197_bool != 0) {
					var_190_bool = 1;
				}
			}
			if(var_190_bool != 0) {
				@@@var_0_object:AddReply((int)12721, (int)13915, (int)13914);
			}
			var_206_bool = 0;
			var_206_bool = 0;
			var_207_bool = 0;
			var_207_bool = 0;
			var_208_bool = 0;
			var_208_bool = 0;
			var_209_bool = 0; var_210_object = Obj();
			var_210_object = var_1_object;
			func_6614(var_210_object);
			if(var_209_bool != 0) {
				var_215_bool = 0; var_216_object = Obj();
				var_216_object = var_1_object;
				func_6638(var_216_object);
				var_221_bool = var_215_bool == 0; //@nz
				if(var_221_bool != 0) {
					var_208_bool = 1;
				}
			}
			if(var_208_bool != 0) {
				var_222_bool = 0; var_223_object = Obj();
				var_223_object = var_1_object;
				func_6650(var_223_object);
				var_228_bool = var_222_bool == 0; //@nz
				if(var_228_bool != 0) {
					var_207_bool = 1;
				}
			}
			if(var_207_bool != 0) {
				var_229_bool = 0; var_230_object = Obj();
				var_230_object = var_1_object;
				func_6662(var_230_object);
				if(var_229_bool != 0) {
					var_206_bool = 1;
				}
			}
			if(var_206_bool != 0) {
				@@@var_0_object:AddReply((int)13747, (int)14993, (int)14992);
			}
			@@@var_0_object:AddReply((int)12728, (int)-1, (int)13921);
			return 0;
		}
		var_242_bool = var_35_string == (int)14993;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_600(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13748);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13749, (int)-1, (int)14994);
			return 0;
		}
		var_249_bool = var_35_string == (int)13915;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_600(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12722);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12723, (int)13917, (int)13916);
			return 0;
		}
		var_256_bool = var_35_string == (int)13917;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_600(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12724);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12725, (int)13919, (int)13918);
			return 0;
		}
		var_263_bool = var_35_string == (int)13919;
		if(var_263_bool != 0) {
			var_264_string = "";
			func_600(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12726);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12727, (int)-1, (int)13920);
			return 0;
		}
		var_270_bool = var_35_string == (int)4261;
		if(var_270_bool != 0) {
			var_271_string = "";
			func_600(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3913);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3914, (int)-1, (int)4262);
			@@@var_0_object:AddReply((int)3915, (int)4264, (int)4263);
			return 0;
		}
		var_280_bool = var_35_string == (int)4264;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_600(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3916);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3917, (int)4267, (int)4265);
			@@@var_0_object:AddReply((int)3918, (int)-1, (int)4266);
			return 0;
		}
		var_290_bool = var_35_string == (int)4267;
		if(var_290_bool != 0) {
			var_291_string = "";
			func_600(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)3919);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)3920, (int)-1, (int)4268);
			@@@var_0_object:AddReply((int)3921, (int)-1, (int)4269);
			return 0;
		}
		var_3_string = true;
		var_299_bool = 0;
		func_5645(var_299_bool);
		if(var_299_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x269";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_5541();
		var_40_bool = var_36_bool == (int)5450;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_6015();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_5753();
			var_63_object = Obj(); var_64_object = Obj();
			var_63_object = var_1_object;
			var_64_object = var_0_object;
			func_5769(var_64_object);
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_5785();
		}
		var_119_bool = var_36_bool == (int)5453;
		if(var_119_bool != 0) {
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_6015();
		}
		var_123_bool = var_36_bool == (int)5454;
		if(var_123_bool != 0) {
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_object;
			func_6015();
		}
		var_127_bool = var_36_bool == (int)5481;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_6021();
		}
		var_133_bool = var_36_bool == (int)5482;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_6021();
		}
		var_137_bool = var_36_bool == (int)5483;
		if(var_137_bool != 0) {
			var_138_object = Obj(); var_139_object = Obj();
			var_138_object = var_1_object;
			var_139_object = var_0_object;
			func_6021();
		}
		var_141_bool = var_36_bool == (int)5488;
		if(var_141_bool != 0) {
			var_142_object = Obj(); var_143_object = Obj();
			var_142_object = var_1_object;
			var_143_object = var_0_object;
			func_6052();
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_5653(var_147_object);
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_5664();
		}
		var_160_bool = var_36_bool == (int)5494;
		if(var_160_bool != 0) {
			var_161_object = Obj(); var_162_object = Obj();
			var_161_object = var_1_object;
			var_162_object = var_0_object;
			func_6052();
			var_163_object = Obj(); var_164_object = Obj();
			var_163_object = var_1_object;
			var_164_object = var_0_object;
			func_5653(var_164_object);
			var_165_object = Obj(); var_166_object = Obj();
			var_165_object = var_1_object;
			var_166_object = var_0_object;
			func_5664();
		}
		var_168_bool = var_36_bool == (int)5501;
		if(var_168_bool != 0) {
			var_169_object = Obj(); var_170_object = Obj();
			var_169_object = var_1_object;
			var_170_object = var_0_object;
			func_6052();
			var_171_object = Obj(); var_172_object = Obj();
			var_171_object = var_1_object;
			var_172_object = var_0_object;
			func_5664();
			var_173_object = Obj(); var_174_object = Obj();
			var_173_object = var_1_object;
			var_174_object = var_0_object;
			func_5653(var_174_object);
		}
		var_176_bool = var_36_bool == (int)9529;
		if(var_176_bool != 0) {
			var_177_object = Obj(); var_178_object = Obj();
			var_177_object = var_1_object;
			var_178_object = var_0_object;
			func_5785();
			var_179_object = Obj(); var_180_object = Obj();
			var_179_object = var_1_object;
			var_180_object = var_0_object;
			func_5753();
			var_181_object = Obj(); var_182_object = Obj();
			var_181_object = var_1_object;
			var_182_object = var_0_object;
			func_5769(var_182_object);
		}
		var_184_bool = var_36_bool == (int)5526;
		if(var_184_bool != 0) {
			var_185_object = Obj(); var_186_object = Obj();
			var_185_object = var_1_object;
			var_186_object = var_0_object;
			func_6058();
		}
		var_190_bool = var_36_bool == (int)5539;
		if(var_190_bool != 0) {
			var_191_object = Obj(); var_192_object = Obj();
			var_191_object = var_1_object;
			var_192_object = var_0_object;
			func_6111();
		}
		var_196_bool = var_36_bool == (int)5542;
		if(var_196_bool != 0) {
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_object;
			func_6111();
		}
		var_200_bool = var_36_bool == (int)5540;
		if(var_200_bool != 0) {
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_6111();
		}
		var_204_bool = var_36_bool == (int)5541;
		if(var_204_bool != 0) {
			var_205_object = Obj(); var_206_object = Obj();
			var_205_object = var_1_object;
			var_206_object = var_0_object;
			func_6111();
		}
		var_208_bool = var_36_bool == (int)5508;
		if(var_208_bool != 0) {
			var_209_object = Obj(); var_210_object = Obj();
			var_209_object = var_1_object;
			var_210_object = var_0_object;
			func_6117();
		}
		var_214_bool = var_36_bool == (int)5509;
		if(var_214_bool != 0) {
			var_215_object = Obj(); var_216_object = Obj();
			var_215_object = var_1_object;
			var_216_object = var_0_object;
			func_6117();
		}
		var_218_bool = var_36_bool == (int)5512;
		if(var_218_bool != 0) {
			var_219_object = Obj(); var_220_object = Obj();
			var_219_object = var_1_object;
			var_220_object = var_0_object;
			func_6117();
		}
		var_222_bool = var_36_bool == (int)5520;
		if(var_222_bool != 0) {
			var_223_object = Obj(); var_224_object = Obj();
			var_223_object = var_1_object;
			var_224_object = var_0_object;
			func_6117();
		}
		var_226_bool = var_36_bool == (int)5517;
		if(var_226_bool != 0) {
			var_227_object = Obj(); var_228_object = Obj();
			var_227_object = var_1_object;
			var_228_object = var_0_object;
			func_6117();
		}
		var_230_bool = var_36_bool == (int)7687;
		if(var_230_bool != 0) {
			var_231_object = Obj(); var_232_object = Obj();
			var_231_object = var_1_object;
			var_232_object = var_0_object;
			func_5682();
		}
		var_236_bool = var_36_bool == (int)7696;
		if(var_236_bool != 0) {
			var_237_object = Obj(); var_238_object = Obj();
			var_237_object = var_1_object;
			var_238_object = var_0_object;
			func_5688();
		}
		var_242_bool = var_36_bool == (int)7702;
		if(var_242_bool != 0) {
			var_243_object = Obj(); var_244_object = Obj();
			var_243_object = var_1_object;
			var_244_object = var_0_object;
			func_5694();
		}
		var_248_bool = var_36_bool == (int)7708;
		if(var_248_bool != 0) {
			var_249_object = Obj(); var_250_object = Obj();
			var_249_object = var_1_object;
			var_250_object = var_0_object;
			func_5700();
		}
		var_254_bool = var_35_string == (int)5427;
		if(var_254_bool != 0) {
			var_255_bool = 0;
			var_255_bool = 0;
			var_256_bool = 0; var_257_object = Obj();
			var_257_object = var_1_object;
			func_6506(var_257_object);
			if(var_256_bool != 0) {
				var_264_bool = 0; var_265_object = Obj();
				var_265_object = var_1_object;
				func_6230(var_265_object);
				if(var_264_bool != 0) {
					var_255_bool = 1;
				}
			}
			if(var_255_bool != 0) {
				var_270_string = "";
				func_1282(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)4938);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)4949, (int)5439, (int)5438);
				@@@var_0_object:AddReply((int)4978, (int)5439, (int)5475);
				@@@var_0_object:AddReply((int)4979, (int)5439, (int)5477);
				return 0;
			}
			var_295_bool = 0; var_296_object = Obj();
			var_296_object = var_1_object;
			func_6362(var_296_object);
			if(var_295_bool != 0) {
				var_301_string = "";
				func_1282(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)4940);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)4981, (int)5480, (int)5479);
				@@@var_0_object:AddReply((int)4985, (int)-1, (int)5483);
				return 0;
			}
			var_309_bool = 0;
			var_309_bool = 0;
			var_310_bool = 0; var_311_object = Obj();
			var_311_object = var_1_object;
			func_6542(var_311_object);
			if(var_310_bool != 0) {
				var_316_bool = 0; var_317_object = Obj();
				var_317_object = var_1_object;
				func_6218(var_317_object);
				if(var_316_bool != 0) {
					var_309_bool = 1;
				}
			}
			if(var_309_bool != 0) {
				var_322_string = "";
				func_1282(var_36_bool, "Neutral");
				@@@var_0_object:SetMessage((int)4943);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)4987, (int)5486, (int)5485);
				@@@var_0_object:AddReply((int)4991, (int)5490, (int)5489);
				@@@var_0_object:AddReply((int)4998, (int)5498, (int)5497);
				return 0;
			}
			var_333_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6582);
			@@@var_0_object:ClearReplies();
			var_335_bool = 0; var_336_object = Obj();
			var_336_object = var_1_object;
			func_6230(var_336_object);
			if(var_335_bool != 0) {
				@@@var_0_object:AddReply((int)8690, (int)9528, (int)9527);
			}
			var_340_bool = 0;
			var_340_bool = 0;
			var_341_bool = 0; var_342_object = Obj();
			var_342_object = var_1_object;
			func_6578(var_342_object);
			if(var_341_bool != 0) {
				var_347_bool = 0; var_348_object = Obj();
				var_348_object = var_1_object;
				func_6242(var_348_object);
				if(var_347_bool != 0) {
					var_340_bool = 1;
				}
			}
			if(var_340_bool != 0) {
				@@@var_0_object:AddReply((int)6583, (int)5521, (int)7252);
			}
			var_356_bool = 0;
			var_356_bool = 0;
			var_357_bool = 0; var_358_object = Obj();
			var_358_object = var_1_object;
			func_6674(var_358_object);
			if(var_357_bool != 0) {
				var_363_bool = 0; var_364_object = Obj();
				var_364_object = var_1_object;
				func_6590(var_364_object);
				if(var_363_bool != 0) {
					var_356_bool = 1;
				}
			}
			if(var_356_bool != 0) {
				@@@var_0_object:AddReply((int)6590, (int)5533, (int)7259);
			}
			var_372_bool = 0; var_373_object = Obj();
			var_373_object = var_1_object;
			func_6602(var_373_object);
			if(var_372_bool != 0) {
				@@@var_0_object:AddReply((int)6586, (int)5503, (int)7255);
			}
			var_381_bool = 0;
			var_381_bool = 0;
			var_382_bool = 0; var_383_object = Obj();
			var_383_object = var_1_object;
			func_6746(var_383_object);
			if(var_382_bool != 0) {
				var_388_bool = 0; var_389_object = Obj();
				var_389_object = var_1_object;
				func_6254(var_389_object);
				if(var_388_bool != 0) {
					var_381_bool = 1;
				}
			}
			if(var_381_bool != 0) {
				@@@var_0_object:AddReply((int)6592, (int)7679, (int)7261);
			}
			var_397_bool = 0;
			var_397_bool = 0;
			var_398_bool = 0; var_399_object = Obj();
			var_399_object = var_1_object;
			func_6626(var_399_object);
			if(var_398_bool != 0) {
				var_404_bool = 0; var_405_object = Obj();
				var_405_object = var_1_object;
				func_6266(var_405_object);
				if(var_404_bool != 0) {
					var_397_bool = 1;
				}
			}
			if(var_397_bool != 0) {
				@@@var_0_object:AddReply((int)6595, (int)7689, (int)7264);
			}
			var_413_bool = 0;
			var_413_bool = 0;
			var_414_bool = 0; var_415_object = Obj();
			var_415_object = var_1_object;
			func_6758(var_415_object);
			if(var_414_bool != 0) {
				var_420_bool = 0; var_421_object = Obj();
				var_421_object = var_1_object;
				func_6278(var_421_object);
				if(var_420_bool != 0) {
					var_413_bool = 1;
				}
			}
			if(var_413_bool != 0) {
				@@@var_0_object:AddReply((int)6602, (int)7697, (int)7271);
			}
			var_429_bool = 0;
			var_429_bool = 0;
			var_430_bool = 0; var_431_object = Obj();
			var_431_object = var_1_object;
			func_6686(var_431_object);
			if(var_430_bool != 0) {
				var_436_bool = 0; var_437_object = Obj();
				var_437_object = var_1_object;
				func_6290(var_437_object);
				if(var_436_bool != 0) {
					var_429_bool = 1;
				}
			}
			if(var_429_bool != 0) {
				@@@var_0_object:AddReply((int)6605, (int)7703, (int)7274);
			}
			@@@var_0_object:AddReply((int)7538, (int)-1, (int)8320);
			return 0;
		}
		var_449_bool = var_35_string == (int)7703;
		if(var_449_bool != 0) {
			var_450_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6995);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6996, (int)7705, (int)7704);
			return 0;
		}
		var_456_bool = var_35_string == (int)7705;
		if(var_456_bool != 0) {
			var_457_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6997);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6998, (int)7707, (int)7706);
			return 0;
		}
		var_463_bool = var_35_string == (int)7707;
		if(var_463_bool != 0) {
			var_464_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6999);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7000, (int)-1, (int)7708);
			return 0;
		}
		var_470_bool = var_35_string == (int)7697;
		if(var_470_bool != 0) {
			var_471_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6989);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6990, (int)7699, (int)7698);
			return 0;
		}
		var_477_bool = var_35_string == (int)7699;
		if(var_477_bool != 0) {
			var_478_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6991);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6992, (int)7701, (int)7700);
			return 0;
		}
		var_484_bool = var_35_string == (int)7701;
		if(var_484_bool != 0) {
			var_485_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6993);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6994, (int)-1, (int)7702);
			return 0;
		}
		var_491_bool = var_35_string == (int)7689;
		if(var_491_bool != 0) {
			var_492_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6981);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6982, (int)7691, (int)7690);
			return 0;
		}
		var_498_bool = var_35_string == (int)7691;
		if(var_498_bool != 0) {
			var_499_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6983);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6984, (int)7693, (int)7692);
			return 0;
		}
		var_505_bool = var_35_string == (int)7693;
		if(var_505_bool != 0) {
			var_506_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6985);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6986, (int)7695, (int)7694);
			return 0;
		}
		var_512_bool = var_35_string == (int)7695;
		if(var_512_bool != 0) {
			var_513_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6987);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6988, (int)-1, (int)7696);
			return 0;
		}
		var_519_bool = var_35_string == (int)7679;
		if(var_519_bool != 0) {
			var_520_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6972);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6973, (int)7681, (int)7680);
			return 0;
		}
		var_526_bool = var_35_string == (int)7681;
		if(var_526_bool != 0) {
			var_527_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6974);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6975, (int)7684, (int)7682);
			@@@var_0_object:AddReply((int)6976, (int)7684, (int)7683);
			return 0;
		}
		var_536_bool = var_35_string == (int)7684;
		if(var_536_bool != 0) {
			var_537_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6977);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6978, (int)7686, (int)7685);
			return 0;
		}
		var_543_bool = var_35_string == (int)7686;
		if(var_543_bool != 0) {
			var_544_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6979);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6980, (int)-1, (int)7687);
			return 0;
		}
		var_550_bool = var_35_string == (int)5503;
		if(var_550_bool != 0) {
			var_551_object = Obj(); var_552_object = Obj();
			var_551_object = var_1_object;
			var_552_object = var_0_object;
			func_5747();
			var_555_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5004);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5005, (int)5505, (int)5504);
			@@@var_0_object:AddReply((int)5015, (int)5515, (int)5514);
			return 0;
		}
		var_564_bool = var_35_string == (int)5515;
		if(var_564_bool != 0) {
			var_565_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5016);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5017, (int)5519, (int)5516);
			@@@var_0_object:AddReply((int)5018, (int)-1, (int)5517);
			return 0;
		}
		var_574_bool = var_35_string == (int)5519;
		if(var_574_bool != 0) {
			var_575_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5019);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5020, (int)-1, (int)5520);
			return 0;
		}
		var_581_bool = var_35_string == (int)5505;
		if(var_581_bool != 0) {
			var_582_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5006);
			@@@var_0_object:ClearReplies();
			var_584_bool = 0; var_585_object = Obj();
			var_585_object = var_1_object;
			func_6482(var_585_object);
			var_590_bool = var_584_bool == 0; //@nz
			if(var_590_bool != 0) {
				@@@var_0_object:AddReply((int)5007, (int)5507, (int)5506);
			}
			@@@var_0_object:AddReply((int)5011, (int)5511, (int)5510);
			return 0;
		}
		var_598_bool = var_35_string == (int)5511;
		if(var_598_bool != 0) {
			var_599_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5012);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5013, (int)-1, (int)5512);
			return 0;
		}
		var_605_bool = var_35_string == (int)5507;
		if(var_605_bool != 0) {
			var_606_object = Obj(); var_607_object = Obj();
			var_606_object = var_1_object;
			var_607_object = var_0_object;
			func_5997();
			var_610_object = Obj(); var_611_object = Obj();
			var_610_object = var_1_object;
			var_611_object = var_0_object;
			func_6003();
			var_614_object = Obj(); var_615_object = Obj();
			var_614_object = var_1_object;
			var_615_object = var_0_object;
			func_6009();
			var_618_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5008);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5009, (int)-1, (int)5508);
			@@@var_0_object:AddReply((int)5010, (int)-1, (int)5509);
			return 0;
		}
		var_627_bool = var_35_string == (int)5533;
		if(var_627_bool != 0) {
			var_628_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5031);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5032, (int)5535, (int)5534);
			@@@var_0_object:AddReply((int)5039, (int)-1, (int)5541);
			return 0;
		}
		var_637_bool = var_35_string == (int)5535;
		if(var_637_bool != 0) {
			var_638_object = Obj(); var_639_object = Obj();
			var_638_object = var_1_object;
			var_639_object = var_0_object;
			func_5794();
			var_642_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5033);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5034, (int)5537, (int)5536);
			@@@var_0_object:AddReply((int)5038, (int)-1, (int)5540);
			return 0;
		}
		var_651_bool = var_35_string == (int)5537;
		if(var_651_bool != 0) {
			var_652_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5035);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5037, (int)-1, (int)5539);
			@@@var_0_object:AddReply((int)5040, (int)-1, (int)5542);
			return 0;
		}
		var_661_bool = var_35_string == (int)5521;
		if(var_661_bool != 0) {
			var_662_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5021);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5022, (int)5523, (int)5522);
			@@@var_0_object:AddReply((int)5027, (int)5528, (int)5527);
			@@@var_0_object:AddReply((int)5030, (int)5528, (int)5531);
			return 0;
		}
		var_674_bool = var_35_string == (int)5528;
		if(var_674_bool != 0) {
			var_675_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5028);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5029, (int)5525, (int)5529);
			@@@var_0_object:AddReply((int)5041, (int)5544, (int)5543);
			return 0;
		}
		var_684_bool = var_35_string == (int)5544;
		if(var_684_bool != 0) {
			var_685_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5042);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5043, (int)5525, (int)5545);
			return 0;
		}
		var_691_bool = var_35_string == (int)5523;
		if(var_691_bool != 0) {
			var_692_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5023);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5024, (int)5525, (int)5524);
			return 0;
		}
		var_698_bool = var_35_string == (int)5525;
		if(var_698_bool != 0) {
			var_699_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5025);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5026, (int)-1, (int)5526);
			return 0;
		}
		var_705_bool = var_35_string == (int)9528;
		if(var_705_bool != 0) {
			var_706_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)8691);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)8692, (int)-1, (int)9529);
			return 0;
		}
		var_712_bool = var_35_string == (int)5498;
		if(var_712_bool != 0) {
			var_713_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4999);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5000, (int)5500, (int)5499);
			return 0;
		}
		var_719_bool = var_35_string == (int)5500;
		if(var_719_bool != 0) {
			var_720_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)5001);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)5002, (int)-1, (int)5501);
			return 0;
		}
		var_726_bool = var_35_string == (int)5490;
		if(var_726_bool != 0) {
			var_727_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4992);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4993, (int)5492, (int)5491);
			@@@var_0_object:AddReply((int)4997, (int)5492, (int)5495);
			return 0;
		}
		var_736_bool = var_35_string == (int)5492;
		if(var_736_bool != 0) {
			var_737_string = "";
			func_1282(var_36_bool, "Crying");
			@@@var_0_object:SetMessage((int)4994);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4996, (int)-1, (int)5494);
			return 0;
		}
		var_743_bool = var_35_string == (int)5486;
		if(var_743_bool != 0) {
			var_744_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4988);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4990, (int)-1, (int)5488);
			return 0;
		}
		var_750_bool = var_35_string == (int)5480;
		if(var_750_bool != 0) {
			var_751_object = Obj(); var_752_object = Obj();
			var_751_object = var_1_object;
			var_752_object = var_0_object;
			func_6155();
			var_755_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4982);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4983, (int)-1, (int)5481);
			@@@var_0_object:AddReply((int)4984, (int)-1, (int)5482);
			return 0;
		}
		var_764_bool = var_35_string == (int)5439;
		if(var_764_bool != 0) {
			var_765_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4950);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4951, (int)5441, (int)5440);
			@@@var_0_object:AddReply((int)4976, (int)5441, (int)5471);
			@@@var_0_object:AddReply((int)4977, (int)5441, (int)5473);
			return 0;
		}
		var_777_bool = var_35_string == (int)5441;
		if(var_777_bool != 0) {
			var_778_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4952);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4953, (int)5443, (int)5442);
			@@@var_0_object:AddReply((int)4972, (int)5466, (int)5465);
			return 0;
		}
		var_787_bool = var_35_string == (int)5466;
		if(var_787_bool != 0) {
			var_788_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4973);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4974, (int)5445, (int)5467);
			@@@var_0_object:AddReply((int)4975, (int)5445, (int)5469);
			return 0;
		}
		var_797_bool = var_35_string == (int)5443;
		if(var_797_bool != 0) {
			var_798_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4954);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4955, (int)5445, (int)5444);
			@@@var_0_object:AddReply((int)4968, (int)5460, (int)5459);
			return 0;
		}
		var_807_bool = var_35_string == (int)5460;
		if(var_807_bool != 0) {
			var_808_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4969);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4970, (int)5445, (int)5461);
			@@@var_0_object:AddReply((int)4971, (int)5445, (int)5463);
			return 0;
		}
		var_817_bool = var_35_string == (int)5445;
		if(var_817_bool != 0) {
			var_818_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4956);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4957, (int)5447, (int)5446);
			@@@var_0_object:AddReply((int)4967, (int)5447, (int)5457);
			return 0;
		}
		var_827_bool = var_35_string == (int)5447;
		if(var_827_bool != 0) {
			var_828_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4958);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4959, (int)5449, (int)5448);
			@@@var_0_object:AddReply((int)4966, (int)5449, (int)5455);
			return 0;
		}
		var_837_bool = var_35_string == (int)5449;
		if(var_837_bool != 0) {
			var_838_object = Obj(); var_839_object = Obj();
			var_838_object = var_1_object;
			var_839_object = var_0_object;
			func_6155();
			var_840_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4960);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4961, (int)-1, (int)5450);
			@@@var_0_object:AddReply((int)4962, (int)5452, (int)5451);
			return 0;
		}
		var_849_bool = var_35_string == (int)5452;
		if(var_849_bool != 0) {
			var_850_string = "";
			func_1282(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)4963);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4964, (int)-1, (int)5453);
			@@@var_0_object:AddReply((int)4965, (int)-1, (int)5454);
			return 0;
		}
		var_3_string = true;
		var_858_bool = 0;
		func_5645(var_858_bool);
		if(var_858_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x513";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_5541();
		var_40_bool = var_36_bool == (int)7333;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5706();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_5724();
			var_90_object = Obj(); var_91_object = Obj();
			var_90_object = var_1_object;
			var_91_object = var_0_object;
			func_5828(var_91_object);
		}
		var_117_bool = var_36_bool == (int)7336;
		if(var_117_bool != 0) {
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_5706();
			var_120_object = Obj(); var_121_object = Obj();
			var_120_object = var_1_object;
			var_121_object = var_0_object;
			func_5724();
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_object;
			func_5828(var_123_object);
		}
		var_125_bool = var_36_bool == (int)7337;
		if(var_125_bool != 0) {
			var_126_object = Obj(); var_127_object = Obj();
			var_126_object = var_1_object;
			var_127_object = var_0_object;
			func_5706();
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_5724();
			var_130_object = Obj(); var_131_object = Obj();
			var_130_object = var_1_object;
			var_131_object = var_0_object;
			func_5828(var_131_object);
		}
		var_133_bool = var_36_bool == (int)7976;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_5712();
		}
		var_139_bool = var_36_bool == (int)7981;
		if(var_139_bool != 0) {
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_5712();
		}
		var_143_bool = var_36_bool == (int)7969;
		if(var_143_bool != 0) {
			var_144_object = Obj(); var_145_object = Obj();
			var_144_object = var_1_object;
			var_145_object = var_0_object;
			func_5712();
		}
		var_147_bool = var_35_string == (int)7293;
		if(var_147_bool != 0) {
			var_148_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6624);
			@@@var_0_object:ClearReplies();
			var_164_bool = 0;
			var_164_bool = 0;
			var_165_bool = 0; var_166_object = Obj();
			var_166_object = var_1_object;
			func_6302(var_166_object);
			if(var_165_bool != 0) {
				var_173_bool = 0; var_174_object = Obj();
				var_174_object = var_1_object;
				func_6350(var_174_object);
				if(var_173_bool != 0) {
					var_164_bool = 1;
				}
			}
			if(var_164_bool != 0) {
				@@@var_0_object:AddReply((int)7217, (int)7952, (int)7953);
			}
			var_182_bool = 0; var_183_object = Obj();
			var_183_object = var_1_object;
			func_6314(var_183_object);
			if(var_182_bool != 0) {
				@@@var_0_object:AddReply((int)6949, (int)7656, (int)7655);
			}
			@@@var_0_object:AddReply((int)6626, (int)-1, (int)7295);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0xb8d";
		EMIT "Pop(1)";
		EMIT "Push((int) 9272)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9273)";
		EMIT "Push((int) 10180)";
		EMIT "Push((int) 10179)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9280)";
		EMIT "Push((int) 10180)";
		EMIT "Push((int) 10186)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0xb8d";
		EMIT "Pop(1)";
		EMIT "Push((int) 9281)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 9282)";
		EMIT "Push((int) 10190)";
		EMIT "Push((int) 10189)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9292)";
		EMIT "Push((int) 10190)";
		EMIT "Push((int) 10199)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Push((int) 9293)";
		EMIT "Push((int) 10190)";
		EMIT "Push((int) 10201)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_195_bool = var_35_string == (int)10190;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9283);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9284, (int)10192, (int)10191);
			@@@var_0_object:AddReply((int)9288, (int)10196, (int)10195);
			return 0;
		}
		var_205_bool = var_35_string == (int)10196;
		if(var_205_bool != 0) {
			var_206_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9289);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9290, (int)-1, (int)10197);
			@@@var_0_object:AddReply((int)9291, (int)-1, (int)10198);
			return 0;
		}
		var_215_bool = var_35_string == (int)10192;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9286, (int)-1, (int)10193);
			@@@var_0_object:AddReply((int)9287, (int)-1, (int)10194);
			return 0;
		}
		var_225_bool = var_35_string == (int)10180;
		if(var_225_bool != 0) {
			var_226_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9274);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9275, (int)10182, (int)10181);
			@@@var_0_object:AddReply((int)9279, (int)-1, (int)10185);
			return 0;
		}
		var_235_bool = var_35_string == (int)10182;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9276);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9277, (int)-1, (int)10183);
			@@@var_0_object:AddReply((int)9278, (int)-1, (int)10184);
			return 0;
		}
		var_245_bool = var_35_string == (int)7656;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6950);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6951, (int)7957, (int)7657);
			return 0;
		}
		var_252_bool = var_35_string == (int)7957;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7220);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7221, (int)7962, (int)7958);
			@@@var_0_object:AddReply((int)7222, (int)7960, (int)7959);
			return 0;
		}
		var_262_bool = var_35_string == (int)7960;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7223);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7224, (int)10153, (int)7961);
			return 0;
		}
		var_269_bool = var_35_string == (int)7962;
		if(var_269_bool != 0) {
			var_270_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7225);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7226, (int)7965, (int)7964);
			var_275_bool = 0; var_276_object = Obj();
			var_276_object = var_1_object;
			func_6338(var_276_object);
			if(var_275_bool != 0) {
				@@@var_0_object:AddReply((int)7228, (int)7967, (int)7966);
			}
			return 0;
		}
		var_285_bool = var_35_string == (int)7967;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7229);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7230, (int)10155, (int)7968);
			@@@var_0_object:AddReply((int)7231, (int)-1, (int)7969);
			return 0;
		}
		var_295_bool = var_35_string == (int)7965;
		if(var_295_bool != 0) {
			var_296_object = Obj(); var_297_object = Obj();
			var_296_object = var_1_object;
			var_297_object = var_0_object;
			func_6161();
			var_300_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7227);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7232, (int)7973, (int)7970);
			var_305_bool = 0; var_306_object = Obj();
			var_306_object = var_1_object;
			func_6698(var_306_object);
			var_311_bool = var_305_bool == 0; //@nz
			if(var_311_bool != 0) {
				@@@var_0_object:AddReply((int)7233, (int)7972, (int)7971);
			}
			var_315_bool = 0; var_316_object = Obj();
			var_316_object = var_1_object;
			func_6338(var_316_object);
			if(var_315_bool != 0) {
				@@@var_0_object:AddReply((int)7236, (int)7975, (int)7974);
			}
			return 0;
		}
		var_321_bool = var_35_string == (int)7975;
		if(var_321_bool != 0) {
			var_322_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7237);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7240, (int)10157, (int)7979);
			@@@var_0_object:AddReply((int)7241, (int)-1, (int)7981);
			return 0;
		}
		var_331_bool = var_35_string == (int)7972;
		if(var_331_bool != 0) {
			var_332_object = Obj(); var_333_object = Obj();
			var_332_object = var_1_object;
			var_333_object = var_0_object;
			func_5718();
			var_336_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7234);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7239, (int)10157, (int)7977);
			return 0;
		}
		var_342_bool = var_35_string == (int)7973;
		if(var_342_bool != 0) {
			var_343_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7235);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7238, (int)-1, (int)7976);
			return 0;
		}
		var_349_bool = var_35_string == (int)7952;
		if(var_349_bool != 0) {
			var_350_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7216);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6651, (int)7326, (int)7325);
			@@@var_0_object:AddReply((int)6672, (int)7954, (int)7352);
			return 0;
		}
		var_359_bool = var_35_string == (int)7954;
		if(var_359_bool != 0) {
			var_360_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)7218);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)7219, (int)7326, (int)7955);
			return 0;
		}
		var_366_bool = var_35_string == (int)7326;
		if(var_366_bool != 0) {
			var_367_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6652);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6653, (int)7328, (int)7327);
			@@@var_0_object:AddReply((int)6668, (int)7347, (int)7346);
			return 0;
		}
		var_376_bool = var_35_string == (int)7347;
		if(var_376_bool != 0) {
			var_377_object = Obj(); var_378_object = Obj();
			var_377_object = var_1_object;
			var_378_object = var_0_object;
			func_5676();
			var_381_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6669);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6670, (int)7332, (int)7348);
			@@@var_0_object:AddReply((int)6671, (int)7328, (int)7350);
			return 0;
		}
		var_390_bool = var_35_string == (int)7328;
		if(var_390_bool != 0) {
			var_391_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6654);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6655, (int)7330, (int)7329);
			@@@var_0_object:AddReply((int)6666, (int)7332, (int)7342);
			@@@var_0_object:AddReply((int)6667, (int)7332, (int)7344);
			return 0;
		}
		var_403_bool = var_35_string == (int)7330;
		if(var_403_bool != 0) {
			var_404_object = Obj(); var_405_object = Obj();
			var_404_object = var_1_object;
			var_405_object = var_0_object;
			func_5676();
			var_406_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6656);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6657, (int)7332, (int)7331);
			@@@var_0_object:AddReply((int)6664, (int)7332, (int)7338);
			@@@var_0_object:AddReply((int)6665, (int)7332, (int)7340);
			return 0;
		}
		var_418_bool = var_35_string == (int)7332;
		if(var_418_bool != 0) {
			var_419_object = Obj(); var_420_object = Obj();
			var_419_object = var_1_object;
			var_420_object = var_0_object;
			func_5647();
			var_423_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6658);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6659, (int)-1, (int)7333);
			var_428_bool = 0; var_429_object = Obj();
			var_429_object = var_1_object;
			func_6326(var_429_object);
			var_434_bool = var_428_bool == 0; //@nz
			if(var_434_bool != 0) {
				@@@var_0_object:AddReply((int)6660, (int)7335, (int)7334);
			}
			@@@var_0_object:AddReply((int)6663, (int)-1, (int)7337);
			return 0;
		}
		var_442_bool = var_35_string == (int)7335;
		if(var_442_bool != 0) {
			var_443_string = "";
			func_2957(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)6661);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)6662, (int)-1, (int)7336);
			return 0;
		}
		var_3_string = true;
		var_448_bool = 0;
		func_5645(var_448_bool);
		if(var_448_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb9e";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_5541();
		var_40_bool = var_36_bool == (int)11262;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5816();
		}
		var_46_bool = var_36_bool == (int)11349;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_5816();
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_5822();
			var_53_object = Obj(); var_54_object = Obj();
			var_53_object = var_1_object;
			var_54_object = var_0_object;
			func_5800(var_54_object);
		}
		var_86_bool = var_36_bool == (int)11345;
		if(var_86_bool != 0) {
			var_87_object = Obj(); var_88_object = Obj();
			var_87_object = var_1_object;
			var_88_object = var_0_object;
			func_5816();
		}
		var_90_bool = var_36_bool == (int)10775;
		if(var_90_bool != 0) {
			var_91_object = Obj(); var_92_object = Obj();
			var_91_object = var_1_object;
			var_92_object = var_0_object;
			func_6167();
		}
		var_96_bool = var_36_bool == (int)11237;
		if(var_96_bool != 0) {
			var_97_object = Obj(); var_98_object = Obj();
			var_97_object = var_1_object;
			var_98_object = var_0_object;
			func_6173();
		}
		var_102_bool = var_35_string == (int)10774;
		if(var_102_bool != 0) {
			var_103_string = "";
			func_3860(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9781);
			@@@var_0_object:ClearReplies();
			var_119_bool = 0;
			var_119_bool = 0;
			var_120_bool = 0; var_121_object = Obj();
			var_121_object = var_1_object;
			func_6374(var_121_object);
			if(var_120_bool != 0) {
				var_128_bool = 0; var_129_object = Obj();
				var_129_object = var_1_object;
				func_6386(var_129_object);
				if(var_128_bool != 0) {
					var_119_bool = 1;
				}
			}
			if(var_119_bool != 0) {
				@@@var_0_object:AddReply((int)10216, (int)11263, (int)11262);
			}
			var_137_bool = 0; var_138_object = Obj();
			var_138_object = var_1_object;
			func_6710(var_138_object);
			if(var_137_bool != 0) {
				@@@var_0_object:AddReply((int)9782, (int)10764, (int)10775);
			}
			var_146_bool = 0; var_147_object = Obj();
			var_147_object = var_1_object;
			func_6722(var_147_object);
			if(var_146_bool != 0) {
				@@@var_0_object:AddReply((int)10191, (int)11238, (int)11237);
			}
			@@@var_0_object:AddReply((int)15312, (int)-1, (int)16550);
			return 0;
		}
		var_159_bool = var_35_string == (int)11238;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_3860(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10192);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10295, (int)11351, (int)11350);
			return 0;
		}
		var_166_bool = var_35_string == (int)11351;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_3860(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10296);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10297, (int)11353, (int)11352);
			@@@var_0_object:AddReply((int)10299, (int)11353, (int)11354);
			return 0;
		}
		var_176_bool = var_35_string == (int)11353;
		if(var_176_bool != 0) {
			var_177_string = "";
			func_3860(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10300, (int)-1, (int)11356);
			@@@var_0_object:AddReply((int)10301, (int)-1, (int)11357);
			return 0;
		}
		var_186_bool = var_35_string == (int)10764;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_3860(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9773);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9774, (int)10766, (int)10765);
			@@@var_0_object:AddReply((int)9778, (int)10766, (int)10769);
			@@@var_0_object:AddReply((int)9779, (int)10766, (int)10771);
			@@@var_0_object:AddReply((int)9780, (int)-1, (int)10773);
			return 0;
		}
		var_202_bool = var_35_string == (int)10766;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_3860(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)9775);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)9776, (int)-1, (int)10767);
			@@@var_0_object:AddReply((int)9777, (int)-1, (int)10768);
			return 0;
		}
		var_212_bool = var_35_string == (int)11263;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_3860(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10217);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10287, (int)11343, (int)11342);
			return 0;
		}
		var_219_bool = var_35_string == (int)11343;
		if(var_219_bool != 0) {
			var_220_string = "";
			func_3860(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10288);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10289, (int)11346, (int)11344);
			@@@var_0_object:AddReply((int)10290, (int)-1, (int)11345);
			return 0;
		}
		var_229_bool = var_35_string == (int)11346;
		if(var_229_bool != 0) {
			var_230_string = "";
			func_3860(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10292, (int)11348, (int)11347);
			return 0;
		}
		var_236_bool = var_35_string == (int)11348;
		if(var_236_bool != 0) {
			var_237_string = "";
			func_3860(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)10293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)10294, (int)-1, (int)11349);
			return 0;
		}
		var_3_string = true;
		var_242_bool = 0;
		func_5645(var_242_bool);
		if(var_242_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xf25";
	
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	if((int)1 != 0) {
		func_5541();
		var_40_bool = var_36_bool == (int)12557;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5844();
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_5850();
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_5856(var_50_object);
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_object;
			func_6179(var_116_object);
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_object;
			func_6201(var_135_object);
			var_140_object = Obj(); var_141_object = Obj();
			var_140_object = var_1_object;
			var_141_object = var_0_object;
			func_6190(var_141_object);
			var_146_object = Obj(); var_147_object = Obj();
			var_146_object = var_1_object;
			var_147_object = var_0_object;
			func_5670();
		}
		var_151_bool = var_36_bool == (int)12559;
		if(var_151_bool != 0) {
			var_152_object = Obj(); var_153_object = Obj();
			var_152_object = var_1_object;
			var_153_object = var_0_object;
			func_5844();
		}
		var_155_bool = var_36_bool == (int)12681;
		if(var_155_bool != 0) {
			var_156_object = Obj(); var_157_object = Obj();
			var_156_object = var_1_object;
			var_157_object = var_0_object;
			func_5850();
			var_158_object = Obj(); var_159_object = Obj();
			var_158_object = var_1_object;
			var_159_object = var_0_object;
			func_5856(var_159_object);
			var_160_object = Obj(); var_161_object = Obj();
			var_160_object = var_1_object;
			var_161_object = var_0_object;
			func_5670();
			var_162_object = Obj(); var_163_object = Obj();
			var_162_object = var_1_object;
			var_163_object = var_0_object;
			func_6179(var_163_object);
			var_164_object = Obj(); var_165_object = Obj();
			var_164_object = var_1_object;
			var_165_object = var_0_object;
			func_6190(var_165_object);
			var_166_object = Obj(); var_167_object = Obj();
			var_166_object = var_1_object;
			var_167_object = var_0_object;
			func_6201(var_167_object);
		}
		var_169_bool = var_36_bool == (int)13068;
		if(var_169_bool != 0) {
			var_170_object = Obj(); var_171_object = Obj();
			var_170_object = var_1_object;
			var_171_object = var_0_object;
			func_5924();
		}
		var_175_bool = var_35_string == (int)12541;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_4373(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11344);
			@@@var_0_object:ClearReplies();
			var_192_bool = 0;
			var_192_bool = 0;
			var_193_bool = 0; var_194_object = Obj();
			var_194_object = var_1_object;
			func_6398(var_194_object);
			if(var_193_bool != 0) {
				var_199_bool = 0; var_200_object = Obj();
				var_200_object = var_1_object;
				func_6410(var_200_object);
				if(var_199_bool != 0) {
					var_192_bool = 1;
				}
			}
			if(var_192_bool != 0) {
				@@@var_0_object:AddReply((int)11346, (int)12544, (int)12543);
			}
			var_208_bool = 0;
			var_208_bool = 0;
			var_209_bool = 0; var_210_object = Obj();
			var_210_object = var_1_object;
			func_6410(var_210_object);
			if(var_209_bool != 0) {
				var_211_bool = 0; var_212_object = Obj();
				var_212_object = var_1_object;
				func_6422(var_212_object);
				var_217_bool = var_211_bool == 0; //@nz
				if(var_217_bool != 0) {
					var_208_bool = 1;
				}
			}
			if(var_208_bool != 0) {
				@@@var_0_object:AddReply((int)11473, (int)12680, (int)12679);
			}
			var_221_bool = 0;
			var_221_bool = 0;
			var_222_bool = 0; var_223_object = Obj();
			var_223_object = var_1_object;
			func_6446(var_223_object);
			if(var_222_bool != 0) {
				var_228_bool = 0; var_229_object = Obj();
				var_229_object = var_1_object;
				func_6434(var_229_object);
				if(var_228_bool != 0) {
					var_221_bool = 1;
				}
			}
			if(var_221_bool != 0) {
				@@@var_0_object:AddReply((int)11853, (int)13067, (int)13066);
			}
			@@@var_0_object:AddReply((int)11345, (int)-1, (int)12542);
			return 0;
		}
		var_241_bool = var_35_string == (int)13067;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_4373(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11854);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11855, (int)-1, (int)13068);
			return 0;
		}
		var_248_bool = var_35_string == (int)12680;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_4373(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11474);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11475, (int)-1, (int)12681);
			return 0;
		}
		var_255_bool = var_35_string == (int)12544;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_4373(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11347);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11348, (int)12550, (int)12545);
			@@@var_0_object:AddReply((int)11367, (int)12566, (int)12565);
			return 0;
		}
		var_265_bool = var_35_string == (int)12566;
		if(var_265_bool != 0) {
			var_266_string = "";
			func_4373(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11368);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11369, (int)12614, (int)12567);
			@@@var_0_object:AddReply((int)11419, (int)12554, (int)12616);
			return 0;
		}
		var_275_bool = var_35_string == (int)12614;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_4373(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11417);
			@@@var_0_object:ClearReplies();
			return 0;
		}
		var_279_bool = var_35_string == (int)12550;
		if(var_279_bool != 0) {
			var_280_string = "";
			func_4373(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11353);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11354, (int)12552, (int)12551);
			@@@var_0_object:AddReply((int)11365, (int)12556, (int)12562);
			return 0;
		}
		var_289_bool = var_35_string == (int)12552;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_4373(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11355);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11356, (int)12554, (int)12553);
			return 0;
		}
		var_296_bool = var_35_string == (int)12554;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_4373(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11357);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11358, (int)12556, (int)12555);
			@@@var_0_object:AddReply((int)11421, (int)12620, (int)12619);
			return 0;
		}
		var_306_bool = var_35_string == (int)12620;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_4373(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11422);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11423, (int)12624, (int)12621);
			@@@var_0_object:AddReply((int)11424, (int)12556, (int)12622);
			return 0;
		}
		var_316_bool = var_35_string == (int)12624;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_4373(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11425);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11426, (int)12626, (int)12625);
			return 0;
		}
		var_323_bool = var_35_string == (int)12626;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_4373(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11427);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11428, (int)12556, (int)12627);
			return 0;
		}
		var_330_bool = var_35_string == (int)12556;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_4373(var_36_bool, "Neutral");
			@@@var_0_object:SetMessage((int)11359);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11360, (int)-1, (int)12557);
			@@@var_0_object:AddReply((int)11362, (int)-1, (int)12559);
			return 0;
		}
		var_3_string = true;
		var_339_bool = 0;
		func_5645(var_339_bool);
		if(var_339_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1126";
	
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	if((int)1 != 0) {
		func_5541();
		var_40_bool = var_36_int == (int)13112;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_5930();
		}
		var_115_bool = var_36_int == (int)13122;
		if(var_115_bool != 0) {
			var_116_object = Obj(); var_117_object = Obj();
			var_116_object = var_1_object;
			var_117_object = var_0_object;
			func_5974();
			var_137_object = Obj(); var_138_object = Obj();
			var_137_object = var_1_object;
			var_138_object = var_0_object;
			func_6027();
		}
		var_154_bool = var_36_int == (int)13123;
		if(var_154_bool != 0) {
			var_155_object = Obj(); var_156_object = Obj();
			var_155_object = var_1_object;
			var_156_object = var_0_object;
			func_6212();
		}
		var_160_bool = var_35_int == (int)13085;
		if(var_160_bool != 0) {
			var_161_bool = 0; var_162_object = Obj();
			var_162_object = var_1_object;
			func_6458(var_162_object);
			if(var_161_bool != 0) {
				var_167_string = "";
				func_4977(var_36_int, "Neutral");
				@@@var_0_object:SetMessage((int)11872);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)11873, (int)13087, (int)13086);
				return 0;
			}
			var_186_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11897);
			@@@var_0_object:ClearReplies();
			var_188_bool = 0; var_189_object = Obj();
			var_189_object = var_1_object;
			func_6470(var_189_object);
			if(var_188_bool != 0) {
				@@@var_0_object:AddReply((int)11898, (int)13115, (int)13114);
			}
			var_197_bool = 0;
			var_197_bool = 0;
			var_198_bool = 0; var_199_object = Obj();
			var_199_object = var_1_object;
			func_6494(var_199_object);
			if(var_198_bool != 0) {
				var_204_bool = 0; var_205_object = Obj();
				var_205_object = var_1_object;
				func_6734(var_205_object);
				if(var_204_bool != 0) {
					var_197_bool = 1;
				}
			}
			if(var_197_bool != 0) {
				@@@var_0_object:AddReply((int)11907, (int)13124, (int)13123);
			}
			@@@var_0_object:AddReply((int)11915, (int)-1, (int)13131);
			return 0;
		}
		var_217_bool = var_35_int == (int)13124;
		if(var_217_bool != 0) {
			var_218_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11908);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11909, (int)13126, (int)13125);
			return 0;
		}
		var_224_bool = var_35_int == (int)13126;
		if(var_224_bool != 0) {
			var_225_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11910);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11911, (int)13128, (int)13127);
			return 0;
		}
		var_231_bool = var_35_int == (int)13128;
		if(var_231_bool != 0) {
			var_232_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11912);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11913, (int)-1, (int)13129);
			@@@var_0_object:AddReply((int)11914, (int)-1, (int)13130);
			return 0;
		}
		var_241_bool = var_35_int == (int)13115;
		if(var_241_bool != 0) {
			var_242_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11900, (int)13117, (int)13116);
			return 0;
		}
		var_248_bool = var_35_int == (int)13117;
		if(var_248_bool != 0) {
			var_249_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11902, (int)13119, (int)13118);
			return 0;
		}
		var_255_bool = var_35_int == (int)13119;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11903);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11904, (int)13121, (int)13120);
			return 0;
		}
		var_262_bool = var_35_int == (int)13121;
		if(var_262_bool != 0) {
			var_263_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11905);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11906, (int)-1, (int)13122);
			return 0;
		}
		var_269_bool = var_35_int == (int)13087;
		if(var_269_bool != 0) {
			var_270_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11874);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11875, (int)13089, (int)13088);
			return 0;
		}
		var_276_bool = var_35_int == (int)13089;
		if(var_276_bool != 0) {
			var_277_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11876);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11877, (int)13091, (int)13090);
			return 0;
		}
		var_283_bool = var_35_int == (int)13091;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11878);
			@@@var_0_object:ClearReplies();
			var_286_bool = 0; var_287_object = Obj();
			var_287_object = var_1_object;
			func_6338(var_287_object);
			if(var_286_bool != 0) {
				@@@var_0_object:AddReply((int)11879, (int)13093, (int)13092);
			}
			@@@var_0_object:AddReply((int)11888, (int)13093, (int)13101);
			return 0;
		}
		var_299_bool = var_35_int == (int)13093;
		if(var_299_bool != 0) {
			var_300_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11880);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11881, (int)13095, (int)13094);
			return 0;
		}
		var_306_bool = var_35_int == (int)13095;
		if(var_306_bool != 0) {
			var_307_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11882);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11883, (int)13097, (int)13096);
			@@@var_0_object:AddReply((int)11889, (int)13103, (int)13102);
			return 0;
		}
		var_316_bool = var_35_int == (int)13103;
		if(var_316_bool != 0) {
			var_317_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11890);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11891, (int)13097, (int)13104);
			return 0;
		}
		var_323_bool = var_35_int == (int)13097;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11884);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11885, (int)13099, (int)13098);
			return 0;
		}
		var_330_bool = var_35_int == (int)13099;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11886);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11887, (int)13110, (int)13100);
			@@@var_0_object:AddReply((int)11892, (int)13108, (int)13107);
			return 0;
		}
		var_340_bool = var_35_int == (int)13108;
		if(var_340_bool != 0) {
			var_341_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11893);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11894, (int)13110, (int)13109);
			return 0;
		}
		var_347_bool = var_35_int == (int)13110;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_4977(var_36_int, "Neutral");
			@@@var_0_object:SetMessage((int)11895);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11896, (int)-1, (int)13112);
			return 0;
		}
		var_3_string = true;
		var_353_bool = 0;
		func_5645(var_353_bool);
		if(var_353_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x1382";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_6991();
	var_36_bool = 0;
	func_5458(var_36_bool);
	var_39_bool = var_36_bool == 0; //@nz
	if(var_39_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_40_string = "";
	func_5523("Neutral");
	lshWaitForAnimEnd();
	goto Label_19;
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


func_0()
{
	Hold();
	return 0;
}


func_5632(var_806_bool)
{
	var_807_bool = 0; var_808_bool = 0;
	var_809_string = "";
	func_5523("No");
	lshWaitForAnimEnd(var_808_bool);
	var_808_bool = var_806_bool;
	return 2;
}


func_6149()
{
	SetVariable("ood6Anna3", (int)1);
	return 0;
}


func_6662(var_229_bool)
{
	var_231_int = 0; var_232_string = "";
	func_5558(var_231_int, "ood6Anna3");
	var_234_bool = var_231_int == (int)0;
	if(var_234_bool != 0) {
		var_229_bool = 1;
		return 0;
	}
	var_229_bool = 0;
	return 0;
}


func_5641(var_91_int)
{
	var_91_int = 2856;
	return 0;
}


func_5643(var_92_string)
{
	var_92_string = "ui/NPC_Anna.png";
	return 0;
}


func_6155()
{
	SetVariable("KnowLaska", (int)1);
	return 0;
}


func_5645(var_38_bool)
{
	var_38_bool = 1;
	return 0;
}


func_5647()
{
	SetVariable("KnowKapella", (int)1);
	return 0;
}


func_6161()
{
	SetVariable("KnowMishka", (int)1);
	return 0;
}


func_6674(var_357_bool)
{
	var_359_int = 0; var_360_string = "";
	func_5558(var_359_int, "KnowJulia");
	var_362_bool = var_359_int == (int)1;
	if(var_362_bool != 0) {
		var_357_bool = 1;
		return 0;
	}
	var_357_bool = 0;
	return 0;
}


func_5653(var_146_object)
{
	Trace("money100 is given");
	var_149_object = Obj(); var_150_string = ""; var_151_int = 0;
	var_146_object = var_149_object;
	func_5439(var_149_object, "money", (int)100);
	return 0;
}


func_6167()
{
	SetVariable("ood3Anna2", (int)1);
	return 0;
}


func_6173()
{
	SetVariable("ood3Anna3", (int)1);
	return 0;
}


func_6686(var_430_bool)
{
	var_432_int = 0; var_433_string = "";
	func_5558(var_432_int, "KnowLaska");
	var_435_bool = var_432_int == (int)1;
	if(var_435_bool != 0) {
		var_430_bool = 1;
		return 0;
	}
	var_430_bool = 0;
	return 0;
}


func_5664()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_6179(var_115_object)
{
	Trace("beta_pills is given");
	var_118_object = Obj(); var_119_string = ""; var_120_int = 0;
	var_115_object = var_118_object;
	func_5587(var_118_object, "beta_pills", (int)1);
	return 0;
}


func_5670()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_6698(var_305_bool)
{
	var_307_int = 0; var_308_string = "";
	func_5558(var_307_int, "KnowMishka");
	var_310_bool = var_307_int == (int)1;
	if(var_310_bool != 0) {
		var_305_bool = 1;
		return 0;
	}
	var_305_bool = 0;
	return 0;
}


func_5676()
{
	SetVariable("KnowShabnak", (int)1);
	return 0;
}


func_6190(var_140_object)
{
	Trace("gamma_pills is given");
	var_143_object = Obj(); var_144_string = ""; var_145_int = 0;
	var_140_object = var_143_object;
	func_5587(var_143_object, "gamma_pills", (int)1);
	return 0;
}


func_49(var_0_object, var_39_int, var_40_object)
{
	var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	var_0_object = var_40_object;
	var_50_bool = 0; var_51_object = Obj();
	var_40_object = var_51_object;
	func_5463(var_50_bool, var_51_object);
	var_90_bool = var_50_bool == 0; //@nz
	if(var_90_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	CreateDialog(var_46_object);
	var_91_int = 0;
	func_5641(var_91_int);
	@@var_46_object:SetNPCName(var_91_int);
	var_92_string = "";
	func_5643(var_92_string);
	@@var_46_object:SetPhoto(var_92_string);
	var_93_int = 0;
	func_6862(var_93_int);
	@@var_46_object:SetPlayerName(var_93_int);
	IsOverrideActive(var_47_bool);
	var_101_bool = var_47_bool;
	if(var_101_bool != 0) {
		var_39_int = -2;
		return 8;
	}
	DoDialog(var_46_object);
	var_102_object = Obj(); var_103_object = Obj();
	var_40_object = var_102_object;
	var_46_object = var_103_object;
	TaskCall(3);
	func_112(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object);
	TaskReturn();
	@@var_46_object:IsDialogEnd(var_49_bool);
	
Label_94:
	var_143_bool = var_49_bool == 0; //@nz
	if(var_143_bool != 0) {
		sync();
		@@var_46_object:IsDialogEnd(var_49_bool);
		goto Label_94;
	}
	var_40_object = Obj();
	func_5519();
	StopDialog(var_46_object);
	@@var_46_object:GetReturnValue((int)-1);
	var_48_int = var_39_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5682()
{
	SetVariable("ood1Anna7", (int)1);
	return 0;
}


func_6710(var_137_bool)
{
	var_139_int = 0; var_140_string = "";
	func_5558(var_139_int, "ood3Anna2");
	var_142_bool = var_139_int == (int)0;
	if(var_142_bool != 0) {
		var_137_bool = 1;
		return 0;
	}
	var_137_bool = 0;
	return 0;
}


func_5688()
{
	SetVariable("ood1Anna8", (int)1);
	return 0;
}


func_6201(var_134_object)
{
	Trace("delta_pills is given");
	var_137_object = Obj(); var_138_string = ""; var_139_int = 0;
	var_134_object = var_137_object;
	func_5587(var_137_object, "delta_pills", (int)1);
	return 0;
}


func_5694()
{
	SetVariable("ood1Anna9", (int)1);
	return 0;
}


func_6722(var_146_bool)
{
	var_148_int = 0; var_149_string = "";
	func_5558(var_148_int, "ood3Anna3");
	var_151_bool = var_148_int == (int)0;
	if(var_151_bool != 0) {
		var_146_bool = 1;
		return 0;
	}
	var_146_bool = 0;
	return 0;
}


func_5700()
{
	SetVariable("ood1Anna10", (int)1);
	return 0;
}


func_6212()
{
	SetVariable("ood5Anna1", (int)1);
	return 0;
}


func_6218(var_316_bool)
{
	var_318_int = 0; var_319_string = "";
	func_5558(var_318_int, "d1q02");
	var_321_bool = var_318_int == (int)1000;
	if(var_321_bool != 0) {
		var_316_bool = 1;
		return 0;
	}
	var_316_bool = 0;
	return 0;
}


func_5706()
{
	SetVariable("ood2Anna1", (int)1);
	return 0;
}


func_6734(var_204_bool)
{
	var_206_int = 0; var_207_string = "";
	func_5558(var_206_int, "ood5Anna1");
	var_209_bool = var_206_int == (int)0;
	if(var_209_bool != 0) {
		var_204_bool = 1;
		return 0;
	}
	var_204_bool = 0;
	return 0;
}


func_5712()
{
	SetVariable("ood2Anna2", (int)1);
	return 0;
}


func_6230(var_264_bool)
{
	var_266_int = 0; var_267_string = "";
	func_5558(var_266_int, "d1q02");
	var_269_bool = var_266_int == (int)1;
	if(var_269_bool != 0) {
		var_264_bool = 1;
		return 0;
	}
	var_264_bool = 0;
	return 0;
}


func_5718()
{
	SetVariable("KnowPochka", (int)1);
	return 0;
}


func_600(var_2_object, var_158_string)
{
	var_159_bool = 0;
	func_5645(var_159_bool);
	var_160_bool = var_159_bool == 0; //@nz
	if(var_160_bool != 0) {
		return 0;
	}
	var_161_bool = var_158_string == var_2_object;
	if(var_161_bool != 0) {
		return 0;
	}
	var_162_string = "";
	var_158_string = var_162_string;
	func_5523(var_162_string);
	var_2_object = var_158_string;
	return 0;
}


func_6746(var_382_bool)
{
	var_384_int = 0; var_385_string = "";
	func_5558(var_384_int, "KnowOspina");
	var_387_bool = var_384_int == (int)1;
	if(var_387_bool != 0) {
		var_382_bool = 1;
		return 0;
	}
	var_382_bool = 0;
	return 0;
}


func_5724()
{
	var_47_object = Obj(); var_48_object = Obj();
	SetVariable("d2q01", (int)2);
	func_6812(Obj());
	var_51_object = var_48_object;
	var_62_float = 0;
	func_5612(var_62_float);
	@@var_48_object:AddMark("d2q01AnnaGotoKapella", "pt_map_kapella", (int)1, (int)11388, var_62_float);
	func_6895();
	return 2;
}
EMIT "Stack[-1] = 0";


func_6242(var_347_bool)
{
	var_349_int = 0; var_350_string = "";
	func_5558(var_349_int, "d1q01FirstGeorgVisit");
	var_352_bool = var_349_int == (int)1;
	if(var_352_bool != 0) {
		var_347_bool = 1;
		return 0;
	}
	var_347_bool = 0;
	return 0;
}


func_6758(var_414_bool)
{
	var_416_int = 0; var_417_string = "";
	func_5558(var_416_int, "KnowStamatins");
	var_419_bool = var_416_int == (int)1;
	if(var_419_bool != 0) {
		var_414_bool = 1;
		return 0;
	}
	var_414_bool = 0;
	return 0;
}


func_4199(var_0_object, var_525_int, var_526_object)
{
	var_528_object = Obj(); var_529_bool = 0; var_530_int = 0; var_531_bool = 0; var_532_object = Obj(); var_533_bool = 0; var_534_int = 0; var_535_bool = 0;
	var_0_object = var_526_object;
	var_536_bool = 0; var_537_object = Obj();
	var_526_object = var_537_object;
	func_5463(var_536_bool, var_537_object);
	var_538_bool = var_536_bool == 0; //@nz
	if(var_538_bool != 0) {
		var_525_int = -2;
		return 8;
	}
	CreateDialog(var_532_object);
	var_539_int = 0;
	func_5641(var_539_int);
	@@var_532_object:SetNPCName(var_539_int);
	var_540_string = "";
	func_5643(var_540_string);
	@@var_532_object:SetPhoto(var_540_string);
	var_541_int = 0;
	func_6862(var_541_int);
	@@var_532_object:SetPlayerName(var_541_int);
	IsOverrideActive(var_533_bool);
	var_542_bool = var_533_bool;
	if(var_542_bool != 0) {
		var_525_int = -2;
		return 8;
	}
	DoDialog(var_532_object);
	var_543_object = Obj(); var_544_object = Obj();
	var_526_object = var_543_object;
	var_532_object = var_544_object;
	TaskCall(13);
	func_4262(var_545_object, var_546_object, var_547_string, var_548_bool, var_543_object, var_544_object);
	TaskReturn();
	@@var_532_object:IsDialogEnd(var_535_bool);
	
Label_4244:
	var_612_bool = var_535_bool == 0; //@nz
	if(var_612_bool != 0) {
		sync();
		@@var_532_object:IsDialogEnd(var_535_bool);
		goto Label_4244;
	}
	var_526_object = Obj();
	func_5519();
	StopDialog(var_532_object);
	@@var_532_object:GetReturnValue((int)-1);
	var_534_int = var_525_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6254(var_388_bool)
{
	var_390_int = 0; var_391_string = "";
	func_5558(var_390_int, "ood1Anna7");
	var_393_bool = var_390_int == (int)0;
	if(var_393_bool != 0) {
		var_388_bool = 1;
		return 0;
	}
	var_388_bool = 0;
	return 0;
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_102_object, var_103_object)
{
	var_0_object = var_103_object;
	var_1_object = var_102_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_109_object = Obj(); var_110_object = Obj();
		var_109_object = var_1_object;
		var_110_object = var_0_object;
		func_6123();
		var_113_string = "";
		func_175(var_103_object, "Neutral");
		@@@var_0_object:SetMessage((int)221);
		@@@var_0_object:ClearReplies();
		@@@var_0_object:AddReply((int)222, (int)263, (int)261);
		@@@var_0_object:AddReply((int)223, (int)266, (int)262);
		goto Label_145;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_145:
	var_135_bool = 0;
	func_5645(var_135_bool);
	if(var_135_bool != 0) {

	Label_149:
		lshWaitForAnimEnd();
		var_136_object = var_3_object;
		if(var_136_object != 0) {
		} else {
			var_137_string = "";
			var_137_string = var_2_object;
			func_5523(var_137_string);
			goto Label_149;
	}
		PlayAnimation("all", "idle");

	Label_164:
		WaitForAnimEnd();
		var_140_object = var_3_object;
		if(var_140_object != 0) {
			goto Label_174;
		}
		PlayAnimation("all", "idle");
		goto Label_164;
	}
	goto Label_174;
	
Label_174:
	return 0;
	
}


func_6770(var_81_object)
{
	var_82_object = Obj(); var_83_object = Obj();
	GetDiaryRoot(var_83_object);
	var_84_bool = var_83_object == 0; //@nz
	if(var_84_bool != 0) {
		Trace("Can't retrieve diary root");
		var_81_object = 0;
		return 2;
	}
	var_83_object = var_81_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5747()
{
	SetVariable("KnowZemlja", (int)1);
	return 0;
}


func_3705(var_0_object, var_445_int, var_446_object)
{
	var_448_object = Obj(); var_449_bool = 0; var_450_int = 0; var_451_bool = 0; var_452_object = Obj(); var_453_bool = 0; var_454_int = 0; var_455_bool = 0;
	var_0_object = var_446_object;
	var_456_bool = 0; var_457_object = Obj();
	var_446_object = var_457_object;
	func_5463(var_456_bool, var_457_object);
	var_458_bool = var_456_bool == 0; //@nz
	if(var_458_bool != 0) {
		var_445_int = -2;
		return 8;
	}
	CreateDialog(var_452_object);
	var_459_int = 0;
	func_5641(var_459_int);
	@@var_452_object:SetNPCName(var_459_int);
	var_460_string = "";
	func_5643(var_460_string);
	@@var_452_object:SetPhoto(var_460_string);
	var_461_int = 0;
	func_6862(var_461_int);
	@@var_452_object:SetPlayerName(var_461_int);
	IsOverrideActive(var_453_bool);
	var_462_bool = var_453_bool;
	if(var_462_bool != 0) {
		var_445_int = -2;
		return 8;
	}
	DoDialog(var_452_object);
	var_463_object = Obj(); var_464_object = Obj();
	var_446_object = var_463_object;
	var_452_object = var_464_object;
	TaskCall(11);
	func_3768(var_465_object, var_466_object, var_467_string, var_468_bool, var_463_object, var_464_object);
	TaskReturn();
	@@var_452_object:IsDialogEnd(var_455_bool);
	
Label_3750:
	var_521_bool = var_455_bool == 0; //@nz
	if(var_521_bool != 0) {
		sync();
		@@var_452_object:IsDialogEnd(var_455_bool);
		goto Label_3750;
	}
	var_446_object = Obj();
	func_5519();
	StopDialog(var_452_object);
	@@var_452_object:GetReturnValue((int)-1);
	var_454_int = var_445_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5753()
{
	var_47_object = Obj(); var_48_object = Obj();
	func_6812(Obj());
	var_49_object = var_48_object;
	var_60_float = 0;
	func_5612(var_60_float);
	@@var_48_object:AddMark("d1q02AnnaGotoLaska", "pt_map_laska", (int)0, (int)8635, var_60_float);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6266(var_404_bool)
{
	var_406_int = 0; var_407_string = "";
	func_5558(var_406_int, "ood1Anna8");
	var_409_bool = var_406_int == (int)0;
	if(var_409_bool != 0) {
		var_404_bool = 1;
		return 0;
	}
	var_404_bool = 0;
	return 0;
}


func_6783(var_72_bool, var_73_object, var_74_int)
{
	var_75_object = Obj(); var_76_object = Obj(); var_77_int = 0; var_78_object = Obj(); var_79_object = Obj(); var_80_int = 0;
	func_6770(Obj());
	var_81_object = var_78_object;
	@@var_78_object:Find(var_74_int, var_79_object);
	var_86_bool = var_79_object == 0; //@nz
	if(var_86_bool != 0) {
		var_88_int = "Can't find diary parent with id: " + var_74_int;
		Trace(var_88_int);
		var_72_bool = 0;
		return 6;
	}
	@@var_79_object:AddChild(var_73_object);
	SetVariable("player_diary", (int)1);
	@@var_73_object:GetCategory(var_80_int);
	SetDiarySection(var_80_int);
	var_72_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_6278(var_420_bool)
{
	var_422_int = 0; var_423_string = "";
	func_5558(var_422_int, "ood1Anna9");
	var_425_bool = var_422_int == (int)0;
	if(var_425_bool != 0) {
		var_420_bool = 1;
		return 0;
	}
	var_420_bool = 0;
	return 0;
}


func_5769(var_64_object)
{
	var_65_object = Obj(); var_66_string = ""; var_67_float = 0;
	func_6812(Obj());
	var_68_object = var_65_object;
	func_6829(var_65_object, "pt_map_laska", (float)2);
	var_88_object = Obj();
	func_6812(var_88_object);
	@@var_64_object:ShowMap(var_88_object);
	return 0;
}


func_6290(var_436_bool)
{
	var_438_int = 0; var_439_string = "";
	func_5558(var_438_int, "ood1Anna10");
	var_441_bool = var_438_int == (int)0;
	if(var_441_bool != 0) {
		var_436_bool = 1;
		return 0;
	}
	var_436_bool = 0;
	return 0;
}


func_5785()
{
	SetVariable("d1q02", (int)2);
	func_6879();
	return 0;
}


func_6812(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj();
	GetMainOutdoorScene(var_50_object);
	var_52_bool = var_50_object == 0; //@ne
	if(var_52_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_51_object = 0;
		var_51_object = var_47_object;
		return 4;
	}
	@@var_50_object:GetMap(var_51_object);
	var_51_object = var_47_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6302(var_165_bool)
{
	var_167_int = 0; var_168_string = "";
	func_5558(var_167_int, "ood2Anna1");
	var_172_bool = var_167_int == (int)0;
	if(var_172_bool != 0) {
		var_165_bool = 1;
		return 0;
	}
	var_165_bool = 0;
	return 0;
}


func_5794()
{
	SetVariable("KnowNevod", (int)1);
	return 0;
}


func_4262(var_0_object, var_1_object, var_2_object, var_3_object, var_543_object, var_544_object)
{
	var_0_object = var_544_object;
	var_1_object = var_543_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_550_string = "";
		func_4373(var_544_object, "Neutral");
		@@@var_0_object:SetMessage((int)11344);
		@@@var_0_object:ClearReplies();
		var_556_bool = 0;
		var_556_bool = 0;
		var_557_bool = 0; var_558_object = Obj();
		var_558_object = var_1_object;
		func_6398(var_558_object);
		if(var_557_bool != 0) {
			var_563_bool = 0; var_564_object = Obj();
			var_564_object = var_1_object;
			func_6410(var_564_object);
			if(var_563_bool != 0) {
				var_556_bool = 1;
			}
		}
		if(var_556_bool != 0) {
			@@@var_0_object:AddReply((int)11346, (int)12544, (int)12543);
		}
		var_572_bool = 0;
		var_572_bool = 0;
		var_573_bool = 0; var_574_object = Obj();
		var_574_object = var_1_object;
		func_6410(var_574_object);
		if(var_573_bool != 0) {
			var_575_bool = 0; var_576_object = Obj();
			var_576_object = var_1_object;
			func_6422(var_576_object);
			var_581_bool = var_575_bool == 0; //@nz
			if(var_581_bool != 0) {
				var_572_bool = 1;
			}
		}
		if(var_572_bool != 0) {
			@@@var_0_object:AddReply((int)11473, (int)12680, (int)12679);
		}
		var_585_bool = 0;
		var_585_bool = 0;
		var_586_bool = 0; var_587_object = Obj();
		var_587_object = var_1_object;
		func_6446(var_587_object);
		if(var_586_bool != 0) {
			var_592_bool = 0; var_593_object = Obj();
			var_593_object = var_1_object;
			func_6434(var_593_object);
			if(var_592_bool != 0) {
				var_585_bool = 1;
			}
		}
		if(var_585_bool != 0) {
			@@@var_0_object:AddReply((int)11853, (int)13067, (int)13066);
		}
		@@@var_0_object:AddReply((int)11345, (int)-1, (int)12542);
		goto Label_4343;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x10aa";
	}
Label_4343:
	var_604_bool = 0;
	func_5645(var_604_bool);
	if(var_604_bool != 0) {

	Label_4347:
		lshWaitForAnimEnd();
		var_605_object = var_3_object;
		if(var_605_object != 0) {
		} else {
			var_606_string = "";
			var_606_string = var_2_object;
			func_5523(var_606_string);
			goto Label_4347;
	}
		PlayAnimation("all", "idle");

	Label_4362:
		WaitForAnimEnd();
		var_609_object = var_3_object;
		if(var_609_object != 0) {
			goto Label_4372;
		}
		PlayAnimation("all", "idle");
		goto Label_4362;
	}
	goto Label_4372;
	
Label_4372:
	return 0;
	
}


func_5800(var_54_object)
{
	var_55_object = Obj(); var_56_string = ""; var_57_float = 0;
	func_6812(Obj());
	var_58_object = var_55_object;
	func_6829(var_55_object, "pt_map_bigvlad", (float)2);
	var_84_object = Obj();
	func_6812(var_84_object);
	@@var_54_object:ShowMap(var_84_object);
	return 0;
}


func_6314(var_182_bool)
{
	var_184_int = 0; var_185_string = "";
	func_5558(var_184_int, "ood2Anna2");
	var_187_bool = var_184_int == (int)0;
	if(var_187_bool != 0) {
		var_182_bool = 1;
		return 0;
	}
	var_182_bool = 0;
	return 0;
}


func_6829(var_91_object, var_92_string, var_93_float)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_object = Obj(); var_98_bool = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_object = Obj(); var_102_bool = 0;
	GetMainOutdoorScene(var_101_object);
	var_103_bool = var_101_object == 0; //@ne
	if(var_103_bool != 0) {
		Trace("Can't find main outdoor scene");
		return 8;
	}
	@@var_101_object:GetLocator(var_92_string, var_102_bool, var_99_cvector, var_100_cvector);
	var_105_bool = var_102_bool == 0; //@nz
	if(var_105_bool != 0) {
		var_107_int = "Warning: outdoor scene locator " + var_92_string;
		var_109_int = var_107_int + " doesnt exist";
		Trace(var_109_int);
	}
	@@var_101_object:GetMap(var_91_object);
	var_110_bool = var_91_object == 0; //@ne
	if(var_110_bool != 0) {
		Trace("Can't find map");
		return 8;
	}
	var_112_float = GetByIndex(var_99_cvector, 0);
	var_113_float = GetByIndex(var_99_cvector, 2);
	@@var_91_object:SetMapParams(var_112_float, var_113_float, var_93_float);
	return 8;
}
EMIT "Stack[-2] = 0";


func_175(var_2_object, var_45_string)
{
	var_46_bool = 0;
	func_5645(var_46_bool);
	var_47_bool = var_46_bool == 0; //@nz
	if(var_47_bool != 0) {
		return 0;
	}
	var_48_bool = var_45_string == var_2_object;
	if(var_48_bool != 0) {
		return 0;
	}
	var_49_string = "";
	var_45_string = var_49_string;
	func_5523(var_49_string);
	var_2_object = var_45_string;
	return 0;
}


func_6650(var_222_bool)
{
	var_224_int = 0; var_225_string = "";
	func_5558(var_224_int, "d6q01");
	var_227_bool = var_224_int == (int)-1;
	if(var_227_bool != 0) {
		var_222_bool = 1;
		return 0;
	}
	var_222_bool = 0;
	return 0;
}


func_6326(var_428_bool)
{
	var_430_int = 0; var_431_string = "";
	func_5558(var_430_int, "KnowSgustok");
	var_433_bool = var_430_int == (int)1;
	if(var_433_bool != 0) {
		var_428_bool = 1;
		return 0;
	}
	var_428_bool = 0;
	return 0;
}


func_3768(var_0_object, var_1_object, var_2_object, var_3_object, var_463_object, var_464_object)
{
	var_0_object = var_464_object;
	var_1_object = var_463_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_470_string = "";
		func_3860(var_464_object, "Neutral");
		@@@var_0_object:SetMessage((int)9781);
		@@@var_0_object:ClearReplies();
		var_476_bool = 0;
		var_476_bool = 0;
		var_477_bool = 0; var_478_object = Obj();
		var_478_object = var_1_object;
		func_6374(var_478_object);
		if(var_477_bool != 0) {
			var_483_bool = 0; var_484_object = Obj();
			var_484_object = var_1_object;
			func_6386(var_484_object);
			if(var_483_bool != 0) {
				var_476_bool = 1;
			}
		}
		if(var_476_bool != 0) {
			@@@var_0_object:AddReply((int)10216, (int)11263, (int)11262);
		}
		var_492_bool = 0; var_493_object = Obj();
		var_493_object = var_1_object;
		func_6710(var_493_object);
		if(var_492_bool != 0) {
			@@@var_0_object:AddReply((int)9782, (int)10764, (int)10775);
		}
		var_501_bool = 0; var_502_object = Obj();
		var_502_object = var_1_object;
		func_6722(var_502_object);
		if(var_501_bool != 0) {
			@@@var_0_object:AddReply((int)10191, (int)11238, (int)11237);
		}
		@@@var_0_object:AddReply((int)15312, (int)-1, (int)16550);
		goto Label_3830;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xebc";
	}
Label_3830:
	var_513_bool = 0;
	func_5645(var_513_bool);
	if(var_513_bool != 0) {

	Label_3834:
		lshWaitForAnimEnd();
		var_514_object = var_3_object;
		if(var_514_object != 0) {
		} else {
			var_515_string = "";
			var_515_string = var_2_object;
			func_5523(var_515_string);
			goto Label_3834;
	}
		PlayAnimation("all", "idle");

	Label_3849:
		WaitForAnimEnd();
		var_518_object = var_3_object;
		if(var_518_object != 0) {
			goto Label_3859;
		}
		PlayAnimation("all", "idle");
		goto Label_3849;
	}
	goto Label_3859;
	
Label_3859:
	return 0;
	
}


func_5816()
{
	SetVariable("ood3Anna1", (int)1);
	return 0;
}


func_5822()
{
	SetVariable("d3q02", (int)6);
	return 0;
}


func_6338(var_286_bool)
{
	var_288_int = 0; var_289_string = "";
	func_5558(var_288_int, "KnowDiamAce");
	var_291_bool = var_288_int == (int)1;
	if(var_291_bool != 0) {
		var_286_bool = 1;
		return 0;
	}
	var_286_bool = 0;
	return 0;
}


func_5828(var_91_object)
{
	var_92_object = Obj(); var_93_string = ""; var_94_float = 0;
	func_6812(Obj());
	var_95_object = var_92_object;
	func_6829(var_92_object, "pt_map_kapella", (float)2);
	var_115_object = Obj();
	func_6812(var_115_object);
	@@var_91_object:ShowMap(var_115_object);
	return 0;
}


func_4812(var_0_object, var_616_int, var_617_object)
{
	var_619_object = Obj(); var_620_bool = 0; var_621_int = 0; var_622_bool = 0; var_623_object = Obj(); var_624_bool = 0; var_625_int = 0; var_626_bool = 0;
	var_0_object = var_617_object;
	var_627_bool = 0; var_628_object = Obj();
	var_617_object = var_628_object;
	func_5463(var_627_bool, var_628_object);
	var_629_bool = var_627_bool == 0; //@nz
	if(var_629_bool != 0) {
		var_616_int = -2;
		return 8;
	}
	CreateDialog(var_623_object);
	var_630_int = 0;
	func_5641(var_630_int);
	@@var_623_object:SetNPCName(var_630_int);
	var_631_string = "";
	func_5643(var_631_string);
	@@var_623_object:SetPhoto(var_631_string);
	var_632_int = 0;
	func_6862(var_632_int);
	@@var_623_object:SetPlayerName(var_632_int);
	IsOverrideActive(var_624_bool);
	var_633_bool = var_624_bool;
	if(var_633_bool != 0) {
		var_616_int = -2;
		return 8;
	}
	DoDialog(var_623_object);
	var_634_object = Obj(); var_635_object = Obj();
	var_617_object = var_634_object;
	var_623_object = var_635_object;
	TaskCall(15);
	func_4875(var_636_object, var_637_object, var_638_string, var_639_bool, var_634_object, var_635_object);
	TaskReturn();
	@@var_623_object:IsDialogEnd(var_626_bool);
	
Label_4857:
	var_694_bool = var_626_bool == 0; //@nz
	if(var_694_bool != 0) {
		sync();
		@@var_623_object:IsDialogEnd(var_626_bool);
		goto Label_4857;
	}
	var_617_object = Obj();
	func_5519();
	StopDialog(var_623_object);
	@@var_623_object:GetReturnValue((int)-1);
	var_625_int = var_616_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6862(var_93_int)
{
	var_94_int = 0; var_95_int = 0;
	GetVariable("player", var_95_int);
	var_98_bool = var_95_int == (int)0;
	if(var_98_bool != 0) {
		var_93_int = 200001;
		return 2;
	EMIT "GOTO 0x1add";
	}
	var_100_bool = var_95_int == (int)1;
	if(var_100_bool != 0) {
		var_93_int = 200002;
		return 2;
	}
	var_93_int = 200003;
	return 2;
}


func_6350(var_173_bool)
{
	var_175_int = 0; var_176_string = "";
	func_5558(var_175_int, "d2q01");
	var_178_bool = var_175_int == (int)1;
	if(var_178_bool != 0) {
		var_173_bool = 1;
		return 0;
	}
	var_173_bool = 0;
	return 0;
}


func_2767(var_0_object, var_374_int, var_375_object)
{
	var_377_object = Obj(); var_378_bool = 0; var_379_int = 0; var_380_bool = 0; var_381_object = Obj(); var_382_bool = 0; var_383_int = 0; var_384_bool = 0;
	var_0_object = var_375_object;
	var_385_bool = 0; var_386_object = Obj();
	var_375_object = var_386_object;
	func_5463(var_385_bool, var_386_object);
	var_387_bool = var_385_bool == 0; //@nz
	if(var_387_bool != 0) {
		var_374_int = -2;
		return 8;
	}
	CreateDialog(var_381_object);
	var_388_int = 0;
	func_5641(var_388_int);
	@@var_381_object:SetNPCName(var_388_int);
	var_389_string = "";
	func_5643(var_389_string);
	@@var_381_object:SetPhoto(var_389_string);
	var_390_int = 0;
	func_6862(var_390_int);
	@@var_381_object:SetPlayerName(var_390_int);
	IsOverrideActive(var_382_bool);
	var_391_bool = var_382_bool;
	if(var_391_bool != 0) {
		var_374_int = -2;
		return 8;
	}
	DoDialog(var_381_object);
	var_392_object = Obj(); var_393_object = Obj();
	var_375_object = var_392_object;
	var_381_object = var_393_object;
	TaskCall(9);
	func_2830(var_394_object, var_395_object, var_396_string, var_397_bool, var_392_object, var_393_object);
	TaskReturn();
	@@var_381_object:IsDialogEnd(var_384_bool);
	
Label_2812:
	var_441_bool = var_384_bool == 0; //@nz
	if(var_441_bool != 0) {
		sync();
		@@var_381_object:IsDialogEnd(var_384_bool);
		goto Label_2812;
	}
	var_375_object = Obj();
	func_5519();
	StopDialog(var_381_object);
	@@var_381_object:GetReturnValue((int)-1);
	var_383_int = var_374_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5844()
{
	SetVariable("ood4Anna1", (int)1);
	return 0;
}


func_6362(var_295_bool)
{
	var_297_int = 0; var_298_string = "";
	func_5558(var_297_int, "d1q02");
	var_300_bool = var_297_int == (int)2;
	if(var_300_bool != 0) {
		var_295_bool = 1;
		return 0;
	}
	var_295_bool = 0;
	return 0;
}


func_5850()
{
	SetVariable("d4q02AnnaGivesMedcine", (int)1);
	return 0;
}


func_6879()
{
	var_93_object = Obj(); var_94_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_94_object, (int)35, (int)2, (int)12117);
	var_99_bool = 0; var_100_object = Obj(); var_101_int = 0;
	var_94_object = var_100_object;
	func_6783(var_99_bool, var_100_object, (int)7);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5856(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj();
	var_53_bool = 0;
	var_53_bool = 0;
	var_54_bool = 0;
	var_54_bool = 0;
	var_55_int = 0; var_56_string = "";
	func_5558(var_55_int, "d4q02AnnaGivesMedcine");
	var_60_bool = var_55_int == (int)1;
	if(var_60_bool != 0) {
		var_61_int = 0; var_62_string = "";
		func_5558(var_61_int, "d4q02JuliaGivesMedcine");
		var_64_bool = var_61_int == (int)1;
		if(var_64_bool != 0) {
			var_54_bool = 1;
		}
	}
	if(var_54_bool != 0) {
		var_65_int = 0; var_66_string = "";
		func_5558(var_65_int, "d4q02LaraGivesMedcine");
		var_68_bool = var_65_int == (int)1;
		if(var_68_bool != 0) {
			var_53_bool = 1;
		}
	}
	if(var_53_bool != 0) {
		SetVariable("d4q02", (int)2);
		func_6812(Obj());
		var_71_object = var_52_object;
		var_82_float = 0;
		func_5612(var_82_float);
		@@var_52_object:AddMark("d4q02BirdmaskNearHome", "pt_d4q02_birdmask", (int)0, (int)11842, var_82_float);
		var_85_bool = 0; var_86_string = ""; var_87_string = "";
		func_5600(var_85_bool, "quest_d4_02", "birdmask");
		var_91_object = Obj(); var_92_string = ""; var_93_float = 0;
		func_6812(Obj());
		var_94_object = var_91_object;
		func_6829(var_91_object, "pt_d4q02_birdmask", (float)2);
		var_114_object = Obj();
		func_6812(var_114_object);
		@@var_50_object:ShowMap(var_114_object);
		var_52_object = 0;
	}
	return 2;
}


func_6374(var_120_bool)
{
	var_122_int = 0; var_123_string = "";
	func_5558(var_122_int, "ood3Anna1");
	var_127_bool = var_122_int == (int)0;
	if(var_127_bool != 0) {
		var_120_bool = 1;
		return 0;
	}
	var_120_bool = 0;
	return 0;
}


func_6895()
{
	var_65_object = Obj(); var_66_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_66_object, (int)51, (int)1, (int)12133);
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0;
	var_66_object = var_72_object;
	func_6783(var_71_bool, var_72_object, (int)10);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6386(var_128_bool)
{
	var_130_int = 0; var_131_string = "";
	func_5558(var_130_int, "d3q02");
	var_133_bool = var_130_int == (int)5;
	if(var_133_bool != 0) {
		var_128_bool = 1;
		return 0;
	}
	var_128_bool = 0;
	return 0;
}


func_6398(var_193_bool)
{
	var_195_int = 0; var_196_string = "";
	func_5558(var_195_int, "ood4Anna1");
	var_198_bool = var_195_int == (int)0;
	if(var_198_bool != 0) {
		var_193_bool = 1;
		return 0;
	}
	var_193_bool = 0;
	return 0;
}


func_6911()
{
	var_66_object = Obj(); var_67_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_67_object, (int)148, (int)2, (int)15354);
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0;
	var_67_object = var_73_object;
	func_6783(var_72_bool, var_73_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1282(var_2_object, var_270_string)
{
	var_271_bool = 0;
	func_5645(var_271_bool);
	var_272_bool = var_271_bool == 0; //@nz
	if(var_272_bool != 0) {
		return 0;
	}
	var_273_bool = var_270_string == var_2_object;
	if(var_273_bool != 0) {
		return 0;
	}
	var_274_string = "";
	var_270_string = var_274_string;
	func_5523(var_274_string);
	var_2_object = var_270_string;
	return 0;
}


func_6410(var_199_bool)
{
	var_201_int = 0; var_202_string = "";
	func_5558(var_201_int, "d4q02");
	var_204_bool = var_201_int == (int)1;
	if(var_204_bool != 0) {
		var_199_bool = 1;
		return 0;
	}
	var_199_bool = 0;
	return 0;
}


func_4875(var_0_object, var_1_object, var_2_object, var_3_object, var_634_object, var_635_object)
{
	var_0_object = var_635_object;
	var_1_object = var_634_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_641_bool = 0; var_642_object = Obj();
		var_642_object = var_1_object;
		func_6458(var_642_object);
		if(var_641_bool != 0) {
			var_647_string = "";
			func_4977(var_635_object, "Neutral");
			@@@var_0_object:SetMessage((int)11872);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)11873, (int)13087, (int)13086);
		} else {
				var_664_string = "";
				func_4977(var_635_object, "Neutral");
				@@@var_0_object:SetMessage((int)11897);
				@@@var_0_object:ClearReplies();
				var_666_bool = 0; var_667_object = Obj();
				var_667_object = var_1_object;
				func_6470(var_667_object);
				if(var_666_bool != 0) {
					@@@var_0_object:AddReply((int)11898, (int)13115, (int)13114);
				}
				var_675_bool = 0;
				var_675_bool = 0;
				var_676_bool = 0; var_677_object = Obj();
				var_677_object = var_1_object;
				func_6494(var_677_object);
				if(var_676_bool != 0) {
					var_682_bool = 0; var_683_object = Obj();
					var_683_object = var_1_object;
					func_6734(var_683_object);
					if(var_682_bool != 0) {
						var_675_bool = 1;
					}
				}
				if(var_675_bool != 0) {
					@@@var_0_object:AddReply((int)11907, (int)13124, (int)13123);
				}
				@@@var_0_object:AddReply((int)11915, (int)-1, (int)13131);
				goto Label_4947;
		}
	}
Label_4947:
	var_656_bool = 0;
	func_5645(var_656_bool);
	if(var_656_bool != 0) {

	Label_4951:
		lshWaitForAnimEnd();
		var_657_object = var_3_object;
		if(var_657_object != 0) {
		} else {
			var_658_string = "";
			var_658_string = var_2_object;
			func_5523(var_658_string);
			goto Label_4951;
	}
		PlayAnimation("all", "idle");

	Label_4966:
		WaitForAnimEnd();
		var_661_object = var_3_object;
		if(var_661_object != 0) {
			goto Label_4976;
		}
		PlayAnimation("all", "idle");
		goto Label_4966;

	}
	goto Label_4976;
	
Label_4976:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x130f";


func_2830(var_0_object, var_1_object, var_2_object, var_3_object, var_392_object, var_393_object)
{
	var_0_object = var_393_object;
	var_1_object = var_392_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_399_string = "";
		func_2957(var_393_object, "Neutral");
		@@@var_0_object:SetMessage((int)6624);
		@@@var_0_object:ClearReplies();
		var_405_bool = 0;
		var_405_bool = 0;
		var_406_bool = 0; var_407_object = Obj();
		var_407_object = var_1_object;
		func_6302(var_407_object);
		if(var_406_bool != 0) {
			var_412_bool = 0; var_413_object = Obj();
			var_413_object = var_1_object;
			func_6350(var_413_object);
			if(var_412_bool != 0) {
				var_405_bool = 1;
			}
		}
		if(var_405_bool != 0) {
			@@@var_0_object:AddReply((int)7217, (int)7952, (int)7953);
		}
		var_421_bool = 0; var_422_object = Obj();
		var_422_object = var_1_object;
		func_6314(var_422_object);
		if(var_421_bool != 0) {
			@@@var_0_object:AddReply((int)6949, (int)7656, (int)7655);
		}
		@@@var_0_object:AddReply((int)6626, (int)-1, (int)7295);
		goto Label_2927;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xb8d";
	EMIT "Pop(1)";
	EMIT "Push((int) 9272)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9273)";
	EMIT "Push((int) 10180)";
	EMIT "Push((int) 10179)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9280)";
	EMIT "Push((int) 10180)";
	EMIT "Push((int) 10186)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xb6f";
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0xb8d";
	EMIT "Pop(1)";
	EMIT "Push((int) 9281)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9282)";
	EMIT "Push((int) 10190)";
	EMIT "Push((int) 10189)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9292)";
	EMIT "Push((int) 10190)";
	EMIT "Push((int) 10199)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "Push((int) 9293)";
	EMIT "Push((int) 10190)";
	EMIT "Push((int) 10201)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0xb6f";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0xb12";
	}
Label_2927:
	var_433_bool = 0;
	func_5645(var_433_bool);
	if(var_433_bool != 0) {

	Label_2931:
		lshWaitForAnimEnd();
		var_434_object = var_3_object;
		if(var_434_object != 0) {
		} else {
			var_435_string = "";
			var_435_string = var_2_object;
			func_5523(var_435_string);
			goto Label_2931;
	}
		PlayAnimation("all", "idle");

	Label_2946:
		WaitForAnimEnd();
		var_438_object = var_3_object;
		if(var_438_object != 0) {
			goto Label_2956;
		}
		PlayAnimation("all", "idle");
		goto Label_2946;
	}
	goto Label_2956;
	
Label_2956:
	return 0;
	
}


func_6927()
{
	var_91_object = Obj(); var_92_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_92_object, (int)149, (int)2, (int)15355);
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0;
	var_92_object = var_98_object;
	func_6783(var_97_bool, var_98_object, (int)148);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3860(var_2_object, var_103_string)
{
	var_104_bool = 0;
	func_5645(var_104_bool);
	var_105_bool = var_104_bool == 0; //@nz
	if(var_105_bool != 0) {
		return 0;
	}
	var_106_bool = var_103_string == var_2_object;
	if(var_106_bool != 0) {
		return 0;
	}
	var_107_string = "";
	var_103_string = var_107_string;
	func_5523(var_107_string);
	var_2_object = var_103_string;
	return 0;
}


func_4373(var_2_object, var_176_string)
{
	var_177_bool = 0;
	func_5645(var_177_bool);
	var_178_bool = var_177_bool == 0; //@nz
	if(var_178_bool != 0) {
		return 0;
	}
	var_179_bool = var_176_string == var_2_object;
	if(var_179_bool != 0) {
		return 0;
	}
	var_180_string = "";
	var_176_string = var_180_string;
	func_5523(var_180_string);
	var_2_object = var_176_string;
	return 0;
}


func_6422(var_211_bool)
{
	var_213_int = 0; var_214_string = "";
	func_5558(var_213_int, "d4q02AnnaGivesMedcine");
	var_216_bool = var_213_int == (int)1;
	if(var_216_bool != 0) {
		var_211_bool = 1;
		return 0;
	}
	var_211_bool = 0;
	return 0;
}


func_6943()
{
	var_128_object = Obj(); var_129_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_129_object, (int)151, (int)2, (int)15357);
	var_134_bool = 0; var_135_object = Obj(); var_136_int = 0;
	var_129_object = var_135_object;
	func_6783(var_134_bool, var_135_object, (int)148);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6434(var_228_bool)
{
	var_230_int = 0; var_231_string = "";
	func_5558(var_230_int, "d4q02");
	var_233_bool = var_230_int == (int)1000;
	if(var_233_bool != 0) {
		var_228_bool = 1;
		return 0;
	}
	var_228_bool = 0;
	return 0;
}


func_5924()
{
	SetVariable("ood4Anna2", (int)1);
	return 0;
}


func_5930()
{
	var_43_object = Obj(); var_44_object = Obj();
	SetVariable("d5q02", (int)1);
	func_6812(Obj());
	var_47_object = var_44_object;
	var_58_float = 0;
	func_5612(var_58_float);
	@@var_44_object:AddMark("d5q02AnnaGotoGorbun", "pt_map_gorbun", (int)0, (int)15360, var_58_float);
	var_65_float = 0;
	func_5612(var_65_float);
	@@var_44_object:AddMark("d5q02AnnaGotoGorbunSelf", "pt_map_anna", (int)0, (int)15361, var_65_float);
	func_6911();
	func_6927();
	var_100_object = Obj(); var_101_string = "";
	func_5563(var_100_object, "quest_d5_02");
	var_108_bool = 0; var_109_string = ""; var_110_string = "";
	func_5600(var_108_bool, "quest_d5_02", "place_gorbun");
	return 2;
}
EMIT "Stack[-1] = 0";


func_6446(var_222_bool)
{
	var_224_int = 0; var_225_string = "";
	func_5558(var_224_int, "ood4Anna2");
	var_227_bool = var_224_int == (int)0;
	if(var_227_bool != 0) {
		var_222_bool = 1;
		return 0;
	}
	var_222_bool = 0;
	return 0;
}


func_6959()
{
	var_120_object = Obj(); var_121_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_121_object, (int)159, (int)1, (int)15392);
	var_126_bool = 0; var_127_object = Obj(); var_128_int = 0;
	var_121_object = var_127_object;
	func_6783(var_126_bool, var_127_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_6458(var_161_bool)
{
	var_163_int = 0; var_164_string = "";
	func_5558(var_163_int, "d5q02");
	var_166_bool = var_163_int == (int)0;
	if(var_166_bool != 0) {
		var_161_bool = 1;
		return 0;
	}
	var_161_bool = 0;
	return 0;
}


func_5439(var_149_object, var_150_string, var_151_int)
{
	var_152_int = 0; var_153_int = 0;
	@@var_149_object:GetProperty(var_150_string, var_153_int);
	var_154_int = var_153_int + var_151_int;
	@@var_149_object:SetProperty(var_150_string, var_154_int);
	return 2;
}


func_6975()
{
	var_87_object = Obj(); var_88_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_88_object, (int)116, (int)1, (int)13739);
	var_93_bool = 0; var_94_object = Obj(); var_95_int = 0;
	var_88_object = var_94_object;
	func_6783(var_93_bool, var_94_object, (int)111);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5446(var_36_bool, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0;
	@@var_37_object:GetPosition(var_42_cvector);
	GetPosition(var_43_cvector);
	var_44_cvector = var_42_cvector - var_43_cvector;
	var_46_float = GetByIndex(var_44_cvector, 0);
	var_47_float = GetByIndex(var_44_cvector, 2);
	Rotate(var_46_float, var_47_float, var_45_bool);
	var_45_bool = var_36_bool;
	return 8;
}


func_6470(var_188_bool)
{
	var_190_int = 0; var_191_string = "";
	func_5558(var_190_int, "d5q02");
	var_193_bool = var_190_int == (int)2;
	if(var_193_bool != 0) {
		var_188_bool = 1;
		return 0;
	}
	var_188_bool = 0;
	return 0;
}


func_6991()
{
	var_35_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_5458(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0;
	IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
	return 2;
}


func_6995(var_36_object)
{
	var_37_bool = GlobalVars[1];
	var_38_bool = var_37_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_39_int = 0; var_40_object = Obj();
		var_36_object = var_40_object;
		TaskCall(2);
		func_49(var_41_object, var_39_int, var_40_object);
		TaskReturn();
		var_145_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
	}
	var_146_bool = 0; var_147_int = 0;
	func_5626(var_146_bool, (int)1);
	if(var_146_bool != 0) {
		var_154_int = 0; var_155_object = Obj();
		var_36_object = var_155_object;
		TaskCall(6);
		func_929(var_156_object, var_154_int, var_155_object);
		TaskReturn();
		return 0;
	}
	var_372_bool = 0; var_373_int = 0;
	func_5626(var_372_bool, (int)2);
	if(var_372_bool != 0) {
		var_374_int = 0; var_375_object = Obj();
		var_36_object = var_375_object;
		TaskCall(8);
		func_2767(var_376_object, var_374_int, var_375_object);
		TaskReturn();
		return 0;
	}
	var_443_bool = 0; var_444_int = 0;
	func_5626(var_443_bool, (int)3);
	if(var_443_bool != 0) {
		var_445_int = 0; var_446_object = Obj();
		var_36_object = var_446_object;
		TaskCall(10);
		func_3705(var_447_object, var_445_int, var_446_object);
		TaskReturn();
		return 0;
	}
	var_523_bool = 0; var_524_int = 0;
	func_5626(var_523_bool, (int)4);
	if(var_523_bool != 0) {
		var_525_int = 0; var_526_object = Obj();
		var_36_object = var_526_object;
		TaskCall(12);
		func_4199(var_527_object, var_525_int, var_526_object);
		TaskReturn();
		return 0;
	}
	var_614_bool = 0; var_615_int = 0;
	func_5626(var_614_bool, (int)5);
	if(var_614_bool != 0) {
		var_616_int = 0; var_617_object = Obj();
		var_36_object = var_617_object;
		TaskCall(14);
		func_4812(var_618_object, var_616_int, var_617_object);
		TaskReturn();
		return 0;
	}
	var_696_bool = 0; var_697_int = 0;
	func_5626(var_696_bool, (int)6);
	if(var_696_bool != 0) {
		var_698_int = 0; var_699_object = Obj();
		var_36_object = var_699_object;
		TaskCall(4);
		func_407(var_700_object, var_698_int, var_699_object);
		TaskReturn();
		return 0;
	}
	func_5632((bool)0);
	return 0;
}


func_6482(var_584_bool)
{
	var_586_int = 0; var_587_string = "";
	func_5558(var_586_int, "KnowMistresses");
	var_589_bool = var_586_int == (int)1;
	if(var_589_bool != 0) {
		var_584_bool = 1;
		return 0;
	}
	var_584_bool = 0;
	return 0;
}


func_5974()
{
	var_118_object = Obj(); var_119_object = Obj();
	SetVariable("d5q02", (int)3);
	func_6812(Obj());
	var_122_object = var_119_object;
	var_127_float = 0;
	func_5612(var_127_float);
	@@var_119_object:AddMark("d5q02AnnaGotoKabak", "pt_map_andrei", (int)0, (int)15363, var_127_float);
	func_6943();
	return 2;
}
EMIT "Stack[-1] = 0";


func_5463(var_50_bool, var_51_object)
{
	var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0;
	@@var_51_object:GetPosition(var_61_cvector);
	@@var_51_object:GetEyesHeight(var_60_float);
	var_68_float = GetByIndex(var_61_cvector, 1);
	var_68_float = var_68_float + var_60_float;
	SetByIndex(var_61_cvector, 1) = var_68_float;
	GetPosition(var_62_cvector);
	GetEyesHeight(var_60_float);
	var_69_float = GetByIndex(var_62_cvector, 1);
	var_69_float = var_69_float + var_60_float;
	SetByIndex(var_62_cvector, 1) = var_69_float;
	var_63_cvector = var_61_cvector - var_62_cvector;
	var_70_float = GetByIndex(var_63_cvector, 1);
	SetByIndex(var_63_cvector, 1) = (float)0;
	var_71_int = var_63_cvector | var_63_cvector;
	var_72_float = sqrt(var_71_int);
	var_63_cvector = var_63_cvector / var_72_float;
	var_64_cvector = -var_63_cvector;
	var_74_float = var_63_cvector * (int)70;
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	var_76_cvector = var_64_cvector ^ CVector(0.0, 1.0, 0.0);
	func_5548(var_75_cvector, var_76_cvector);
	var_84_float = var_75_cvector * (int)25;
	var_85_int = var_74_float + var_84_float;
	var_65_cvector = var_85_int - CVector(0.0, 10.0, 0.0);
	var_66_cvector = var_62_cvector + var_65_cvector;
	IsOverrideActive(var_67_bool);
	var_87_bool = var_67_bool;
	if(var_87_bool != 0) {
		var_50_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_66_cvector, var_64_cvector);
	var_88_float = GetByIndex(var_65_cvector, 0);
	var_89_float = GetByIndex(var_65_cvector, 2);
	Rotate(var_88_float, var_89_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_50_bool = 1;
	return 16;
}


func_6494(var_198_bool)
{
	var_200_int = 0; var_201_string = "";
	func_5558(var_200_int, "d5q02KnowNudeIsDead");
	var_203_bool = var_200_int == (int)1;
	if(var_203_bool != 0) {
		var_198_bool = 1;
		return 0;
	}
	var_198_bool = 0;
	return 0;
}


func_6506(var_256_bool)
{
	var_258_int = 0; var_259_string = "";
	func_5558(var_258_int, "ood1Anna1");
	var_263_bool = var_258_int == (int)0;
	if(var_263_bool != 0) {
		var_256_bool = 1;
		return 0;
	}
	var_256_bool = 0;
	return 0;
}


func_5997()
{
	SetVariable("KnowMistresses", (int)1);
	return 0;
}


func_4977(var_2_object, var_167_string)
{
	var_168_bool = 0;
	func_5645(var_168_bool);
	var_169_bool = var_168_bool == 0; //@nz
	if(var_169_bool != 0) {
		return 0;
	}
	var_170_bool = var_167_string == var_2_object;
	if(var_170_bool != 0) {
		return 0;
	}
	var_171_string = "";
	var_167_string = var_171_string;
	func_5523(var_171_string);
	var_2_object = var_167_string;
	return 0;
}


func_6003()
{
	SetVariable("KnowNina", (int)1);
	return 0;
}


func_6518(var_181_bool)
{
	var_183_int = 0; var_184_string = "";
	func_5558(var_183_int, "d6q01");
	var_186_bool = var_183_int == (int)0;
	if(var_186_bool != 0) {
		var_181_bool = 1;
		return 0;
	}
	var_181_bool = 0;
	return 0;
}


func_6009()
{
	SetVariable("KnowViktoria", (int)1);
	return 0;
}


func_6015()
{
	SetVariable("ood1Anna1", (int)1);
	return 0;
}


func_6530(var_191_bool)
{
	var_193_int = 0; var_194_string = "";
	func_5558(var_193_int, "d6q01");
	var_196_bool = var_193_int == (int)1;
	if(var_196_bool != 0) {
		var_191_bool = 1;
		return 0;
	}
	var_191_bool = 0;
	return 0;
}


func_6021()
{
	SetVariable("ood1Anna2", (int)1);
	return 0;
}


func_6027()
{
	var_139_bool = 0;
	var_139_bool = 0;
	var_140_int = 0; var_141_string = "";
	func_5558(var_140_int, "d5q01");
	var_145_bool = var_140_int < (int)7;
	if(var_145_bool != 0) {
		var_146_int = 0; var_147_string = "";
		func_5558(var_146_int, "d5q01");
		var_149_bool = var_146_int != (int)-1;
		if(var_149_bool != 0) {
			var_139_bool = 1;
		}
	}
	if(var_139_bool != 0) {
		var_150_bool = 0; var_151_string = ""; var_152_string = "";
		func_5600(var_150_bool, "quest_d5_02", "place_girl");
	}
	return 0;
}


func_2957(var_2_object, var_148_string)
{
	var_149_bool = 0;
	func_5645(var_149_bool);
	var_150_bool = var_149_bool == 0; //@nz
	if(var_150_bool != 0) {
		return 0;
	}
	var_151_bool = var_148_string == var_2_object;
	if(var_151_bool != 0) {
		return 0;
	}
	var_152_string = "";
	var_148_string = var_152_string;
	func_5523(var_152_string);
	var_2_object = var_148_string;
	return 0;
}


func_6542(var_310_bool)
{
	var_312_int = 0; var_313_string = "";
	func_5558(var_312_int, "ood1Anna3");
	var_315_bool = var_312_int == (int)0;
	if(var_315_bool != 0) {
		var_310_bool = 1;
		return 0;
	}
	var_310_bool = 0;
	return 0;
}


func_5519()
{
	CameraSwitchToNormal();
	return 0;
}


func_5523(var_40_string)
{
	var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0;
	var_46_int = "playing " + var_40_string;
	Trace(var_46_int);
	lshGetAnimTimes(var_40_string, var_43_float, var_44_float);
	lshPlayAnimation(var_43_float, var_44_float);
	var_48_int = "start: " + var_43_float;
	Trace(var_48_int);
	var_50_int = "end: " + var_44_float;
	Trace(var_50_int);
	return 4;
}


func_407(var_0_object, var_698_int, var_699_object)
{
	var_701_object = Obj(); var_702_bool = 0; var_703_int = 0; var_704_bool = 0; var_705_object = Obj(); var_706_bool = 0; var_707_int = 0; var_708_bool = 0;
	var_0_object = var_699_object;
	var_709_bool = 0; var_710_object = Obj();
	var_699_object = var_710_object;
	func_5463(var_709_bool, var_710_object);
	var_711_bool = var_709_bool == 0; //@nz
	if(var_711_bool != 0) {
		var_698_int = -2;
		return 8;
	}
	CreateDialog(var_705_object);
	var_712_int = 0;
	func_5641(var_712_int);
	@@var_705_object:SetNPCName(var_712_int);
	var_713_string = "";
	func_5643(var_713_string);
	@@var_705_object:SetPhoto(var_713_string);
	var_714_int = 0;
	func_6862(var_714_int);
	@@var_705_object:SetPlayerName(var_714_int);
	IsOverrideActive(var_706_bool);
	var_715_bool = var_706_bool;
	if(var_715_bool != 0) {
		var_698_int = -2;
		return 8;
	}
	DoDialog(var_705_object);
	var_716_object = Obj(); var_717_object = Obj();
	var_699_object = var_716_object;
	var_705_object = var_717_object;
	TaskCall(5);
	func_470(var_718_object, var_719_object, var_720_string, var_721_bool, var_716_object, var_717_object);
	TaskReturn();
	@@var_705_object:IsDialogEnd(var_708_bool);
	
Label_452:
	var_804_bool = var_708_bool == 0; //@nz
	if(var_804_bool != 0) {
		sync();
		@@var_705_object:IsDialogEnd(var_708_bool);
		goto Label_452;
	}
	var_699_object = Obj();
	func_5519();
	StopDialog(var_705_object);
	@@var_705_object:GetReturnValue((int)-1);
	var_707_int = var_698_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6554(var_175_bool)
{
	var_177_int = 0; var_178_string = "";
	func_5558(var_177_int, "ood6Anna1");
	var_180_bool = var_177_int == (int)0;
	if(var_180_bool != 0) {
		var_175_bool = 1;
		return 0;
	}
	var_175_bool = 0;
	return 0;
}


func_929(var_0_object, var_154_int, var_155_object)
{
	var_157_object = Obj(); var_158_bool = 0; var_159_int = 0; var_160_bool = 0; var_161_object = Obj(); var_162_bool = 0; var_163_int = 0; var_164_bool = 0;
	var_0_object = var_155_object;
	var_165_bool = 0; var_166_object = Obj();
	var_155_object = var_166_object;
	func_5463(var_165_bool, var_166_object);
	var_167_bool = var_165_bool == 0; //@nz
	if(var_167_bool != 0) {
		var_154_int = -2;
		return 8;
	}
	CreateDialog(var_161_object);
	var_168_int = 0;
	func_5641(var_168_int);
	@@var_161_object:SetNPCName(var_168_int);
	var_169_string = "";
	func_5643(var_169_string);
	@@var_161_object:SetPhoto(var_169_string);
	var_170_int = 0;
	func_6862(var_170_int);
	@@var_161_object:SetPlayerName(var_170_int);
	IsOverrideActive(var_162_bool);
	var_171_bool = var_162_bool;
	if(var_171_bool != 0) {
		var_154_int = -2;
		return 8;
	}
	DoDialog(var_161_object);
	var_172_object = Obj(); var_173_object = Obj();
	var_155_object = var_172_object;
	var_161_object = var_173_object;
	TaskCall(7);
	func_992(var_174_object, var_175_object, var_176_string, var_177_bool, var_172_object, var_173_object);
	TaskReturn();
	@@var_161_object:IsDialogEnd(var_164_bool);
	
Label_974:
	var_370_bool = var_164_bool == 0; //@nz
	if(var_370_bool != 0) {
		sync();
		@@var_161_object:IsDialogEnd(var_164_bool);
		goto Label_974;
	}
	var_155_object = Obj();
	func_5519();
	StopDialog(var_161_object);
	@@var_161_object:GetReturnValue((int)-1);
	var_163_int = var_154_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_6052()
{
	SetVariable("ood1Anna3", (int)1);
	return 0;
}


func_5541()
{
	var_38_bool = 0;
	func_5645(var_38_bool);
	if(var_38_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_6566(var_197_bool)
{
	var_199_int = 0; var_200_string = "";
	func_5558(var_199_int, "ood6Anna2");
	var_202_bool = var_199_int == (int)0;
	if(var_202_bool != 0) {
		var_197_bool = 1;
		return 0;
	}
	var_197_bool = 0;
	return 0;
}


func_6058()
{
	SetVariable("ood1Anna4", (int)1);
	return 0;
}


func_5548(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0;
	var_80_int = var_76_cvector | var_76_cvector;
	var_79_float = sqrt(var_80_int);
	var_81_float = 9.999999974752427e-07;
	var_82_bool = var_79_float < var_81_float;
	if(var_82_bool != 0) {
		var_75_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_75_cvector = var_76_cvector / var_79_float;
	return 2;
}


func_6064()
{
	SetVariable("ood6Anna1", (int)1);
	return 0;
}


func_6578(var_341_bool)
{
	var_343_int = 0; var_344_string = "";
	func_5558(var_343_int, "ood1Anna4");
	var_346_bool = var_343_int == (int)0;
	if(var_346_bool != 0) {
		var_341_bool = 1;
		return 0;
	}
	var_341_bool = 0;
	return 0;
}


func_6070()
{
	SetVariable("ood6Anna2", (int)1);
	return 0;
}


func_5558(var_140_int, var_141_string)
{
	var_142_int = 0; var_143_int = 0;
	GetVariable(var_141_string, var_143_int);
	var_143_int = var_140_int;
	return 2;
}


func_5563(var_100_object, var_101_string)
{
	var_102_object = Obj(); var_103_object = Obj(); var_104_object = Obj(); var_105_object = Obj();
	GetMainOutdoorScene(var_104_object);
	var_107_int = var_101_string + ".bin";
	AddBlankActor(var_105_object, var_104_object, var_101_string, var_107_int);
	var_105_object = var_100_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_6076()
{
	var_63_object = Obj(); var_64_object = Obj();
	var_65_int = 0; var_66_string = "";
	func_5558(var_65_int, "d6q01KnowKillerIsKlara");
	var_70_bool = var_65_int == (int)0;
	if(var_70_bool != 0) {
		SetVariable("d6q01KnowKillerIsKlara", (int)1);
		func_6812(Obj());
		var_73_object = var_64_object;
		var_84_float = 0;
		func_5612(var_84_float);
		@@var_64_object:AddMark("d6q01KillerIsKlara", "pt_map_alexandr", (int)1, (int)15396, var_84_float);
		func_6975();
		var_112_bool = 0; var_113_string = ""; var_114_string = "";
		func_5600(var_112_bool, "quest_d6_01", "saburov_klara");
		var_64_object = 0;
	}
	return 2;
}


func_6590(var_363_bool)
{
	var_365_int = 0; var_366_string = "";
	func_5558(var_365_int, "ood1Anna5");
	var_368_bool = var_365_int == (int)0;
	if(var_368_bool != 0) {
		var_363_bool = 1;
		return 0;
	}
	var_363_bool = 0;
	return 0;
}


func_5574(var_123_object, var_124_object, var_125_int)
{
	var_126_int = 0; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_int = 0; var_131_bool = 0;
	@@var_124_object:GetItemID(var_129_int);
	GetInvItemProperty(var_130_int, var_129_int, "Category");
	@@var_123_object:AddItem(var_131_bool, var_124_object, var_130_int, var_125_int);
	var_133_bool = var_131_bool == 0; //@nz
	if(var_133_bool != 0) {
		@@var_123_object:DropItems(var_124_object, var_125_int);
	}
	return 6;
}


func_6602(var_372_bool)
{
	var_374_int = 0; var_375_string = "";
	func_5558(var_374_int, "ood1Anna6");
	var_377_bool = var_374_int == (int)0;
	if(var_377_bool != 0) {
		var_372_bool = 1;
		return 0;
	}
	var_372_bool = 0;
	return 0;
}


func_5587(var_118_object, var_119_string, var_120_int)
{
	var_121_object = Obj(); var_122_object = Obj();
	CreateInvItem(var_122_object);
	@@var_122_object:SetItemName(var_119_string);
	var_123_object = Obj(); var_124_object = Obj(); var_125_int = 0;
	var_118_object = var_123_object;
	var_122_object = var_124_object;
	var_120_int = var_125_int;
	func_5574(var_123_object, var_124_object, var_125_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_470(var_0_object, var_1_object, var_2_object, var_3_object, var_716_object, var_717_object)
{
	var_0_object = var_717_object;
	var_1_object = var_716_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_723_string = "";
		func_600(var_717_object, "Neutral");
		@@@var_0_object:SetMessage((int)12719);
		@@@var_0_object:ClearReplies();
		var_729_bool = 0;
		var_729_bool = 0;
		var_730_bool = 0; var_731_object = Obj();
		var_731_object = var_1_object;
		func_6554(var_731_object);
		if(var_730_bool != 0) {
			var_736_bool = 0; var_737_object = Obj();
			var_737_object = var_1_object;
			func_6518(var_737_object);
			if(var_736_bool != 0) {
				var_729_bool = 1;
			}
		}
		if(var_729_bool != 0) {
			@@@var_0_object:AddReply((int)12720, (int)4261, (int)13913);
		}
		var_745_bool = 0;
		var_745_bool = 0;
		var_746_bool = 0; var_747_object = Obj();
		var_747_object = var_1_object;
		func_6530(var_747_object);
		if(var_746_bool != 0) {
			var_752_bool = 0; var_753_object = Obj();
			var_753_object = var_1_object;
			func_6566(var_753_object);
			if(var_752_bool != 0) {
				var_745_bool = 1;
			}
		}
		if(var_745_bool != 0) {
			@@@var_0_object:AddReply((int)12721, (int)13915, (int)13914);
		}
		var_761_bool = 0;
		var_761_bool = 0;
		var_762_bool = 0;
		var_762_bool = 0;
		var_763_bool = 0;
		var_763_bool = 0;
		var_764_bool = 0; var_765_object = Obj();
		var_765_object = var_1_object;
		func_6614(var_765_object);
		if(var_764_bool != 0) {
			var_770_bool = 0; var_771_object = Obj();
			var_771_object = var_1_object;
			func_6638(var_771_object);
			var_776_bool = var_770_bool == 0; //@nz
			if(var_776_bool != 0) {
				var_763_bool = 1;
			}
		}
		if(var_763_bool != 0) {
			var_777_bool = 0; var_778_object = Obj();
			var_778_object = var_1_object;
			func_6650(var_778_object);
			var_783_bool = var_777_bool == 0; //@nz
			if(var_783_bool != 0) {
				var_762_bool = 1;
			}
		}
		if(var_762_bool != 0) {
			var_784_bool = 0; var_785_object = Obj();
			var_785_object = var_1_object;
			func_6662(var_785_object);
			if(var_784_bool != 0) {
				var_761_bool = 1;
			}
		}
		if(var_761_bool != 0) {
			@@@var_0_object:AddReply((int)13747, (int)14993, (int)14992);
		}
		@@@var_0_object:AddReply((int)12728, (int)-1, (int)13921);
		goto Label_570;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x1da";
	}
Label_570:
	var_796_bool = 0;
	func_5645(var_796_bool);
	if(var_796_bool != 0) {

	Label_574:
		lshWaitForAnimEnd();
		var_797_object = var_3_object;
		if(var_797_object != 0) {
		} else {
			var_798_string = "";
			var_798_string = var_2_object;
			func_5523(var_798_string);
			goto Label_574;
	}
		PlayAnimation("all", "idle");

	Label_589:
		WaitForAnimEnd();
		var_801_object = var_3_object;
		if(var_801_object != 0) {
			goto Label_599;
		}
		PlayAnimation("all", "idle");
		goto Label_589;
	}
	goto Label_599;
	
Label_599:
	return 0;
	
}


func_6614(var_209_bool)
{
	var_211_int = 0; var_212_string = "";
	func_5558(var_211_int, "microscope_d6q01_anna_blood");
	var_214_bool = var_211_int != (int)0;
	if(var_214_bool != 0) {
		var_209_bool = 1;
		return 0;
	}
	var_209_bool = 0;
	return 0;
}


func_6111()
{
	SetVariable("ood1Anna5", (int)1);
	return 0;
}


func_992(var_0_object, var_1_object, var_2_object, var_3_object, var_172_object, var_173_object)
{
	var_0_object = var_173_object;
	var_1_object = var_172_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_179_bool = 0;
		var_179_bool = 0;
		var_180_bool = 0; var_181_object = Obj();
		var_181_object = var_1_object;
		func_6506(var_181_object);
		if(var_180_bool != 0) {
			var_188_bool = 0; var_189_object = Obj();
			var_189_object = var_1_object;
			func_6230(var_189_object);
			if(var_188_bool != 0) {
				var_179_bool = 1;
			}
		}
		if(var_179_bool != 0) {
			var_194_string = "";
			func_1282(var_173_object, "Neutral");
			@@@var_0_object:SetMessage((int)4938);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)4949, (int)5439, (int)5438);
			@@@var_0_object:AddReply((int)4978, (int)5439, (int)5475);
			@@@var_0_object:AddReply((int)4979, (int)5439, (int)5477);
		} else {
				var_217_bool = 0; var_218_object = Obj();
				var_218_object = var_1_object;
				func_6362(var_218_object);
				if(var_217_bool != 0) {
					var_223_string = "";
					func_1282(var_173_object, "Neutral");
					@@@var_0_object:SetMessage((int)4940);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)4981, (int)5480, (int)5479);
					@@@var_0_object:AddReply((int)4985, (int)-1, (int)5483);
					goto Label_1252;
				}
				var_231_bool = 0;
				var_231_bool = 0;
				var_232_bool = 0; var_233_object = Obj();
				var_233_object = var_1_object;
				func_6542(var_233_object);
				if(var_232_bool != 0) {
					var_238_bool = 0; var_239_object = Obj();
					var_239_object = var_1_object;
					func_6218(var_239_object);
					if(var_238_bool != 0) {
						var_231_bool = 1;
					}
				}
				if(var_231_bool != 0) {
					var_244_string = "";
					func_1282(var_173_object, "Neutral");
					@@@var_0_object:SetMessage((int)4943);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)4987, (int)5486, (int)5485);
					@@@var_0_object:AddReply((int)4991, (int)5490, (int)5489);
					@@@var_0_object:AddReply((int)4998, (int)5498, (int)5497);
					goto Label_1252;
				}
				var_255_string = "";
				func_1282(var_173_object, "Neutral");
				@@@var_0_object:SetMessage((int)6582);
				@@@var_0_object:ClearReplies();
				var_257_bool = 0; var_258_object = Obj();
				var_258_object = var_1_object;
				func_6230(var_258_object);
				if(var_257_bool != 0) {
					@@@var_0_object:AddReply((int)8690, (int)9528, (int)9527);
				}
				var_262_bool = 0;
				var_262_bool = 0;
				var_263_bool = 0; var_264_object = Obj();
				var_264_object = var_1_object;
				func_6578(var_264_object);
				if(var_263_bool != 0) {
					var_269_bool = 0; var_270_object = Obj();
					var_270_object = var_1_object;
					func_6242(var_270_object);
					if(var_269_bool != 0) {
						var_262_bool = 1;
					}
				}
				if(var_262_bool != 0) {
					@@@var_0_object:AddReply((int)6583, (int)5521, (int)7252);
				}
				var_278_bool = 0;
				var_278_bool = 0;
				var_279_bool = 0; var_280_object = Obj();
				var_280_object = var_1_object;
				func_6674(var_280_object);
				if(var_279_bool != 0) {
					var_285_bool = 0; var_286_object = Obj();
					var_286_object = var_1_object;
					func_6590(var_286_object);
					if(var_285_bool != 0) {
						var_278_bool = 1;
					}
				}
				if(var_278_bool != 0) {
					@@@var_0_object:AddReply((int)6590, (int)5533, (int)7259);
				}
				var_294_bool = 0; var_295_object = Obj();
				var_295_object = var_1_object;
				func_6602(var_295_object);
				if(var_294_bool != 0) {
					@@@var_0_object:AddReply((int)6586, (int)5503, (int)7255);
				}
				var_303_bool = 0;
				var_303_bool = 0;
				var_304_bool = 0; var_305_object = Obj();
				var_305_object = var_1_object;
				func_6746(var_305_object);
				if(var_304_bool != 0) {
					var_310_bool = 0; var_311_object = Obj();
					var_311_object = var_1_object;
					func_6254(var_311_object);
					if(var_310_bool != 0) {
						var_303_bool = 1;
					}
				}
				if(var_303_bool != 0) {
					@@@var_0_object:AddReply((int)6592, (int)7679, (int)7261);
				}
				var_319_bool = 0;
				var_319_bool = 0;
				var_320_bool = 0; var_321_object = Obj();
				var_321_object = var_1_object;
				func_6626(var_321_object);
				if(var_320_bool != 0) {
					var_326_bool = 0; var_327_object = Obj();
					var_327_object = var_1_object;
					func_6266(var_327_object);
					if(var_326_bool != 0) {
						var_319_bool = 1;
					}
				}
				if(var_319_bool != 0) {
					@@@var_0_object:AddReply((int)6595, (int)7689, (int)7264);
				}
				var_335_bool = 0;
				var_335_bool = 0;
				var_336_bool = 0; var_337_object = Obj();
				var_337_object = var_1_object;
				func_6758(var_337_object);
				if(var_336_bool != 0) {
					var_342_bool = 0; var_343_object = Obj();
					var_343_object = var_1_object;
					func_6278(var_343_object);
					if(var_342_bool != 0) {
						var_335_bool = 1;
					}
				}
				if(var_335_bool != 0) {
					@@@var_0_object:AddReply((int)6602, (int)7697, (int)7271);
				}
				var_351_bool = 0;
				var_351_bool = 0;
				var_352_bool = 0; var_353_object = Obj();
				var_353_object = var_1_object;
				func_6686(var_353_object);
				if(var_352_bool != 0) {
					var_358_bool = 0; var_359_object = Obj();
					var_359_object = var_1_object;
					func_6290(var_359_object);
					if(var_358_bool != 0) {
						var_351_bool = 1;
					}
				}
				if(var_351_bool != 0) {
					@@@var_0_object:AddReply((int)6605, (int)7703, (int)7274);
				}
				@@@var_0_object:AddReply((int)7538, (int)-1, (int)8320);
				goto Label_1252;
		}
	}
Label_1252:
	var_209_bool = 0;
	func_5645(var_209_bool);
	if(var_209_bool != 0) {

	Label_1256:
		lshWaitForAnimEnd();
		var_210_object = var_3_object;
		if(var_210_object != 0) {
		} else {
			var_211_string = "";
			var_211_string = var_2_object;
			func_5523(var_211_string);
			goto Label_1256;
	}
		PlayAnimation("all", "idle");

	Label_1271:
		WaitForAnimEnd();
		var_214_object = var_3_object;
		if(var_214_object != 0) {
			goto Label_1281;
		}
		PlayAnimation("all", "idle");
		goto Label_1271;

	}
	goto Label_1281;
	
Label_1281:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x3e4";


func_5600(var_108_bool, var_109_string, var_110_string)
{
	var_111_object = Obj(); var_112_object = Obj();
	FindActor(var_112_object, var_109_string);
	var_113_bool = var_112_object == 0; //@ne
	if(var_113_bool != 0) {
		var_108_bool = 0;
		return 2;
	}
	Trigger(var_112_object, var_110_string);
	var_108_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_6626(var_398_bool)
{
	var_400_int = 0; var_401_string = "";
	func_5558(var_400_int, "KnowAlexandr");
	var_403_bool = var_400_int == (int)1;
	if(var_403_bool != 0) {
		var_398_bool = 1;
		return 0;
	}
	var_398_bool = 0;
	return 0;
}


func_6117()
{
	SetVariable("ood1Anna6", (int)1);
	return 0;
}


func_6123()
{
	SetVariable("KnowAnna", (int)1);
	return 0;
}


func_5612(var_58_float)
{
	var_59_float = 0; var_60_float = 0;
	GetGameTime(var_60_float);
	var_60_float = var_58_float;
	return 2;
}


func_6638(var_215_bool)
{
	var_217_int = 0; var_218_string = "";
	func_5558(var_217_int, "d6q01");
	var_220_bool = var_217_int == (int)1000;
	if(var_220_bool != 0) {
		var_215_bool = 1;
		return 0;
	}
	var_215_bool = 0;
	return 0;
}


func_6129(var_118_object)
{
	func_6959();
	Trace("anna blood is given");
	var_130_object = Obj(); var_131_string = ""; var_132_int = 0;
	var_118_object = var_130_object;
	func_5587(var_130_object, "d6q01_anna_blood", (int)1);
	return 0;
}


func_5617(var_148_int)
{
	var_149_float = 0; var_150_float = 0;
	GetGameTime(var_150_float);
	var_152_int = 0;
	var_152_int = var_150_float / (int)24;
	var_148_int = (int)1 + var_152_int;
	return 2;
}


func_5626(var_146_bool, var_147_int)
{
	var_148_int = 0;
	func_5617(var_148_int);
	var_146_bool = var_148_int == var_147_int;
	return 0;
}


func_6143()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


