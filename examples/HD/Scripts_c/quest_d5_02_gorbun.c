// @IMPORTS: Hold/0,StopGroup0/0,sync/0,SetTimer/2,MovePoint/3,KillTimer/1,WaitForAnimEnd/1,Rotate/3,IsOverrideActive/1,IsPlayerActor/2,FindActor/2,Stop/0,Sleep/1,StopAnimation/0,HasProperty/2,GetProperty/2,irand/2,PlayAnimation/2,WaitForAnimEnd/0,HasAnimation/3,CreateDialog/1,DoDialog/1,StopDialog/1,lshWaitForAnimEnd/0,lshStopAnimation/0,SensePlayerOnly/1,GetScene/1,GetHeight/1,CanReachByPF/2,GetAnimationOffset/3,GetPosition/1,RotateAsync/2,IsLoaded/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshStopSpeech/0,self/1,GetVariable/2,CreateIntVector/1,SendWorldWndMessage/2,GetInvItemByName/2,Trigger/2,GetGameTime/1,RemoveActor/1,TriggerWorld/2,SetVariable/2,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,GetMainOutdoorScene/1
// @STRINGS: W:player|W:ptidle|W:all|A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Neutral|A:SetMessage|A:ClearReplies|A:AddReply|A:GetLocator|W:loc|W:walk_stopl|W:walk_stopr|A:GetPosition|A:GetProperty|A:SetProperty|A:GetEyesHeight|W:head|W:Can't find lsh animation : |A:add|W:money|W:Money|W:pt_|W:cleanup|W:restore|W:money10000 is given|W:playsound|W:givemoney|W:d5q02|W:d5q02GorbunFindTheDaughter|W:pt_map_gorbun|A:AddMark|W:ood5Gorbun1|W:d5q02AnnaGotoGorbun|A:FindMark|A:Remove|W:d5q02AnnaGotoGorbunSelf|W:d5q02AnnaGotoKabak|W:d5q02NudeMeeting|W:quest_d5_02|W:completed|W:ood5Gorbun2|W:ood5Gorbun3|W:money 50000 is given|W:d5q02KnowNudeIsDead|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:Can't find main outdoor scene|A:GetMap|W:branch|W:ui/NPC_Citizen3.png|W:ui/NPC_Citizen3_b.png
// @GLOBALS: 0:string:,1:bool:,2:object:
// @RUN_OP: 0x4c4
// @RUN_TASK: 6
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars=bool params=3
// @EVENT_6: op=0x38 vars=
// @EVENT_0: op=0x45 vars=object
// @EVENT_10: op=0x59 vars=object
// @EVENT_7: op=0x6d vars=int
// @TASK_2: vars= params=1
// @EVENT_6: op=0xa2 vars=
// @EVENT_0: op=0xae vars=object
// @TASK_3: vars= params=1
// @EVENT_6: op=0xf7 vars=
// @TASK_4: vars=object params=2
// @TASK_5: vars=object,object,string,bool params=2
// @EVENT_11: op=0x210 vars=int,int
// @TASK_6: vars=float,float,int params=0
// @EVENT_6: op=0x53a vars=
// @EVENT_0: op=0x543 vars=object
// @STANDALONE_EVENT_26: op=0x683 vars=string
// @STANDALONE_EVENT_6: op=0x69b vars=
// @PE: 0xa2,0xf7,0x100,0x164,0x1fa,0x210,0x53a,0x617,0x61f,0x676,0x6a3,0x6ad,0x6b3,0x6d3,0x70c,0x712,0x718,0x722,0x72e,0x73a,0x746,0x752,0x75e,0x7e6

task_0_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	var_0_bool = true;
	func_145();
	func_1691();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_1_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_float, var_8_float, var_9_int)
{
	var_10_bool = 0; var_11_bool = 0;
	IsOverrideActive(var_11_bool);
	var_12_bool = var_11_bool == 0; //@nz
	if(var_12_bool != 0) {
		func_145();
		EventDisable(0);
		var_13_bool = 0; var_14_object = Obj();
		var_9_int = var_14_object;
		func_1393(var_13_bool, var_14_object);
		EventEnable(0);
		var_27_object = Obj();
		var_9_int = var_27_object;
		func_2022(var_27_object);
		var_0_bool = false;
	}
	return 2;
}


	task_1_event_10(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_float, var_8_float, var_9_int, var_10_object, var_11_object, var_31_object)
	{
	var_32_bool = 0; var_33_bool = 0;
	IsPlayerActor(var_31_object, var_33_bool);
	var_34_bool = var_33_bool;
	if(var_34_bool != 0) {
		func_145();
		var_35_object = Obj();
		var_31_object = var_35_object;
		TaskCall(2);
		func_148(var_35_object);
		TaskReturn();
		var_0_bool = false;
		var_49_int = 20;
		var_50_float = 10.0;
		SetTimer(var_49_int, var_50_float);
	}
	return 2;
	}


task_1_event_7(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_float, var_8_float, var_9_int)
{
	var_10_object = Obj(); var_11_object = Obj();
	var_13_bool = var_9_int == (int)20;
	if(var_13_bool != 0) {
		var_0_bool = true;
		KillTimer((int)20);
	} else {
		var_16_bool = var_9_int == (int)21;
		if(var_16_bool == 0) goto Label_144;
		var_17_bool = var_0_bool;
		if(var_17_bool == 0) goto Label_144;
		FindActor(var_11_object, "player");
		var_19_bool = 0;
		var_19_bool = 0;
		var_20_object = var_11_object;
		if(var_20_object != 0) {
			var_21_float = 0; var_22_object = Obj();
			var_11_object = var_22_object;
			func_1368(var_21_float, var_22_object);
			var_30_bool = var_21_float <= (float)62500.0;
			if(var_30_bool != 0) {
				var_19_bool = 1;
			}
		}
		if(var_19_bool != 0) {
			var_11_object = Obj();
			func_89();
		}
		var_11_object = 0;
	}
Label_144:
	return 2;
	
}


task_2_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	func_193();
	func_1691();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_2_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_float, var_8_float, var_9_int)
{
	var_10_bool = 0; var_11_bool = 0;
	IsOverrideActive(var_11_bool);
	var_12_bool = var_11_bool == 0; //@nz
	if(var_12_bool != 0) {
		func_193();
		EventDisable(0);
		var_13_bool = 0; var_14_object = Obj();
		var_9_int = var_14_object;
		func_1393(var_13_bool, var_14_object);
		EventEnable(0);
		var_27_object = Obj();
		var_9_int = var_27_object;
		func_2022(var_27_object);
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	func_1691();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_5_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_float, var_9_float, var_10_int)
{
	if((int)1 != 0) {
		func_1536();
		var_14_bool = var_10_int == (int)13144;
		if(var_14_bool != 0) {
			var_15_object = Obj(); var_16_object = Obj();
			var_15_object = var_1_object;
			var_16_object = var_0_bool;
			func_1724();
			var_58_object = Obj(); var_59_object = Obj();
			var_58_object = var_1_object;
			var_59_object = var_0_bool;
			func_1699(var_59_object);
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_bool;
			func_1709();
		}
		var_84_bool = var_10_int == (int)16800;
		if(var_84_bool != 0) {
			var_85_object = Obj(); var_86_object = Obj();
			var_85_object = var_1_object;
			var_86_object = var_0_bool;
			func_1715();
		}
		var_98_bool = var_10_int == (int)13151;
		if(var_98_bool != 0) {
			var_99_object = Obj(); var_100_object = Obj();
			var_99_object = var_1_object;
			var_100_object = var_0_bool;
			func_1715();
		}
		var_102_bool = var_10_int == (int)16809;
		if(var_102_bool != 0) {
			var_103_object = Obj(); var_104_object = Obj();
			var_103_object = var_1_object;
			var_104_object = var_0_bool;
			func_1715();
		}
		var_106_bool = var_10_int == (int)13661;
		if(var_106_bool != 0) {
			var_107_object = Obj(); var_108_object = Obj();
			var_107_object = var_1_object;
			var_108_object = var_0_bool;
			func_1724();
			var_109_object = Obj(); var_110_object = Obj();
			var_109_object = var_1_object;
			var_110_object = var_0_bool;
			func_1699(var_110_object);
			var_111_object = Obj(); var_112_object = Obj();
			var_111_object = var_1_object;
			var_112_object = var_0_bool;
			func_1709();
		}
		var_114_bool = var_10_int == (int)13170;
		if(var_114_bool != 0) {
			var_115_object = Obj(); var_116_object = Obj();
			var_115_object = var_1_object;
			var_116_object = var_0_bool;
			func_1810();
			var_119_object = Obj(); var_120_object = Obj();
			var_119_object = var_1_object;
			var_120_object = var_0_bool;
			func_1816(var_120_object);
			var_124_object = Obj(); var_125_object = Obj();
			var_124_object = var_1_object;
			var_125_object = var_0_bool;
			func_1709();
		}
		var_127_bool = var_10_int == (int)13154;
		if(var_127_bool != 0) {
			var_128_object = Obj(); var_129_object = Obj();
			var_128_object = var_1_object;
			var_129_object = var_0_bool;
			func_1804();
		}
		var_133_bool = var_10_int == (int)13172;
		if(var_133_bool != 0) {
			var_134_object = Obj(); var_135_object = Obj();
			var_134_object = var_1_object;
			var_135_object = var_0_bool;
			func_1753();
		}
		var_166_bool = var_10_int == (int)16820;
		if(var_166_bool != 0) {
			var_167_object = Obj(); var_168_object = Obj();
			var_167_object = var_1_object;
			var_168_object = var_0_bool;
			func_1753();
		}
		var_170_bool = var_9_float == (int)13133;
		if(var_170_bool != 0) {
			var_171_bool = 0;
			var_171_bool = 0;
			var_172_bool = 0; var_173_object = Obj();
			var_173_object = var_1_object;
			func_1826(var_173_object);
			if(var_172_bool != 0) {
				var_180_bool = 0; var_181_object = Obj();
				var_181_object = var_1_object;
				func_1838(var_181_object);
				if(var_180_bool != 0) {
					var_171_bool = 1;
				}
			}
			if(var_171_bool != 0) {
				var_186_object = Obj(); var_187_object = Obj();
				var_186_object = var_1_object;
				var_187_object = var_0_bool;
				func_1747();
				var_190_string = "";
				func_506(var_10_int, "Neutral");
				@@@var_0_bool:SetMessage((int)511917);
				@@@var_0_bool:ClearReplies();
				@@@var_0_bool:AddReply((int)515734, (int)16793, (int)16792);
				@@@var_0_bool:AddReply((int)515732, (int)16791, (int)16790);
				return 0;
			}
			var_214_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511935);
			@@@var_0_bool:ClearReplies();
			var_216_bool = 0; var_217_object = Obj();
			var_217_object = var_1_object;
			func_1826(var_217_object);
			if(var_216_bool != 0) {
				@@@var_0_bool:AddReply((int)512489, (int)13660, (int)13658);
			}
			var_221_bool = 0;
			var_221_bool = 0;
			var_222_bool = 0;
			var_222_bool = 0;
			var_223_bool = 0; var_224_object = Obj();
			var_224_object = var_1_object;
			func_1850(var_224_object);
			if(var_223_bool != 0) {
				var_229_bool = 0; var_230_object = Obj();
				var_230_object = var_1_object;
				func_1862(var_230_object);
				var_235_bool = var_229_bool == 0; //@nz
				if(var_235_bool != 0) {
					var_222_bool = 1;
				}
			}
			if(var_222_bool != 0) {
				var_236_bool = 0; var_237_object = Obj();
				var_237_object = var_1_object;
				func_1886(var_237_object);
				if(var_236_bool != 0) {
					var_221_bool = 1;
				}
			}
			if(var_221_bool != 0) {
				@@@var_0_bool:AddReply((int)511936, (int)13155, (int)13153);
			}
			var_245_bool = 0;
			var_245_bool = 0;
			var_246_bool = 0; var_247_object = Obj();
			var_247_object = var_1_object;
			func_1862(var_247_object);
			if(var_246_bool != 0) {
				var_248_bool = 0; var_249_object = Obj();
				var_249_object = var_1_object;
				func_1874(var_249_object);
				if(var_248_bool != 0) {
					var_245_bool = 1;
				}
			}
			if(var_245_bool != 0) {
				@@@var_0_bool:AddReply((int)511937, (int)13156, (int)13154);
			}
			@@@var_0_bool:AddReply((int)512490, (int)-1, (int)13659);
			return 0;
		}
		var_261_bool = var_9_float == (int)13156;
		if(var_261_bool != 0) {
			var_262_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511939);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511947, (int)13165, (int)13164);
			return 0;
		}
		var_268_bool = var_9_float == (int)13165;
		if(var_268_bool != 0) {
			var_269_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511948);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511949, (int)13167, (int)13166);
			@@@var_0_bool:AddReply((int)515752, (int)13167, (int)16816);
			return 0;
		}
		var_278_bool = var_9_float == (int)13167;
		if(var_278_bool != 0) {
			var_279_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511950);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511951, (int)13171, (int)13168);
			return 0;
		}
		var_285_bool = var_9_float == (int)13171;
		if(var_285_bool != 0) {
			var_286_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511954);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511955, (int)-1, (int)13172);
			@@@var_0_bool:AddReply((int)515754, (int)-1, (int)16820);
			return 0;
		}
		var_295_bool = var_9_float == (int)13155;
		if(var_295_bool != 0) {
			var_296_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511938);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511940, (int)13158, (int)13157);
			@@@var_0_bool:AddReply((int)515753, (int)13160, (int)16818);
			return 0;
		}
		var_305_bool = var_9_float == (int)13158;
		if(var_305_bool != 0) {
			var_306_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511941);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511942, (int)13160, (int)13159);
			@@@var_0_bool:AddReply((int)515749, (int)13160, (int)16811);
			return 0;
		}
		var_315_bool = var_9_float == (int)13160;
		if(var_315_bool != 0) {
			var_316_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511943);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511944, (int)13162, (int)13161);
			return 0;
		}
		var_322_bool = var_9_float == (int)13162;
		if(var_322_bool != 0) {
			var_323_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511945);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511946, (int)13169, (int)13163);
			return 0;
		}
		var_329_bool = var_9_float == (int)13169;
		if(var_329_bool != 0) {
			var_330_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511952);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511953, (int)-1, (int)13170);
			return 0;
		}
		var_336_bool = var_9_float == (int)13660;
		if(var_336_bool != 0) {
			var_337_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)512491);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)512492, (int)-1, (int)13661);
			return 0;
		}
		var_343_bool = var_9_float == (int)16791;
		if(var_343_bool != 0) {
			var_344_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)515733);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)515737, (int)16793, (int)16795);
			return 0;
		}
		var_350_bool = var_9_float == (int)16793;
		if(var_350_bool != 0) {
			var_351_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)515735);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511918, (int)13135, (int)13134);
			@@@var_0_bool:AddReply((int)515736, (int)16797, (int)16794);
			return 0;
		}
		var_360_bool = var_9_float == (int)16797;
		if(var_360_bool != 0) {
			var_361_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)515738);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)515739, (int)13137, (int)16798);
			return 0;
		}
		var_367_bool = var_9_float == (int)13135;
		if(var_367_bool != 0) {
			var_368_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511919);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511920, (int)13137, (int)13136);
			@@@var_0_bool:AddReply((int)515743, (int)16805, (int)16804);
			return 0;
		}
		var_377_bool = var_9_float == (int)16805;
		if(var_377_bool != 0) {
			var_378_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)515744);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)515745, (int)16807, (int)16806);
			return 0;
		}
		var_384_bool = var_9_float == (int)16807;
		if(var_384_bool != 0) {
			var_385_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)515746);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)515747, (int)13137, (int)16808);
			@@@var_0_bool:AddReply((int)515748, (int)-1, (int)16809);
			return 0;
		}
		var_394_bool = var_9_float == (int)13137;
		if(var_394_bool != 0) {
			var_395_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511921);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511924, (int)13141, (int)13140);
			@@@var_0_bool:AddReply((int)511922, (int)13139, (int)13138);
			return 0;
		}
		var_404_bool = var_9_float == (int)13139;
		if(var_404_bool != 0) {
			var_405_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511923);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511929, (int)13141, (int)13145);
			return 0;
		}
		var_411_bool = var_9_float == (int)13141;
		if(var_411_bool != 0) {
			var_412_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511925);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511926, (int)13143, (int)13142);
			@@@var_0_bool:AddReply((int)511930, (int)13148, (int)13147);
			return 0;
		}
		var_421_bool = var_9_float == (int)13148;
		if(var_421_bool != 0) {
			var_422_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511931);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511932, (int)13150, (int)13149);
			@@@var_0_bool:AddReply((int)515741, (int)13150, (int)16801);
			return 0;
		}
		var_431_bool = var_9_float == (int)13150;
		if(var_431_bool != 0) {
			var_432_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511933);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511934, (int)-1, (int)13151);
			@@@var_0_bool:AddReply((int)515742, (int)13143, (int)16803);
			return 0;
		}
		var_441_bool = var_9_float == (int)13143;
		if(var_441_bool != 0) {
			var_442_string = "";
			func_506(var_10_int, "Neutral");
			@@@var_0_bool:SetMessage((int)511927);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)511928, (int)-1, (int)13144);
			@@@var_0_bool:AddReply((int)515740, (int)-1, (int)16800);
			return 0;
		}
		var_3_object = true;
		var_450_bool = 0;
		func_2020(var_450_bool);
		if(var_450_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x211";
	
}


task_6_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	func_1691();
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0;
	IsOverrideActive(var_11_bool);
	var_12_bool = var_11_bool == 0; //@nz
	if(var_12_bool != 0) {
		EventDisable(0);
		var_13_bool = 0; var_14_object = Obj();
		var_9_object = var_14_object;
		func_1393(var_13_bool, var_14_object);
		EventEnable(0);
		var_27_object = Obj();
		var_9_object = var_27_object;
		func_2022(var_27_object);
	}
	return 2;
}


event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int, var_9_string)
{
	var_10_bool = 0; var_11_bool = 0;
	var_13_bool = var_9_string == "cleanup";
	if(var_13_bool != 0) {
		var_14_bool = GlobalVars[1];
		GlobalVars[1] = (bool)1;
		IsLoaded(var_11_bool);
		var_15_bool = var_11_bool == 0; //@nz
		if(var_15_bool != 0) {
			var_16_object = Obj();
			func_1543(var_16_object);
			RemoveActor(var_16_object);
		}
	} else {
		var_20_bool = var_9_string == "restore";
		if(var_20_bool == 0) goto Label_1690;
		var_21_bool = GlobalVars[1];
		GlobalVars[1] = (bool)0;
	}
Label_1690:
	return 2;
	
}


event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	var_9_bool = GlobalVars[1];
	if(var_9_bool != 0) {
		var_10_object = Obj();
		func_1543(var_10_object);
		RemoveActor(var_10_object);
	}
	return 0;
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_float, var_7_float, var_8_int)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_cvector = CVector(0,0,0);
	SensePlayerOnly((bool)1);
	func_1308();
	GetScene(var_20_object);
	var_2_object = 0;
	
Label_1230:
	var_36_string = ""; var_37_int = 0;
	var_37_int = var_2_object;
	func_1654(var_36_string, var_37_int);
	@@var_20_object:GetLocator(var_36_string, var_21_bool);
	var_45_bool = var_21_bool == 0; //@nz
	if(var_45_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_1230;
	}
	var_46_bool = 0;
	func_1413(var_46_bool);
	var_49_bool = var_46_bool == 0; //@nz
	if(var_49_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1316(var_29_bool, var_30_cvector);
	
Label_1255:
	irand(var_22_int, var_2_object);
	var_70_string = ""; var_71_int = 0;
	var_22_int = var_71_int;
	func_1654(var_70_string, var_71_int);
	@@var_20_object:GetLocator(var_70_string, var_23_bool, var_24_cvector, var_25_cvector);
	var_72_cvector = CVector(0,0,0);
	func_1363(var_72_cvector);
	var_26_cvector = var_24_cvector - var_72_cvector;
	var_75_float = 0; var_76_cvector = CVector(0,0,0);
	var_26_cvector = var_76_cvector;
	func_1567(var_75_float, var_76_cvector);
	var_84_bool = var_75_float > var_1_object;
	if(var_84_bool != 0) {
		GetHeight(var_27_float);
		var_24_cvector = var_28_cvector;
		var_85_float = GetByIndex(var_28_cvector, 1);
		var_85_float = var_85_float + var_27_float;
		SetByIndex(var_28_cvector, 1) = var_85_float;
		CanReachByPF(var_29_bool, var_28_cvector);
		var_86_bool = var_29_bool;
		if(var_86_bool != 0) {
			var_87_int = var_26_cvector | var_26_cvector;
			var_88_float = sqrt(var_87_int);
			var_89_float = var_0_bool / var_88_float;
			var_90_float = var_26_cvector * var_89_float;
			var_30_cvector = var_24_cvector - var_90_float;
			var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0);
			var_30_cvector = var_92_cvector;
			var_25_cvector = var_93_cvector;
			TaskCall(1);
			func_13(var_94_bool, var_91_bool, var_92_cvector, var_93_cvector);
			TaskReturn();
			if(var_94_bool != 0) {
				var_118_int = 0;
				var_22_int = var_118_int;
				TaskCall(3);
				func_198(var_118_int);
				TaskReturn();
			}
		}
	}
	Sleep((int)1);
	goto Label_1255;
	
}
EMIT "Return(); Pop(22)";
EMIT "Stack[-11] = 0";


func_0()
{
	
Label_0:
	Hold();
	var_50_bool = 0;
	func_1413(var_50_bool);
	var_51_bool = var_50_bool == 0; //@nz
	if(var_51_bool == 1) goto Label_0;
	return 0;
}


func_256(var_143_string, var_144_string, var_145_int)
{
	var_147_bool = var_145_int == (int)0;
	if(var_147_bool != 0) {
		var_144_string = var_143_string;
	} else {
		var_143_string = var_144_string + var_145_int;
	}
	return 0;
	
}


func_1536()
{
	var_12_bool = 0;
	func_2020(var_12_bool);
	if(var_12_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_1543(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_264(var_136_int, var_137_string)
{
	var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_bool = 0;
	var_140_int = 0;
	
Label_266:
	var_143_string = ""; var_144_string = ""; var_145_int = 0;
	var_137_string = var_144_string;
	var_140_int = var_145_int;
	func_256(var_143_string, var_144_string, var_145_int);
	HasAnimation(var_141_bool, "all", var_143_string);
	var_148_bool = var_141_bool == 0; //@nz
	if(var_148_bool != 0) {
	} else {
		var_140_int = var_140_int + (int)1;
		goto Label_266;
	}
	var_140_int = var_136_int;
	return 4;
	
}


func_1804()
{
	SetVariable("ood5Gorbun2", (int)1);
	return 0;
}


func_13(var_0_bool, var_91_bool, var_92_cvector, var_93_cvector)
{
	var_95_bool = 0; var_96_bool = 0;
	var_0_bool = true;
	SetTimer((int)21, (float)0.5);
	
Label_19:
	var_99_bool = 0; var_100_cvector = CVector(0,0,0);
	var_92_cvector = var_100_cvector;
	func_1383(var_99_bool, var_100_cvector);
	var_109_bool = var_99_bool == 0; //@nz
	if(var_109_bool != 0) {
		goto Label_19;
	}
	MovePoint(var_92_cvector, (bool)0, var_96_bool);
	var_111_bool = var_96_bool;
	if(var_111_bool != 0) {
	} else {
		goto Label_19;
	}
	KillTimer((int)20);
	KillTimer((int)21);
	var_0_bool = false;
	WaitForAnimEnd(var_96_bool);
	var_114_bool = var_96_bool == 0; //@nz
	if(var_114_bool != 0) {
		var_91_bool = 0;
		return 2;
	}
	var_115_float = GetByIndex(var_93_cvector, 0);
	var_116_float = GetByIndex(var_93_cvector, 2);
	Rotate(var_115_float, var_116_float, var_96_bool);
	var_117_bool = var_96_bool == 0; //@nz
	if(var_117_bool != 0) {
		var_91_bool = 0;
		return 2;
	}
	var_91_bool = 1;
	return 2;
	
}


func_1549(var_66_cvector, var_67_cvector)
{
	var_69_float = 0; var_70_float = 0;
	var_71_int = var_67_cvector | var_67_cvector;
	var_70_float = sqrt(var_71_int);
	var_72_float = 9.999999974752427e-07;
	var_73_bool = var_70_float < var_72_float;
	if(var_73_bool != 0) {
		var_66_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_66_cvector = var_67_cvector / var_70_float;
	return 2;
}


func_1810()
{
	SetVariable("ood5Gorbun3", (int)1);
	return 0;
}


func_1559(var_64_float, var_65_float)
{
	var_68_bool = var_65_float < (int)0;
	if(var_68_bool != 0) {
		var_64_float = -var_65_float;
	} else {
		var_65_float = var_64_float;
	}
	return 0;
	
}


func_1816(var_119_object)
{
	Trace("money 50000 is given");
	var_122_object = Obj(); var_123_int = 0;
	var_119_object = var_122_object;
	func_1594(var_122_object, (int)50000);
	return 0;
}


func_282(var_0_bool, var_28_int, var_29_object)
{
	var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0; var_37_int = 0; var_38_bool = 0;
	var_0_bool = var_29_object;
	var_39_bool = 0; var_40_object = Obj(); var_41_float = 0;
	var_29_object = var_40_object;
	func_1418(var_39_bool, var_40_object, (float)100.0);
	var_86_bool = var_39_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_28_int = -2;
		return 8;
	}
	CreateDialog(var_35_object);
	var_87_int = 0;
	func_2014(var_87_int);
	@@var_35_object:SetNPCName(var_87_int);
	var_88_int = 0;
	func_2012(var_88_int);
	@@var_35_object:SetNPCDescription(var_88_int);
	var_89_string = "";
	func_2016(var_89_string);
	@@var_35_object:SetPhoto(var_89_string);
	var_90_string = "";
	func_2018(var_90_string);
	@@var_35_object:SetPhoto2(var_90_string);
	var_91_int = 0;
	func_1995(var_91_int);
	@@var_35_object:SetPlayerName(var_91_int);
	IsOverrideActive(var_36_bool);
	var_99_bool = var_36_bool;
	if(var_99_bool != 0) {
		var_28_int = -2;
		return 8;
	}
	DoDialog(var_35_object);
	var_100_object = Obj(); var_101_object = Obj();
	var_29_object = var_100_object;
	var_35_object = var_101_object;
	TaskCall(5);
	func_356(var_102_object, var_103_object, var_104_string, var_105_bool, var_100_object, var_101_object);
	TaskReturn();
	@@var_35_object:IsDialogEnd(var_38_bool);
	
Label_338:
	var_214_bool = var_38_bool == 0; //@nz
	if(var_214_bool != 0) {
		sync();
		@@var_35_object:IsDialogEnd(var_38_bool);
		goto Label_338;
	}
	var_29_object = Obj();
	func_1487();
	StopDialog(var_35_object);
	@@var_35_object:GetReturnValue((int)-1);
	var_37_int = var_28_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1308()
{
	var_32_string = ""; var_33_string = "";
	GetProperty("loc", var_33_string);
	var_35_string = GlobalVars[0];
	var_33_string = var_35_string;
	GlobalVars[0] = var_35_string;
	return 2;
}


func_1567(var_75_float, var_76_cvector)
{
	var_77_float = GetByIndex(var_76_cvector, 0);
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = var_77_float * var_78_float;
	var_80_float = GetByIndex(var_76_cvector, 2);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_82_float = var_80_float * var_81_float;
	var_83_int = var_79_float + var_82_float;
	var_75_float = sqrt(var_83_int);
	return 0;
}


func_1826(var_108_bool)
{
	var_110_int = 0; var_111_string = "";
	func_1577(var_110_int, "d5q02");
	var_115_bool = var_110_int == (int)1;
	if(var_115_bool != 0) {
		var_108_bool = 1;
		return 0;
	}
	var_108_bool = 0;
	return 0;
}


func_1316(var_0_bool, var_1_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	GetAnimationOffset(var_54_cvector, "all", "walk_stopl");
	GetAnimationOffset(var_55_cvector, "all", "walk_stopr");
	var_60_float = GetByIndex(var_54_cvector, 2);
	var_61_float = GetByIndex(var_55_cvector, 2);
	var_62_int = var_60_float + var_61_float;
	var_0_bool = var_62_int / (float)2.0;
	var_64_float = 0; var_65_float = 0;
	var_66_float = GetByIndex(var_54_cvector, 2);
	var_65_float = var_66_float - var_0_bool;
	func_1559(var_64_float, var_65_float);
	var_1_object = var_64_float + (int)40;
	return 4;
}


func_1577(var_110_int, var_111_string)
{
	var_112_int = 0; var_113_int = 0;
	GetVariable(var_111_string, var_113_int);
	var_113_int = var_110_int;
	return 2;
}


func_1838(var_116_bool)
{
	var_118_int = 0; var_119_string = "";
	func_1577(var_118_int, "ood5Gorbun1");
	var_121_bool = var_118_int == (int)0;
	if(var_121_bool != 0) {
		var_116_bool = 1;
		return 0;
	}
	var_116_bool = 0;
	return 0;
}


func_1582(var_74_int, var_75_int)
{
	var_76_object = Obj(); var_77_object = Obj();
	CreateIntVector(var_77_object);
	@@var_77_object:add(var_74_int);
	@@var_77_object:add(var_75_int);
	SendWorldWndMessage((int)3, var_77_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1850(var_177_bool)
{
	var_179_int = 0; var_180_string = "";
	func_1577(var_179_int, "d5q02");
	var_182_bool = var_179_int == (int)4;
	if(var_182_bool != 0) {
		var_177_bool = 1;
		return 0;
	}
	var_177_bool = 0;
	return 0;
}


func_1594(var_61_object, var_62_int)
{
	var_63_int = 0; var_64_int = 0;
	var_65_object = Obj(); var_66_string = ""; var_67_int = 0;
	var_61_object = var_65_object;
	var_62_int = var_67_int;
	func_1376(var_65_object, "money", var_67_int);
	var_72_bool = var_62_int > (int)0;
	if(var_72_bool != 0) {
		GetInvItemByName(var_64_int, "Money");
		var_74_int = 0; var_75_int = 0;
		var_64_int = var_74_int;
		var_62_int = var_75_int;
		func_1582(var_74_int, var_75_int);
	}
	return 2;
}


func_1862(var_183_bool)
{
	var_185_int = 0; var_186_string = "";
	func_1577(var_185_int, "d5q02KnowNudeIsDead");
	var_188_bool = var_185_int == (int)1;
	if(var_188_bool != 0) {
		var_183_bool = 1;
		return 0;
	}
	var_183_bool = 0;
	return 0;
}


func_1613(var_159_bool, var_160_string, var_161_string)
{
	var_162_object = Obj(); var_163_object = Obj();
	FindActor(var_163_object, var_160_string);
	var_164_bool = var_163_object == 0; //@ne
	if(var_164_bool != 0) {
		var_159_bool = 0;
		return 2;
	}
	Trigger(var_163_object, var_161_string);
	var_159_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1874(var_202_bool)
{
	var_204_int = 0; var_205_string = "";
	func_1577(var_204_int, "ood5Gorbun2");
	var_207_bool = var_204_int == (int)0;
	if(var_207_bool != 0) {
		var_202_bool = 1;
		return 0;
	}
	var_202_bool = 0;
	return 0;
}


func_1363(var_72_cvector)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	GetPosition(var_74_cvector);
	var_74_cvector = var_72_cvector;
	return 2;
}


func_1368(var_21_float, var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	GetPosition(var_26_cvector);
	@@var_22_object:GetPosition(var_27_cvector);
	var_28_cvector = var_27_cvector - var_26_cvector;
	var_21_float = var_28_cvector | var_28_cvector;
	return 6;
}


func_1625(var_32_float)
{
	var_33_float = 0; var_34_float = 0;
	GetGameTime(var_34_float);
	var_34_float = var_32_float;
	return 2;
}


func_1630(var_160_string, var_161_int)
{
	var_162_string = ""; var_163_string = "";
	var_164_int = var_161_int;
	if(var_164_int != 0) {
		"idle" = "idle" + var_161_int;
	}
	var_163_string = var_160_string;
	return 2;
}


func_1886(var_190_bool)
{
	var_192_int = 0; var_193_string = "";
	func_1577(var_192_int, "ood5Gorbun3");
	var_195_bool = var_192_int == (int)0;
	if(var_195_bool != 0) {
		var_190_bool = 1;
		return 0;
	}
	var_190_bool = 0;
	return 0;
}


func_1376(var_65_object, var_66_string, var_67_int)
{
	var_68_int = 0; var_69_int = 0;
	@@var_65_object:GetProperty(var_66_string, var_69_int);
	var_70_int = var_69_int + var_67_int;
	@@var_65_object:SetProperty(var_66_string, var_70_int);
	return 2;
}


func_356(var_0_bool, var_1_object, var_2_object, var_3_object, var_100_object, var_101_object)
{
	var_0_bool = var_101_object;
	var_1_object = var_100_object;
	var_3_object = false;
	if((int)1 != 0) {
		var_107_bool = 0;
		var_107_bool = 0;
		var_108_bool = 0; var_109_object = Obj();
		var_109_object = var_1_object;
		func_1826(var_109_object);
		if(var_108_bool != 0) {
			var_116_bool = 0; var_117_object = Obj();
			var_117_object = var_1_object;
			func_1838(var_117_object);
			if(var_116_bool != 0) {
				var_107_bool = 1;
			}
		}
		if(var_107_bool != 0) {
			var_122_object = Obj(); var_123_object = Obj();
			var_122_object = var_1_object;
			var_123_object = var_0_bool;
			func_1747();
			var_126_string = "";
			func_506(var_101_object, "Neutral");
			@@@var_0_bool:SetMessage((int)511917);
			@@@var_0_bool:ClearReplies();
			@@@var_0_bool:AddReply((int)515734, (int)16793, (int)16792);
			@@@var_0_bool:AddReply((int)515732, (int)16791, (int)16790);
		} else {
				var_168_string = "";
				func_506(var_101_object, "Neutral");
				@@@var_0_bool:SetMessage((int)511935);
				@@@var_0_bool:ClearReplies();
				var_170_bool = 0; var_171_object = Obj();
				var_171_object = var_1_object;
				func_1826(var_171_object);
				if(var_170_bool != 0) {
					@@@var_0_bool:AddReply((int)512489, (int)13660, (int)13658);
				}
				var_175_bool = 0;
				var_175_bool = 0;
				var_176_bool = 0;
				var_176_bool = 0;
				var_177_bool = 0; var_178_object = Obj();
				var_178_object = var_1_object;
				func_1850(var_178_object);
				if(var_177_bool != 0) {
					var_183_bool = 0; var_184_object = Obj();
					var_184_object = var_1_object;
					func_1862(var_184_object);
					var_189_bool = var_183_bool == 0; //@nz
					if(var_189_bool != 0) {
						var_176_bool = 1;
					}
				}
				if(var_176_bool != 0) {
					var_190_bool = 0; var_191_object = Obj();
					var_191_object = var_1_object;
					func_1886(var_191_object);
					if(var_190_bool != 0) {
						var_175_bool = 1;
					}
				}
				if(var_175_bool != 0) {
					@@@var_0_bool:AddReply((int)511936, (int)13155, (int)13153);
				}
				var_199_bool = 0;
				var_199_bool = 0;
				var_200_bool = 0; var_201_object = Obj();
				var_201_object = var_1_object;
				func_1862(var_201_object);
				if(var_200_bool != 0) {
					var_202_bool = 0; var_203_object = Obj();
					var_203_object = var_1_object;
					func_1874(var_203_object);
					if(var_202_bool != 0) {
						var_199_bool = 1;
					}
				}
				if(var_199_bool != 0) {
					@@@var_0_bool:AddReply((int)511937, (int)13156, (int)13154);
				}
				@@@var_0_bool:AddReply((int)512490, (int)-1, (int)13659);
				goto Label_476;
		}
	}
Label_476:
	var_150_bool = 0;
	func_2020(var_150_bool);
	if(var_150_bool != 0) {

	Label_480:
		lshWaitForAnimEnd();
		var_151_object = var_3_object;
		if(var_151_object != 0) {
		} else {
			var_152_string = "";
			var_152_string = var_2_object;
			func_1505(var_152_string);
			goto Label_480;
	}
		PlayAnimation("all", "idle");

	Label_495:
		WaitForAnimEnd();
		var_165_object = var_3_object;
		if(var_165_object != 0) {
			goto Label_505;
		}
		PlayAnimation("all", "idle");
		goto Label_495;

	}
	goto Label_505;
	
Label_505:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x168";


func_1637(var_154_int)
{
	var_155_int = 0; var_156_bool = 0; var_157_int = 0; var_158_bool = 0;
	var_157_int = 0;
	
Label_1639:
	var_160_string = ""; var_161_int = 0;
	var_157_int = var_161_int;
	func_1630(var_160_string, var_161_int);
	HasAnimation(var_158_bool, "all", var_160_string);
	var_165_bool = var_158_bool == 0; //@nz
	if(var_165_bool != 0) {
	} else {
		var_157_int = var_157_int + (int)1;
		goto Label_1639;
	}
	var_157_int = var_154_int;
	return 4;
	
}


func_1383(var_99_bool, var_100_cvector)
{
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_bool = 0; var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_bool = 0;
	GetPosition(var_104_cvector);
	var_105_cvector = var_100_cvector - var_104_cvector;
	var_107_float = GetByIndex(var_105_cvector, 0);
	var_108_float = GetByIndex(var_105_cvector, 2);
	Rotate(var_107_float, var_108_float, var_106_bool);
	var_106_bool = var_99_bool;
	return 6;
}


func_1898()
{
	var_89_object = Obj(); var_90_object = Obj();
	CreateDiaryEntry(var_90_object, (int)715, (int)2, (int)536323);
	var_94_bool = 0; var_95_object = Obj(); var_96_int = 0;
	var_90_object = var_95_object;
	func_1950(var_94_bool, var_95_object, (int)148);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1393(var_13_bool, var_14_object)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0);
	@@var_14_object:GetPosition(var_16_cvector);
	var_17_bool = 0; var_18_cvector = CVector(0,0,0);
	var_16_cvector = var_18_cvector;
	func_1383(var_17_bool, var_18_cvector);
	var_17_bool = var_13_bool;
	return 2;
}


func_1654(var_36_string, var_37_int)
{
	var_39_bool = var_37_int == (int)0;
	if(var_39_bool != 0) {
		var_41_string = GlobalVars[0];
		var_36_string = "pt_" + var_41_string;
	} else {
		var_43_string = GlobalVars[0];
		var_44_int = "pt_" + var_43_string;
		var_36_string = var_44_int + var_37_int;
	}
	return 0;
	
}


func_1911()
{
	var_35_object = Obj(); var_36_object = Obj();
	CreateDiaryEntry(var_36_object, (int)150, (int)2, (int)515356);
	var_40_bool = 0; var_41_object = Obj(); var_42_int = 0;
	var_36_object = var_41_object;
	func_1950(var_40_bool, var_41_object, (int)148);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1402(var_39_object)
{
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	@@var_39_object:GetPosition(var_43_cvector);
	GetPosition(var_44_cvector);
	var_45_cvector = var_43_cvector - var_44_cvector;
	var_46_float = GetByIndex(var_45_cvector, 0);
	var_47_float = GetByIndex(var_45_cvector, 2);
	RotateAsync(var_46_float, var_47_float);
	return 6;
}


func_1924()
{
	var_151_object = Obj(); var_152_object = Obj();
	CreateDiaryEntry(var_152_object, (int)153, (int)2, (int)515359);
	var_156_bool = 0; var_157_object = Obj(); var_158_int = 0;
	var_152_object = var_157_object;
	func_1950(var_156_bool, var_157_object, (int)148);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1413(var_46_bool)
{
	var_47_bool = 0; var_48_bool = 0;
	IsLoaded(var_48_bool);
	var_48_bool = var_46_bool;
	return 2;
}


func_1418(var_39_bool, var_40_object, var_41_float)
{
	var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_bool = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_bool = 0;
	@@var_40_object:GetPosition(var_52_cvector);
	@@var_40_object:GetEyesHeight(var_51_float);
	var_60_float = GetByIndex(var_52_cvector, 1);
	var_60_float = var_60_float + var_51_float;
	SetByIndex(var_52_cvector, 1) = var_60_float;
	GetPosition(var_53_cvector);
	GetEyesHeight(var_51_float);
	var_61_float = GetByIndex(var_53_cvector, 1);
	var_61_float = var_61_float + var_51_float;
	SetByIndex(var_53_cvector, 1) = var_61_float;
	var_54_cvector = var_52_cvector - var_53_cvector;
	var_62_float = GetByIndex(var_54_cvector, 1);
	SetByIndex(var_54_cvector, 1) = (float)0;
	var_63_int = var_54_cvector | var_54_cvector;
	var_64_float = sqrt(var_63_int);
	var_54_cvector = var_54_cvector / var_64_float;
	var_55_cvector = -var_54_cvector;
	var_65_float = var_54_cvector * var_41_float;
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0);
	var_67_cvector = var_55_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1549(var_66_cvector, var_67_cvector);
	var_75_float = var_66_cvector * (int)25;
	var_76_int = var_65_float + var_75_float;
	var_56_cvector = var_76_int - CVector(0.0, 10.0, 0.0);
	var_57_cvector = var_53_cvector + var_56_cvector;
	IsOverrideActive(var_58_bool);
	var_78_bool = var_58_bool;
	if(var_78_bool != 0) {
		var_39_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_57_cvector, var_55_cvector, (bool)1);
	var_80_float = GetByIndex(var_56_cvector, 0);
	var_81_float = GetByIndex(var_56_cvector, 2);
	Rotate(var_80_float, var_81_float);
	var_82_bool = 0;
	func_2020(var_82_bool);
	if(var_82_bool != 0) {
	} else {
		HasAnimationTrack(var_59_bool, "head");
		var_84_bool = var_59_bool;
		if(var_84_bool == 0) goto Label_1481;
		LookAsyncCamera("head");
	}
Label_1481:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_39_bool = 1;
	return 18;
	
}


func_145()
{
	Stop();
	return 0;
}


func_1937(var_49_object)
{
	var_50_object = Obj(); var_51_object = Obj();
	GetDiaryRoot(var_51_object);
	var_52_bool = var_51_object == 0; //@nz
	if(var_52_bool != 0) {
		Trace("Can't retrieve diary root");
		var_49_object = 0;
		return 2;
	}
	var_51_object = var_49_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_148(var_35_object)
{
	var_36_bool = 0; var_37_bool = 0;
	WaitForAnimEnd(var_37_bool);
	var_38_bool = var_37_bool == 0; //@nz
	if(var_38_bool != 0) {
		return 2;
	}
	var_39_object = Obj();
	var_35_object = var_39_object;
	func_1402(var_39_object);
	Sleep((int)6);
	return 2;
}


func_1950(var_40_bool, var_41_object, var_42_int)
{
	var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; var_46_object = Obj(); var_47_object = Obj(); var_48_int = 0;
	func_1937(Obj());
	var_49_object = var_46_object;
	@@var_46_object:Find(var_42_int, var_47_object);
	var_54_bool = var_47_object == 0; //@nz
	if(var_54_bool != 0) {
		var_56_int = "Can't find diary parent with id: " + var_42_int;
		Trace(var_56_int);
		var_40_bool = 0;
		return 6;
	}
	@@var_47_object:AddChild(var_41_object);
	SendWorldWndMessage((int)7);
	@@var_41_object:GetCategory(var_48_int);
	SetDiarySection(var_48_int);
	var_40_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1699(var_58_object)
{
	Trace("money10000 is given");
	var_61_object = Obj(); var_62_int = 0;
	var_58_object = var_61_object;
	func_1594(var_61_object, (int)10000);
	return 0;
}


func_1709()
{
	TriggerWorld("playsound", "givemoney");
	return 0;
}


func_1715()
{
	SetVariable("d5q02", (int)-1);
	func_1898();
	return 0;
}


func_1978(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetMainOutdoorScene(var_24_object);
	var_26_bool = var_24_object == 0; //@ne
	if(var_26_bool != 0) {
		Trace("Can't find main outdoor scene");
		var_25_object = 0;
		var_25_object = var_21_object;
		return 4;
	}
	@@var_24_object:GetMap(var_25_object);
	var_25_object = var_21_object;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1724()
{
	var_17_object = Obj(); var_18_object = Obj();
	SetVariable("d5q02", (int)2);
	func_1978(Obj());
	var_21_object = var_18_object;
	var_32_float = 0;
	func_1625(var_32_float);
	@@var_18_object:AddMark("d5q02GorbunFindTheDaughter", "pt_map_gorbun", (int)0, (int)515362, var_32_float);
	func_1911();
	return 2;
}
EMIT "Stack[-1] = 0";


func_193()
{
	StopGroup0();
	StopAnimation();
	return 0;
}


func_198(var_118_int)
{
	var_119_string = ""; var_120_bool = 0; var_121_string = ""; var_122_int = 0; var_123_int = 0; var_124_int = 0; var_125_int = 0; var_126_string = ""; var_127_bool = 0; var_128_string = ""; var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0;
	var_133_int = var_118_int;
	if(var_133_int != 0) {
		var_126_string = "ptidle" + var_118_int;
	} else {
			var_126_string = "ptidle";
	}
	HasProperty(var_126_string, var_127_bool);
	var_135_bool = var_127_bool;
	if(var_135_bool != 0) {
		GetProperty(var_126_string, var_128_string);
		var_136_int = 0; var_137_string = "";
		var_128_string = var_137_string;
		func_264(var_136_int, var_137_string);
		var_136_int = var_129_int;
		irand(var_130_int, var_129_int);
		var_151_string = ""; var_152_string = ""; var_153_int = 0;
		var_128_string = var_152_string;
		var_130_int = var_153_int;
		func_256(var_151_string, var_152_string, var_153_int);
		PlayAnimation("all", var_151_string);
		WaitForAnimEnd();
	} else {
		func_1637((int)0);
		var_154_int = var_131_int;
		var_167_int = var_131_int;
		if(var_167_int == 0) goto Label_246;
		irand(var_132_int, var_131_int);
		var_169_string = ""; var_170_int = 0;
		var_132_int = var_170_int;
		func_1630(var_169_string, var_170_int);
		PlayAnimation("all", var_169_string);
		WaitForAnimEnd();

	}
Label_246:
	return 14;
	
}


func_1995(var_91_int)
{
	var_92_int = 0; var_93_int = 0;
	GetVariable("branch", var_93_int);
	var_96_bool = var_93_int == (int)0;
	if(var_96_bool != 0) {
		var_91_int = 1;
		return 2;
	EMIT "GOTO 0x7da";
	}
	var_98_bool = var_93_int == (int)1;
	if(var_98_bool != 0) {
		var_91_int = 2;
		return 2;
	}
	var_91_int = 3;
	return 2;
}


func_1487()
{
	var_216_bool = 0; var_217_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_219_bool = 0;
	func_2020(var_219_bool);
	if(var_219_bool != 0) {
	} else {
		HasAnimationTrack(var_217_bool, "head");
		var_221_bool = var_217_bool;
		if(var_221_bool == 0) goto Label_1504;
		UnlookAsync("head");
	}
Label_1504:
	return 2;
	
}


func_1747()
{
	SetVariable("ood5Gorbun1", (int)1);
	return 0;
}


func_1753()
{
	var_136_object = Obj(); var_137_object = Obj(); var_138_object = Obj(); var_139_object = Obj();
	func_1978(Obj());
	var_140_object = var_138_object;
	@@var_138_object:FindMark(var_139_object, "d5q02AnnaGotoGorbun");
	var_142_object = var_139_object;
	if(var_142_object != 0) {
		@@var_139_object:Remove();
	}
	@@var_138_object:FindMark(var_139_object, "d5q02AnnaGotoGorbunSelf");
	var_144_object = var_139_object;
	if(var_144_object != 0) {
		@@var_139_object:Remove();
	}
	@@var_138_object:FindMark(var_139_object, "d5q02AnnaGotoKabak");
	var_146_object = var_139_object;
	if(var_146_object != 0) {
		@@var_139_object:Remove();
	}
	@@var_138_object:FindMark(var_139_object, "d5q02GorbunFindTheDaughter");
	var_148_object = var_139_object;
	if(var_148_object != 0) {
		@@var_139_object:Remove();
	}
	@@var_138_object:FindMark(var_139_object, "d5q02NudeMeeting");
	var_150_object = var_139_object;
	if(var_150_object != 0) {
		@@var_139_object:Remove();
	}
	func_1924();
	var_159_bool = 0; var_160_string = ""; var_161_string = "";
	func_1613(var_159_bool, "quest_d5_02", "completed");
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_2012(var_88_int)
{
	var_88_int = 515594;
	return 0;
}


func_2014(var_87_int)
{
	var_87_int = 512583;
	return 0;
}


func_2016(var_89_string)
{
	var_89_string = "ui/NPC_Citizen3.png";
	return 0;
}


func_1505(var_152_string)
{
	var_153_bool = 0; var_154_float = 0; var_155_float = 0; var_156_bool = 0; var_157_float = 0; var_158_float = 0;
	lshHasAnimation(var_156_bool, var_152_string);
	var_159_bool = var_156_bool;
	if(var_159_bool != 0) {
		lshGetAnimTimes(var_152_string, var_157_float, var_158_float);
		lshPlayAnimation(var_157_float, var_158_float, (bool)0);
	} else {
		var_162_int = "Can't find lsh animation : " + var_152_string;
		Trace(var_162_int);
	}
	return 6;
	
}


func_2018(var_90_string)
{
	var_90_string = "ui/NPC_Citizen3_b.png";
	return 0;
}


func_2020(var_82_bool)
{
	var_82_bool = 0;
	return 0;
}


func_2022(var_27_object)
{
	var_28_int = 0; var_29_object = Obj();
	var_27_object = var_29_object;
	TaskCall(4);
	func_282(var_30_object, var_28_int, var_29_object);
	TaskReturn();
	return 0;
}


func_1521(var_130_string, var_131_bool)
{
	var_134_bool = 0; var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_float = 0; var_139_float = 0;
	lshHasAnimation(var_137_bool, var_130_string);
	var_140_bool = var_137_bool;
	if(var_140_bool != 0) {
		lshGetAnimTimes(var_130_string, var_138_float, var_139_float);
		lshPlayAnimation(var_138_float, var_139_float, var_131_bool);
	} else {
		var_142_int = "Can't find lsh animation : " + var_130_string;
		Trace(var_142_int);
	}
	return 6;
	
}


func_506(var_2_object, var_126_string)
{
	var_127_bool = 0;
	func_2020(var_127_bool);
	var_128_bool = var_127_bool == 0; //@nz
	if(var_128_bool != 0) {
		return 0;
	}
	var_129_bool = var_126_string == var_2_object;
	if(var_129_bool != 0) {
		return 0;
	}
	var_130_string = ""; var_131_bool = 0;
	var_126_string = var_130_string;
	var_133_bool = var_126_string == "";
	if(var_133_bool != 0) {
		var_131_bool = 0;
	} else {
		var_131_bool = 1;
	}
	func_1521(var_130_string, var_131_bool);
	var_2_object = var_126_string;
	return 0;
	
}


