// @IMPORTS: Hold/0,StopGroup0/0,lshWaitForAnimEnd/0,WaitForAnimEnd/0,CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,PlayAnimation/2,lshStopAnimation/0,StopAnimation/0,GetPosition/1,Rotate/3,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/2,Rotate/2,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/0,Trace/1,lshGetAnimTimes/3,lshPlayAnimation/2,lshStopSpeech/0,GetVariable/2,GetInvItemByName/2,FindActor/2,Trigger/2,GetGameTime/1,lshWaitForAnimEnd/1,TriggerWorld/2,SetVariable/2,GetDiaryRoot/1,SetDiarySection/1,GetMainOutdoorScene/1,CreateDiaryEntry/4
// @STRINGS: W:Neutral|A:SetNPCName|A:SetPhoto|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|A:SetMessage|A:ClearReplies|A:AddReply|W:all|W:idle|A:GetPosition|A:GetEyesHeight|W:playing |W:start: |W:end: |A:HasItem|W:No|W:ui/NPC_Aglaja.png|W:playsound|W:giveitem|W:ood7Aglaja1|W:ood7Aglaja2|W:d7q01|W:d7q01AglajaGotoBirdmaskSelf|W:pt_map_aglaja|A:AddMark|W:d7q01BirdmaskD|W:pt_d7q01_dbirdmask|W:d7q01BirdmaskM|W:pt_d7q01_mbirdmask|W:d7q01BirdmaskU|W:pt_d7q01_ubirdmask|W:quest_d7_01|W:place_birdmasks|W:ood7Aglaja3|W:d7q01AglajaFindLierSelf|W:d7q01_mreport|A:RemoveItemByType|W:d7q01_dreport|W:d7q01_ureport|W:ood7Aglaja4|W:ood7Aglaja5|A:FindMark|A:Remove|W:completed|W:d7q02|W:d8q01|W:quest_d8_01|W:block_well|W:ood8Aglaja1|W:ood8Aglaja2|W:d8KainIsReason|W:d11q01|W:quest_d11_01|W:init_girl|W:remove_andrei|W:ood9Aglaja1|W:ood9Aglaja2|W:ood9Aglaja3|W:ood9Aglaja4|W:ood9Aglaja5|W:d10q01|W:d10q01AglajaGotoPetr|W:pt_map_petr|W:quest_d10_01|W:init_house|W:ood10Aglaja1|W:d10q01SoldierGotoPetr|W:ood10Aglaja2|W:d11AglajaVisit|W:d8TermitnikLoad|W:d9TalkToPolkovodec|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|W:player_diary|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:player|W:Adding diary entry
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
// @EVENT_11: op=0x15b vars=int,int
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x818 vars=int,int
// @TASK_6: vars=object params=2
// @TASK_7: vars=object,object,string,bool params=2
// @EVENT_11: op=0xb50 vars=int,int
// @TASK_8: vars=object params=2
// @TASK_9: vars=object,object,string,bool params=2
// @EVENT_11: op=0xd3a vars=int,int
// @TASK_10: vars=object params=2
// @TASK_11: vars=object,object,string,bool params=2
// @EVENT_11: op=0x10cd vars=int,int
// @PE: 0x23,0x29,0x70,0x14b,0x15b,0x789,0x808,0x818,0xad5,0xb40,0xb50,0xca6,0xd2a,0xd3a,0x105b,0x10bd,0x10cd,0x12d0,0x131d,0x1332,0x1338,0x133e,0x137e,0x13a7,0x13ad,0x13e6,0x13ec,0x13fd,0x1403,0x1409,0x140f,0x1425,0x142f,0x1435,0x143b,0x1441,0x1447,0x146c,0x1490,0x1496,0x149c,0x14a6,0x14b2,0x14be,0x14ca,0x14d6,0x14e2,0x14ee,0x150d,0x1519,0x1525,0x1531,0x153d,0x1549,0x1555,0x1561,0x156d,0x1579,0x1585,0x1591,0x159d,0x15a9,0x15b5,0x15c1,0x15cd,0x15d9,0x15e5,0x15f1,0x1704

task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool)
{
	var_26_object = Obj();
	var_25_bool = var_26_object;
	func_5892(var_26_object);
	return 0;
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool)
{
	var_26_bool = 0; var_27_object = Obj();
	var_25_bool = var_27_object;
	func_4743(var_26_bool, var_27_object);
	WaitForAnimEnd();
	return 0;
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	if((int)1 != 0) {
		func_4838();
		var_30_bool = var_26_bool == (int)14281;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_object;
			func_4920();
		}
		var_36_bool = var_26_bool == (int)14282;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_4920();
		}
		var_40_bool = var_26_bool == (int)14283;
		if(var_40_bool != 0) {
			var_41_object = Obj(); var_42_object = Obj();
			var_41_object = var_1_object;
			var_42_object = var_0_object;
			func_4920();
		}
		var_44_bool = var_26_bool == (int)14558;
		if(var_44_bool != 0) {
			var_45_object = Obj(); var_46_object = Obj();
			var_45_object = var_1_object;
			var_46_object = var_0_object;
			func_4926();
		}
		var_50_bool = var_26_bool == (int)14343;
		if(var_50_bool != 0) {
			var_51_object = Obj(); var_52_object = Obj();
			var_51_object = var_1_object;
			var_52_object = var_0_object;
			func_4932();
		}
		var_127_bool = var_26_bool == (int)14363;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_object;
			func_5043();
		}
		var_158_bool = var_26_bool == (int)14391;
		if(var_158_bool != 0) {
			var_159_object = Obj(); var_160_object = Obj();
			var_159_object = var_1_object;
			var_160_object = var_0_object;
			func_4996(var_160_object);
			var_188_object = Obj(); var_189_object = Obj();
			var_188_object = var_1_object;
			var_189_object = var_0_object;
			func_5037();
			var_192_object = Obj(); var_193_object = Obj();
			var_192_object = var_1_object;
			var_193_object = var_0_object;
			func_4914();
		}
		var_197_bool = var_26_bool == (int)14394;
		if(var_197_bool != 0) {
			var_198_object = Obj(); var_199_object = Obj();
			var_198_object = var_1_object;
			var_199_object = var_0_object;
			func_4996(var_199_object);
			var_200_object = Obj(); var_201_object = Obj();
			var_200_object = var_1_object;
			var_201_object = var_0_object;
			func_5037();
			var_202_object = Obj(); var_203_object = Obj();
			var_202_object = var_1_object;
			var_203_object = var_0_object;
			func_4914();
		}
		var_205_bool = var_26_bool == (int)14389;
		if(var_205_bool != 0) {
			var_206_object = Obj(); var_207_object = Obj();
			var_206_object = var_1_object;
			var_207_object = var_0_object;
			func_4996(var_207_object);
			var_208_object = Obj(); var_209_object = Obj();
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_5037();
			var_210_object = Obj(); var_211_object = Obj();
			var_210_object = var_1_object;
			var_211_object = var_0_object;
			func_4914();
		}
		var_213_bool = var_26_bool == (int)14344;
		if(var_213_bool != 0) {
			var_214_object = Obj(); var_215_object = Obj();
			var_214_object = var_1_object;
			var_215_object = var_0_object;
			func_5031();
		}
		var_219_bool = var_26_bool == (int)14242;
		if(var_219_bool != 0) {
			var_220_object = Obj(); var_221_object = Obj();
			var_220_object = var_1_object;
			var_221_object = var_0_object;
			func_4990();
		}
		var_225_bool = var_26_bool == (int)14623;
		if(var_225_bool != 0) {
			var_226_object = Obj(); var_227_object = Obj();
			var_226_object = var_1_object;
			var_227_object = var_0_object;
			func_5094();
		}
		var_231_bool = var_25_string == (int)13340;
		if(var_231_bool != 0) {
			var_232_bool = 0;
			var_232_bool = 0;
			var_233_bool = 0; var_234_object = Obj();
			var_234_object = var_1_object;
			func_5286(var_234_object);
			if(var_233_bool != 0) {
				var_241_bool = 0; var_242_object = Obj();
				var_242_object = var_1_object;
				func_5276(var_241_bool, var_242_object);
				if(var_241_bool != 0) {
					var_232_bool = 1;
				}
			}
			if(var_232_bool != 0) {
				var_245_string = "";
				func_331(var_26_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12185);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12186, (int)14254, (int)13341);
				@@@var_0_object:AddReply((int)13037, (int)14245, (int)14244);
				return 0;
			}
			var_267_bool = 0;
			var_267_bool = 0;
			var_268_bool = 0; var_269_object = Obj();
			var_269_object = var_1_object;
			func_5298(var_269_object);
			if(var_268_bool != 0) {
				var_274_bool = 0; var_275_object = Obj();
				var_275_object = var_1_object;
				func_5276(var_274_bool, var_275_object);
				if(var_274_bool != 0) {
					var_267_bool = 1;
				}
			}
			if(var_267_bool != 0) {
				var_276_string = "";
				func_331(var_26_bool, "Neutral");
				@@@var_0_object:SetMessage((int)13033);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13034, (int)14260, (int)14241);
				return 0;
			}
			var_281_bool = 0; var_282_object = Obj();
			var_282_object = var_1_object;
			func_5310(var_282_object);
			if(var_281_bool != 0) {
				var_287_string = "";
				func_331(var_26_bool, "Neutral");
				@@@var_0_object:SetMessage((int)13074);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13076, (int)14287, (int)14286);
				@@@var_0_object:AddReply((int)13117, (int)14336, (int)14335);
				return 0;
			}
			var_295_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13031);
			@@@var_0_object:ClearReplies();
			var_297_bool = 0; var_298_object = Obj();
			var_298_object = var_1_object;
			func_5401(var_298_object);
			if(var_297_bool != 0) {
				@@@var_0_object:AddReply((int)13141, (int)14362, (int)14360);
			}
			var_306_bool = 0;
			var_306_bool = 0;
			var_307_bool = 0; var_308_object = Obj();
			var_308_object = var_1_object;
			func_5358(var_307_bool, var_308_object);
			if(var_307_bool != 0) {
				var_324_bool = 0; var_325_object = Obj();
				var_325_object = var_1_object;
				func_5389(var_325_object);
				if(var_324_bool != 0) {
					var_306_bool = 1;
				}
			}
			if(var_306_bool != 0) {
				@@@var_0_object:AddReply((int)13075, (int)14369, (int)14285);
			}
			var_333_bool = 0;
			var_333_bool = 0;
			var_334_bool = 0; var_335_object = Obj();
			var_335_object = var_1_object;
			func_5334(var_335_object);
			if(var_334_bool != 0) {
				var_340_bool = 0; var_341_object = Obj();
				var_341_object = var_1_object;
				func_5346(var_341_object);
				if(var_340_bool != 0) {
					var_333_bool = 1;
				}
			}
			if(var_333_bool != 0) {
				@@@var_0_object:AddReply((int)13125, (int)14345, (int)14344);
			}
			var_349_bool = 0; var_350_object = Obj();
			var_350_object = var_1_object;
			func_5322(var_350_object);
			if(var_349_bool != 0) {
				@@@var_0_object:AddReply((int)13035, (int)14243, (int)14242);
			}
			var_358_bool = 0; var_359_object = Obj();
			var_359_object = var_1_object;
			func_5276(var_358_bool, var_359_object);
			if(var_358_bool != 0) {
				@@@var_0_object:AddReply((int)13142, (int)14364, (int)14361);
			}
			var_363_bool = 0; var_364_object = Obj();
			var_364_object = var_1_object;
			func_5413(var_364_object);
			if(var_363_bool != 0) {
				@@@var_0_object:AddReply((int)13377, (int)14610, (int)14609);
			}
			@@@var_0_object:AddReply((int)13032, (int)-1, (int)14239);
			return 0;
		}
		var_376_bool = var_25_string == (int)14610;
		if(var_376_bool != 0) {
			var_377_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13378);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13379, (int)14612, (int)14611);
			return 0;
		}
		var_383_bool = var_25_string == (int)14612;
		if(var_383_bool != 0) {
			var_384_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13380);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13381, (int)14619, (int)14613);
			@@@var_0_object:AddReply((int)13382, (int)14616, (int)14614);
			@@@var_0_object:AddReply((int)13383, (int)14616, (int)14615);
			return 0;
		}
		var_396_bool = var_25_string == (int)14616;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13384);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13385, (int)14619, (int)14618);
			return 0;
		}
		var_403_bool = var_25_string == (int)14619;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13386);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13387, (int)14622, (int)14620);
			return 0;
		}
		var_410_bool = var_25_string == (int)14622;
		if(var_410_bool != 0) {
			var_411_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13388);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13389, (int)-1, (int)14623);
			return 0;
		}
		var_417_bool = var_25_string == (int)14364;
		if(var_417_bool != 0) {
			var_418_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13145);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13147, (int)14367, (int)14366);
			@@@var_0_object:AddReply((int)13146, (int)-1, (int)14365);
			return 0;
		}
		var_427_bool = var_25_string == (int)14367;
		if(var_427_bool != 0) {
			var_428_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13148);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13149, (int)-1, (int)14368);
			return 0;
		}
		var_434_bool = var_25_string == (int)14243;
		if(var_434_bool != 0) {
			var_435_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13036);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13134, (int)14354, (int)14353);
			@@@var_0_object:AddReply((int)13136, (int)14358, (int)14355);
			return 0;
		}
		var_444_bool = var_25_string == (int)14358;
		if(var_444_bool != 0) {
			var_445_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13139);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13140, (int)-1, (int)14359);
			return 0;
		}
		var_451_bool = var_25_string == (int)14354;
		if(var_451_bool != 0) {
			var_452_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13135);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13138, (int)-1, (int)14357);
			return 0;
		}
		var_458_bool = var_25_string == (int)14345;
		if(var_458_bool != 0) {
			var_459_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13126);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13127, (int)14348, (int)14346);
			@@@var_0_object:AddReply((int)13128, (int)-1, (int)14347);
			return 0;
		}
		var_468_bool = var_25_string == (int)14348;
		if(var_468_bool != 0) {
			var_469_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13129);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13130, (int)14350, (int)14349);
			return 0;
		}
		var_475_bool = var_25_string == (int)14350;
		if(var_475_bool != 0) {
			var_476_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13131);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13132, (int)-1, (int)14351);
			@@@var_0_object:AddReply((int)13133, (int)-1, (int)14352);
			return 0;
		}
		var_485_bool = var_25_string == (int)14369;
		if(var_485_bool != 0) {
			var_486_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13150);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13151, (int)14371, (int)14370);
			return 0;
		}
		var_492_bool = var_25_string == (int)14371;
		if(var_492_bool != 0) {
			var_493_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13152);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13153, (int)14373, (int)14372);
			return 0;
		}
		var_499_bool = var_25_string == (int)14373;
		if(var_499_bool != 0) {
			var_500_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13154);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13155, (int)14375, (int)14374);
			return 0;
		}
		var_506_bool = var_25_string == (int)14375;
		if(var_506_bool != 0) {
			var_507_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13156);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13157, (int)14377, (int)14376);
			return 0;
		}
		var_513_bool = var_25_string == (int)14377;
		if(var_513_bool != 0) {
			var_514_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13158);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13159, (int)14379, (int)14378);
			@@@var_0_object:AddReply((int)13161, (int)14381, (int)14380);
			return 0;
		}
		var_523_bool = var_25_string == (int)14381;
		if(var_523_bool != 0) {
			var_524_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13162);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13164, (int)14384, (int)14383);
			return 0;
		}
		var_530_bool = var_25_string == (int)14379;
		if(var_530_bool != 0) {
			var_531_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13160);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13163, (int)14384, (int)14382);
			return 0;
		}
		var_537_bool = var_25_string == (int)14384;
		if(var_537_bool != 0) {
			var_538_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13165);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13166, (int)14390, (int)14386);
			@@@var_0_object:AddReply((int)13167, (int)14388, (int)14387);
			return 0;
		}
		var_547_bool = var_25_string == (int)14388;
		if(var_547_bool != 0) {
			var_548_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13168);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13169, (int)-1, (int)14389);
			return 0;
		}
		var_554_bool = var_25_string == (int)14390;
		if(var_554_bool != 0) {
			var_555_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13170);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13171, (int)-1, (int)14391);
			@@@var_0_object:AddReply((int)13172, (int)14393, (int)14392);
			return 0;
		}
		var_564_bool = var_25_string == (int)14393;
		if(var_564_bool != 0) {
			var_565_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13173);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13174, (int)-1, (int)14394);
			return 0;
		}
		var_571_bool = var_25_string == (int)14362;
		if(var_571_bool != 0) {
			var_572_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13143);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13144, (int)-1, (int)14363);
			return 0;
		}
		var_578_bool = var_25_string == (int)14336;
		if(var_578_bool != 0) {
			var_579_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13118);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13119, (int)14289, (int)14337);
			return 0;
		}
		var_585_bool = var_25_string == (int)14287;
		if(var_585_bool != 0) {
			var_586_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13077);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13078, (int)14289, (int)14288);
			return 0;
		}
		var_592_bool = var_25_string == (int)14289;
		if(var_592_bool != 0) {
			var_593_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13079);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13082, (int)14296, (int)14292);
			@@@var_0_object:AddReply((int)13080, (int)14291, (int)14290);
			return 0;
		}
		var_602_bool = var_25_string == (int)14291;
		if(var_602_bool != 0) {
			var_603_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13081);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13083, (int)14294, (int)14293);
			return 0;
		}
		var_609_bool = var_25_string == (int)14294;
		if(var_609_bool != 0) {
			var_610_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13084);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13085, (int)14296, (int)14295);
			return 0;
		}
		var_616_bool = var_25_string == (int)14296;
		if(var_616_bool != 0) {
			var_617_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13086);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13111, (int)14329, (int)14328);
			return 0;
		}
		var_623_bool = var_25_string == (int)14329;
		if(var_623_bool != 0) {
			var_624_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13112);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13113, (int)14332, (int)14331);
			return 0;
		}
		var_630_bool = var_25_string == (int)14332;
		if(var_630_bool != 0) {
			var_631_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13114);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13115, (int)14334, (int)14333);
			return 0;
		}
		var_637_bool = var_25_string == (int)14334;
		if(var_637_bool != 0) {
			var_638_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13116);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13120, (int)14340, (int)14339);
			return 0;
		}
		var_644_bool = var_25_string == (int)14340;
		if(var_644_bool != 0) {
			var_645_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13121);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13122, (int)14342, (int)14341);
			return 0;
		}
		var_651_bool = var_25_string == (int)14342;
		if(var_651_bool != 0) {
			var_652_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13123);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13124, (int)-1, (int)14343);
			return 0;
		}
		var_658_bool = var_25_string == (int)14260;
		if(var_658_bool != 0) {
			var_659_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13052);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13053, (int)14262, (int)14261);
			@@@var_0_object:AddReply((int)13108, (int)14262, (int)14323);
			return 0;
		}
		var_668_bool = var_25_string == (int)14262;
		if(var_668_bool != 0) {
			var_669_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13054);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13055, (int)14264, (int)14263);
			@@@var_0_object:AddReply((int)13110, (int)14264, (int)14326);
			return 0;
		}
		var_678_bool = var_25_string == (int)14264;
		if(var_678_bool != 0) {
			var_679_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13056);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13057, (int)14266, (int)14265);
			return 0;
		}
		var_685_bool = var_25_string == (int)14266;
		if(var_685_bool != 0) {
			var_686_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13058);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13059, (int)14269, (int)14267);
			@@@var_0_object:AddReply((int)13060, (int)14269, (int)14268);
			return 0;
		}
		var_695_bool = var_25_string == (int)14269;
		if(var_695_bool != 0) {
			var_696_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13061);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13321, (int)14557, (int)14556);
			return 0;
		}
		var_702_bool = var_25_string == (int)14557;
		if(var_702_bool != 0) {
			var_703_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13322);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13323, (int)-1, (int)14558);
			return 0;
		}
		var_709_bool = var_25_string == (int)14245;
		if(var_709_bool != 0) {
			var_710_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13038);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13039, (int)14247, (int)14246);
			@@@var_0_object:AddReply((int)13088, (int)14299, (int)14298);
			return 0;
		}
		var_719_bool = var_25_string == (int)14299;
		if(var_719_bool != 0) {
			var_720_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13089);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13093, (int)14306, (int)14303);
			@@@var_0_object:AddReply((int)13091, (int)14307, (int)14301);
			@@@var_0_object:AddReply((int)13092, (int)14307, (int)14302);
			@@@var_0_object:AddReply((int)13094, (int)14307, (int)14304);
			@@@var_0_object:AddReply((int)13090, (int)14307, (int)14300);
			return 0;
		}
		var_738_bool = var_25_string == (int)14307;
		if(var_738_bool != 0) {
			var_739_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13097);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13098, (int)14314, (int)14308);
			return 0;
		}
		var_745_bool = var_25_string == (int)14314;
		if(var_745_bool != 0) {
			var_746_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13100);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13101, (int)14316, (int)14315);
			return 0;
		}
		var_752_bool = var_25_string == (int)14316;
		if(var_752_bool != 0) {
			var_753_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13102);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13103, (int)14318, (int)14317);
			return 0;
		}
		var_759_bool = var_25_string == (int)14318;
		if(var_759_bool != 0) {
			var_760_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13104);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13105, (int)14320, (int)14319);
			return 0;
		}
		var_766_bool = var_25_string == (int)14320;
		if(var_766_bool != 0) {
			var_767_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13106);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13107, (int)14249, (int)14321);
			return 0;
		}
		var_773_bool = var_25_string == (int)14306;
		if(var_773_bool != 0) {
			var_774_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13096);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13099, (int)14307, (int)14312);
			return 0;
		}
		var_780_bool = var_25_string == (int)14247;
		if(var_780_bool != 0) {
			var_781_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13040);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13041, (int)14249, (int)14248);
			return 0;
		}
		var_787_bool = var_25_string == (int)14249;
		if(var_787_bool != 0) {
			var_788_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13042);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13043, (int)14251, (int)14250);
			return 0;
		}
		var_794_bool = var_25_string == (int)14251;
		if(var_794_bool != 0) {
			var_795_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13044);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13045, (int)14253, (int)14252);
			return 0;
		}
		var_801_bool = var_25_string == (int)14253;
		if(var_801_bool != 0) {
			var_802_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13046);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13062, (int)14273, (int)14272);
			return 0;
		}
		var_808_bool = var_25_string == (int)14273;
		if(var_808_bool != 0) {
			var_809_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13063);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13064, (int)-1, (int)14274);
			@@@var_0_object:AddReply((int)13065, (int)14276, (int)14275);
			@@@var_0_object:AddReply((int)13073, (int)-1, (int)14283);
			return 0;
		}
		var_821_bool = var_25_string == (int)14276;
		if(var_821_bool != 0) {
			var_822_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13066);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13067, (int)14278, (int)14277);
			return 0;
		}
		var_828_bool = var_25_string == (int)14278;
		if(var_828_bool != 0) {
			var_829_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13068);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13069, (int)14280, (int)14279);
			return 0;
		}
		var_835_bool = var_25_string == (int)14280;
		if(var_835_bool != 0) {
			var_836_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13070);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13071, (int)-1, (int)14281);
			@@@var_0_object:AddReply((int)13072, (int)-1, (int)14282);
			return 0;
		}
		var_845_bool = var_25_string == (int)14254;
		if(var_845_bool != 0) {
			var_846_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13047);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13048, (int)14256, (int)14255);
			@@@var_0_object:AddReply((int)13051, (int)14245, (int)14258);
			return 0;
		}
		var_855_bool = var_25_string == (int)14256;
		if(var_855_bool != 0) {
			var_856_string = "";
			func_331(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13049);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13050, (int)14245, (int)14257);
			return 0;
		}
		var_3_string = true;
		var_861_bool = 0;
		func_4912(var_861_bool);
		if(var_861_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x15c";
	
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	if((int)1 != 0) {
		func_4838();
		var_30_bool = var_26_bool == (int)14980;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_object;
			func_5100();
		}
		var_76_bool = var_26_bool == (int)14645;
		if(var_76_bool != 0) {
			var_77_object = Obj(); var_78_object = Obj();
			var_77_object = var_1_object;
			var_78_object = var_0_object;
			func_5117();
		}
		var_82_bool = var_26_bool == (int)13413;
		if(var_82_bool != 0) {
			var_83_object = Obj(); var_84_object = Obj();
			var_83_object = var_1_object;
			var_84_object = var_0_object;
			func_5129();
		}
		var_88_bool = var_26_bool == (int)14646;
		if(var_88_bool != 0) {
			var_89_object = Obj(); var_90_object = Obj();
			var_89_object = var_1_object;
			var_90_object = var_0_object;
			func_5123();
		}
		var_94_bool = var_25_string == (int)14647;
		if(var_94_bool != 0) {
			var_95_bool = 0; var_96_object = Obj();
			var_96_object = var_1_object;
			func_5425(var_96_object);
			if(var_95_bool != 0) {
				var_103_string = "";
				func_2056(var_26_bool, "Neutral");
				@@@var_0_object:SetMessage((int)13413);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13415, (int)14650, (int)14649);
				@@@var_0_object:AddReply((int)13417, (int)14949, (int)14652);
				@@@var_0_object:AddReply((int)13414, (int)14650, (int)14648);
				return 0;
			}
			var_128_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13409);
			@@@var_0_object:ClearReplies();
			var_130_bool = 0; var_131_object = Obj();
			var_131_object = var_1_object;
			func_5437(var_131_object);
			if(var_130_bool != 0) {
				@@@var_0_object:AddReply((int)13411, (int)13400, (int)14645);
			}
			var_139_bool = 0;
			var_139_bool = 0;
			var_140_bool = 0; var_141_object = Obj();
			var_141_object = var_1_object;
			func_5449(var_141_object);
			if(var_140_bool != 0) {
				var_146_bool = 0; var_147_object = Obj();
				var_147_object = var_1_object;
				func_5461(var_147_object);
				if(var_146_bool != 0) {
					var_139_bool = 1;
				}
			}
			if(var_139_bool != 0) {
				@@@var_0_object:AddReply((int)13412, (int)13452, (int)14646);
			}
			@@@var_0_object:AddReply((int)13410, (int)-1, (int)14644);
			return 0;
		EMIT "PushEmpty(string)";
		EMIT "Stack[-1] = \"Neutral\" // @poff=0";
		EMIT "Call 0x808";
		EMIT "Pop(1)";
		EMIT "Push((int) 15089)";
		EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
		EMIT "Pop(1)";
		EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
		EMIT "Pop(0)";
		EMIT "Push((int) 15090)";
		EMIT "Push((int) 16357)";
		EMIT "Push((int) 16356)";
		EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
		EMIT "Pop(3)";
		EMIT "Return(); Pop(0)";
		}
		var_159_bool = var_25_string == (int)16357;
		if(var_159_bool != 0) {
			var_160_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15091);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15092, (int)16359, (int)16358);
			return 0;
		}
		var_166_bool = var_25_string == (int)16359;
		if(var_166_bool != 0) {
			var_167_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)15093);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)15094, (int)-1, (int)16360);
			return 0;
		}
		var_173_bool = var_25_string == (int)13452;
		if(var_173_bool != 0) {
			var_174_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12293);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12294, (int)13454, (int)13453);
			return 0;
		}
		var_180_bool = var_25_string == (int)13454;
		if(var_180_bool != 0) {
			var_181_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12295);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12296, (int)13457, (int)13455);
			@@@var_0_object:AddReply((int)12297, (int)-1, (int)13456);
			return 0;
		}
		var_190_bool = var_25_string == (int)13457;
		if(var_190_bool != 0) {
			var_191_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12298);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12299, (int)13459, (int)13458);
			return 0;
		}
		var_197_bool = var_25_string == (int)13459;
		if(var_197_bool != 0) {
			var_198_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12300);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12301, (int)13461, (int)13460);
			return 0;
		}
		var_204_bool = var_25_string == (int)13461;
		if(var_204_bool != 0) {
			var_205_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12302);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12303, (int)13463, (int)13462);
			return 0;
		}
		var_211_bool = var_25_string == (int)13463;
		if(var_211_bool != 0) {
			var_212_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12304);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12305, (int)13465, (int)13464);
			return 0;
		}
		var_218_bool = var_25_string == (int)13465;
		if(var_218_bool != 0) {
			var_219_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12306);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12307, (int)-1, (int)13466);
			@@@var_0_object:AddReply((int)12308, (int)-1, (int)13467);
			return 0;
		}
		var_228_bool = var_25_string == (int)13400;
		if(var_228_bool != 0) {
			var_229_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12244);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12245, (int)13402, (int)13401);
			return 0;
		}
		var_235_bool = var_25_string == (int)13402;
		if(var_235_bool != 0) {
			var_236_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12246);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12248, (int)13405, (int)13404);
			@@@var_0_object:AddReply((int)12247, (int)13409, (int)13403);
			return 0;
		}
		var_245_bool = var_25_string == (int)13405;
		if(var_245_bool != 0) {
			var_246_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12249);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12250, (int)13407, (int)13406);
			return 0;
		}
		var_252_bool = var_25_string == (int)13407;
		if(var_252_bool != 0) {
			var_253_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12251);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12252, (int)13409, (int)13408);
			return 0;
		}
		var_259_bool = var_25_string == (int)13409;
		if(var_259_bool != 0) {
			var_260_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12253);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12254, (int)13411, (int)13410);
			return 0;
		}
		var_266_bool = var_25_string == (int)13411;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12255);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12256, (int)-1, (int)13413);
			return 0;
		}
		var_273_bool = var_25_string == (int)14949;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13688);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13689, (int)14952, (int)14951);
			return 0;
		}
		var_280_bool = var_25_string == (int)14952;
		if(var_280_bool != 0) {
			var_281_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13690);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13691, (int)14650, (int)14953);
			@@@var_0_object:AddReply((int)13692, (int)14650, (int)14954);
			@@@var_0_object:AddReply((int)13693, (int)14650, (int)14955);
			return 0;
		}
		var_293_bool = var_25_string == (int)14650;
		if(var_293_bool != 0) {
			var_294_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13416);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13421, (int)14959, (int)14657);
			return 0;
		}
		var_300_bool = var_25_string == (int)14959;
		if(var_300_bool != 0) {
			var_301_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13694);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13695, (int)14963, (int)14960);
			@@@var_0_object:AddReply((int)13696, (int)14963, (int)14961);
			@@@var_0_object:AddReply((int)13697, (int)14963, (int)14962);
			return 0;
		}
		var_313_bool = var_25_string == (int)14963;
		if(var_313_bool != 0) {
			var_314_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13698);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13699, (int)14970, (int)14964);
			@@@var_0_object:AddReply((int)13700, (int)14968, (int)14967);
			return 0;
		}
		var_323_bool = var_25_string == (int)14968;
		if(var_323_bool != 0) {
			var_324_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13701);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13702, (int)14970, (int)14969);
			return 0;
		}
		var_330_bool = var_25_string == (int)14970;
		if(var_330_bool != 0) {
			var_331_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13703);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13704, (int)14972, (int)14971);
			return 0;
		}
		var_337_bool = var_25_string == (int)14972;
		if(var_337_bool != 0) {
			var_338_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13705);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13706, (int)14975, (int)14974);
			return 0;
		}
		var_344_bool = var_25_string == (int)14975;
		if(var_344_bool != 0) {
			var_345_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13707);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13708, (int)14978, (int)14976);
			@@@var_0_object:AddReply((int)13709, (int)14978, (int)14977);
			return 0;
		}
		var_354_bool = var_25_string == (int)14978;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_2056(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13710);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13711, (int)-1, (int)14980);
			return 0;
		}
		var_3_string = true;
		var_360_bool = 0;
		func_4912(var_360_bool);
		if(var_360_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x819";
	
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	if((int)1 != 0) {
		func_4838();
		var_30_bool = var_26_bool == (int)14106;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_object;
			func_5197();
		}
		var_92_bool = var_26_bool == (int)14118;
		if(var_92_bool != 0) {
			var_93_object = Obj(); var_94_object = Obj();
			var_93_object = var_1_object;
			var_94_object = var_0_object;
			func_5234();
		}
		var_117_bool = var_26_bool == (int)14114;
		if(var_117_bool != 0) {
			var_118_object = Obj(); var_119_object = Obj();
			var_118_object = var_1_object;
			var_119_object = var_0_object;
			func_5264();
		}
		var_123_bool = var_25_string == (int)14101;
		if(var_123_bool != 0) {
			var_124_bool = 0; var_125_object = Obj();
			var_125_object = var_1_object;
			func_5569(var_125_object);
			if(var_124_bool != 0) {
				var_132_object = Obj(); var_133_object = Obj();
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_5228();
				var_136_string = "";
				func_2880(var_26_bool, "Neutral");
				@@@var_0_object:SetMessage((int)12899);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)12900, (int)14103, (int)14102);
				return 0;
			}
			var_155_string = "";
			func_2880(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12905);
			@@@var_0_object:ClearReplies();
			var_157_bool = 0; var_158_object = Obj();
			var_158_object = var_1_object;
			func_5605(var_158_object);
			if(var_157_bool != 0) {
				@@@var_0_object:AddReply((int)12906, (int)14109, (int)14108);
			}
			var_166_bool = 0;
			var_166_bool = 0;
			var_167_bool = 0; var_168_object = Obj();
			var_168_object = var_1_object;
			func_5581(var_168_object);
			if(var_167_bool != 0) {
				var_173_bool = 0; var_174_object = Obj();
				var_174_object = var_1_object;
				func_5593(var_174_object);
				if(var_173_bool != 0) {
					var_166_bool = 1;
				}
			}
			if(var_166_bool != 0) {
				@@@var_0_object:AddReply((int)12912, (int)14119, (int)14114);
			}
			@@@var_0_object:AddReply((int)12911, (int)-1, (int)14113);
			return 0;
		}
		var_186_bool = var_25_string == (int)14119;
		if(var_186_bool != 0) {
			var_187_string = "";
			func_2880(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12915);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12916, (int)14122, (int)14120);
			@@@var_0_object:AddReply((int)12917, (int)14122, (int)14121);
			return 0;
		}
		var_196_bool = var_25_string == (int)14122;
		if(var_196_bool != 0) {
			var_197_string = "";
			func_2880(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12918);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12919, (int)14125, (int)14124);
			return 0;
		}
		var_203_bool = var_25_string == (int)14125;
		if(var_203_bool != 0) {
			var_204_string = "";
			func_2880(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12920);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12921, (int)-1, (int)14126);
			@@@var_0_object:AddReply((int)12922, (int)14128, (int)14127);
			return 0;
		}
		var_213_bool = var_25_string == (int)14128;
		if(var_213_bool != 0) {
			var_214_string = "";
			func_2880(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12923);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12924, (int)-1, (int)14129);
			return 0;
		}
		var_220_bool = var_25_string == (int)14109;
		if(var_220_bool != 0) {
			var_221_string = "";
			func_2880(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12907);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12908, (int)14115, (int)14110);
			@@@var_0_object:AddReply((int)12909, (int)14115, (int)14111);
			@@@var_0_object:AddReply((int)12910, (int)14115, (int)14112);
			return 0;
		}
		var_233_bool = var_25_string == (int)14115;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_2880(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12913);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12914, (int)-1, (int)14118);
			return 0;
		}
		var_240_bool = var_25_string == (int)14103;
		if(var_240_bool != 0) {
			var_241_string = "";
			func_2880(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12901);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12902, (int)14105, (int)14104);
			return 0;
		}
		var_247_bool = var_25_string == (int)14105;
		if(var_247_bool != 0) {
			var_248_string = "";
			func_2880(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)12903);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12904, (int)-1, (int)14106);
			return 0;
		}
		var_3_string = true;
		var_253_bool = 0;
		func_4912(var_253_bool);
		if(var_253_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xb51";
	
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool)
{
	if((int)1 != 0) {
		func_4838();
		var_30_bool = var_26_bool == (int)15046;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_object;
			func_5173();
		}
		var_36_bool = var_26_bool == (int)15069;
		if(var_36_bool != 0) {
			var_37_object = Obj(); var_38_object = Obj();
			var_37_object = var_1_object;
			var_38_object = var_0_object;
			func_5179();
		}
		var_42_bool = var_26_bool == (int)15079;
		if(var_42_bool != 0) {
			var_43_object = Obj(); var_44_object = Obj();
			var_43_object = var_1_object;
			var_44_object = var_0_object;
			func_5185();
		}
		var_48_bool = var_26_bool == (int)15092;
		if(var_48_bool != 0) {
			var_49_object = Obj(); var_50_object = Obj();
			var_49_object = var_1_object;
			var_50_object = var_0_object;
			func_5191();
		}
		var_54_bool = var_25_string == (int)15028;
		if(var_54_bool != 0) {
			var_55_bool = 0; var_56_object = Obj();
			var_56_object = var_1_object;
			func_5509(var_56_object);
			if(var_55_bool != 0) {
				var_63_object = Obj(); var_64_object = Obj();
				var_63_object = var_1_object;
				var_64_object = var_0_object;
				func_5167();
				var_67_string = "";
				func_3370(var_26_bool, "Neutral");
				@@@var_0_object:SetMessage((int)13802);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)13803, (int)15030, (int)15029);
				@@@var_0_object:AddReply((int)13815, (int)15042, (int)15041);
				return 0;
			}
			var_89_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13818);
			@@@var_0_object:ClearReplies();
			var_91_bool = 0; var_92_object = Obj();
			var_92_object = var_1_object;
			func_5521(var_92_object);
			if(var_91_bool != 0) {
				@@@var_0_object:AddReply((int)13819, (int)15047, (int)15046);
			}
			var_100_bool = 0;
			var_100_bool = 0;
			var_101_bool = 0; var_102_object = Obj();
			var_102_object = var_1_object;
			func_5473(var_102_object);
			if(var_101_bool != 0) {
				var_107_bool = 0; var_108_object = Obj();
				var_108_object = var_1_object;
				func_5533(var_108_object);
				if(var_107_bool != 0) {
					var_100_bool = 1;
				}
			}
			if(var_100_bool != 0) {
				@@@var_0_object:AddReply((int)13842, (int)15070, (int)15069);
			}
			var_116_bool = 0; var_117_object = Obj();
			var_117_object = var_1_object;
			func_5545(var_117_object);
			if(var_116_bool != 0) {
				@@@var_0_object:AddReply((int)13852, (int)15080, (int)15079);
			}
			var_125_bool = 0; var_126_object = Obj();
			var_126_object = var_1_object;
			func_5557(var_126_object);
			if(var_125_bool != 0) {
				@@@var_0_object:AddReply((int)13865, (int)15093, (int)15092);
			}
			@@@var_0_object:AddReply((int)13880, (int)-1, (int)15107);
			return 0;
		}
		var_138_bool = var_25_string == (int)15093;
		if(var_138_bool != 0) {
			var_139_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13866);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13867, (int)15095, (int)15094);
			return 0;
		}
		var_145_bool = var_25_string == (int)15095;
		if(var_145_bool != 0) {
			var_146_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13868);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13869, (int)15097, (int)15096);
			@@@var_0_object:AddReply((int)13876, (int)15104, (int)15103);
			return 0;
		}
		var_155_bool = var_25_string == (int)15104;
		if(var_155_bool != 0) {
			var_156_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13877);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13878, (int)-1, (int)15105);
			@@@var_0_object:AddReply((int)13879, (int)-1, (int)15106);
			return 0;
		}
		var_165_bool = var_25_string == (int)15097;
		if(var_165_bool != 0) {
			var_166_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13870);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13871, (int)-1, (int)15098);
			@@@var_0_object:AddReply((int)13872, (int)15100, (int)15099);
			return 0;
		}
		var_175_bool = var_25_string == (int)15100;
		if(var_175_bool != 0) {
			var_176_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13873);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13874, (int)-1, (int)15101);
			@@@var_0_object:AddReply((int)13875, (int)-1, (int)15102);
			return 0;
		}
		var_185_bool = var_25_string == (int)15080;
		if(var_185_bool != 0) {
			var_186_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13853);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13854, (int)15082, (int)15081);
			return 0;
		}
		var_192_bool = var_25_string == (int)15082;
		if(var_192_bool != 0) {
			var_193_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13855);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13856, (int)-1, (int)15083);
			@@@var_0_object:AddReply((int)13857, (int)15085, (int)15084);
			return 0;
		}
		var_202_bool = var_25_string == (int)15085;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13858);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13859, (int)-1, (int)15086);
			@@@var_0_object:AddReply((int)13860, (int)15088, (int)15087);
			return 0;
		}
		var_212_bool = var_25_string == (int)15088;
		if(var_212_bool != 0) {
			var_213_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13861);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13862, (int)15090, (int)15089);
			@@@var_0_object:AddReply((int)13864, (int)-1, (int)15091);
			return 0;
		}
		var_222_bool = var_25_string == (int)15090;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13863);
			@@@var_0_object:ClearReplies();
			return 0;
		}
		var_226_bool = var_25_string == (int)15070;
		if(var_226_bool != 0) {
			var_227_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13843);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13844, (int)15072, (int)15071);
			return 0;
		}
		var_233_bool = var_25_string == (int)15072;
		if(var_233_bool != 0) {
			var_234_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13845);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13846, (int)15074, (int)15073);
			@@@var_0_object:AddReply((int)13849, (int)15077, (int)15076);
			return 0;
		}
		var_243_bool = var_25_string == (int)15077;
		if(var_243_bool != 0) {
			var_244_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13850);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13851, (int)-1, (int)15078);
			return 0;
		}
		var_250_bool = var_25_string == (int)15074;
		if(var_250_bool != 0) {
			var_251_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13847);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13848, (int)-1, (int)15075);
			return 0;
		}
		var_257_bool = var_25_string == (int)15047;
		if(var_257_bool != 0) {
			var_258_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13820);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13821, (int)15049, (int)15048);
			@@@var_0_object:AddReply((int)13839, (int)15067, (int)15066);
			return 0;
		}
		var_267_bool = var_25_string == (int)15067;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13840);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13841, (int)-1, (int)15068);
			return 0;
		}
		var_274_bool = var_25_string == (int)15049;
		if(var_274_bool != 0) {
			var_275_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13822);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13823, (int)15051, (int)15050);
			return 0;
		}
		var_281_bool = var_25_string == (int)15051;
		if(var_281_bool != 0) {
			var_282_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13824);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13825, (int)15053, (int)15052);
			@@@var_0_object:AddReply((int)13827, (int)15055, (int)15054);
			return 0;
		}
		var_291_bool = var_25_string == (int)15055;
		if(var_291_bool != 0) {
			var_292_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13828);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13829, (int)15057, (int)15056);
			return 0;
		}
		var_298_bool = var_25_string == (int)15057;
		if(var_298_bool != 0) {
			var_299_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13830);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13831, (int)15059, (int)15058);
			@@@var_0_object:AddReply((int)13838, (int)-1, (int)15065);
			return 0;
		}
		var_308_bool = var_25_string == (int)15059;
		if(var_308_bool != 0) {
			var_309_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13832);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13833, (int)15061, (int)15060);
			return 0;
		}
		var_315_bool = var_25_string == (int)15061;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13834);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13835, (int)15063, (int)15062);
			return 0;
		}
		var_322_bool = var_25_string == (int)15063;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13836);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13837, (int)-1, (int)15064);
			return 0;
		}
		var_329_bool = var_25_string == (int)15053;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13826);
			@@@var_0_object:ClearReplies();
			return 0;
		}
		var_333_bool = var_25_string == (int)15042;
		if(var_333_bool != 0) {
			var_334_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13816);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13817, (int)15030, (int)15043);
			return 0;
		}
		var_340_bool = var_25_string == (int)15030;
		if(var_340_bool != 0) {
			var_341_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13804);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13805, (int)15032, (int)15031);
			return 0;
		}
		var_347_bool = var_25_string == (int)15032;
		if(var_347_bool != 0) {
			var_348_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13806);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13807, (int)15034, (int)15033);
			return 0;
		}
		var_354_bool = var_25_string == (int)15034;
		if(var_354_bool != 0) {
			var_355_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13808);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13809, (int)15036, (int)15035);
			return 0;
		}
		var_361_bool = var_25_string == (int)15036;
		if(var_361_bool != 0) {
			var_362_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13810);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13811, (int)15038, (int)15037);
			@@@var_0_object:AddReply((int)13814, (int)-1, (int)15040);
			return 0;
		}
		var_371_bool = var_25_string == (int)15038;
		if(var_371_bool != 0) {
			var_372_string = "";
			func_3370(var_26_bool, "Neutral");
			@@@var_0_object:SetMessage((int)13812);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13813, (int)-1, (int)15039);
			return 0;
		}
		var_3_string = true;
		var_377_bool = 0;
		func_4912(var_377_bool);
		if(var_377_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0xd3b";
	
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int)
{
	if((int)1 != 0) {
		func_4838();
		var_30_bool = var_26_int == (int)15421;
		if(var_30_bool != 0) {
			var_31_object = Obj(); var_32_object = Obj();
			var_31_object = var_1_object;
			var_32_object = var_0_object;
			func_5135();
		}
		var_79_bool = var_26_int == (int)15422;
		if(var_79_bool != 0) {
			var_80_object = Obj(); var_81_object = Obj();
			var_80_object = var_1_object;
			var_81_object = var_0_object;
			func_5135();
		}
		var_83_bool = var_26_int == (int)15451;
		if(var_83_bool != 0) {
			var_84_object = Obj(); var_85_object = Obj();
			var_84_object = var_1_object;
			var_85_object = var_0_object;
			func_5157();
		}
		var_99_bool = var_25_int == (int)15408;
		if(var_99_bool != 0) {
			var_100_bool = 0; var_101_object = Obj();
			var_101_object = var_1_object;
			func_5485(var_101_object);
			if(var_100_bool != 0) {
				var_108_object = Obj(); var_109_object = Obj();
				var_108_object = var_1_object;
				var_109_object = var_0_object;
				func_5270();
				var_112_string = "";
				func_4285(var_26_int, "Neutral");
				@@@var_0_object:SetMessage((int)14194);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)14195, (int)15410, (int)15409);
				return 0;
			}
			var_131_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14222);
			@@@var_0_object:ClearReplies();
			var_133_bool = 0; var_134_object = Obj();
			var_134_object = var_1_object;
			func_5497(var_134_object);
			if(var_133_bool != 0) {
				@@@var_0_object:AddReply((int)14223, (int)15442, (int)15441);
			}
			var_142_bool = 0; var_143_object = Obj();
			var_143_object = var_1_object;
			func_5276(var_142_bool, var_143_object);
			if(var_142_bool != 0) {
				@@@var_0_object:AddReply((int)14234, (int)15453, (int)15452);
			}
			@@@var_0_object:AddReply((int)14239, (int)-1, (int)15457);
			return 0;
		}
		var_153_bool = var_25_int == (int)15453;
		if(var_153_bool != 0) {
			var_154_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14235);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14236, (int)15455, (int)15454);
			return 0;
		}
		var_160_bool = var_25_int == (int)15455;
		if(var_160_bool != 0) {
			var_161_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14237);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14238, (int)-1, (int)15456);
			return 0;
		}
		var_167_bool = var_25_int == (int)15442;
		if(var_167_bool != 0) {
			var_168_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14224);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14225, (int)15444, (int)15443);
			return 0;
		}
		var_174_bool = var_25_int == (int)15444;
		if(var_174_bool != 0) {
			var_175_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14226);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14227, (int)15446, (int)15445);
			return 0;
		}
		var_181_bool = var_25_int == (int)15446;
		if(var_181_bool != 0) {
			var_182_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14228);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14229, (int)15448, (int)15447);
			return 0;
		}
		var_188_bool = var_25_int == (int)15448;
		if(var_188_bool != 0) {
			var_189_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14230);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14231, (int)15450, (int)15449);
			return 0;
		}
		var_195_bool = var_25_int == (int)15450;
		if(var_195_bool != 0) {
			var_196_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14232);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14233, (int)-1, (int)15451);
			return 0;
		}
		var_202_bool = var_25_int == (int)15410;
		if(var_202_bool != 0) {
			var_203_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14196);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14197, (int)15412, (int)15411);
			@@@var_0_object:AddReply((int)14218, (int)15412, (int)15435);
			@@@var_0_object:AddReply((int)14219, (int)15438, (int)15437);
			return 0;
		}
		var_215_bool = var_25_int == (int)15438;
		if(var_215_bool != 0) {
			var_216_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14220);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14221, (int)15412, (int)15439);
			return 0;
		}
		var_222_bool = var_25_int == (int)15412;
		if(var_222_bool != 0) {
			var_223_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14198);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14199, (int)15414, (int)15413);
			@@@var_0_object:AddReply((int)14212, (int)15428, (int)15427);
			return 0;
		}
		var_232_bool = var_25_int == (int)15428;
		if(var_232_bool != 0) {
			var_233_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14213);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14214, (int)15430, (int)15429);
			@@@var_0_object:AddReply((int)14217, (int)15430, (int)15433);
			return 0;
		}
		var_242_bool = var_25_int == (int)15430;
		if(var_242_bool != 0) {
			var_243_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14215);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14216, (int)15420, (int)15431);
			return 0;
		}
		var_249_bool = var_25_int == (int)15414;
		if(var_249_bool != 0) {
			var_250_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14200);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14201, (int)15416, (int)15415);
			return 0;
		}
		var_256_bool = var_25_int == (int)15416;
		if(var_256_bool != 0) {
			var_257_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14202);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14203, (int)15418, (int)15417);
			@@@var_0_object:AddReply((int)14209, (int)15424, (int)15423);
			return 0;
		}
		var_266_bool = var_25_int == (int)15424;
		if(var_266_bool != 0) {
			var_267_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14210);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14211, (int)15418, (int)15425);
			return 0;
		}
		var_273_bool = var_25_int == (int)15418;
		if(var_273_bool != 0) {
			var_274_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14204);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14205, (int)15420, (int)15419);
			@@@var_0_object:AddReply((int)14208, (int)-1, (int)15422);
			return 0;
		}
		var_283_bool = var_25_int == (int)15420;
		if(var_283_bool != 0) {
			var_284_string = "";
			func_4285(var_26_int, "Neutral");
			@@@var_0_object:SetMessage((int)14206);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14207, (int)-1, (int)15421);
			return 0;
		}
		var_3_string = true;
		var_289_bool = 0;
		func_4912(var_289_bool);
		if(var_289_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x10ce";
	
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool)
{
	func_5888();
	var_26_bool = 0;
	func_4755(var_26_bool);
	var_29_bool = var_26_bool == 0; //@nz
	if(var_29_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
Label_19:
	var_30_string = "";
	func_4820("Neutral");
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


func_5633(var_41_bool, var_42_object, var_43_int)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0;
	func_5620(Obj());
	var_50_object = var_47_object;
	@@var_47_object:Find(var_43_int, var_48_object);
	var_55_bool = var_48_object == 0; //@nz
	if(var_55_bool != 0) {
		var_57_int = "Can't find diary parent with id: " + var_43_int;
		Trace(var_57_int);
		var_41_bool = 0;
		return 6;
	}
	@@var_48_object:AddChild(var_42_object);
	SetVariable("player_diary", (int)1);
	@@var_42_object:GetCategory(var_49_int);
	SetDiarySection(var_49_int);
	var_41_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_5888()
{
	var_25_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	return 0;
}


func_5123()
{
	SetVariable("ood8Aglaja2", (int)1);
	return 0;
}


func_4867(var_69_bool, var_70_string, var_71_string)
{
	var_72_object = Obj(); var_73_object = Obj();
	FindActor(var_73_object, var_70_string);
	var_74_bool = var_73_object == 0; //@ne
	if(var_74_bool != 0) {
		var_69_bool = 0;
		return 2;
	}
	Trigger(var_73_object, var_71_string);
	var_69_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5892(var_26_object)
{
	var_27_bool = 0; var_28_int = 0;
	func_4893(var_27_bool, (int)7);
	if(var_27_bool != 0) {
		var_35_int = 0; var_36_object = Obj();
		var_26_object = var_36_object;
		TaskCall(2);
		func_49(var_37_object, var_35_int, var_36_object);
		TaskReturn();
		return 0;
	}
	var_258_bool = 0; var_259_int = 0;
	func_4893(var_258_bool, (int)8);
	if(var_258_bool != 0) {
		var_260_int = 0; var_261_object = Obj();
		var_26_object = var_261_object;
		TaskCall(4);
		func_1866(var_262_object, var_260_int, var_261_object);
		TaskReturn();
		return 0;
	}
	var_346_bool = 0; var_347_int = 0;
	func_4893(var_346_bool, (int)9);
	if(var_346_bool != 0) {
		var_348_int = 0; var_349_object = Obj();
		var_26_object = var_349_object;
		TaskCall(8);
		func_3175(var_350_object, var_348_int, var_349_object);
		TaskReturn();
		return 0;
	}
	var_453_bool = 0; var_454_int = 0;
	func_4893(var_453_bool, (int)10);
	if(var_453_bool != 0) {
		var_455_int = 0; var_456_object = Obj();
		var_26_object = var_456_object;
		TaskCall(6);
		func_2710(var_457_object, var_455_int, var_456_object);
		TaskReturn();
		return 0;
	}
	var_539_bool = 0; var_540_int = 0;
	func_4893(var_539_bool, (int)11);
	if(var_539_bool != 0) {
		var_541_int = 0; var_542_object = Obj();
		var_26_object = var_542_object;
		TaskCall(10);
		func_4124(var_543_object, var_541_int, var_542_object);
		TaskReturn();
		return 0;
	}
	func_4899((bool)0);
	return 0;
}


func_2056(var_2_object, var_103_string)
{
	var_104_bool = 0;
	func_4912(var_104_bool);
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
	func_4820(var_107_string);
	var_2_object = var_103_string;
	return 0;
}


func_5129()
{
	SetVariable("d8KainIsReason", (int)1);
	return 0;
}


func_5389(var_324_bool)
{
	var_326_int = 0; var_327_string = "";
	func_4855(var_326_int, "ood7Aglaja5");
	var_329_bool = var_326_int == (int)0;
	if(var_329_bool != 0) {
		var_324_bool = 1;
		return 0;
	}
	var_324_bool = 0;
	return 0;
}


func_5135()
{
	SetVariable("d11q01", (int)1);
	func_5744();
	func_5760();
	var_69_bool = 0; var_70_string = ""; var_71_string = "";
	func_4867(var_69_bool, "quest_d11_01", "init_girl");
	var_75_bool = 0; var_76_string = ""; var_77_string = "";
	func_4867(var_75_bool, "quest_d11_01", "remove_andrei");
	return 0;
}


func_4879(var_48_float)
{
	var_49_float = 0; var_50_float = 0;
	GetGameTime(var_50_float);
	var_50_float = var_48_float;
	return 2;
}


func_4884(var_29_int)
{
	var_30_float = 0; var_31_float = 0;
	GetGameTime(var_31_float);
	var_33_int = 0;
	var_33_int = var_31_float / (int)24;
	var_29_int = (int)1 + var_33_int;
	return 2;
}


func_5401(var_297_bool)
{
	var_299_int = 0; var_300_string = "";
	func_4855(var_299_int, "d7q01");
	var_302_bool = var_299_int == (int)3;
	if(var_302_bool != 0) {
		var_297_bool = 1;
		return 0;
	}
	var_297_bool = 0;
	return 0;
}


func_4124(var_0_object, var_541_int, var_542_object)
{
	var_544_object = Obj(); var_545_bool = 0; var_546_int = 0; var_547_bool = 0; var_548_object = Obj(); var_549_bool = 0; var_550_int = 0; var_551_bool = 0;
	var_0_object = var_542_object;
	var_552_bool = 0; var_553_object = Obj();
	var_542_object = var_553_object;
	func_4760(var_552_bool, var_553_object);
	var_554_bool = var_552_bool == 0; //@nz
	if(var_554_bool != 0) {
		var_541_int = -2;
		return 8;
	}
	CreateDialog(var_548_object);
	var_555_int = 0;
	func_4908(var_555_int);
	@@var_548_object:SetNPCName(var_555_int);
	var_556_string = "";
	func_4910(var_556_string);
	@@var_548_object:SetPhoto(var_556_string);
	var_557_int = 0;
	func_5679(var_557_int);
	@@var_548_object:SetPlayerName(var_557_int);
	IsOverrideActive(var_549_bool);
	var_558_bool = var_549_bool;
	if(var_558_bool != 0) {
		var_541_int = -2;
		return 8;
	}
	DoDialog(var_548_object);
	var_559_object = Obj(); var_560_object = Obj();
	var_542_object = var_559_object;
	var_548_object = var_560_object;
	TaskCall(11);
	func_4187(var_561_object, var_562_object, var_563_string, var_564_bool, var_559_object, var_560_object);
	TaskReturn();
	@@var_548_object:IsDialogEnd(var_551_bool);
	
Label_4169:
	var_612_bool = var_551_bool == 0; //@nz
	if(var_612_bool != 0) {
		sync();
		@@var_548_object:IsDialogEnd(var_551_bool);
		goto Label_4169;
	}
	var_542_object = Obj();
	func_4816();
	StopDialog(var_548_object);
	@@var_548_object:GetReturnValue((int)-1);
	var_550_int = var_541_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4893(var_27_bool, var_28_int)
{
	var_29_int = 0;
	func_4884(var_29_int);
	var_27_bool = var_29_int == var_28_int;
	return 0;
}


func_5662(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj();
	GetMainOutdoorScene(var_40_object);
	var_42_bool = var_40_object == 0; //@ne
	if(var_42_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_41_object = 0;
		var_41_object = var_37_object;
		return 4;
	}
	@@var_40_object:GetMap(var_41_object);
	var_41_object = var_37_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_4899(var_614_bool)
{
	var_615_bool = 0; var_616_bool = 0;
	var_617_string = "";
	func_4820("No");
	lshWaitForAnimEnd(var_616_bool);
	var_616_bool = var_614_bool;
	return 2;
}


func_5157()
{
	func_5776();
	var_95_bool = 0; var_96_string = ""; var_97_string = "";
	func_4867(var_95_bool, "quest_d11_01", "completed");
	return 0;
}


func_5413(var_363_bool)
{
	var_365_int = 0; var_366_string = "";
	func_4855(var_365_int, "d7q02");
	var_368_bool = var_365_int == (int)2;
	if(var_368_bool != 0) {
		var_363_bool = 1;
		return 0;
	}
	var_363_bool = 0;
	return 0;
}


func_3370(var_2_object, var_67_string)
{
	var_68_bool = 0;
	func_4912(var_68_bool);
	var_69_bool = var_68_bool == 0; //@nz
	if(var_69_bool != 0) {
		return 0;
	}
	var_70_bool = var_67_string == var_2_object;
	if(var_70_bool != 0) {
		return 0;
	}
	var_71_string = "";
	var_67_string = var_71_string;
	func_4820(var_71_string);
	var_2_object = var_67_string;
	return 0;
}


func_4908(var_87_int)
{
	var_87_int = 13334;
	return 0;
}


func_4910(var_88_string)
{
	var_88_string = "ui/NPC_Aglaja.png";
	return 0;
}


func_5679(var_89_int)
{
	var_90_int = 0; var_91_int = 0;
	GetVariable("player", var_91_int);
	var_94_bool = var_91_int == (int)0;
	if(var_94_bool != 0) {
		var_89_int = 200001;
		return 2;
	EMIT "GOTO 0x163e";
	}
	var_96_bool = var_91_int == (int)1;
	if(var_96_bool != 0) {
		var_89_int = 200002;
		return 2;
	}
	var_89_int = 200003;
	return 2;
}


func_5167()
{
	SetVariable("ood9Aglaja1", (int)1);
	return 0;
}


func_49(var_0_object, var_35_int, var_36_object)
{
	var_38_object = Obj(); var_39_bool = 0; var_40_int = 0; var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0;
	var_0_object = var_36_object;
	var_46_bool = 0; var_47_object = Obj();
	var_36_object = var_47_object;
	func_4760(var_46_bool, var_47_object);
	var_86_bool = var_46_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_35_int = -2;
		return 8;
	}
	CreateDialog(var_42_object);
	var_87_int = 0;
	func_4908(var_87_int);
	@@var_42_object:SetNPCName(var_87_int);
	var_88_string = "";
	func_4910(var_88_string);
	@@var_42_object:SetPhoto(var_88_string);
	var_89_int = 0;
	func_5679(var_89_int);
	@@var_42_object:SetPlayerName(var_89_int);
	IsOverrideActive(var_43_bool);
	var_97_bool = var_43_bool;
	if(var_97_bool != 0) {
		var_35_int = -2;
		return 8;
	}
	DoDialog(var_42_object);
	var_98_object = Obj(); var_99_object = Obj();
	var_36_object = var_98_object;
	var_42_object = var_99_object;
	TaskCall(3);
	func_112(var_100_object, var_101_object, var_102_string, var_103_bool, var_98_object, var_99_object);
	TaskReturn();
	@@var_42_object:IsDialogEnd(var_45_bool);
	
Label_94:
	var_256_bool = var_45_bool == 0; //@nz
	if(var_256_bool != 0) {
		sync();
		@@var_42_object:IsDialogEnd(var_45_bool);
		goto Label_94;
	}
	var_36_object = Obj();
	func_4816();
	StopDialog(var_42_object);
	@@var_42_object:GetReturnValue((int)-1);
	var_44_int = var_35_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4912(var_28_bool)
{
	var_28_bool = 1;
	return 0;
}


func_5425(var_95_bool)
{
	var_97_int = 0; var_98_string = "";
	func_4855(var_97_int, "d8q01");
	var_102_bool = var_97_int == (int)0;
	if(var_102_bool != 0) {
		var_95_bool = 1;
		return 0;
	}
	var_95_bool = 0;
	return 0;
}


func_4914()
{
	TriggerWorld("playsound", "giveitem");
	return 0;
}


func_5173()
{
	SetVariable("ood9Aglaja2", (int)1);
	return 0;
}


func_4920()
{
	SetVariable("ood7Aglaja1", (int)1);
	return 0;
}


func_5179()
{
	SetVariable("ood9Aglaja3", (int)1);
	return 0;
}


func_5437(var_130_bool)
{
	var_132_int = 0; var_133_string = "";
	func_4855(var_132_int, "ood8Aglaja1");
	var_135_bool = var_132_int == (int)0;
	if(var_135_bool != 0) {
		var_130_bool = 1;
		return 0;
	}
	var_130_bool = 0;
	return 0;
}


func_4926()
{
	SetVariable("ood7Aglaja2", (int)1);
	return 0;
}


func_5696()
{
	var_51_object = Obj(); var_52_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_52_object, (int)186, (int)1, (int)15449);
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0;
	var_52_object = var_58_object;
	func_5633(var_57_bool, var_58_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5185()
{
	SetVariable("ood9Aglaja4", (int)1);
	return 0;
}


func_2880(var_2_object, var_136_string)
{
	var_137_bool = 0;
	func_4912(var_137_bool);
	var_138_bool = var_137_bool == 0; //@nz
	if(var_138_bool != 0) {
		return 0;
	}
	var_139_bool = var_136_string == var_2_object;
	if(var_139_bool != 0) {
		return 0;
	}
	var_140_string = "";
	var_136_string = var_140_string;
	func_4820(var_140_string);
	var_2_object = var_136_string;
	return 0;
}


func_4932()
{
	var_53_object = Obj(); var_54_object = Obj();
	SetVariable("d7q01", (int)1);
	func_5662(Obj());
	var_57_object = var_54_object;
	var_68_float = 0;
	func_4879(var_68_float);
	@@var_54_object:AddMark("d7q01AglajaGotoBirdmaskSelf", "pt_map_aglaja", (int)1, (int)15410, var_68_float);
	var_75_float = 0;
	func_4879(var_75_float);
	@@var_54_object:AddMark("d7q01BirdmaskD", "pt_d7q01_dbirdmask", (int)1, (int)15408, var_75_float);
	var_80_float = 0;
	func_4879(var_80_float);
	@@var_54_object:AddMark("d7q01BirdmaskM", "pt_d7q01_mbirdmask", (int)1, (int)15409, var_80_float);
	var_85_float = 0;
	func_4879(var_85_float);
	@@var_54_object:AddMark("d7q01BirdmaskU", "pt_d7q01_ubirdmask", (int)1, (int)15407, var_85_float);
	func_5792();
	func_5808();
	var_120_bool = 0; var_121_string = ""; var_122_string = "";
	func_4867(var_120_bool, "quest_d7_01", "place_birdmasks");
	return 2;
}
EMIT "Stack[-1] = 0";


func_5191()
{
	SetVariable("ood9Aglaja5", (int)1);
	return 0;
}


func_5449(var_140_bool)
{
	var_142_int = 0; var_143_string = "";
	func_4855(var_142_int, "ood8Aglaja2");
	var_145_bool = var_142_int == (int)0;
	if(var_145_bool != 0) {
		var_140_bool = 1;
		return 0;
	}
	var_140_bool = 0;
	return 0;
}


func_1866(var_0_object, var_260_int, var_261_object)
{
	var_263_object = Obj(); var_264_bool = 0; var_265_int = 0; var_266_bool = 0; var_267_object = Obj(); var_268_bool = 0; var_269_int = 0; var_270_bool = 0;
	var_0_object = var_261_object;
	var_271_bool = 0; var_272_object = Obj();
	var_261_object = var_272_object;
	func_4760(var_271_bool, var_272_object);
	var_273_bool = var_271_bool == 0; //@nz
	if(var_273_bool != 0) {
		var_260_int = -2;
		return 8;
	}
	CreateDialog(var_267_object);
	var_274_int = 0;
	func_4908(var_274_int);
	@@var_267_object:SetNPCName(var_274_int);
	var_275_string = "";
	func_4910(var_275_string);
	@@var_267_object:SetPhoto(var_275_string);
	var_276_int = 0;
	func_5679(var_276_int);
	@@var_267_object:SetPlayerName(var_276_int);
	IsOverrideActive(var_268_bool);
	var_277_bool = var_268_bool;
	if(var_277_bool != 0) {
		var_260_int = -2;
		return 8;
	}
	DoDialog(var_267_object);
	var_278_object = Obj(); var_279_object = Obj();
	var_261_object = var_278_object;
	var_267_object = var_279_object;
	TaskCall(5);
	func_1929(var_280_object, var_281_object, var_282_string, var_283_bool, var_278_object, var_279_object);
	TaskReturn();
	@@var_267_object:IsDialogEnd(var_270_bool);
	
Label_1911:
	var_344_bool = var_270_bool == 0; //@nz
	if(var_344_bool != 0) {
		sync();
		@@var_267_object:IsDialogEnd(var_270_bool);
		goto Label_1911;
	}
	var_261_object = Obj();
	func_4816();
	StopDialog(var_267_object);
	@@var_267_object:GetReturnValue((int)-1);
	var_269_int = var_260_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_331(var_2_object, var_245_string)
{
	var_246_bool = 0;
	func_4912(var_246_bool);
	var_247_bool = var_246_bool == 0; //@nz
	if(var_247_bool != 0) {
		return 0;
	}
	var_248_bool = var_245_string == var_2_object;
	if(var_248_bool != 0) {
		return 0;
	}
	var_249_string = "";
	var_245_string = var_249_string;
	func_4820(var_249_string);
	var_2_object = var_245_string;
	return 0;
}


func_5197()
{
	var_33_object = Obj(); var_34_object = Obj();
	SetVariable("d10q01", (int)1);
	func_5662(Obj());
	var_37_object = var_34_object;
	var_48_float = 0;
	func_4879(var_48_float);
	@@var_34_object:AddMark("d10q01AglajaGotoPetr", "pt_map_petr", (int)1, (int)15451, var_48_float);
	func_5696();
	func_5712();
	var_85_bool = 0; var_86_string = ""; var_87_string = "";
	func_4867(var_85_bool, "quest_d10_01", "init_house");
	return 2;
}
EMIT "Stack[-1] = 0";


func_5712()
{
	var_76_object = Obj(); var_77_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_77_object, (int)187, (int)1, (int)15450);
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0;
	var_77_object = var_83_object;
	func_5633(var_82_bool, var_83_object, (int)186);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5461(var_146_bool)
{
	var_148_int = 0; var_149_string = "";
	func_4855(var_148_int, "d8TermitnikLoad");
	var_151_bool = var_148_int != (int)0;
	if(var_151_bool != 0) {
		var_146_bool = 1;
		return 0;
	}
	var_146_bool = 0;
	return 0;
}


func_4187(var_0_object, var_1_object, var_2_object, var_3_object, var_559_object, var_560_object)
{
	var_0_object = var_560_object;
	var_1_object = var_559_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_566_bool = 0; var_567_object = Obj();
		var_567_object = var_1_object;
		func_5485(var_567_object);
		if(var_566_bool != 0) {
			var_572_object = Obj(); var_573_object = Obj();
			var_572_object = var_1_object;
			var_573_object = var_0_object;
			func_5270();
			var_576_string = "";
			func_4285(var_560_object, "Neutral");
			@@@var_0_object:SetMessage((int)14194);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)14195, (int)15410, (int)15409);
		} else {
				var_593_string = "";
				func_4285(var_560_object, "Neutral");
				@@@var_0_object:SetMessage((int)14222);
				@@@var_0_object:ClearReplies();
				var_595_bool = 0; var_596_object = Obj();
				var_596_object = var_1_object;
				func_5497(var_596_object);
				if(var_595_bool != 0) {
					@@@var_0_object:AddReply((int)14223, (int)15442, (int)15441);
				}
				var_604_bool = 0; var_605_object = Obj();
				var_605_object = var_1_object;
				func_5276(var_604_bool, var_605_object);
				if(var_604_bool != 0) {
					@@@var_0_object:AddReply((int)14234, (int)15453, (int)15452);
				}
				@@@var_0_object:AddReply((int)14239, (int)-1, (int)15457);
				goto Label_4255;
		}
	}
Label_4255:
	var_585_bool = 0;
	func_4912(var_585_bool);
	if(var_585_bool != 0) {

	Label_4259:
		lshWaitForAnimEnd();
		var_586_object = var_3_object;
		if(var_586_object != 0) {
		} else {
			var_587_string = "";
			var_587_string = var_2_object;
			func_4820(var_587_string);
			goto Label_4259;
	}
		PlayAnimation("all", "idle");

	Label_4274:
		WaitForAnimEnd();
		var_590_object = var_3_object;
		if(var_590_object != 0) {
			goto Label_4284;
		}
		PlayAnimation("all", "idle");
		goto Label_4274;

	}
	goto Label_4284;
	
Label_4284:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x105f";


func_5728()
{
	var_104_object = Obj(); var_105_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_105_object, (int)191, (int)1, (int)15476);
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0;
	var_105_object = var_111_object;
	func_5633(var_110_bool, var_111_object, (int)186);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5473(var_101_bool)
{
	var_103_int = 0; var_104_string = "";
	func_4855(var_103_int, "d9TalkToPolkovodec");
	var_106_bool = var_103_int != (int)0;
	if(var_106_bool != 0) {
		var_101_bool = 1;
		return 0;
	}
	var_101_bool = 0;
	return 0;
}


func_3175(var_0_object, var_348_int, var_349_object)
{
	var_351_object = Obj(); var_352_bool = 0; var_353_int = 0; var_354_bool = 0; var_355_object = Obj(); var_356_bool = 0; var_357_int = 0; var_358_bool = 0;
	var_0_object = var_349_object;
	var_359_bool = 0; var_360_object = Obj();
	var_349_object = var_360_object;
	func_4760(var_359_bool, var_360_object);
	var_361_bool = var_359_bool == 0; //@nz
	if(var_361_bool != 0) {
		var_348_int = -2;
		return 8;
	}
	CreateDialog(var_355_object);
	var_362_int = 0;
	func_4908(var_362_int);
	@@var_355_object:SetNPCName(var_362_int);
	var_363_string = "";
	func_4910(var_363_string);
	@@var_355_object:SetPhoto(var_363_string);
	var_364_int = 0;
	func_5679(var_364_int);
	@@var_355_object:SetPlayerName(var_364_int);
	IsOverrideActive(var_356_bool);
	var_365_bool = var_356_bool;
	if(var_365_bool != 0) {
		var_348_int = -2;
		return 8;
	}
	DoDialog(var_355_object);
	var_366_object = Obj(); var_367_object = Obj();
	var_349_object = var_366_object;
	var_355_object = var_367_object;
	TaskCall(9);
	func_3238(var_368_object, var_369_object, var_370_string, var_371_bool, var_366_object, var_367_object);
	TaskReturn();
	@@var_355_object:IsDialogEnd(var_358_bool);
	
Label_3220:
	var_451_bool = var_358_bool == 0; //@nz
	if(var_451_bool != 0) {
		sync();
		@@var_355_object:IsDialogEnd(var_358_bool);
		goto Label_3220;
	}
	var_349_object = Obj();
	func_4816();
	StopDialog(var_355_object);
	@@var_355_object:GetReturnValue((int)-1);
	var_357_int = var_348_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_5228()
{
	SetVariable("ood10Aglaja1", (int)1);
	return 0;
}


func_5485(var_100_bool)
{
	var_102_int = 0; var_103_string = "";
	func_4855(var_102_int, "d11q01");
	var_107_bool = var_102_int == (int)0;
	if(var_107_bool != 0) {
		var_100_bool = 1;
		return 0;
	}
	var_100_bool = 0;
	return 0;
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_98_object, var_99_object)
{
	var_0_object = var_99_object;
	var_1_object = var_98_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_105_bool = 0;
		var_105_bool = 0;
		var_106_bool = 0; var_107_object = Obj();
		var_107_object = var_1_object;
		func_5286(var_107_object);
		if(var_106_bool != 0) {
			var_114_bool = 0; var_115_object = Obj();
			var_115_object = var_1_object;
			func_5276(var_114_bool, var_115_object);
			if(var_114_bool != 0) {
				var_105_bool = 1;
			}
		}
		if(var_105_bool != 0) {
			var_118_string = "";
			func_331(var_99_object, "Neutral");
			@@@var_0_object:SetMessage((int)12185);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12186, (int)14254, (int)13341);
			@@@var_0_object:AddReply((int)13037, (int)14245, (int)14244);
		} else {
				var_148_bool = 0;
				var_148_bool = 0;
				var_149_bool = 0; var_150_object = Obj();
				var_150_object = var_1_object;
				func_5298(var_150_object);
				if(var_149_bool != 0) {
					var_155_bool = 0; var_156_object = Obj();
					var_156_object = var_1_object;
					func_5276(var_155_bool, var_156_object);
					if(var_155_bool != 0) {
						var_148_bool = 1;
					}
				}
				if(var_148_bool != 0) {
					var_157_string = "";
					func_331(var_99_object, "Neutral");
					@@@var_0_object:SetMessage((int)13033);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)13034, (int)14260, (int)14241);
					goto Label_301;
				}
				var_162_bool = 0; var_163_object = Obj();
				var_163_object = var_1_object;
				func_5310(var_163_object);
				if(var_162_bool != 0) {
					var_168_string = "";
					func_331(var_99_object, "Neutral");
					@@@var_0_object:SetMessage((int)13074);
					@@@var_0_object:ClearReplies();
					@@@var_0_object:AddReply((int)13076, (int)14287, (int)14286);
					@@@var_0_object:AddReply((int)13117, (int)14336, (int)14335);
					goto Label_301;
				}
				var_176_string = "";
				func_331(var_99_object, "Neutral");
				@@@var_0_object:SetMessage((int)13031);
				@@@var_0_object:ClearReplies();
				var_178_bool = 0; var_179_object = Obj();
				var_179_object = var_1_object;
				func_5401(var_179_object);
				if(var_178_bool != 0) {
					@@@var_0_object:AddReply((int)13141, (int)14362, (int)14360);
				}
				var_187_bool = 0;
				var_187_bool = 0;
				var_188_bool = 0; var_189_object = Obj();
				var_189_object = var_1_object;
				func_5358(var_188_bool, var_189_object);
				if(var_188_bool != 0) {
					var_205_bool = 0; var_206_object = Obj();
					var_206_object = var_1_object;
					func_5389(var_206_object);
					if(var_205_bool != 0) {
						var_187_bool = 1;
					}
				}
				if(var_187_bool != 0) {
					@@@var_0_object:AddReply((int)13075, (int)14369, (int)14285);
				}
				var_214_bool = 0;
				var_214_bool = 0;
				var_215_bool = 0; var_216_object = Obj();
				var_216_object = var_1_object;
				func_5334(var_216_object);
				if(var_215_bool != 0) {
					var_221_bool = 0; var_222_object = Obj();
					var_222_object = var_1_object;
					func_5346(var_222_object);
					if(var_221_bool != 0) {
						var_214_bool = 1;
					}
				}
				if(var_214_bool != 0) {
					@@@var_0_object:AddReply((int)13125, (int)14345, (int)14344);
				}
				var_230_bool = 0; var_231_object = Obj();
				var_231_object = var_1_object;
				func_5322(var_231_object);
				if(var_230_bool != 0) {
					@@@var_0_object:AddReply((int)13035, (int)14243, (int)14242);
				}
				var_239_bool = 0; var_240_object = Obj();
				var_240_object = var_1_object;
				func_5276(var_239_bool, var_240_object);
				if(var_239_bool != 0) {
					@@@var_0_object:AddReply((int)13142, (int)14364, (int)14361);
				}
				var_244_bool = 0; var_245_object = Obj();
				var_245_object = var_1_object;
				func_5413(var_245_object);
				if(var_244_bool != 0) {
					@@@var_0_object:AddReply((int)13377, (int)14610, (int)14609);
				}
				@@@var_0_object:AddReply((int)13032, (int)-1, (int)14239);
				goto Label_301;
		}
	}
Label_301:
	var_140_bool = 0;
	func_4912(var_140_bool);
	if(var_140_bool != 0) {

	Label_305:
		lshWaitForAnimEnd();
		var_141_object = var_3_object;
		if(var_141_object != 0) {
		} else {
			var_142_string = "";
			var_142_string = var_2_object;
			func_4820(var_142_string);
			goto Label_305;
	}
		PlayAnimation("all", "idle");

	Label_320:
		WaitForAnimEnd();
		var_145_object = var_3_object;
		if(var_145_object != 0) {
			goto Label_330;
		}
		PlayAnimation("all", "idle");
		goto Label_320;

	}
	goto Label_330;
	
Label_330:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x74";


func_5744()
{
	var_35_object = Obj(); var_36_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_36_object, (int)192, (int)1, (int)15477);
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0;
	var_36_object = var_42_object;
	func_5633(var_41_bool, var_42_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5234()
{
	var_95_object = Obj(); var_96_object = Obj(); var_97_object = Obj(); var_98_object = Obj();
	func_5662(Obj());
	var_99_object = var_97_object;
	@@var_97_object:FindMark(var_98_object, "d10q01AglajaGotoPetr");
	var_101_object = var_98_object;
	if(var_101_object != 0) {
		@@var_98_object:Remove();
	}
	@@var_97_object:FindMark(var_98_object, "d10q01SoldierGotoPetr");
	var_103_object = var_98_object;
	if(var_103_object != 0) {
		@@var_98_object:Remove();
	}
	func_5728();
	var_113_bool = 0; var_114_string = ""; var_115_string = "";
	func_4867(var_113_bool, "quest_d10_01", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5497(var_133_bool)
{
	var_135_int = 0; var_136_string = "";
	func_4855(var_135_int, "d11q01");
	var_138_bool = var_135_int == (int)4;
	if(var_138_bool != 0) {
		var_133_bool = 1;
		return 0;
	}
	var_133_bool = 0;
	return 0;
}


func_4990()
{
	SetVariable("ood7Aglaja3", (int)1);
	return 0;
}


func_5760()
{
	var_60_object = Obj(); var_61_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_61_object, (int)193, (int)1, (int)15478);
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0;
	var_61_object = var_67_object;
	func_5633(var_66_bool, var_67_object, (int)192);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4996(var_159_object)
{
	var_161_object = Obj(); var_162_int = 0; var_163_object = Obj(); var_164_int = 0;
	SetVariable("d7q01", (int)2);
	func_5662(Obj());
	var_167_object = var_163_object;
	var_172_float = 0;
	func_4879(var_172_float);
	@@var_163_object:AddMark("d7q01AglajaFindLierSelf", "pt_map_aglaja", (int)1, (int)15411, var_172_float);
	func_5840();
	@@var_159_object:RemoveItemByType(var_164_int, "d7q01_mreport", (int)1);
	@@var_159_object:RemoveItemByType(var_164_int, "d7q01_dreport", (int)1);
	@@var_159_object:RemoveItemByType(var_164_int, "d7q01_ureport", (int)1);
	return 4;
}
EMIT "Stack[-2] = 0";


func_5509(var_55_bool)
{
	var_57_int = 0; var_58_string = "";
	func_4855(var_57_int, "ood9Aglaja1");
	var_62_bool = var_57_int == (int)0;
	if(var_62_bool != 0) {
		var_55_bool = 1;
		return 0;
	}
	var_55_bool = 0;
	return 0;
}


func_4743(var_26_bool, var_27_object)
{
	var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0;
	@@var_27_object:GetPosition(var_32_cvector);
	GetPosition(var_33_cvector);
	var_34_cvector = var_32_cvector - var_33_cvector;
	var_36_float = GetByIndex(var_34_cvector, 0);
	var_37_float = GetByIndex(var_34_cvector, 2);
	Rotate(var_36_float, var_37_float, var_35_bool);
	var_35_bool = var_26_bool;
	return 8;
}


func_1929(var_0_object, var_1_object, var_2_object, var_3_object, var_278_object, var_279_object)
{
	var_0_object = var_279_object;
	var_1_object = var_278_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_285_bool = 0; var_286_object = Obj();
		var_286_object = var_1_object;
		func_5425(var_286_object);
		if(var_285_bool != 0) {
			var_291_string = "";
			func_2056(var_279_object, "Neutral");
			@@@var_0_object:SetMessage((int)13413);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13415, (int)14650, (int)14649);
			@@@var_0_object:AddReply((int)13417, (int)14949, (int)14652);
			@@@var_0_object:AddReply((int)13414, (int)14650, (int)14648);
		} else {
				var_314_string = "";
				func_2056(var_279_object, "Neutral");
				@@@var_0_object:SetMessage((int)13409);
				@@@var_0_object:ClearReplies();
				var_316_bool = 0; var_317_object = Obj();
				var_317_object = var_1_object;
				func_5437(var_317_object);
				if(var_316_bool != 0) {
					@@@var_0_object:AddReply((int)13411, (int)13400, (int)14645);
				}
				var_325_bool = 0;
				var_325_bool = 0;
				var_326_bool = 0; var_327_object = Obj();
				var_327_object = var_1_object;
				func_5449(var_327_object);
				if(var_326_bool != 0) {
					var_332_bool = 0; var_333_object = Obj();
					var_333_object = var_1_object;
					func_5461(var_333_object);
					if(var_332_bool != 0) {
						var_325_bool = 1;
					}
				}
				if(var_325_bool != 0) {
					@@@var_0_object:AddReply((int)13412, (int)13452, (int)14646);
				}
				@@@var_0_object:AddReply((int)13410, (int)-1, (int)14644);
				goto Label_2026;
		}
	}
Label_2026:
	var_306_bool = 0;
	func_4912(var_306_bool);
	if(var_306_bool != 0) {

	Label_2030:
		lshWaitForAnimEnd();
		var_307_object = var_3_object;
		if(var_307_object != 0) {
		} else {
			var_308_string = "";
			var_308_string = var_2_object;
			func_4820(var_308_string);
			goto Label_2030;
	}
		PlayAnimation("all", "idle");

	Label_2045:
		WaitForAnimEnd();
		var_311_object = var_3_object;
		if(var_311_object != 0) {
			goto Label_2055;
		}
		PlayAnimation("all", "idle");
		goto Label_2045;

	}
	goto Label_2055;
	
Label_2055:
	return 0;
	
}
EMIT "PushEmpty(string)";
EMIT "Stack[-1] = \"Neutral\" // @poff=0";
EMIT "Call 0x808";
EMIT "Pop(1)";
EMIT "Push((int) 15089)";
EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
EMIT "Pop(1)";
EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
EMIT "Pop(0)";
EMIT "Push((int) 15090)";
EMIT "Push((int) 16357)";
EMIT "Push((int) 16356)";
EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
EMIT "Pop(3)";
EMIT "GOTO 0x7ea";
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x78d";


func_5264()
{
	SetVariable("ood10Aglaja2", (int)1);
	return 0;
}


func_5776()
{
	var_86_object = Obj(); var_87_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_87_object, (int)196, (int)1, (int)15481);
	var_92_bool = 0; var_93_object = Obj(); var_94_int = 0;
	var_87_object = var_93_object;
	func_5633(var_92_bool, var_93_object, (int)192);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5521(var_91_bool)
{
	var_93_int = 0; var_94_string = "";
	func_4855(var_93_int, "ood9Aglaja2");
	var_96_bool = var_93_int == (int)0;
	if(var_96_bool != 0) {
		var_91_bool = 1;
		return 0;
	}
	var_91_bool = 0;
	return 0;
}


func_4755(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0;
	IsLoaded(var_28_bool);
	var_28_bool = var_26_bool;
	return 2;
}


func_5270()
{
	SetVariable("d11AglajaVisit", (int)1);
	return 0;
}


func_2710(var_0_object, var_455_int, var_456_object)
{
	var_458_object = Obj(); var_459_bool = 0; var_460_int = 0; var_461_bool = 0; var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0;
	var_0_object = var_456_object;
	var_466_bool = 0; var_467_object = Obj();
	var_456_object = var_467_object;
	func_4760(var_466_bool, var_467_object);
	var_468_bool = var_466_bool == 0; //@nz
	if(var_468_bool != 0) {
		var_455_int = -2;
		return 8;
	}
	CreateDialog(var_462_object);
	var_469_int = 0;
	func_4908(var_469_int);
	@@var_462_object:SetNPCName(var_469_int);
	var_470_string = "";
	func_4910(var_470_string);
	@@var_462_object:SetPhoto(var_470_string);
	var_471_int = 0;
	func_5679(var_471_int);
	@@var_462_object:SetPlayerName(var_471_int);
	IsOverrideActive(var_463_bool);
	var_472_bool = var_463_bool;
	if(var_472_bool != 0) {
		var_455_int = -2;
		return 8;
	}
	DoDialog(var_462_object);
	var_473_object = Obj(); var_474_object = Obj();
	var_456_object = var_473_object;
	var_462_object = var_474_object;
	TaskCall(7);
	func_2773(var_475_object, var_476_object, var_477_string, var_478_bool, var_473_object, var_474_object);
	TaskReturn();
	@@var_462_object:IsDialogEnd(var_465_bool);
	
Label_2755:
	var_537_bool = var_465_bool == 0; //@nz
	if(var_537_bool != 0) {
		sync();
		@@var_462_object:IsDialogEnd(var_465_bool);
		goto Label_2755;
	}
	var_456_object = Obj();
	func_4816();
	StopDialog(var_462_object);
	@@var_462_object:GetReturnValue((int)-1);
	var_464_int = var_455_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_4760(var_46_bool, var_47_object)
{
	var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0;
	@@var_47_object:GetPosition(var_57_cvector);
	@@var_47_object:GetEyesHeight(var_56_float);
	var_64_float = GetByIndex(var_57_cvector, 1);
	var_64_float = var_64_float + var_56_float;
	SetByIndex(var_57_cvector, 1) = var_64_float;
	GetPosition(var_58_cvector);
	GetEyesHeight(var_56_float);
	var_65_float = GetByIndex(var_58_cvector, 1);
	var_65_float = var_65_float + var_56_float;
	SetByIndex(var_58_cvector, 1) = var_65_float;
	var_59_cvector = var_57_cvector - var_58_cvector;
	var_66_float = GetByIndex(var_59_cvector, 1);
	SetByIndex(var_59_cvector, 1) = (float)0;
	var_67_int = var_59_cvector | var_59_cvector;
	var_68_float = sqrt(var_67_int);
	var_59_cvector = var_59_cvector / var_68_float;
	var_60_cvector = -var_59_cvector;
	var_70_float = var_59_cvector * (int)70;
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	var_72_cvector = var_60_cvector ^ CVector(0.0, 1.0, 0.0);
	func_4845(var_71_cvector, var_72_cvector);
	var_80_float = var_71_cvector * (int)25;
	var_81_int = var_70_float + var_80_float;
	var_61_cvector = var_81_int - CVector(0.0, 10.0, 0.0);
	var_62_cvector = var_58_cvector + var_61_cvector;
	IsOverrideActive(var_63_bool);
	var_83_bool = var_63_bool;
	if(var_83_bool != 0) {
		var_46_bool = 0;
		return 16;
	}
	StopWorld();
	CameraTransit(var_62_cvector, var_60_cvector);
	var_84_float = GetByIndex(var_61_cvector, 0);
	var_85_float = GetByIndex(var_61_cvector, 2);
	Rotate(var_84_float, var_85_float);
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_46_bool = 1;
	return 16;
}


func_5276(var_142_bool, var_143_object)
{
	var_144_bool = 0; var_145_object = Obj();
	var_143_object = var_145_object;
	func_5617(var_145_object);
	if(var_144_bool != 0) {
		var_142_bool = 1;
		return 0;
	}
	var_142_bool = 0;
	return 0;
}


func_5533(var_107_bool)
{
	var_109_int = 0; var_110_string = "";
	func_4855(var_109_int, "ood9Aglaja3");
	var_112_bool = var_109_int == (int)0;
	if(var_112_bool != 0) {
		var_107_bool = 1;
		return 0;
	}
	var_107_bool = 0;
	return 0;
}


func_5792()
{
	var_86_object = Obj(); var_87_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_87_object, (int)165, (int)1, (int)15412);
	var_92_bool = 0; var_93_object = Obj(); var_94_int = 0;
	var_87_object = var_93_object;
	func_5633(var_92_bool, var_93_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5286(var_233_bool)
{
	var_235_int = 0; var_236_string = "";
	func_4855(var_235_int, "ood7Aglaja1");
	var_240_bool = var_235_int == (int)0;
	if(var_240_bool != 0) {
		var_233_bool = 1;
		return 0;
	}
	var_233_bool = 0;
	return 0;
}


func_3238(var_0_object, var_1_object, var_2_object, var_3_object, var_366_object, var_367_object)
{
	var_0_object = var_367_object;
	var_1_object = var_366_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_373_bool = 0; var_374_object = Obj();
		var_374_object = var_1_object;
		func_5509(var_374_object);
		if(var_373_bool != 0) {
			var_379_object = Obj(); var_380_object = Obj();
			var_379_object = var_1_object;
			var_380_object = var_0_object;
			func_5167();
			var_383_string = "";
			func_3370(var_367_object, "Neutral");
			@@@var_0_object:SetMessage((int)13802);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)13803, (int)15030, (int)15029);
			@@@var_0_object:AddReply((int)13815, (int)15042, (int)15041);
		} else {
				var_403_string = "";
				func_3370(var_367_object, "Neutral");
				@@@var_0_object:SetMessage((int)13818);
				@@@var_0_object:ClearReplies();
				var_405_bool = 0; var_406_object = Obj();
				var_406_object = var_1_object;
				func_5521(var_406_object);
				if(var_405_bool != 0) {
					@@@var_0_object:AddReply((int)13819, (int)15047, (int)15046);
				}
				var_414_bool = 0;
				var_414_bool = 0;
				var_415_bool = 0; var_416_object = Obj();
				var_416_object = var_1_object;
				func_5473(var_416_object);
				if(var_415_bool != 0) {
					var_421_bool = 0; var_422_object = Obj();
					var_422_object = var_1_object;
					func_5533(var_422_object);
					if(var_421_bool != 0) {
						var_414_bool = 1;
					}
				}
				if(var_414_bool != 0) {
					@@@var_0_object:AddReply((int)13842, (int)15070, (int)15069);
				}
				var_430_bool = 0; var_431_object = Obj();
				var_431_object = var_1_object;
				func_5545(var_431_object);
				if(var_430_bool != 0) {
					@@@var_0_object:AddReply((int)13852, (int)15080, (int)15079);
				}
				var_439_bool = 0; var_440_object = Obj();
				var_440_object = var_1_object;
				func_5557(var_440_object);
				if(var_439_bool != 0) {
					@@@var_0_object:AddReply((int)13865, (int)15093, (int)15092);
				}
				@@@var_0_object:AddReply((int)13880, (int)-1, (int)15107);
				goto Label_3340;
		}
	}
Label_3340:
	var_395_bool = 0;
	func_4912(var_395_bool);
	if(var_395_bool != 0) {

	Label_3344:
		lshWaitForAnimEnd();
		var_396_object = var_3_object;
		if(var_396_object != 0) {
		} else {
			var_397_string = "";
			var_397_string = var_2_object;
			func_4820(var_397_string);
			goto Label_3344;
	}
		PlayAnimation("all", "idle");

	Label_3359:
		WaitForAnimEnd();
		var_400_object = var_3_object;
		if(var_400_object != 0) {
			goto Label_3369;
		}
		PlayAnimation("all", "idle");
		goto Label_3359;

	}
	goto Label_3369;
	
Label_3369:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xcaa";


func_5031()
{
	SetVariable("ood7Aglaja4", (int)1);
	return 0;
}


func_5545(var_116_bool)
{
	var_118_int = 0; var_119_string = "";
	func_4855(var_118_int, "ood9Aglaja4");
	var_121_bool = var_118_int == (int)0;
	if(var_121_bool != 0) {
		var_116_bool = 1;
		return 0;
	}
	var_116_bool = 0;
	return 0;
}


func_5037()
{
	SetVariable("ood7Aglaja5", (int)1);
	return 0;
}


func_5808()
{
	var_111_object = Obj(); var_112_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_112_object, (int)166, (int)1, (int)15413);
	var_117_bool = 0; var_118_object = Obj(); var_119_int = 0;
	var_112_object = var_118_object;
	func_5633(var_117_bool, var_118_object, (int)165);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5298(var_268_bool)
{
	var_270_int = 0; var_271_string = "";
	func_4855(var_270_int, "ood7Aglaja2");
	var_273_bool = var_270_int == (int)0;
	if(var_273_bool != 0) {
		var_268_bool = 1;
		return 0;
	}
	var_268_bool = 0;
	return 0;
}


func_5043()
{
	var_130_object = Obj(); var_131_object = Obj(); var_132_object = Obj(); var_133_object = Obj();
	func_5662(Obj());
	var_134_object = var_132_object;
	@@var_132_object:FindMark(var_133_object, "d7q01AglajaFindLierSelf");
	var_136_object = var_133_object;
	if(var_136_object != 0) {
		@@var_133_object:Remove();
	}
	@@var_132_object:FindMark(var_133_object, "d7q01AglajaGotoBirdmaskSelf");
	var_138_object = var_133_object;
	if(var_138_object != 0) {
		@@var_133_object:Remove();
	}
	@@var_132_object:FindMark(var_133_object, "d7q01BirdmaskD");
	var_140_object = var_133_object;
	if(var_140_object != 0) {
		@@var_133_object:Remove();
	}
	@@var_132_object:FindMark(var_133_object, "d7q01BirdmaskM");
	var_142_object = var_133_object;
	if(var_142_object != 0) {
		@@var_133_object:Remove();
	}
	@@var_132_object:FindMark(var_133_object, "d7q01BirdmaskU");
	var_144_object = var_133_object;
	if(var_144_object != 0) {
		@@var_133_object:Remove();
	}
	func_5824();
	var_154_bool = 0; var_155_string = ""; var_156_string = "";
	func_4867(var_154_bool, "quest_d7_01", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_5557(var_125_bool)
{
	var_127_int = 0; var_128_string = "";
	func_4855(var_127_int, "ood9Aglaja5");
	var_130_bool = var_127_int == (int)0;
	if(var_130_bool != 0) {
		var_125_bool = 1;
		return 0;
	}
	var_125_bool = 0;
	return 0;
}


func_4285(var_2_object, var_112_string)
{
	var_113_bool = 0;
	func_4912(var_113_bool);
	var_114_bool = var_113_bool == 0; //@nz
	if(var_114_bool != 0) {
		return 0;
	}
	var_115_bool = var_112_string == var_2_object;
	if(var_115_bool != 0) {
		return 0;
	}
	var_116_string = "";
	var_112_string = var_116_string;
	func_4820(var_116_string);
	var_2_object = var_112_string;
	return 0;
}


func_5310(var_281_bool)
{
	var_283_int = 0; var_284_string = "";
	func_4855(var_283_int, "d7q01");
	var_286_bool = var_283_int == (int)0;
	if(var_286_bool != 0) {
		var_281_bool = 1;
		return 0;
	}
	var_281_bool = 0;
	return 0;
}


func_5824()
{
	var_145_object = Obj(); var_146_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_146_object, (int)168, (int)1, (int)15415);
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0;
	var_146_object = var_152_object;
	func_5633(var_151_bool, var_152_object, (int)165);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5569(var_124_bool)
{
	var_126_int = 0; var_127_string = "";
	func_4855(var_126_int, "ood10Aglaja1");
	var_131_bool = var_126_int == (int)0;
	if(var_131_bool != 0) {
		var_124_bool = 1;
		return 0;
	}
	var_124_bool = 0;
	return 0;
}


func_5322(var_349_bool)
{
	var_351_int = 0; var_352_string = "";
	func_4855(var_351_int, "ood7Aglaja3");
	var_354_bool = var_351_int == (int)0;
	if(var_354_bool != 0) {
		var_349_bool = 1;
		return 0;
	}
	var_349_bool = 0;
	return 0;
}


func_5581(var_167_bool)
{
	var_169_int = 0; var_170_string = "";
	func_4855(var_169_int, "d10q01");
	var_172_bool = var_169_int == (int)1000;
	if(var_172_bool != 0) {
		var_167_bool = 1;
		return 0;
	}
	var_167_bool = 0;
	return 0;
}


func_4816()
{
	CameraSwitchToNormal();
	return 0;
}


func_5840()
{
	var_173_object = Obj(); var_174_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_174_object, (int)167, (int)1, (int)15414);
	var_179_bool = 0; var_180_object = Obj(); var_181_int = 0;
	var_174_object = var_180_object;
	func_5633(var_179_bool, var_180_object, (int)165);
	return 2;
}
EMIT "Stack[-1] = 0";


func_4820(var_30_string)
{
	var_31_float = 0; var_32_float = 0; var_33_float = 0; var_34_float = 0;
	var_36_int = "playing " + var_30_string;
	Trace(var_36_int);
	lshGetAnimTimes(var_30_string, var_33_float, var_34_float);
	lshPlayAnimation(var_33_float, var_34_float);
	var_38_int = "start: " + var_33_float;
	Trace(var_38_int);
	var_40_int = "end: " + var_34_float;
	Trace(var_40_int);
	return 4;
}


func_2773(var_0_object, var_1_object, var_2_object, var_3_object, var_473_object, var_474_object)
{
	var_0_object = var_474_object;
	var_1_object = var_473_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_480_bool = 0; var_481_object = Obj();
		var_481_object = var_1_object;
		func_5569(var_481_object);
		if(var_480_bool != 0) {
			var_486_object = Obj(); var_487_object = Obj();
			var_486_object = var_1_object;
			var_487_object = var_0_object;
			func_5228();
			var_490_string = "";
			func_2880(var_474_object, "Neutral");
			@@@var_0_object:SetMessage((int)12899);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)12900, (int)14103, (int)14102);
		} else {
				var_507_string = "";
				func_2880(var_474_object, "Neutral");
				@@@var_0_object:SetMessage((int)12905);
				@@@var_0_object:ClearReplies();
				var_509_bool = 0; var_510_object = Obj();
				var_510_object = var_1_object;
				func_5605(var_510_object);
				if(var_509_bool != 0) {
					@@@var_0_object:AddReply((int)12906, (int)14109, (int)14108);
				}
				var_518_bool = 0;
				var_518_bool = 0;
				var_519_bool = 0; var_520_object = Obj();
				var_520_object = var_1_object;
				func_5581(var_520_object);
				if(var_519_bool != 0) {
					var_525_bool = 0; var_526_object = Obj();
					var_526_object = var_1_object;
					func_5593(var_526_object);
					if(var_525_bool != 0) {
						var_518_bool = 1;
					}
				}
				if(var_518_bool != 0) {
					@@@var_0_object:AddReply((int)12912, (int)14119, (int)14114);
				}
				@@@var_0_object:AddReply((int)12911, (int)-1, (int)14113);
				goto Label_2850;
		}
	}
Label_2850:
	var_499_bool = 0;
	func_4912(var_499_bool);
	if(var_499_bool != 0) {

	Label_2854:
		lshWaitForAnimEnd();
		var_500_object = var_3_object;
		if(var_500_object != 0) {
		} else {
			var_501_string = "";
			var_501_string = var_2_object;
			func_4820(var_501_string);
			goto Label_2854;
	}
		PlayAnimation("all", "idle");

	Label_2869:
		WaitForAnimEnd();
		var_504_object = var_3_object;
		if(var_504_object != 0) {
			goto Label_2879;
		}
		PlayAnimation("all", "idle");
		goto Label_2869;

	}
	goto Label_2879;
	
Label_2879:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0xad9";


func_5334(var_334_bool)
{
	var_336_int = 0; var_337_string = "";
	func_4855(var_336_int, "d7q01");
	var_339_bool = var_336_int == (int)1;
	if(var_339_bool != 0) {
		var_334_bool = 1;
		return 0;
	}
	var_334_bool = 0;
	return 0;
}


func_5593(var_173_bool)
{
	var_175_int = 0; var_176_string = "";
	func_4855(var_175_int, "ood10Aglaja2");
	var_178_bool = var_175_int == (int)0;
	if(var_178_bool != 0) {
		var_173_bool = 1;
		return 0;
	}
	var_173_bool = 0;
	return 0;
}


func_5856()
{
	var_35_object = Obj(); var_36_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_36_object, (int)175, (int)1, (int)15434);
	var_41_bool = 0; var_42_object = Obj(); var_43_int = 0;
	var_36_object = var_42_object;
	func_5633(var_41_bool, var_42_object, (int)-1);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5346(var_340_bool)
{
	var_342_int = 0; var_343_string = "";
	func_4855(var_342_int, "ood7Aglaja4");
	var_345_bool = var_342_int == (int)0;
	if(var_345_bool != 0) {
		var_340_bool = 1;
		return 0;
	}
	var_340_bool = 0;
	return 0;
}


func_5605(var_157_bool)
{
	var_159_int = 0; var_160_string = "";
	func_4855(var_159_int, "d10q01");
	var_162_bool = var_159_int == (int)3;
	if(var_162_bool != 0) {
		var_157_bool = 1;
		return 0;
	}
	var_157_bool = 0;
	return 0;
}


func_4838()
{
	var_28_bool = 0;
	func_4912(var_28_bool);
	if(var_28_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_5094()
{
	SetVariable("d7q02", (int)3);
	return 0;
}


func_5100()
{
	SetVariable("d8q01", (int)1);
	func_5856();
	func_5872();
	var_69_bool = 0; var_70_string = ""; var_71_string = "";
	func_4867(var_69_bool, "quest_d8_01", "block_well");
	return 0;
}


func_4845(var_71_cvector, var_72_cvector)
{
	var_74_float = 0; var_75_float = 0;
	var_76_int = var_72_cvector | var_72_cvector;
	var_75_float = sqrt(var_76_int);
	var_77_float = 9.999999974752427e-07;
	var_78_bool = var_75_float < var_77_float;
	if(var_78_bool != 0) {
		var_71_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_71_cvector = var_72_cvector / var_75_float;
	return 2;
}


func_5358(var_307_bool, var_308_object)
{
	var_309_bool = 0;
	var_309_bool = 0;
	var_310_bool = 0;
	var_310_bool = 0;
	var_311_bool = 0; var_312_object = Obj(); var_313_string = "";
	var_308_object = var_312_object;
	func_4860(var_311_bool, var_312_object, "d7q01_dreport");
	if(var_311_bool != 0) {
		var_318_bool = 0; var_319_object = Obj(); var_320_string = "";
		var_308_object = var_319_object;
		func_4860(var_318_bool, var_319_object, "d7q01_mreport");
		if(var_318_bool != 0) {
			var_310_bool = 1;
		}
	}
	if(var_310_bool != 0) {
		var_321_bool = 0; var_322_object = Obj(); var_323_string = "";
		var_308_object = var_322_object;
		func_4860(var_321_bool, var_322_object, "d7q01_ureport");
		if(var_321_bool != 0) {
			var_309_bool = 1;
		}
	}
	if(var_309_bool != 0) {
		var_307_bool = 1;
		return 0;
	}
	var_307_bool = 0;
	return 0;
}


func_5872()
{
	var_60_object = Obj(); var_61_object = Obj();
	Trace("Adding diary entry");
	CreateDiaryEntry(var_61_object, (int)176, (int)1, (int)15435);
	var_66_bool = 0; var_67_object = Obj(); var_68_int = 0;
	var_61_object = var_67_object;
	func_5633(var_66_bool, var_67_object, (int)175);
	return 2;
}
EMIT "Stack[-1] = 0";


func_5617(var_144_bool)
{
	var_144_bool = 0;
	return 0;
}


func_5620(var_50_object)
{
	var_51_object = Obj(); var_52_object = Obj();
	GetDiaryRoot(var_52_object);
	var_53_bool = var_52_object == 0; //@nz
	if(var_53_bool != 0) {
		Trace("Can't retrieve diary root");
		var_50_object = 0;
		return 2;
	}
	var_52_object = var_50_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_4855(var_102_int, var_103_string)
{
	var_104_int = 0; var_105_int = 0;
	GetVariable(var_103_string, var_105_int);
	var_105_int = var_102_int;
	return 2;
}


func_4860(var_311_bool, var_312_object, var_313_string)
{
	var_314_int = 0; var_315_bool = 0; var_316_int = 0; var_317_bool = 0;
	GetInvItemByName(var_316_int, var_313_string);
	@@var_312_object:HasItem(var_316_int, var_317_bool);
	var_317_bool = var_311_bool;
	return 4;
}


func_5117()
{
	SetVariable("ood8Aglaja1", (int)1);
	return 0;
}


