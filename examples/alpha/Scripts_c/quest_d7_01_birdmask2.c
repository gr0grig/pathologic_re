// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemProperty/3,CreateInvItem/1,FindActor/2,Trigger/2,TriggerWorld/2,SetVariable/2,GetInvItemByName/2
// @STRINGS: A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:GetItemID|W:Category|A:AddItem|A:DropItems|A:SetItemName|W:playsound|W:giveitem|W:dreport is given|W:d7q01_dreport|W:ood7DBirdmask1|W:quest_d7_01|W:kill_player|W:d7q01|A:GetItemCount|W:bird_mask|W:bird_balahon|A:GetItem|A:IsItemSelected|W:ui/NPC_Black.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x2e4
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0xe6 vars=int,int
// @TASK_2: vars= params=0
// @EVENT_0: op=0x2e8 vars=object
// @PE: 0x3f,0xd6,0xe6,0x2e8,0x328,0x37a,0x380,0x38b,0x391,0x398,0x3a2,0x3ae,0x3ba,0x3c4,0x3d0

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	if((int)1 != 0) {
		func_830();
		var_10_bool = var_6_int == (int)14497;
		if(var_10_bool != 0) {
			var_11_object = Obj(); var_12_object = Obj();
			var_11_object = var_1_object;
			var_12_object = var_0_object;
			func_896(var_12_object);
			var_30_object = Obj(); var_31_object = Obj();
			var_30_object = var_1_object;
			var_31_object = var_0_object;
			func_907();
			var_34_object = Obj(); var_35_object = Obj();
			var_34_object = var_1_object;
			var_35_object = var_0_object;
			func_890();
		}
		var_39_bool = var_6_int == (int)14502;
		if(var_39_bool != 0) {
			var_40_object = Obj(); var_41_object = Obj();
			var_40_object = var_1_object;
			var_41_object = var_0_object;
			func_890();
			var_42_object = Obj(); var_43_object = Obj();
			var_42_object = var_1_object;
			var_43_object = var_0_object;
			func_907();
			var_44_object = Obj(); var_45_object = Obj();
			var_44_object = var_1_object;
			var_45_object = var_0_object;
			func_896(var_45_object);
		}
		var_47_bool = var_6_int == (int)14513;
		if(var_47_bool != 0) {
			var_48_object = Obj(); var_49_object = Obj();
			var_48_object = var_1_object;
			var_49_object = var_0_object;
			func_913();
		}
		var_57_bool = var_6_int == (int)14517;
		if(var_57_bool != 0) {
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_object;
			func_913();
		}
		var_61_bool = var_6_int == (int)14539;
		if(var_61_bool != 0) {
			var_62_object = Obj(); var_63_object = Obj();
			var_62_object = var_1_object;
			var_63_object = var_0_object;
			func_913();
		}
		var_65_bool = var_5_int == (int)14490;
		if(var_65_bool != 0) {
			var_66_bool = 0;
			var_66_bool = 0;
			var_67_bool = 0; var_68_object = Obj();
			var_68_object = var_1_object;
			func_964(var_68_object);
			if(var_67_bool != 0) {
				var_75_bool = 0; var_76_object = Obj();
				var_76_object = var_1_object;
				func_942(var_76_object);
				if(var_75_bool != 0) {
					var_66_bool = 1;
				}
			}
			if(var_66_bool != 0) {
				var_81_string = "";
				func_214(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)13261);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13262, (int)14492, (int)14491);
				return 0;
			}
			var_100_bool = 0;
			var_100_bool = 0;
			var_101_bool = 0; var_102_object = Obj();
			var_102_object = var_1_object;
			func_930(var_102_object);
			if(var_101_bool != 0) {
				var_107_bool = 0; var_108_object = Obj();
				var_108_object = var_1_object;
				func_954(var_107_bool, var_108_object);
				if(var_107_bool != 0) {
					var_100_bool = 1;
				}
			}
			if(var_100_bool != 0) {
				var_145_string = "";
				func_214(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)13279);
				@@@var_0_object:ClearReplies();
				var_147_bool = 0; var_148_object = Obj();
				var_148_object = var_1_object;
				func_920(var_147_bool, var_148_object);
				if(var_147_bool != 0) {
					@@@var_0_object:AddReply((int)13280, (int)14511, (int)14510);
				}
				var_154_bool = 0; var_155_object = Obj();
				var_155_object = var_1_object;
				func_920(var_154_bool, var_155_object);
				if(var_154_bool != 0) {
					@@@var_0_object:AddReply((int)13284, (int)14515, (int)14514);
				}
				var_159_bool = 0; var_160_object = Obj();
				var_160_object = var_1_object;
				func_920(var_159_bool, var_160_object);
				if(var_159_bool != 0) {
					@@@var_0_object:AddReply((int)13288, (int)14511, (int)14518);
				}
				return 0;
			}
			var_164_bool = 0; var_165_object = Obj();
			var_165_object = var_1_object;
			func_930(var_165_object);
			if(var_164_bool != 0) {
				var_166_string = "";
				func_214(var_6_int, "Neutral");
				@@@var_0_object:SetMessage((int)13289);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13290, (int)14522, (int)14521);
				@@@var_0_object:AddReply((int)13304, (int)14538, (int)14535);
				@@@var_0_object:AddReply((int)13305, (int)-1, (int)14536);
				return 0;
			}
		}
		var_178_bool = var_5_int == (int)14522;
		if(var_178_bool != 0) {
			var_179_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13291);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13292, (int)14524, (int)14523);
			@@@var_0_object:AddReply((int)13296, (int)14528, (int)14527);
			@@@var_0_object:AddReply((int)13300, (int)14532, (int)14531);
			return 0;
		}
		var_191_bool = var_5_int == (int)14532;
		if(var_191_bool != 0) {
			var_192_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13301);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13302, (int)14540, (int)14533);
			@@@var_0_object:AddReply((int)13303, (int)14538, (int)14534);
			return 0;
		}
		var_201_bool = var_5_int == (int)14540;
		if(var_201_bool != 0) {
			var_202_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13309);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13310, (int)14524, (int)14541);
			return 0;
		}
		var_208_bool = var_5_int == (int)14528;
		if(var_208_bool != 0) {
			var_209_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13297);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13298, (int)-1, (int)14529);
			@@@var_0_object:AddReply((int)13299, (int)14538, (int)14530);
			return 0;
		}
		var_218_bool = var_5_int == (int)14524;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13295, (int)-1, (int)14526);
			@@@var_0_object:AddReply((int)13306, (int)14538, (int)14537);
			return 0;
		}
		var_228_bool = var_5_int == (int)14538;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13307);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13308, (int)-1, (int)14539);
			return 0;
		}
		var_235_bool = var_5_int == (int)14515;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13285);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13286, (int)-1, (int)14516);
			@@@var_0_object:AddReply((int)13287, (int)-1, (int)14517);
			return 0;
		}
		var_245_bool = var_5_int == (int)14511;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13281);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13282, (int)-1, (int)14512);
			@@@var_0_object:AddReply((int)13283, (int)-1, (int)14513);
			return 0;
		}
		var_255_bool = var_5_int == (int)14492;
		if(var_255_bool != 0) {
			var_256_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13263);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13264, (int)14494, (int)14493);
			@@@var_0_object:AddReply((int)13269, (int)14506, (int)14498);
			@@@var_0_object:AddReply((int)13274, (int)14504, (int)14503);
			return 0;
		}
		var_268_bool = var_5_int == (int)14504;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13275);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13276, (int)14499, (int)14505);
			return 0;
		}
		var_275_bool = var_5_int == (int)14506;
		if(var_275_bool != 0) {
			var_276_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13277);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13278, (int)14499, (int)14507);
			return 0;
		}
		var_282_bool = var_5_int == (int)14499;
		if(var_282_bool != 0) {
			var_283_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13270);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13271, (int)14501, (int)14500);
			return 0;
		}
		var_289_bool = var_5_int == (int)14501;
		if(var_289_bool != 0) {
			var_290_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13272);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13273, (int)-1, (int)14502);
			return 0;
		}
		var_296_bool = var_5_int == (int)14494;
		if(var_296_bool != 0) {
			var_297_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13265);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13266, (int)14496, (int)14495);
			return 0;
		}
		var_303_bool = var_5_int == (int)14496;
		if(var_303_bool != 0) {
			var_304_string = "";
			func_214(var_6_int, "Neutral");
			@@@var_0_object:SetMessage((int)13267);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13268, (int)-1, (int)14497);
			return 0;
		}
		var_3_string = true;
		var_309_bool = 0;
		func_1048(var_309_bool);
		if(var_309_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xe7";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj();
	var_5_object = var_7_object;
	TaskCall(0);
	func_0(var_8_object, var_6_int, var_7_object);
	TaskReturn();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_740:
	Hold();
	goto Label_740;
}
EMIT "Return(); Pop(0)";


func_896(var_11_object)
{
	Trace("dreport is given");
	var_14_object = Obj(); var_15_string = ""; var_16_int = 0;
	var_11_object = var_14_object;
	func_865(var_14_object, "d7q01_dreport", (int)1);
	return 0;
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0;
	var_0_object = var_7_object;
	var_17_bool = 0; var_18_object = Obj();
	var_7_object = var_18_object;
	func_752(var_17_bool, var_18_object);
	var_57_bool = var_17_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	CreateDialog(var_13_object);
	var_58_int = 0;
	func_1044(var_58_int);
	@@var_13_object:SetNPCName(var_58_int);
	var_59_string = "";
	func_1046(var_59_string);
	@@var_13_object:SetPhoto(var_59_string);
	var_60_int = 0;
	func_1027(var_60_int);
	@@var_13_object:SetPlayerName(var_60_int);
	IsOverrideActive(var_14_bool);
	var_68_bool = var_14_bool;
	if(var_68_bool != 0) {
		var_6_int = -2;
		return 8;
	}
	DoDialog(var_13_object);
	var_69_object = Obj(); var_70_object = Obj();
	var_7_object = var_69_object;
	var_13_object = var_70_object;
	TaskCall(1);
	func_63(var_71_object, var_72_object, var_73_string, var_74_bool, var_69_object, var_70_object);
	TaskReturn();
	@@var_13_object:IsDialogEnd(var_16_bool);
	
Label_45:
	var_195_bool = var_16_bool == 0; //@nz
	if(var_195_bool != 0) {
		sync();
		@@var_13_object:IsDialogEnd(var_16_bool);
		goto Label_45;
	}
	var_7_object = Obj();
	func_808();
	StopDialog(var_13_object);
	@@var_13_object:GetReturnValue((int)-1);
	var_15_int = var_6_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1027(var_60_int)
{
	var_61_int = 0; var_62_int = 0;
	GetVariable("player", var_62_int);
	var_65_bool = var_62_int == (int)0;
	if(var_65_bool != 0) {
		var_60_int = 200001;
		return 2;
	EMIT "GOTO 0x412";
	}
	var_67_bool = var_62_int == (int)1;
	if(var_67_bool != 0) {
		var_60_int = 200002;
		return 2;
	}
	var_60_int = 200003;
	return 2;
}


func_964(var_77_bool)
{
	var_79_int = 0; var_80_string = "";
	func_847(var_79_int, "ood7DBirdmask1");
	var_84_bool = var_79_int == (int)0;
	if(var_84_bool != 0) {
		var_77_bool = 1;
		return 0;
	}
	var_77_bool = 0;
	return 0;
}


func_837(var_42_cvector, var_43_cvector)
{
	var_45_float = 0; var_46_float = 0;
	var_47_int = var_43_cvector | var_43_cvector;
	var_46_float = sqrt(var_47_int);
	var_48_float = 9.999999974752427e-07;
	var_49_bool = var_46_float < var_48_float;
	if(var_49_bool != 0) {
		var_42_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_42_cvector = var_43_cvector / var_46_float;
	return 2;
}


func_907()
{
	SetVariable("ood7DBirdmask1", (int)1);
	return 0;
}


func_847(var_79_int, var_80_string)
{
	var_81_int = 0; var_82_int = 0;
	GetVariable(var_80_string, var_82_int);
	var_82_int = var_79_int;
	return 2;
}


func_976(var_167_bool)
{
	var_167_bool = 0;
	return 0;
}


func_913()
{
	var_50_bool = 0; var_51_string = ""; var_52_string = "";
	func_878(var_50_bool, "quest_d7_01", "kill_player");
	return 0;
}


func_979(var_127_bool, var_128_object)
{
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_bool = 0; var_133_bool = 0; var_134_int = 0; var_135_object = Obj(); var_136_int = 0; var_137_bool = 0; var_138_bool = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_bool = 0; var_143_bool = 0; var_144_int = 0; var_145_object = Obj(); var_146_int = 0; var_147_bool = 0; var_148_bool = 0;
	@@var_128_object:GetItemCount(var_139_int, (int)1);
	GetInvItemByName(var_140_int, "bird_mask");
	GetInvItemByName(var_141_int, "bird_balahon");
	var_142_bool = 0;
	var_143_bool = 0;
	var_144_int = 0;
	
Label_992:
	var_152_bool = var_144_int < var_139_int;
	if(var_152_bool != 0) {
		@@var_128_object:GetItem(var_145_object, var_144_int, (int)1);
		@@var_145_object:GetItemID(var_146_int);
		var_154_bool = var_146_int == var_140_int;
		if(var_154_bool != 0) {
			@@var_128_object:IsItemSelected(var_147_bool, var_144_int, (int)1);
			var_156_bool = var_147_bool;
			if(var_156_bool != 0) {
				var_142_bool = 1;
			}
		} else {
			var_158_bool = var_146_int == var_141_int;
			if(var_158_bool == 0) goto Label_1016;
			@@var_128_object:IsItemSelected(var_148_bool, var_144_int, (int)1);
			var_160_bool = var_148_bool;
			if(var_160_bool == 0) goto Label_1016;
	}
		var_127_bool = 0;
		var_161_bool = var_142_bool;
		if(var_161_bool != 0) {
			var_162_bool = (bool)1;
			if(var_162_bool != 0) {
				var_127_bool = 1;
			}
		}
		var_145_object = 0;
		var_144_int = var_144_int + (int)1;
		goto Label_992;
	}
	return 20;
	
}


func_1044(var_58_int)
{
	var_58_int = 4029;
	return 0;
}


func_852(var_19_object, var_20_object, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0;
	@@var_20_object:GetItemID(var_25_int);
	GetInvItemProperty(var_26_int, var_25_int, "Category");
	@@var_19_object:AddItem(var_27_bool, var_20_object, var_26_int, var_21_int);
	var_29_bool = var_27_bool == 0; //@nz
	if(var_29_bool != 0) {
		@@var_19_object:DropItems(var_20_object, var_21_int);
	}
	return 6;
}


func_1046(var_59_string)
{
	var_59_string = "ui/NPC_Black.png";
	return 0;
}


func_214(var_2_object, var_91_string)
{
	var_92_bool = 0;
	func_1048(var_92_bool);
	var_93_bool = var_92_bool == 0; //@nz
	if(var_93_bool != 0) {
		return 0;
	}
	var_94_bool = var_91_string == var_2_object;
	if(var_94_bool != 0) {
		return 0;
	}
	var_95_string = "";
	var_91_string = var_95_string;
	func_812(var_95_string);
	var_2_object = var_91_string;
	return 0;
}


func_920(var_165_bool, var_166_object)
{
	var_167_bool = 0; var_168_object = Obj();
	var_166_object = var_168_object;
	func_976(var_168_object);
	if(var_167_bool != 0) {
		var_165_bool = 1;
		return 0;
	}
	var_165_bool = 0;
	return 0;
}


func_1048(var_92_bool)
{
	var_92_bool = 0;
	return 0;
}


func_865(var_14_object, var_15_string, var_16_int)
{
	var_17_object = Obj(); var_18_object = Obj();
	CreateInvItem(var_18_object);
	@@var_18_object:SetItemName(var_15_string);
	var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0;
	var_14_object = var_19_object;
	var_18_object = var_20_object;
	var_16_int = var_21_int;
	func_852(var_19_object, var_20_object, var_21_int);
	return 2;
}
EMIT "Stack[-1] = 0";


func_930(var_119_bool)
{
	var_121_int = 0; var_122_string = "";
	func_847(var_121_int, "d7q01");
	var_124_bool = var_121_int == (int)2;
	if(var_124_bool != 0) {
		var_119_bool = 1;
		return 0;
	}
	var_119_bool = 0;
	return 0;
}


func_808()
{
	CameraSwitchToNormal();
	return 0;
}


func_812(var_95_string)
{
	var_96_float = 0; var_97_float = 0; var_98_float = 0; var_99_float = 0;
	var_101_int = "playing " + var_95_string;
	Trace(var_101_int);
	lshGetAnimTimes(var_95_string, var_98_float, var_99_float);
	lshPlayAnimation(var_98_float, var_99_float);
	var_103_int = "start: " + var_98_float;
	Trace(var_103_int);
	var_105_int = "end: " + var_99_float;
	Trace(var_105_int);
	return 4;
}


func_942(var_85_bool)
{
	var_87_int = 0; var_88_string = "";
	func_847(var_87_int, "d7q01");
	var_90_bool = var_87_int == (int)1;
	if(var_90_bool != 0) {
		var_85_bool = 1;
		return 0;
	}
	var_85_bool = 0;
	return 0;
}


func_878(var_50_bool, var_51_string, var_52_string)
{
	var_53_object = Obj(); var_54_object = Obj();
	FindActor(var_54_object, var_51_string);
	var_55_bool = var_54_object == 0; //@ne
	if(var_55_bool != 0) {
		var_50_bool = 0;
		return 2;
	}
	Trigger(var_54_object, var_52_string);
	var_50_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_752(var_17_bool, var_18_object)
{
	var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_bool = 0;
	@@var_18_object:GetPosition(var_28_cvector);
	@@var_18_object:GetEyesHeight(var_27_float);
	var_35_float = GetByIndex(var_28_cvector, 1);
	var_35_float = var_35_float + var_27_float;
	SetByIndex(var_28_cvector, 1) = var_35_float;
	GetPosition(var_29_cvector);
	GetEyesHeight(var_27_float);
	var_36_float = GetByIndex(var_29_cvector, 1);
	var_36_float = var_36_float + var_27_float;
	SetByIndex(var_29_cvector, 1) = var_36_float;
	var_30_cvector = var_28_cvector - var_29_cvector;
	var_37_float = GetByIndex(var_30_cvector, 1);
	SetByIndex(var_30_cvector, 1) = (float)0;
	var_38_int = var_30_cvector | var_30_cvector;
	var_39_float = sqrt(var_38_int);
	var_30_cvector = var_30_cvector / var_39_float;
	var_31_cvector = -var_30_cvector;
	var_41_float = var_30_cvector * (int)70;
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	var_43_cvector = var_31_cvector ^ CVector(0.0, 1.0, 0.0);
	func_837(var_42_cvector, var_43_cvector);
	var_51_float = var_42_cvector * (int)25;
	var_52_int = var_41_float + var_51_float;
	var_32_cvector = var_52_int - CVector(0.0, 10.0, 0.0);
	var_33_cvector = var_29_cvector + var_32_cvector;
	IsOverrideActive(var_34_bool);
	var_54_bool = var_34_bool;
	if(var_54_bool != 0) {
		var_17_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_33_cvector, var_31_cvector);
	var_55_float = GetByIndex(var_32_cvector, 0);
	var_56_float = GetByIndex(var_32_cvector, 2);
	Rotate(var_55_float, var_56_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_17_bool = 1;
	return 16;
}


func_890()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_954(var_125_bool, var_126_object)
{
	var_127_bool = 0; var_128_object = Obj();
	var_126_object = var_128_object;
	func_979(var_127_bool, var_128_object);
	if(var_127_bool != 0) {
		var_125_bool = 1;
		return 0;
	}
	var_125_bool = 0;
	return 0;
}


func_830()
{
	var_8_bool = 0;
	func_1048(var_8_bool);
	if(var_8_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_69_object, var_70_object)
{
	var_0_object = var_70_object;
	var_1_object = var_69_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_76_bool = 0;
		var_76_bool = 0;
		var_77_bool = 0; var_78_object = Obj();
		var_78_object = var_1_object;
		func_964(var_78_object);
		if(var_77_bool != 0) {
			var_85_bool = 0; var_86_object = Obj();
			var_86_object = var_1_object;
			func_942(var_86_object);
			if(var_85_bool != 0) {
				var_76_bool = 1;
			}
		}
		if(var_76_bool != 0) {
			var_91_string = "";
			func_214(var_70_object, "Neutral");
			@@@var_0_object:SetMessage((int)13261);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13262, (int)14492, (int)14491);
		} else {
				var_118_bool = 0;
				var_118_bool = 0;
				var_119_bool = 0; var_120_object = Obj();
				var_120_object = var_1_object;
				func_930(var_120_object);
				if(var_119_bool != 0) {
					var_125_bool = 0; var_126_object = Obj();
					var_126_object = var_1_object;
					func_954(var_125_bool, var_126_object);
					if(var_125_bool != 0) {
						var_118_bool = 1;
					}
				}
				if(var_118_bool != 0) {
					var_163_string = "";
					func_214(var_70_object, "Neutral");
					@@@var_0_object:SetMessage((int)13279);
					@@@var_0_object:ClearReplies();
					var_165_bool = 0; var_166_object = Obj();
					var_166_object = var_1_object;
					func_920(var_165_bool, var_166_object);
					if(var_165_bool != 0) {
						@@@var_0_object:AddReply((int)13280, (int)14511, (int)14510);
					}
					var_172_bool = 0; var_173_object = Obj();
					var_173_object = var_1_object;
					func_920(var_172_bool, var_173_object);
					if(var_172_bool != 0) {
						@@@var_0_object:AddReply((int)13284, (int)14515, (int)14514);
					}
					var_177_bool = 0; var_178_object = Obj();
					var_178_object = var_1_object;
					func_920(var_177_bool, var_178_object);
					if(var_177_bool != 0) {
						@@@var_0_object:AddReply((int)13288, (int)14511, (int)14518);
					}
					goto Label_184;
				}
				var_182_bool = 0; var_183_object = Obj();
				var_183_object = var_1_object;
				func_930(var_183_object);
				if(var_182_bool != 0) {
					var_184_string = "";
					func_214(var_70_object, "Neutral");
					@@@var_0_object:SetMessage((int)13289);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)13290, (int)14522, (int)14521);
					@@@var_0_object:AddReply((int)13304, (int)14538, (int)14535);
					@@@var_0_object:AddReply((int)13305, (int)-1, (int)14536);
					goto Label_184;
				}
				return 0;
		}
	}
Label_184:
	var_110_bool = 0;
	func_1048(var_110_bool);
	if(var_110_bool != 0) {

	Label_188:
		lshWaitForAnimEnd();
		var_111_string = var_3_string;
		if(var_111_string != 0) {
		} else {
			var_112_string = "";
			var_112_string = var_2_object;
			func_812(var_112_string);
			goto Label_188;
	}
		PlayAnimation("all", "idle");

	Label_203:
		WaitForAnimEnd();
		var_115_string = var_3_string;
		if(var_115_string != 0) {
			goto Label_213;
		}
		PlayAnimation("all", "idle");
		goto Label_203;

	}
	goto Label_213;
	
Label_213:
	return 0;
	
}
EMIT "GOTO 0x43";


