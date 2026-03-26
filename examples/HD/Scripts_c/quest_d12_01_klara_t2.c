// @IMPORTS: CreateDialog/1,IsOverrideActive/1,DoDialog/1,sync/0,StopDialog/1,lshWaitForAnimEnd/0,PlayAnimation/2,WaitForAnimEnd/0,lshStopAnimation/0,StopAnimation/0,Hold/0,IsLoaded/1,RemoveActor/1,GetPosition/1,GetEyesHeight/1,StopWorld/0,CameraTransit/3,Rotate/2,HasAnimationTrack/2,LookAsyncCamera/1,CameraWaitForPlayFinish/0,ResumeWorld/0,CameraSwitchToNormal/1,UnlookAsync/1,GetVariable/2,irand/2,SetVariable/2,lshHasAnimation/2,lshGetAnimTimes/3,lshPlayAnimation/3,Trace/1,lshHasSpeech/2,lshPlaySpeech/1,lshStopSpeech/0,self/1,GetGameTime/1,CreateDiaryEntry/4,GetDiaryRoot/1,SendWorldWndMessage/1,SetDiarySection/1,CreateIntVector/1
// @STRINGS: A:SetNPCName|A:SetNPCDescription|A:SetPhoto|A:SetPhoto2|A:SetPlayerName|A:IsDialogEnd|A:GetReturnValue|W:Sly|A:SetMessage|A:ClearReplies|A:AddReply|W:Fear|W:all|W:idle|W:Smile|W:Grin|W:Neutral|W:Saveyouall|W:cleanup|W:restore|A:GetPosition|A:GetEyesHeight|W:head|W:voice_common|W:c|A:HasProperty|A:GetProperty|W:m|W:Can't find lsh animation : |W:d12q01KlaraInSobor|W:ood12KlaraT2_1|W:d12q01_Klara|W:ood12KlaraT2_2|W:ood12KlaraT2_3|W:d12q01KlaraVisit|W:b12q01TheaterIsVisited|W:game_final|W:d12q01ChildsAreVisited|W:Can't retrieve diary root|A:Find|W:Can't find diary parent with id: |A:AddChild|A:GetCategory|W:branch|A:add|W:vol_|A:size|A:get|W:ui/NPC_Klara.png|W:ui/NPC_Klara_b.png
// @GLOBALS: 0:object:
// @RUN_OP: 0x482
// @RUN_TASK: 2
// @TASK_0: vars=object params=2
// @TASK_1: vars=object,object,string,bool params=2
// @EVENT_11: op=0x112 vars=int,int
// @TASK_2: vars=bool params=0
// @EVENT_0: op=0x486 vars=object
// @EVENT_26: op=0x492 vars=string
// @EVENT_6: op=0x4ae vars=
// @PE: 0x51,0xfc,0x112,0x482,0x486,0x5f4,0x5fd,0x603,0x613,0x619,0x61f,0x625,0x631,0x63d,0x647,0x653,0x65f,0x66b,0x677,0x683,0x6dd

task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	if((int)1 != 0) {
		func_1487();
		var_11_bool = var_7_bool == (int)37334;
		if(var_11_bool != 0) {
			var_12_object = Obj(); var_13_object = Obj();
			var_12_object = var_1_object;
			var_13_object = var_0_object;
			func_1539();
		}
		var_46_bool = var_7_bool == (int)37337;
		if(var_46_bool != 0) {
			var_47_object = Obj(); var_48_object = Obj();
			var_47_object = var_1_object;
			var_48_object = var_0_object;
			func_1524();
		}
		var_60_bool = var_7_bool == (int)42406;
		if(var_60_bool != 0) {
			var_61_object = Obj(); var_62_object = Obj();
			var_61_object = var_1_object;
			var_62_object = var_0_object;
			func_1539();
		}
		var_64_bool = var_7_bool == (int)42408;
		if(var_64_bool != 0) {
			var_65_object = Obj(); var_66_object = Obj();
			var_65_object = var_1_object;
			var_66_object = var_0_object;
			func_1524();
		}
		var_68_bool = var_7_bool == (int)37342;
		if(var_68_bool != 0) {
			var_69_object = Obj(); var_70_object = Obj();
			var_69_object = var_1_object;
			var_70_object = var_0_object;
			func_1524();
		}
		var_72_bool = var_7_bool == (int)42418;
		if(var_72_bool != 0) {
			var_73_object = Obj(); var_74_object = Obj();
			var_73_object = var_1_object;
			var_74_object = var_0_object;
			func_1555();
		}
		var_78_bool = var_7_bool == (int)42438;
		if(var_78_bool != 0) {
			var_79_object = Obj(); var_80_object = Obj();
			var_79_object = var_1_object;
			var_80_object = var_0_object;
			func_1561();
		}
		var_84_bool = var_6_int == (int)37331;
		if(var_84_bool != 0) {
			var_85_bool = 0;
			var_85_bool = 0;
			var_86_bool = 0; var_87_object = Obj();
			var_87_object = var_1_object;
			func_1585(var_87_object);
			var_92_bool = var_86_bool == 0; //@nz
			if(var_92_bool != 0) {
				var_93_bool = 0; var_94_object = Obj();
				var_94_object = var_1_object;
				func_1619(var_94_object);
				if(var_93_bool != 0) {
					var_85_bool = 1;
				}
			}
			if(var_85_bool != 0) {
				var_99_object = Obj(); var_100_object = Obj();
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_1533();
				var_103_object = Obj(); var_104_object = Obj();
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_1567();
				var_107_string = "";
				func_252(var_7_bool, "Sly");
				@@@var_0_object:SetMessage((int)535645);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)540387, (int)42374, (int)42373);
				@@@var_0_object:AddReply((int)540424, (int)42403, (int)42411);
				return 0;
			}
			var_131_object = Obj(); var_132_object = Obj();
			var_131_object = var_1_object;
			var_132_object = var_0_object;
			func_1567();
			var_133_string = "";
			func_252(var_7_bool, "Fear");
			@@@var_0_object:SetMessage((int)535653);
			@@@var_0_object:ClearReplies();
			var_135_bool = 0;
			var_135_bool = 0;
			var_136_bool = 0;
			var_136_bool = 0;
			var_137_bool = 0; var_138_object = Obj();
			var_138_object = var_1_object;
			func_1597(var_137_bool, var_138_object);
			if(var_137_bool != 0) {
				var_185_bool = 0; var_186_object = Obj();
				var_186_object = var_1_object;
				func_1607(var_186_object);
				var_191_bool = var_185_bool == 0; //@nz
				if(var_191_bool != 0) {
					var_136_bool = 1;
				}
			}
			if(var_136_bool != 0) {
				var_192_bool = 0; var_193_object = Obj();
				var_193_object = var_1_object;
				func_1585(var_193_object);
				var_194_bool = var_192_bool == 0; //@nz
				if(var_194_bool != 0) {
					var_135_bool = 1;
				}
			}
			if(var_135_bool != 0) {
				@@@var_0_object:AddReply((int)535654, (int)37341, (int)37340);
			}
			var_198_bool = 0;
			var_198_bool = 0;
			var_199_bool = 0; var_200_object = Obj();
			var_200_object = var_1_object;
			func_1655(var_200_object);
			if(var_199_bool != 0) {
				var_205_bool = 0; var_206_object = Obj();
				var_206_object = var_1_object;
				func_1631(var_206_object);
				if(var_205_bool != 0) {
					var_198_bool = 1;
				}
			}
			if(var_198_bool != 0) {
				@@@var_0_object:AddReply((int)540429, (int)42419, (int)42418);
			}
			var_214_bool = 0;
			var_214_bool = 0;
			var_215_bool = 0; var_216_object = Obj();
			var_216_object = var_1_object;
			func_1573(var_216_object);
			if(var_215_bool != 0) {
				var_221_bool = 0; var_222_object = Obj();
				var_222_object = var_1_object;
				func_1643(var_222_object);
				if(var_221_bool != 0) {
					var_214_bool = 1;
				}
			}
			if(var_214_bool != 0) {
				@@@var_0_object:AddReply((int)540447, (int)42439, (int)42438);
			}
			@@@var_0_object:AddReply((int)540478, (int)-1, (int)42473);
			return 0;
		}
		var_234_bool = var_6_int == (int)42439;
		if(var_234_bool != 0) {
			var_235_string = "";
			func_252(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540448);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540449, (int)42441, (int)42440);
			@@@var_0_object:AddReply((int)540461, (int)42455, (int)42454);
			return 0;
		}
		var_244_bool = var_6_int == (int)42455;
		if(var_244_bool != 0) {
			var_245_string = "";
			func_252(var_7_bool, "Grin");
			@@@var_0_object:SetMessage((int)540462);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540463, (int)-1, (int)42456);
			@@@var_0_object:AddReply((int)540464, (int)42458, (int)42457);
			return 0;
		}
		var_254_bool = var_6_int == (int)42458;
		if(var_254_bool != 0) {
			var_255_string = "";
			func_252(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540465);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540466, (int)42460, (int)42459);
			@@@var_0_object:AddReply((int)540473, (int)42460, (int)42466);
			@@@var_0_object:AddReply((int)540474, (int)42460, (int)42468);
			return 0;
		}
		var_267_bool = var_6_int == (int)42460;
		if(var_267_bool != 0) {
			var_268_string = "";
			func_252(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540467);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540468, (int)-1, (int)42461);
			@@@var_0_object:AddReply((int)540469, (int)42463, (int)42462);
			return 0;
		}
		var_277_bool = var_6_int == (int)42463;
		if(var_277_bool != 0) {
			var_278_string = "";
			func_252(var_7_bool, "Grin");
			@@@var_0_object:SetMessage((int)540470);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540471, (int)-1, (int)42464);
			@@@var_0_object:AddReply((int)540472, (int)-1, (int)42465);
			return 0;
		}
		var_287_bool = var_6_int == (int)42441;
		if(var_287_bool != 0) {
			var_288_string = "";
			func_252(var_7_bool, "Grin");
			@@@var_0_object:SetMessage((int)540450);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540451, (int)42443, (int)42442);
			return 0;
		}
		var_294_bool = var_6_int == (int)42443;
		if(var_294_bool != 0) {
			var_295_string = "";
			func_252(var_7_bool, "Grin");
			@@@var_0_object:SetMessage((int)540452);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540453, (int)42445, (int)42444);
			return 0;
		}
		var_301_bool = var_6_int == (int)42445;
		if(var_301_bool != 0) {
			var_302_string = "";
			func_252(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540454);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540455, (int)42447, (int)42446);
			@@@var_0_object:AddReply((int)540459, (int)42447, (int)42450);
			@@@var_0_object:AddReply((int)540460, (int)42447, (int)42452);
			return 0;
		}
		var_314_bool = var_6_int == (int)42447;
		if(var_314_bool != 0) {
			var_315_string = "";
			func_252(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540456);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540457, (int)-1, (int)42448);
			@@@var_0_object:AddReply((int)540458, (int)-1, (int)42449);
			return 0;
		}
		var_324_bool = var_6_int == (int)42419;
		if(var_324_bool != 0) {
			var_325_string = "";
			func_252(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540430);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540431, (int)42421, (int)42420);
			@@@var_0_object:AddReply((int)540441, (int)42431, (int)42430);
			return 0;
		}
		var_334_bool = var_6_int == (int)42431;
		if(var_334_bool != 0) {
			var_335_string = "";
			func_252(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)540442);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540443, (int)42433, (int)42432);
			return 0;
		}
		var_341_bool = var_6_int == (int)42433;
		if(var_341_bool != 0) {
			var_342_string = "";
			func_252(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540444);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540445, (int)42421, (int)42434);
			@@@var_0_object:AddReply((int)540446, (int)42421, (int)42436);
			return 0;
		}
		var_351_bool = var_6_int == (int)42421;
		if(var_351_bool != 0) {
			var_352_string = "";
			func_252(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540432);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540433, (int)42423, (int)42422);
			return 0;
		}
		var_358_bool = var_6_int == (int)42423;
		if(var_358_bool != 0) {
			var_359_string = "";
			func_252(var_7_bool, "Smile");
			@@@var_0_object:SetMessage((int)540434);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540435, (int)42425, (int)42424);
			return 0;
		}
		var_365_bool = var_6_int == (int)42425;
		if(var_365_bool != 0) {
			var_366_string = "";
			func_252(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)540436);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540437, (int)-1, (int)42426);
			@@@var_0_object:AddReply((int)540438, (int)42428, (int)42427);
			return 0;
		}
		var_375_bool = var_6_int == (int)42428;
		if(var_375_bool != 0) {
			var_376_string = "";
			func_252(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)540439);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540440, (int)-1, (int)42429);
			return 0;
		}
		var_382_bool = var_6_int == (int)37341;
		if(var_382_bool != 0) {
			var_383_string = "";
			func_252(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)535655);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535656, (int)-1, (int)37342);
			return 0;
		}
		var_389_bool = var_6_int == (int)42374;
		if(var_389_bool != 0) {
			var_390_string = "";
			func_252(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)540388);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540389, (int)42376, (int)42375);
			return 0;
		}
		var_396_bool = var_6_int == (int)42376;
		if(var_396_bool != 0) {
			var_397_string = "";
			func_252(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)540390);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540391, (int)42378, (int)42377);
			return 0;
		}
		var_403_bool = var_6_int == (int)42378;
		if(var_403_bool != 0) {
			var_404_string = "";
			func_252(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)540392);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540393, (int)42380, (int)42379);
			@@@var_0_object:AddReply((int)540413, (int)42401, (int)42400);
			return 0;
		}
		var_413_bool = var_6_int == (int)42401;
		if(var_413_bool != 0) {
			var_414_string = "";
			func_252(var_7_bool, "Saveyouall");
			@@@var_0_object:SetMessage((int)540414);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540415, (int)42403, (int)42402);
			@@@var_0_object:AddReply((int)540423, (int)-1, (int)42410);
			return 0;
		}
		var_423_bool = var_6_int == (int)42403;
		if(var_423_bool != 0) {
			var_424_bool = 0; var_425_object = Obj();
			var_425_object = var_1_object;
			func_1597(var_424_bool, var_425_object);
			var_426_bool = var_424_bool == 0; //@nz
			if(var_426_bool != 0) {
				var_427_string = "";
				func_252(var_7_bool, "Saveyouall");
				@@@var_0_object:SetMessage((int)540416);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)540417, (int)42405, (int)42404);
				return 0;
			}
			var_432_bool = 0; var_433_object = Obj();
			var_433_object = var_1_object;
			func_1597(var_432_bool, var_433_object);
			if(var_432_bool != 0) {
				var_434_string = "";
				func_252(var_7_bool, "Neutral");
				@@@var_0_object:SetMessage((int)540420);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)540421, (int)-1, (int)42408);
				@@@var_0_object:AddReply((int)540422, (int)-1, (int)42409);
				return 0;
			}
		}
		var_443_bool = var_6_int == (int)42405;
		if(var_443_bool != 0) {
			var_444_string = "";
			func_252(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540418);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540419, (int)-1, (int)42406);
			return 0;
		}
		var_450_bool = var_6_int == (int)42380;
		if(var_450_bool != 0) {
			var_451_string = "";
			func_252(var_7_bool, "Sly");
			@@@var_0_object:SetMessage((int)540394);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540395, (int)42401, (int)42381);
			@@@var_0_object:AddReply((int)540396, (int)37333, (int)42383);
			return 0;
		}
		var_460_bool = var_6_int == (int)37333;
		if(var_460_bool != 0) {
			var_461_bool = 0; var_462_object = Obj();
			var_462_object = var_1_object;
			func_1597(var_461_bool, var_462_object);
			var_463_bool = var_461_bool == 0; //@nz
			if(var_463_bool != 0) {
				var_464_string = "";
				func_252(var_7_bool, "Fear");
				@@@var_0_object:SetMessage((int)535647);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)540398, (int)42386, (int)42385);
				return 0;
			}
			var_469_bool = 0; var_470_object = Obj();
			var_470_object = var_1_object;
			func_1597(var_469_bool, var_470_object);
			if(var_469_bool != 0) {
				var_471_string = "";
				func_252(var_7_bool, "Smile");
				@@@var_0_object:SetMessage((int)535650);
				@@@var_0_object:ClearReplies();
				@@@var_0_object:AddReply((int)535651, (int)-1, (int)37337);
				@@@var_0_object:AddReply((int)535652, (int)-1, (int)37338);
				return 0;
			}
		}
		var_480_bool = var_6_int == (int)42386;
		if(var_480_bool != 0) {
			var_481_string = "";
			func_252(var_7_bool, "Fear");
			@@@var_0_object:SetMessage((int)540399);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540400, (int)42388, (int)42387);
			@@@var_0_object:AddReply((int)540408, (int)42390, (int)42395);
			return 0;
		}
		var_490_bool = var_6_int == (int)42388;
		if(var_490_bool != 0) {
			var_491_string = "";
			func_252(var_7_bool, "Fear");
			@@@var_0_object:SetMessage((int)540401);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540402, (int)42390, (int)42389);
			@@@var_0_object:AddReply((int)540407, (int)-1, (int)42394);
			return 0;
		}
		var_500_bool = var_6_int == (int)42390;
		if(var_500_bool != 0) {
			var_501_string = "";
			func_252(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540403);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540404, (int)42392, (int)42391);
			return 0;
		}
		var_507_bool = var_6_int == (int)42392;
		if(var_507_bool != 0) {
			var_508_string = "";
			func_252(var_7_bool, "Neutral");
			@@@var_0_object:SetMessage((int)540405);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)535648, (int)-1, (int)37334);
			return 0;
		}
		var_3_string = true;
		var_513_bool = 0;
		func_1855(var_513_bool);
		if(var_513_bool != 0) {
			lshStopAnimation();
		} else {
			StopAnimation();
	}
		return 0;
	}
	return 0;
EMIT "GOTO 0x113";
	
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj();
	var_6_object = var_8_object;
	TaskCall(0);
	func_0(var_9_object, var_7_int, var_8_object);
	TaskReturn();
	return 0;
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0;
	var_10_bool = var_6_string == "cleanup";
	if(var_10_bool != 0) {
		var_0_object = true;
		IsLoaded(var_8_bool);
		var_11_bool = 0;
		var_11_bool = 0;
		var_12_bool = var_8_bool == 0; //@nz
		if(var_12_bool != 0) {
			var_13_bool = 0;
			func_1214(var_13_bool);
			if(var_13_bool != 0) {
				var_11_bool = 1;
			}
		}
		if(var_11_bool != 0) {
			var_14_object = Obj();
			func_1494(var_14_object);
			RemoveActor(var_14_object);
		}
	} else {
		var_18_bool = var_6_string == "restore";
		if(var_18_bool == 0) goto Label_1197;
		var_0_object = false;
	}
Label_1197:
	return 2;
	
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0;
	var_6_bool = 0;
	var_7_object = var_0_object;
	if(var_7_object != 0) {
		var_8_bool = 0;
		func_1214(var_8_bool);
		if(var_8_bool != 0) {
			var_6_bool = 1;
		}
	}
	if(var_6_bool != 0) {
		var_9_object = Obj();
		func_1494(var_9_object);
		RemoveActor(var_9_object);
	}
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_1166();
	return 0;
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_0_object = var_8_object;
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
	var_8_object = var_19_object;
	func_1216(var_18_bool, var_19_object, (float)70.0);
	var_65_bool = var_18_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	CreateDialog(var_14_object);
	var_66_int = 0;
	func_1849(var_66_int);
	@@var_14_object:SetNPCName(var_66_int);
	var_67_int = 0;
	func_1847(var_67_int);
	@@var_14_object:SetNPCDescription(var_67_int);
	var_68_string = "";
	func_1851(var_68_string);
	@@var_14_object:SetPhoto(var_68_string);
	var_69_string = "";
	func_1853(var_69_string);
	@@var_14_object:SetPhoto2(var_69_string);
	var_70_int = 0;
	func_1740(var_70_int);
	@@var_14_object:SetPlayerName(var_70_int);
	IsOverrideActive(var_15_bool);
	var_78_bool = var_15_bool;
	if(var_78_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	DoDialog(var_14_object);
	var_79_bool = 0; var_80_object = Obj();
	func_1494(Obj());
	var_81_object = var_80_object;
	func_1303(var_79_bool, var_80_object);
	var_174_object = Obj(); var_175_object = Obj();
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	@@var_14_object:IsDialogEnd(var_17_bool);
	
Label_63:
	var_349_bool = var_17_bool == 0; //@nz
	if(var_349_bool != 0) {
		sync();
		@@var_14_object:IsDialogEnd(var_17_bool);
		goto Label_63;
	}
	var_8_object = Obj();
	func_1285();
	StopDialog(var_14_object);
	@@var_14_object:GetReturnValue((int)-1);
	var_16_int = var_7_int;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1539()
{
	var_14_int = 0; var_15_string = "";
	func_1510(var_14_int, "d12q01_Klara");
	var_19_bool = var_14_int == (int)0;
	if(var_19_bool != 0) {
		SetVariable("d12q01_Klara", (int)1);
		func_1686();
	}
	return 0;
}


func_1667(var_255_bool)
{
	func_1809((bool)0);
	var_257_bool = var_255_bool;
	return 0;
}


func_1285()
{
	var_351_bool = 0; var_352_bool = 0;
	CameraSwitchToNormal((bool)1);
	var_354_bool = 0;
	func_1855(var_354_bool);
	if(var_354_bool != 0) {
	} else {
		HasAnimationTrack(var_352_bool, "head");
		var_356_bool = var_352_bool;
		if(var_356_bool == 0) goto Label_1302;
		UnlookAsync("head");
	}
Label_1302:
	return 2;
	
}


func_1799(var_282_bool, var_283_int)
{
	var_284_int = 0; var_285_int = 0;
	var_287_int = "vol_" + var_283_int;
	GetVariable(var_287_int, var_285_int);
	var_289_int = var_285_int & (int)16;
	var_282_bool = var_289_int != (int)0;
	return 2;
}


func_1673()
{
	var_51_object = Obj(); var_52_object = Obj();
	CreateDiaryEntry(var_52_object, (int)701, (int)1, (int)535684);
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0;
	var_52_object = var_57_object;
	func_1712(var_56_bool, var_57_object, (int)699);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1166()
{
	
Label_1166:
	Hold();
	goto Label_1166;
}
EMIT "Return(); Pop(0)";


func_1809(var_257_bool)
{
	var_258_object = Obj(); var_259_int = 0; var_260_int = 0; var_261_int = 0; var_262_object = Obj(); var_263_int = 0; var_264_int = 0; var_265_int = 0;
	CreateIntVector(var_262_object);
	var_266_object = Obj(); var_267_bool = 0; var_268_int = 0;
	var_262_object = var_266_object;
	func_1757((bool)0, (int)-1);
	@@var_262_object:size(var_263_int);
	var_264_int = 0;
	
Label_1821:
	var_280_bool = var_264_int < var_263_int;
	if(var_280_bool != 0) {
		@@var_262_object:get(var_265_int, var_264_int);
		var_281_bool = 0;
		var_281_bool = 1;
		var_282_bool = 0; var_283_int = 0;
		var_265_int = var_283_int;
		func_1799(var_282_bool, var_283_int);
		if(var_282_bool != 1) {
			var_291_bool = 0; var_292_int = 0;
			var_265_int = var_292_int;
			func_1789(var_291_bool, var_292_int);
			if(var_291_bool != 1) {
				var_281_bool = 0;
			}
		}
		if(var_281_bool != 0) {
			var_257_bool = 0;
			var_264_int = var_264_int + (int)1;
			goto Label_1821;
		}
		return 8;
	}
	var_257_bool = 1;
	return 8;
}
EMIT "Stack[-4] = 0";


func_1555()
{
	SetVariable("ood12KlaraT2_2", (int)1);
	return 0;
}


func_1686()
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateDiaryEntry(var_23_object, (int)707, (int)1, (int)535690);
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0;
	var_23_object = var_28_object;
	func_1712(var_27_bool, var_28_object, (int)699);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1303(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0;
	GetVariable("voice_common", var_86_int);
	var_89_int = var_86_int;
	if(var_89_int != 0) {
		var_90_bool = 0; var_91_object = Obj();
		var_80_object = var_91_object;
		func_1361(var_90_bool, var_91_object);
		var_120_bool = var_90_bool == 0; //@nz
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj();
			var_80_object = var_122_object;
			func_1398(var_121_bool, var_122_object);
			var_156_bool = var_121_bool == 0; //@nz
			if(var_156_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		irand(var_87_int, (int)2);
		var_158_int = var_87_int;
		if(var_158_int != 0) {
			var_161_int = var_86_int + (int)1;
			var_163_int = var_161_int % (int)3;
			SetVariable("voice_common", var_163_int);
		} else {
			SetVariable("voice_common", (int)0);
	}
		var_166_bool = 0; var_167_object = Obj();
		var_80_object = var_167_object;
		func_1398(var_166_bool, var_167_object);
		var_168_bool = var_166_bool == 0; //@nz
		if(var_168_bool != 0) {
			var_169_bool = 0; var_170_object = Obj();
			var_80_object = var_170_object;
			func_1361(var_169_bool, var_170_object);
			var_171_bool = var_169_bool == 0; //@nz
			if(var_171_bool != 0) {
				var_79_bool = 0;
				return 4;
			}
		}
		SetVariable("voice_common", (int)1);
	}
	goto Label_1359;
	
Label_1359:
	var_79_bool = 1;
	return 4;
	
}


func_1561()
{
	SetVariable("ood12KlaraT2_3", (int)1);
	return 0;
}


func_1567()
{
	SetVariable("d12q01KlaraVisit", (int)1);
	return 0;
}


func_1441(var_231_string)
{
	var_232_bool = 0; var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_float = 0; var_237_float = 0;
	lshHasAnimation(var_235_bool, var_231_string);
	var_238_bool = var_235_bool;
	if(var_238_bool != 0) {
		lshGetAnimTimes(var_231_string, var_236_float, var_237_float);
		lshPlayAnimation(var_236_float, var_237_float, (bool)0);
	} else {
		var_241_int = "Can't find lsh animation : " + var_231_string;
		Trace(var_241_int);
	}
	return 6;
	
}


func_1533()
{
	SetVariable("ood12KlaraT2_1", (int)1);
	return 0;
}


func_1699(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj();
	GetDiaryRoot(var_38_object);
	var_39_bool = var_38_object == 0; //@nz
	if(var_39_bool != 0) {
		Trace("Can't retrieve diary root");
		var_36_object = 0;
		return 2;
	}
	var_38_object = var_36_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1573(var_331_bool)
{
	var_333_int = 0; var_334_string = "";
	func_1510(var_333_int, "b12q01TheaterIsVisited");
	var_336_bool = var_333_int != (int)0;
	if(var_336_bool != 0) {
		var_331_bool = 1;
		return 0;
	}
	var_331_bool = 0;
	return 0;
}


func_1712(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0;
	func_1699(Obj());
	var_36_object = var_33_object;
	@@var_33_object:Find(var_29_int, var_34_object);
	var_41_bool = var_34_object == 0; //@nz
	if(var_41_bool != 0) {
		var_43_int = "Can't find diary parent with id: " + var_29_int;
		Trace(var_43_int);
		var_27_bool = 0;
		return 6;
	}
	@@var_34_object:AddChild(var_28_object);
	SendWorldWndMessage((int)7);
	@@var_28_object:GetCategory(var_35_int);
	SetDiarySection(var_35_int);
	var_27_bool = 0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1585(var_182_bool)
{
	var_184_int = 0; var_185_string = "";
	func_1510(var_184_int, "game_final");
	var_189_bool = var_184_int != (int)0;
	if(var_189_bool != 0) {
		var_182_bool = 1;
		return 0;
	}
	var_182_bool = 0;
	return 0;
}


func_1457(var_209_string, var_210_bool)
{
	var_213_bool = 0; var_214_float = 0; var_215_float = 0; var_216_bool = 0; var_217_float = 0; var_218_float = 0;
	lshHasAnimation(var_216_bool, var_209_string);
	var_219_bool = var_216_bool;
	if(var_219_bool != 0) {
		lshGetAnimTimes(var_209_string, var_217_float, var_218_float);
		lshPlayAnimation(var_217_float, var_218_float, var_210_bool);
	} else {
		var_221_int = "Can't find lsh animation : " + var_209_string;
		Trace(var_221_int);
	}
	return 6;
	
}


func_1847(var_67_int)
{
	var_67_int = 515540;
	return 0;
}


func_1849(var_66_int)
{
	var_66_int = 502865;
	return 0;
}


func_1851(var_68_string)
{
	var_68_string = "ui/NPC_Klara.png";
	return 0;
}


func_1597(var_253_bool, var_254_object)
{
	var_255_bool = 0; var_256_object = Obj();
	var_254_object = var_256_object;
	func_1667(var_256_object);
	if(var_255_bool != 0) {
		var_253_bool = 1;
		return 0;
	}
	var_253_bool = 0;
	return 0;
}


func_1853(var_69_string)
{
	var_69_string = "ui/NPC_Klara_b.png";
	return 0;
}


func_1855(var_61_bool)
{
	var_61_bool = 1;
	return 0;
}


func_1216(var_18_bool, var_19_object, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0;
	@@var_19_object:GetPosition(var_31_cvector);
	@@var_19_object:GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	var_39_float = var_39_float + var_30_float;
	SetByIndex(var_31_cvector, 1) = var_39_float;
	GetPosition(var_32_cvector);
	GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	var_40_float = var_40_float + var_30_float;
	SetByIndex(var_32_cvector, 1) = var_40_float;
	var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_42_int = var_33_cvector | var_33_cvector;
	var_43_float = sqrt(var_42_int);
	var_33_cvector = var_33_cvector / var_43_float;
	var_34_cvector = -var_33_cvector;
	var_44_float = var_33_cvector * var_20_float;
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_46_cvector = var_34_cvector ^ CVector(0.0, 1.0, 0.0);
	func_1500(var_45_cvector, var_46_cvector);
	var_54_float = var_45_cvector * (int)25;
	var_55_int = var_44_float + var_54_float;
	var_35_cvector = var_55_int - CVector(0.0, 10.0, 0.0);
	var_36_cvector = var_32_cvector + var_35_cvector;
	IsOverrideActive(var_37_bool);
	var_57_bool = var_37_bool;
	if(var_57_bool != 0) {
		var_18_bool = 0;
		return 18;
	}
	StopWorld();
	CameraTransit(var_36_cvector, var_34_cvector, (bool)1);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	Rotate(var_59_float, var_60_float);
	var_61_bool = 0;
	func_1855(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		HasAnimationTrack(var_38_bool, "head");
		var_63_bool = var_38_bool;
		if(var_63_bool == 0) goto Label_1279;
		LookAsyncCamera("head");
	}
Label_1279:
	CameraWaitForPlayFinish();
	ResumeWorld();
	var_18_bool = 1;
	return 18;
	
}


func_1214(var_8_bool)
{
	var_8_bool = 1;
	return 0;
}


func_1472(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0;
	var_117_bool = 0;
	func_1855(var_117_bool);
	if(var_117_bool != 0) {
		lshHasSpeech(var_116_bool, var_114_string);
		var_118_bool = var_116_bool;
		if(var_118_bool != 0) {
			lshPlaySpeech(var_114_string);
			var_113_bool = 1;
			return 2;
		}
	}
	var_113_bool = 0;
	return 2;
}


func_1607(var_301_bool)
{
	var_303_int = 0; var_304_string = "";
	func_1510(var_303_int, "d12q01KlaraInSobor");
	var_306_bool = var_303_int != (int)0;
	if(var_306_bool != 0) {
		var_301_bool = 1;
		return 0;
	}
	var_301_bool = 0;
	return 0;
}


func_1740(var_70_int)
{
	var_71_int = 0; var_72_int = 0;
	GetVariable("branch", var_72_int);
	var_75_bool = var_72_int == (int)0;
	if(var_75_bool != 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x6db";
	}
	var_77_bool = var_72_int == (int)1;
	if(var_77_bool != 0) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
	return 2;
}


func_1487()
{
	var_9_bool = 0;
	func_1855(var_9_bool);
	if(var_9_bool != 0) {
		lshStopSpeech();
	}
	return 0;
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if((int)1 != 0) {
		var_181_bool = 0;
		var_181_bool = 0;
		var_182_bool = 0; var_183_object = Obj();
		var_183_object = var_1_object;
		func_1585(var_183_object);
		var_190_bool = var_182_bool == 0; //@nz
		if(var_190_bool != 0) {
			var_191_bool = 0; var_192_object = Obj();
			var_192_object = var_1_object;
			func_1619(var_192_object);
			if(var_191_bool != 0) {
				var_181_bool = 1;
			}
		}
		if(var_181_bool != 0) {
			var_197_object = Obj(); var_198_object = Obj();
			var_197_object = var_1_object;
			var_198_object = var_0_object;
			func_1533();
			var_201_object = Obj(); var_202_object = Obj();
			var_201_object = var_1_object;
			var_202_object = var_0_object;
			func_1567();
			var_205_string = "";
			func_252(var_175_object, "Sly");
			@@@var_0_object:SetMessage((int)535645);
			@@@var_0_object:ClearReplies();
			@@@var_0_object:AddReply((int)540387, (int)42374, (int)42373);
			@@@var_0_object:AddReply((int)540424, (int)42403, (int)42411);
		} else {
				var_247_object = Obj(); var_248_object = Obj();
				var_247_object = var_1_object;
				var_248_object = var_0_object;
				func_1567();
				var_249_string = "";
				func_252(var_175_object, "Fear");
				@@@var_0_object:SetMessage((int)535653);
				@@@var_0_object:ClearReplies();
				var_251_bool = 0;
				var_251_bool = 0;
				var_252_bool = 0;
				var_252_bool = 0;
				var_253_bool = 0; var_254_object = Obj();
				var_254_object = var_1_object;
				func_1597(var_253_bool, var_254_object);
				if(var_253_bool != 0) {
					var_301_bool = 0; var_302_object = Obj();
					var_302_object = var_1_object;
					func_1607(var_302_object);
					var_307_bool = var_301_bool == 0; //@nz
					if(var_307_bool != 0) {
						var_252_bool = 1;
					}
				}
				if(var_252_bool != 0) {
					var_308_bool = 0; var_309_object = Obj();
					var_309_object = var_1_object;
					func_1585(var_309_object);
					var_310_bool = var_308_bool == 0; //@nz
					if(var_310_bool != 0) {
						var_251_bool = 1;
					}
				}
				if(var_251_bool != 0) {
					@@@var_0_object:AddReply((int)535654, (int)37341, (int)37340);
				}
				var_314_bool = 0;
				var_314_bool = 0;
				var_315_bool = 0; var_316_object = Obj();
				var_316_object = var_1_object;
				func_1655(var_316_object);
				if(var_315_bool != 0) {
					var_321_bool = 0; var_322_object = Obj();
					var_322_object = var_1_object;
					func_1631(var_322_object);
					if(var_321_bool != 0) {
						var_314_bool = 1;
					}
				}
				if(var_314_bool != 0) {
					@@@var_0_object:AddReply((int)540429, (int)42419, (int)42418);
				}
				var_330_bool = 0;
				var_330_bool = 0;
				var_331_bool = 0; var_332_object = Obj();
				var_332_object = var_1_object;
				func_1573(var_332_object);
				if(var_331_bool != 0) {
					var_337_bool = 0; var_338_object = Obj();
					var_338_object = var_1_object;
					func_1643(var_338_object);
					if(var_337_bool != 0) {
						var_330_bool = 1;
					}
				}
				if(var_330_bool != 0) {
					@@@var_0_object:AddReply((int)540447, (int)42439, (int)42438);
				}
				@@@var_0_object:AddReply((int)540478, (int)-1, (int)42473);
				goto Label_222;
		}
	}
Label_222:
	var_229_bool = 0;
	func_1855(var_229_bool);
	if(var_229_bool != 0) {

	Label_226:
		lshWaitForAnimEnd();
		var_230_string = var_3_string;
		if(var_230_string != 0) {
		} else {
			var_231_string = "";
			var_231_string = var_2_object;
			func_1441(var_231_string);
			goto Label_226;
	}
		PlayAnimation("all", "idle");

	Label_241:
		WaitForAnimEnd();
		var_244_string = var_3_string;
		if(var_244_string != 0) {
			goto Label_251;
		}
		PlayAnimation("all", "idle");
		goto Label_241;

	}
	goto Label_251;
	
Label_251:
	return 0;
	
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


func_1361(var_90_bool, var_91_object)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = "";
	var_97_string = "c";
	var_98_int = 0;
	
Label_1364:
	if((int)1 != 0) {
		var_104_int = var_98_int + (int)1;
		var_105_int = var_97_string + var_104_int;
		@@var_91_object:HasProperty(var_105_int, var_99_bool);
		var_106_bool = var_99_bool == 0; //@nz
		if(var_106_bool != 0) {
		} else {
			var_98_int = var_98_int + (int)1;
			goto Label_1364;
		}
	}
	var_107_bool = var_98_int == 0; //@nz
	if(var_107_bool != 0) {
		var_90_bool = 0;
		return 10;
	}
	var_100_int = 0;
	var_109_bool = var_98_int > (int)1;
	if(var_109_bool != 0) {
		irand(var_100_int, var_98_int);
	}
	var_111_int = var_100_int + (int)1;
	var_112_int = var_97_string + var_111_int;
	@@var_91_object:GetProperty(var_112_int, var_101_string);
	var_113_bool = 0; var_114_string = "";
	var_101_string = var_114_string;
	func_1472(var_113_bool, var_114_string);
	var_113_bool = var_90_bool;
	return 10;
	
}


func_1619(var_191_bool)
{
	var_193_int = 0; var_194_string = "";
	func_1510(var_193_int, "ood12KlaraT2_1");
	var_196_bool = var_193_int == (int)0;
	if(var_196_bool != 0) {
		var_191_bool = 1;
		return 0;
	}
	var_191_bool = 0;
	return 0;
}


func_1494(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1500(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_46_cvector | var_46_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_45_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_45_cvector = var_46_cvector / var_49_float;
	return 2;
}


func_1757(var_266_object, var_267_bool)
{
	@@var_266_object:add((int)7);
	@@var_266_object:add((int)23);
	@@var_266_object:add((int)21);
	@@var_266_object:add((int)9);
	@@var_266_object:add((int)3);
	@@var_266_object:add((int)1);
	@@var_266_object:add((int)11);
	@@var_266_object:add((int)13);
	var_278_bool = var_267_bool == (bool)0;
	if(var_278_bool != 0) {
		@@var_266_object:add((int)25);
	}
	return 0;
}


func_1631(var_321_bool)
{
	var_323_int = 0; var_324_string = "";
	func_1510(var_323_int, "ood12KlaraT2_2");
	var_326_bool = var_323_int == (int)0;
	if(var_326_bool != 0) {
		var_321_bool = 1;
		return 0;
	}
	var_321_bool = 0;
	return 0;
}


func_1510(var_184_int, var_185_string)
{
	var_186_int = 0; var_187_int = 0;
	GetVariable(var_185_string, var_187_int);
	var_187_int = var_184_int;
	return 2;
}


func_1643(var_337_bool)
{
	var_339_int = 0; var_340_string = "";
	func_1510(var_339_int, "ood12KlaraT2_3");
	var_342_bool = var_339_int == (int)0;
	if(var_342_bool != 0) {
		var_337_bool = 1;
		return 0;
	}
	var_337_bool = 0;
	return 0;
}


func_1515(var_134_int)
{
	var_135_float = 0; var_136_float = 0;
	GetGameTime(var_136_float);
	var_138_int = 0;
	var_138_int = var_136_float / (int)24;
	var_134_int = (int)1 + var_138_int;
	return 2;
}


func_1524()
{
	SetVariable("d12q01KlaraInSobor", (int)1);
	func_1673();
	return 0;
}


func_1398(var_121_bool, var_122_object)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = "";
	var_134_int = 0;
	func_1515(var_134_int);
	var_140_int = "d" + var_134_int;
	var_128_string = var_140_int + "m";
	var_129_int = 0;
	
Label_1407:
	if((int)1 != 0) {
		var_144_int = var_129_int + (int)1;
		var_145_int = var_128_string + var_144_int;
		@@var_122_object:HasProperty(var_145_int, var_130_bool);
		var_146_bool = var_130_bool == 0; //@nz
		if(var_146_bool != 0) {
		} else {
			var_129_int = var_129_int + (int)1;
			goto Label_1407;
		}
	}
	var_147_bool = var_129_int == 0; //@nz
	if(var_147_bool != 0) {
		var_121_bool = 0;
		return 10;
	}
	var_131_int = 0;
	var_149_bool = var_129_int > (int)1;
	if(var_149_bool != 0) {
		irand(var_131_int, var_129_int);
	}
	var_151_int = var_131_int + (int)1;
	var_152_int = var_128_string + var_151_int;
	@@var_122_object:GetProperty(var_152_int, var_132_string);
	var_153_bool = 0; var_154_string = "";
	var_132_string = var_154_string;
	func_1472(var_153_bool, var_154_string);
	var_153_bool = var_121_bool;
	return 10;
	
}


func_1655(var_315_bool)
{
	var_317_int = 0; var_318_string = "";
	func_1510(var_317_int, "d12q01ChildsAreVisited");
	var_320_bool = var_317_int != (int)0;
	if(var_320_bool != 0) {
		var_315_bool = 1;
		return 0;
	}
	var_315_bool = 0;
	return 0;
}


func_252(var_2_object, var_205_string)
{
	var_206_bool = 0;
	func_1855(var_206_bool);
	var_207_bool = var_206_bool == 0; //@nz
	if(var_207_bool != 0) {
		return 0;
	}
	var_208_bool = var_205_string == var_2_object;
	if(var_208_bool != 0) {
		return 0;
	}
	var_209_string = ""; var_210_bool = 0;
	var_205_string = var_209_string;
	var_212_bool = var_205_string == "";
	if(var_212_bool != 0) {
		var_210_bool = 0;
	} else {
		var_210_bool = 1;
	}
	func_1457(var_209_string, var_210_bool);
	var_2_object = var_205_string;
	return 0;
	
}


func_1789(var_291_bool, var_292_int)
{
	var_293_int = 0; var_294_int = 0;
	var_296_int = "vol_" + var_292_int;
	GetVariable(var_296_int, var_294_int);
	var_298_int = var_294_int & (int)4;
	var_291_bool = var_298_int != (int)0;
	return 2;
}


