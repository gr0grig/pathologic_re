// @GLOBALS: 0:object:,1:bool:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2833();
			if(var_31_bool == 19166) {
				func_139(var_32_cvector, "Neutral");
				var_0_object->SetMessage(518033); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518034, 28430, 19167); //@t
				var_0_object->AddReply(527134, 28433, 28432); //@t
				return 0;
			}
			if(var_31_bool == 28433) {
				func_139(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527135); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527137, -1, 28435); //@t
				return 0;
			}
			if(var_31_bool == 28430) {
				func_139(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527132); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527133, -1, 28431); //@t
				return 0;
			}
			var_3_string = true;
			bool var_75_bool;
			func_2976(var_75_bool);
			if(var_75_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2833();
			if(var_31_bool == 22586) {
				bool var_37_bool = false;
				bool var_38_bool;
				func_3106(var_1_object);
				if(var_38_bool != 0) {
					bool var_46_bool;
					func_3118(var_1_object);
					if(var_46_bool != 0)
						var_37_bool = true;
				}
				if(var_37_bool != 0) {
					object var_52_object; object var_53_object;
					var_52_object = var_1_object;
					var_53_object = var_0_object;
					func_2989();
					func_417(var_32_cvector, "Fear");
					var_0_object->SetMessage(521408); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(521409, 25093, 22587); //@t
					var_0_object->AddReply(523832, -1, 25104); //@t
					return 0;
				}
				func_417(var_32_cvector, "Fear");
				var_0_object->SetMessage(521410); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(521411, 25088, 22589); //@t
				var_0_object->AddReply(523816, -1, 25087); //@t
				return 0;
			}
			if(var_31_bool == 25088) {
				func_417(var_32_cvector, "Dream");
				var_0_object->SetMessage(523817); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523818, 25090, 25089); //@t
				return 0;
			}
			if(var_31_bool == 25090) {
				func_417(var_32_cvector, "Dream");
				var_0_object->SetMessage(523819); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523820, -1, 25091); //@t
				var_0_object->AddReply(523821, -1, 25092); //@t
				return 0;
			}
			if(var_31_bool == 25093) {
				func_417(var_32_cvector, "Fear");
				var_0_object->SetMessage(523822); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523823, 25095, 25094); //@t
				var_0_object->AddReply(523833, 25106, 25105); //@t
				return 0;
			}
			if(var_31_bool == 25106) {
				func_417(var_32_cvector, "Suspicion");
				var_0_object->SetMessage(523834); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523835, 25097, 25107); //@t
				return 0;
			}
			if(var_31_bool == 25095) {
				func_417(var_32_cvector, "Suspicion");
				var_0_object->SetMessage(523824); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523825, 25097, 25096); //@t
				var_0_object->AddReply(523827, 25097, 25098); //@t
				return 0;
			}
			if(var_31_bool == 25097) {
				func_417(var_32_cvector, "Suspicion");
				var_0_object->SetMessage(523826); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523828, 25101, 25100); //@t
				var_0_object->AddReply(523836, -1, 25109); //@t
				return 0;
			}
			if(var_31_bool == 25101) {
				func_417(var_32_cvector, "Fear");
				var_0_object->SetMessage(523829); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523830, -1, 25102); //@t
				return 0;
			}
			var_3_string = true;
			bool var_149_bool;
			func_2976(var_149_bool);
			if(var_149_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b8";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2833();
			if(var_32_cvector == 28414) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_2995();
			}
			if(var_31_bool == 28413) {
				func_819(var_32_cvector, "Autizm");
				var_0_object->SetMessage(527115); //@t
				var_0_object->ClearReplies(); //@t
				bool var_61_bool = false;
				bool var_62_bool;
				func_3130(var_1_object);
				if(var_62_bool != 0) {
					bool var_70_bool;
					func_3201(var_1_object);
					if(var_70_bool != 0)
						var_61_bool = true;
				}
				if(var_61_bool != 0)
					var_0_object->AddReply(527116, 28416, 28414); //@t
				var_0_object->AddReply(527117, -1, 28415); //@t
				return 0;
			}
			if(var_31_bool == 28416) {
				func_819(var_32_cvector, "Autizm");
				var_0_object->SetMessage(527118); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527119, 28418, 28417); //@t
				return 0;
			}
			if(var_31_bool == 28418) {
				func_819(var_32_cvector, "Fear");
				var_0_object->SetMessage(527120); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527121, 28420, 28419); //@t
				return 0;
			}
			if(var_31_bool == 28420) {
				func_819(var_32_cvector, "Fear");
				var_0_object->SetMessage(527122); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527123, 28422, 28421); //@t
				return 0;
			}
			if(var_31_bool == 28422) {
				func_819(var_32_cvector, "Suspicion");
				var_0_object->SetMessage(527124); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527125, 28424, 28423); //@t
				return 0;
			}
			if(var_31_bool == 28424) {
				func_819(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527126); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527127, 28426, 28425); //@t
				return 0;
			}
			if(var_31_bool == 28426) {
				func_819(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527128); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527129, 28428, 28427); //@t
				return 0;
			}
			if(var_31_bool == 28428) {
				func_819(var_32_cvector, "Neutral");
				var_0_object->SetMessage(527130); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527131, -1, 28429); //@t
				return 0;
			}
			var_3_string = true;
			bool var_131_bool;
			func_2976(var_131_bool);
			if(var_131_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x34a";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2833();
			if(var_32_cvector == 32479) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3016();
				object var_86_object = var_1_object;
				func_3044(var_0_object);
			}
			if(var_32_cvector == 32616) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_3084();
			}
			if(var_32_cvector == 31854) {
				object var_129_object; object var_130_object;
				var_129_object = var_1_object;
				var_130_object = var_0_object;
				func_3001();
			}
			if(var_32_cvector == 32486) {
				object var_143_object = var_1_object;
				func_2978(var_0_object);
				object var_167_object; object var_168_object;
				var_167_object = var_1_object;
				var_168_object = var_0_object;
				func_3010();
				object var_171_object = var_1_object;
				func_3094(var_0_object);
				object var_177_object; object var_178_object;
				var_177_object = var_1_object;
				var_178_object = var_0_object;
				func_3060();
			}
			if(var_32_cvector == 32633) {
				object var_194_object = var_1_object;
				func_2978(var_0_object);
				object var_196_object; object var_197_object;
				var_196_object = var_1_object;
				var_197_object = var_0_object;
				func_3010();
				object var_198_object = var_1_object;
				func_3094(var_0_object);
				object var_200_object; object var_201_object;
				var_200_object = var_1_object;
				var_201_object = var_0_object;
				func_3060();
			}
			if(var_32_cvector == 32489) {
				object var_204_object; object var_205_object;
				var_204_object = var_1_object;
				var_205_object = var_0_object;
				func_3074();
			}
			if(var_31_bool == 32470) {
				bool var_219_bool;
				func_3154(var_1_object);
				if(var_219_bool != 0) {
					func_1224(var_32_cvector, "Suspicion");
					var_0_object->SetMessage(531162); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(531292, 32610, 32609); //@t
					return 0;
				}
				func_1224(var_32_cvector, "Neutral");
				var_0_object->SetMessage(530485); //@t
				var_0_object->ClearReplies(); //@t
				bool var_250_bool;
				func_3142(var_1_object);
				if(var_250_bool != 0)
					var_0_object->AddReply(530486, 31853, 31852); //@t
				bool var_259_bool = false;
				bool var_260_bool;
				func_3166(var_1_object);
				if(var_260_bool != 0) {
					bool var_266_bool;
					func_3178(var_266_bool, var_1_object);
					if(var_266_bool != 0)
						var_259_bool = true;
				}
				if(var_259_bool != 0)
					var_0_object->AddReply(531172, 32623, 32480); //@t
				bool var_278_bool;
				func_3189(var_1_object);
				if(var_278_bool != 0)
					var_0_object->AddReply(531179, 32617, 32487); //@t
				var_0_object->AddReply(530489, -1, 31855); //@t
				return 0;
			}
			if(var_31_bool == 32617) {
				func_1224(var_32_cvector, "Neutral");
				var_0_object->SetMessage(531297); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531298, 32488, 32618); //@t
				return 0;
			}
			if(var_31_bool == 32488) {
				func_1224(var_32_cvector, "Neutral");
				var_0_object->SetMessage(531180); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531299, 32620, 32619); //@t
				var_0_object->AddReply(531301, 32620, 32621); //@t
				return 0;
			}
			if(var_31_bool == 32620) {
				func_1224(var_32_cvector, "Neutral");
				var_0_object->SetMessage(531300); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531181, -1, 32489); //@t
				return 0;
			}
			if(var_31_bool == 32623) {
				func_1224(var_32_cvector, "Neutral");
				var_0_object->SetMessage(531302); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531303, 32481, 32624); //@t
				var_0_object->AddReply(531304, 32481, 32625); //@t
				return 0;
			}
			if(var_31_bool == 32481) {
				func_1224(var_32_cvector, "Neutral");
				var_0_object->SetMessage(531173); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531174, 32483, 32482); //@t
				var_0_object->AddReply(531305, 32483, 32627); //@t
				return 0;
			}
			if(var_31_bool == 32483) {
				func_1224(var_32_cvector, "Neutral");
				var_0_object->SetMessage(531175); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531176, 32485, 32484); //@t
				var_0_object->AddReply(531306, 32630, 32629); //@t
				return 0;
			}
			if(var_31_bool == 32630) {
				func_1224(var_32_cvector, "Neutral");
				var_0_object->SetMessage(531307); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531308, 32485, 32631); //@t
				return 0;
			}
			if(var_31_bool == 32485) {
				func_1224(var_32_cvector, "Neutral");
				var_0_object->SetMessage(531177); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531178, -1, 32486); //@t
				var_0_object->AddReply(531309, -1, 32633); //@t
				return 0;
			}
			if(var_31_bool == 31853) {
				func_1224(var_32_cvector, "Dream");
				var_0_object->SetMessage(530487); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531310, 32635, 32634); //@t
				var_0_object->AddReply(531314, 32635, 32638); //@t
				return 0;
			}
			if(var_31_bool == 32635) {
				func_1224(var_32_cvector, "Dream");
				var_0_object->SetMessage(531311); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531312, 32637, 32636); //@t
				var_0_object->AddReply(531315, 32637, 32639); //@t
				return 0;
			}
			if(var_31_bool == 32637) {
				func_1224(var_32_cvector, "Dream");
				var_0_object->SetMessage(531313); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(530488, -1, 31854); //@t
				return 0;
			}
			if(var_31_bool == 32610) {
				func_1224(var_32_cvector, "Suspicion");
				var_0_object->SetMessage(531293); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531291, 32473, 32608); //@t
				var_0_object->AddReply(531163, 32475, 32471); //@t
				return 0;
			}
			if(var_31_bool == 32473) {
				func_1224(var_32_cvector, "Dream");
				var_0_object->SetMessage(531165); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531166, 32475, 32474); //@t
				var_0_object->AddReply(531294, 32476, 32612); //@t
				return 0;
			}
			if(var_31_bool == 32475) {
				func_1224(var_32_cvector, "Dream");
				var_0_object->SetMessage(531167); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531164, 32476, 32472); //@t
				var_0_object->AddReply(531295, 32478, 32614); //@t
				return 0;
			}
			if(var_31_bool == 32476) {
				func_1224(var_32_cvector, "Dream");
				var_0_object->SetMessage(531168); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531169, 32478, 32477); //@t
				return 0;
			}
			if(var_31_bool == 32478) {
				func_1224(var_32_cvector, "Suspicion");
				var_0_object->SetMessage(531170); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(531171, -1, 32479); //@t
				var_0_object->AddReply(531296, -1, 32616); //@t
				return 0;
			}
			var_3_string = true;
			bool var_435_bool;
			func_2976(var_435_bool);
			if(var_435_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x4df";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2833();
			if(var_32_cvector == 36919) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3100();
			}
			if(var_31_bool == 36918) {
				func_1917(var_32_cvector, "Autizm");
				var_0_object->SetMessage(535243); //@t
				var_0_object->ClearReplies(); //@t
				bool var_61_bool;
				func_3213(var_1_object);
				if(var_61_bool != 0)
					var_0_object->AddReply(535244, 37054, 36919); //@t
				var_0_object->AddReply(535367, -1, 37052); //@t
				var_0_object->AddReply(535368, -1, 37053); //@t
				return 0;
			}
			if(var_31_bool == 37054) {
				func_1917(var_32_cvector, "Autizm");
				var_0_object->SetMessage(535369); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535370, 37056, 37055); //@t
				var_0_object->AddReply(535375, -1, 37060); //@t
				return 0;
			}
			if(var_31_bool == 37056) {
				func_1917(var_32_cvector, "Autizm");
				var_0_object->SetMessage(535371); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535372, 37058, 37057); //@t
				var_0_object->AddReply(535376, -1, 37061); //@t
				return 0;
			}
			if(var_31_bool == 37058) {
				func_1917(var_32_cvector, "Dream");
				var_0_object->SetMessage(535373); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535374, -1, 37059); //@t
				var_0_object->AddReply(535377, -1, 37062); //@t
				return 0;
			}
			var_3_string = true;
			bool var_108_bool;
			func_2976(var_108_bool);
			if(var_108_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x794";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2833();
			if(var_31_int == 42560) {
				func_2207(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540551); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540552, -1, 42561); //@t
				var_0_object->AddReply(540795, -1, 42844); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_2976(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8b6";
	
	}

}


maintask task_12
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		var_31_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_2278(var_30_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, int var_31_int)
	{
		if(var_31_int == 10) {
			func_2343();
			bool var_35_bool = false;
			bool var_36_bool;
			func_2557(var_36_bool);
			if(var_36_bool != 0) {
				bool var_39_bool;
				func_2312(var_39_bool);
				if(var_39_bool != 0)
					var_35_bool = true;
			}
			if(var_35_bool != 0) {
				bool var_56_bool;
				func_2292(var_56_bool);
				if(var_56_bool != 0) {
					bool var_75_bool; object var_76_object;
					object var_77_object;
					func_2840(var_77_object);
					var_77_object = var_76_object;
					func_2707(var_75_bool, var_76_object);
				}
			} else {
				func_2307(var_31_int);
				func_2334();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2525();
		func_2343();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		@StopGroup0();
		func_2343();
		func_2787("Neutral");
		func_2334();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, bool var_31_bool)
	{
		if(var_31_bool != 0)
			func_2334();
		else
			func_2787("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, object var_31_object)
	{
		bool var_33_bool;
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			disable OnUse;
			func_2525();
			bool var_35_bool; object var_36_object;
			var_31_object = var_36_object;
			func_2548(var_35_bool, var_36_object);
			enable OnUse;
			object var_49_object;
			var_31_object = var_49_object;
			func_3398(var_49_object);
			func_2787("Neutral");
			func_2343();
			func_2334();
		}
	}

}


void func_0(object var_0_object, int var_52_int, object var_53_object)
{
	var_0_object = var_53_object;
	bool var_63_bool; object var_64_object;
	var_53_object = var_64_object;
	func_2562(var_63_bool, var_64_object, 70.0);
	if(!var_63_bool) { //@nz
		var_52_int = -2;
		return 8;
	}
	object var_59_object;
	@CreateDialog(var_59_object);
	int var_111_int;
	func_2970(var_111_int);
	var_59_object->SetNPCName(var_111_int);
	int var_112_int;
	func_2968(var_112_int);
	var_59_object->SetNPCDescription(var_112_int);
	string var_113_string;
	func_2972(var_113_string);
	var_59_object->SetPhoto(var_113_string);
	string var_114_string;
	func_2974(var_114_string);
	var_59_object->SetPhoto2(var_114_string);
	int var_115_int;
	func_3381(var_115_int);
	var_59_object->SetPlayerName(var_115_int);
	bool var_60_bool;
	@IsOverrideActive(var_60_bool);
	if(var_60_bool != 0) {
		var_52_int = -2;
		return 8;
	}
	@DoDialog(var_59_object);
	bool var_124_bool; object var_125_object;
	object var_126_object;
	func_2840(var_126_object);
	var_126_object = var_125_object;
	func_2649(var_124_bool, var_125_object);
	object var_219_object; object var_220_object;
	var_53_object = var_219_object;
	var_59_object = var_220_object;
	TaskCall(1);
	func_81(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object);
	TaskReturn();
	bool var_62_bool;
	var_59_object->IsDialogEnd(var_62_bool);
	
	for(;;) {
		var_268_bool = !var_62_bool; //@nz
		if(var_268_bool == 0) goto Label_70;
		@sync();
		var_59_object->IsDialogEnd(var_62_bool);
	}
	
Label_70:
	object var_269_object;
	var_53_object = var_269_object;
	func_2631();
	@StopDialog(var_59_object);
	var_59_object->GetReturnValue(-1);
	int var_61_int = var_52_int;
}
EMIT "Stack[-4] = 0";


void func_2562(bool var_63_bool, object var_64_object, float var_65_float)
{
	cvector var_76_cvector; bool var_83_bool;
	var_64_object->GetPosition(var_76_cvector);
	float var_75_float;
	var_64_object->GetEyesHeight(var_75_float);
	var_84_float = GetByIndex(var_76_cvector, 1);
	SetByIndex(var_76_cvector, 1) = (var_84_float + var_75_float);
	cvector var_77_cvector;
	@GetPosition(var_77_cvector);
	@GetEyesHeight(var_75_float);
	var_85_float = GetByIndex(var_77_cvector, 1);
	SetByIndex(var_77_cvector, 1) = (var_85_float + var_75_float);
	cvector var_78_cvector = var_76_cvector - var_77_cvector;
	var_86_float = GetByIndex(var_78_cvector, 1);
	SetByIndex(var_78_cvector, 1) = (float)0;
	var_88_float = sqrt(var_78_cvector | var_78_cvector);
	var_78_cvector /= var_88_float;
	cvector var_79_cvector = -var_78_cvector;
	cvector var_90_cvector;
	func_2846(var_90_cvector, (var_79_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_80_cvector = ((var_78_cvector * var_65_float) + (var_90_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_82_bool;
	@IsOverrideActive(var_82_bool);
	if(var_82_bool != 0)
		var_63_bool = false;
	@StopWorld();
	@CameraTransit((var_77_cvector + var_80_cvector), var_79_cvector, true);
	var_104_float = GetByIndex(var_80_cvector, 0);
	var_105_float = GetByIndex(var_80_cvector, 2);
	@Rotate(var_104_float, var_105_float);
	bool var_106_bool;
	func_2976(var_106_bool);
	if(var_106_bool != 0) {
	} else {
		@HasAnimationTrack(var_83_bool, "head");
		if(var_83_bool == 0) goto Label_2625;
		@LookAsyncCamera("head");
	}
Label_2625:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_63_bool = true;
	
}


// @pe
void func_3074(void)
{
	func_3225();
	bool var_214_bool;
	func_2912(var_214_bool, "quest_b10_03", "completed");
}


void func_2818(bool var_158_bool, string var_159_string)
{
	bool var_161_bool;
	bool var_162_bool;
	func_2976(var_162_bool);
	if(var_162_bool != 0) {
		@lshHasSpeech(var_161_bool, var_159_string);
		if(var_161_bool != 0) {
			@lshPlaySpeech(var_159_string);
			var_158_bool = true;
		}
	}
	var_158_bool = false;
}


void func_2307(object var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_108_float, var_109_float);
}


void func_3331(object var_43_object)
{
	object var_46_object; object var_47_object;
	@GetMainOutdoorScene(var_46_object);
	if(var_46_object == null) {
		@Trace("Can't find main outdoor scene");
		var_47_object = null;
		var_47_object = var_43_object;
	}
	var_46_object->GetMap(var_47_object);
	var_47_object = var_43_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1031(object var_0_object, int var_437_int, object var_438_object)
{
	var_0_object = var_438_object;
	bool var_448_bool; object var_449_object;
	var_438_object = var_449_object;
	func_2562(var_448_bool, var_449_object, 70.0);
	if(!var_448_bool) { //@nz
		var_437_int = -2;
		return 8;
	}
	object var_444_object;
	@CreateDialog(var_444_object);
	int var_452_int;
	func_2970(var_452_int);
	var_444_object->SetNPCName(var_452_int);
	int var_453_int;
	func_2968(var_453_int);
	var_444_object->SetNPCDescription(var_453_int);
	string var_454_string;
	func_2972(var_454_string);
	var_444_object->SetPhoto(var_454_string);
	string var_455_string;
	func_2974(var_455_string);
	var_444_object->SetPhoto2(var_455_string);
	int var_456_int;
	func_3381(var_456_int);
	var_444_object->SetPlayerName(var_456_int);
	bool var_445_bool;
	@IsOverrideActive(var_445_bool);
	if(var_445_bool != 0) {
		var_437_int = -2;
		return 8;
	}
	@DoDialog(var_444_object);
	bool var_458_bool; object var_459_object;
	object var_460_object;
	func_2840(var_460_object);
	var_460_object = var_459_object;
	func_2649(var_458_bool, var_459_object);
	object var_461_object; object var_462_object;
	var_438_object = var_461_object;
	var_444_object = var_462_object;
	TaskCall(7);
	func_1112(var_463_object, var_464_object, var_465_string, var_466_bool, var_461_object, var_462_object);
	TaskReturn();
	bool var_447_bool;
	var_444_object->IsDialogEnd(var_447_bool);
	
	for(;;) {
		var_536_bool = !var_447_bool; //@nz
		if(var_536_bool == 0) goto Label_1101;
		@sync();
		var_444_object->IsDialogEnd(var_447_bool);
	}
	
Label_1101:
	object var_537_object;
	var_438_object = var_537_object;
	func_2631();
	@StopDialog(var_444_object);
	var_444_object->GetReturnValue(-1);
	int var_446_int = var_437_int;
}
EMIT "Stack[-4] = 0";


void func_2312(bool var_39_bool)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	if(!var_42_object) { //@nz
		var_39_bool = false;
		return 4;
	}
	float var_46_float; object var_47_object;
	func_2530(var_46_float, var_47_object);
	if(var_46_float > 90000.0) {
		var_39_bool = false;
		return 4;
	}
	bool var_43_bool;
	@CanSee(var_43_bool, var_47_object);
	var_43_bool = var_39_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_3084(void)
{
	func_3238();
	bool var_124_bool;
	func_2912(var_124_bool, "quest_b10_03", "fail");
}


void func_2833(void)
{
	bool var_34_bool;
	func_2976(var_34_bool);
	if(var_34_bool != 0)
		@lshStopSpeech();
}


void func_2068(object var_0_object, int var_605_int, object var_606_object)
{
	var_0_object = var_606_object;
	bool var_616_bool; object var_617_object;
	var_606_object = var_617_object;
	func_2562(var_616_bool, var_617_object, 70.0);
	if(!var_616_bool) { //@nz
		var_605_int = -2;
		return 8;
	}
	object var_612_object;
	@CreateDialog(var_612_object);
	int var_620_int;
	func_2970(var_620_int);
	var_612_object->SetNPCName(var_620_int);
	int var_621_int;
	func_2968(var_621_int);
	var_612_object->SetNPCDescription(var_621_int);
	string var_622_string;
	func_2972(var_622_string);
	var_612_object->SetPhoto(var_622_string);
	string var_623_string;
	func_2974(var_623_string);
	var_612_object->SetPhoto2(var_623_string);
	int var_624_int;
	func_3381(var_624_int);
	var_612_object->SetPlayerName(var_624_int);
	bool var_613_bool;
	@IsOverrideActive(var_613_bool);
	if(var_613_bool != 0) {
		var_605_int = -2;
		return 8;
	}
	@DoDialog(var_612_object);
	bool var_626_bool; object var_627_object;
	object var_628_object;
	func_2840(var_628_object);
	var_628_object = var_627_object;
	func_2649(var_626_bool, var_627_object);
	object var_629_object; object var_630_object;
	var_606_object = var_629_object;
	var_612_object = var_630_object;
	TaskCall(11);
	func_2149(var_631_object, var_632_object, var_633_string, var_634_bool, var_629_object, var_630_object);
	TaskReturn();
	bool var_615_bool;
	var_612_object->IsDialogEnd(var_615_bool);
	
	for(;;) {
		var_659_bool = !var_615_bool; //@nz
		if(var_659_bool == 0) goto Label_2138;
		@sync();
		var_612_object->IsDialogEnd(var_615_bool);
	}
	
Label_2138:
	object var_660_object;
	var_606_object = var_660_object;
	func_2631();
	@StopDialog(var_612_object);
	var_612_object->GetReturnValue(-1);
	int var_614_int = var_605_int;
}
EMIT "Stack[-4] = 0";


void func_3348(object var_88_object, string var_89_string, float var_90_float)
{
	object var_98_object;
	@GetMainOutdoorScene(var_98_object);
	if(var_98_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_96_cvector;
	cvector var_97_cvector;
	bool var_99_bool;
	var_98_object->GetLocator(var_89_string, var_99_bool, var_96_cvector, var_97_cvector);
	if(!var_99_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_89_string) + " doesnt exist");
	var_98_object->GetMap(var_88_object);
	if(var_88_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_109_float = GetByIndex(var_96_cvector, 0);
	var_110_float = GetByIndex(var_96_cvector, 2);
	var_88_object->SetMapParams(var_109_float, var_110_float, var_90_float);
}
EMIT "Stack[-2] = 0";


void func_3094(object var_171_object)
{
	int var_174_int;
	var_171_object->RemoveItemByType(var_174_int, "b10q03_toy_burah", 1);
}


void func_2840(object var_126_object)
{
	object var_128_object;
	@self(var_128_object);
	var_128_object = var_126_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3100(void)
{
	@SetVariable("oob12Mishka1", 1);
}


void func_2334(void)
{
	float var_664_float;
	@rand(var_664_float, 8, 16);
	@SetTimer(10, var_664_float);
}


void func_2846(cvector var_90_cvector, cvector var_91_cvector)
{
	float var_94_float = sqrt(var_91_cvector | var_91_cvector);
	if(var_94_float < 0.000001)
		var_90_cvector = [0.0, 0.0, 0.0];
	var_90_cvector = var_91_cvector / var_94_float;
}


// @pe
void func_3106(bool var_386_bool)
{
	int var_388_int;
	func_2856(var_388_int, "b8q01");
	if(var_388_int == 2)
		var_386_bool = true;
	var_386_bool = false;
}


void func_2343(void)
{
	@KillTimer(10);
}


void func_2856(int var_324_int, string var_325_string)
{
	int var_327_int;
	@GetVariable(var_325_string, var_327_int);
	var_327_int = var_324_int;
}


void func_2861(int var_162_int, int var_163_int)
{
	object var_165_object;
	@CreateIntVector(var_165_object);
	var_165_object->add(var_162_int);
	var_165_object->add(var_163_int);
	@SendWorldWndMessage(3, var_165_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3118(bool var_392_bool)
{
	int var_394_int;
	func_2856(var_394_int, "oob8Mishka1");
	if(var_394_int == 0) {
		var_392_bool = true;
		return 0;
	}
	var_392_bool = false;
}


// @pe
void func_819(object var_2_object, string var_312_string)
{
	bool var_313_bool;
	func_2976(var_313_bool);
	if(!var_313_bool) //@nz
		return 0;
	if(var_312_string == var_2_object)
		return 0;
	string var_316_string; bool var_317_bool;
	var_312_string = var_316_string;
	if(var_312_string == "")
		var_317_bool = false;
	else
		var_317_bool = true;
	func_2803(var_316_string, var_317_bool);
	var_2_object = var_312_string;
	
}


void func_3381(int var_115_int)
{
	int var_117_int;
	@GetVariable("branch", var_117_int);
	if(var_117_int == 0) {
		var_115_int = 1;
		return 2;
	EMIT "GOTO 0xd44";
	}
	if(var_117_int == 1) {
		var_115_int = 2;
		return 2;
	}
	var_115_int = 3;
}


// @pe
void func_1849(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_564_object, object var_565_object)
{
	var_0_object = var_565_object;
	var_3_string = false;
	if(1 != 0) {
		func_1917(var_565_object, "Autizm");
		var_0_object->SetMessage(535243); //@t
		var_0_object->ClearReplies(); //@t
		bool var_580_bool;
		func_3213(var_564_object);
		if(var_580_bool != 0)
			var_0_object->AddReply(535244, 37054, 36919); //@t
		var_0_object->AddReply(535367, -1, 37052); //@t
		var_0_object->AddReply(535368, -1, 37053); //@t
		goto Label_1887;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x73d";
	}
Label_1887:
	bool var_595_bool;
	func_2976(var_595_bool);
	if(var_595_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2787(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1916;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1916:
		return 0;

	}
	
}


// @pe
void func_3130(bool var_322_bool)
{
	int var_324_int;
	func_2856(var_324_int, "oob1Mishka1");
	if(var_324_int == 0) {
		var_322_bool = true;
		return 0;
	}
	var_322_bool = false;
}


void func_2873(object var_151_object, object var_152_object, int var_153_int)
{
	int var_157_int;
	var_152_object->GetItemID(var_157_int);
	int var_158_int;
	@GetInvItemProperty(var_158_int, var_157_int, "Category");
	bool var_159_bool;
	var_151_object->AddItem(var_159_bool, var_152_object, var_158_int, var_153_int);
	if(!var_159_bool) { //@nz
		var_151_object->DropItems(var_152_object, var_153_int);
	} else {
		int var_162_int; int var_163_int;
		var_157_int = var_162_int;
		var_153_int = var_163_int;
		func_2861(var_162_int, var_163_int);
	}
	
}


// @pe
void func_320(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_378_object, object var_379_object)
{
	var_0_object = var_379_object;
	var_1_object = var_378_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_385_bool = false;
		bool var_386_bool;
		func_3106(var_1_object);
		if(var_386_bool != 0) {
			bool var_392_bool;
			func_3118(var_1_object);
			if(var_392_bool != 0)
				var_385_bool = true;
		}
		if(var_385_bool != 0) {
			object var_398_object; object var_399_object;
			var_398_object = var_1_object;
			var_399_object = var_0_object;
			func_2989();
			func_417(var_379_object, "Fear");
			var_0_object->SetMessage(521408); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(521409, 25093, 22587); //@t
			var_0_object->AddReply(523832, -1, 25104); //@t
		} else {
					func_417(var_379_object, "Fear");
					var_0_object->SetMessage(521410); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(521411, 25088, 22589); //@t
					var_0_object->AddReply(523816, -1, 25087); //@t
		}
	}
	for(;;) {
		bool var_417_bool;
		func_2976(var_417_bool);
		if(var_417_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2787(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_416;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_416:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x144";


// @pe
void func_3142(bool var_496_bool)
{
	int var_498_int;
	func_2856(var_498_int, "b10q04MishkaTalk");
	if(var_498_int == 1)
		var_496_bool = true;
	var_496_bool = false;
}


void func_2631(void)
{
	bool var_271_bool;
	@CameraSwitchToNormal(true);
	bool var_273_bool;
	func_2976(var_273_bool);
	if(var_273_bool != 0) {
	} else {
		@HasAnimationTrack(var_271_bool, "head");
		if(var_271_bool == 0) goto Label_2648;
		@UnlookAsync("head");
	}
Label_2648:
	
}


// @pe
void func_3398(object var_49_object)
{
	var_50_bool = GlobalVars[1];
	if(!var_50_bool) { //@nz
		int var_52_int; object var_53_object;
		var_49_object = var_53_object;
		TaskCall(0);
		func_0(var_54_object, var_52_int, var_53_object);
		TaskReturn();
		var_277_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_278_bool;
	func_2938(var_278_bool, 1);
	if(var_278_bool != 0) {
		int var_281_int; object var_282_object;
		var_49_object = var_282_object;
		TaskCall(4);
		func_666(var_283_object, var_281_int, var_282_object);
		TaskReturn();
		return 0;
	}
	bool var_352_bool;
	func_2938(var_352_bool, 8);
	if(var_352_bool != 0) {
		int var_354_int; object var_355_object;
		var_49_object = var_355_object;
		TaskCall(2);
		func_239(var_356_object, var_354_int, var_355_object);
		TaskReturn();
		return 0;
	}
	bool var_435_bool;
	func_2938(var_435_bool, 10);
	if(var_435_bool != 0) {
		int var_437_int; object var_438_object;
		var_49_object = var_438_object;
		TaskCall(6);
		func_1031(var_439_object, var_437_int, var_438_object);
		TaskReturn();
		return 0;
	}
	bool var_538_bool;
	func_2938(var_538_bool, 12);
	if(var_538_bool != 0) {
		int var_540_int; object var_541_object;
		var_49_object = var_541_object;
		TaskCall(8);
		func_1768(var_542_object, var_540_int, var_541_object);
		TaskReturn();
		return 0;
	}
	int var_605_int; object var_606_object;
	var_49_object = var_606_object;
	TaskCall(10);
	func_2068(var_607_object, var_605_int, var_606_object);
	TaskReturn();
}


void func_2892(object var_146_object, string var_147_string, int var_148_int)
{
	object var_150_object;
	@CreateInvItem(var_150_object);
	var_150_object->SetItemName(var_147_string);
	object var_151_object; object var_152_object; int var_153_int;
	var_146_object = var_151_object;
	var_150_object = var_152_object;
	var_148_int = var_153_int;
	func_2873(var_151_object, var_152_object, var_153_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_219_object, object var_220_object)
{
	var_0_object = var_220_object;
	var_1_object = var_219_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_220_object, "Neutral");
		var_0_object->SetMessage(518033); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518034, 28430, 19167); //@t
		var_0_object->AddReply(527134, 28433, 28432); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_250_bool;
	func_2976(var_250_bool);
	if(var_250_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2787(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_138;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_138:
		return 0;

	}
	
}


// @pe
void func_3154(bool var_468_bool)
{
	int var_470_int;
	func_2856(var_470_int, "b10q03");
	if(var_470_int == 1)
		var_468_bool = true;
	var_468_bool = false;
}


// @pe
void func_1112(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_461_object, object var_462_object)
{
	var_0_object = var_462_object;
	var_1_object = var_461_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_468_bool;
		func_3154(var_1_object);
		if(var_468_bool != 0) {
			func_1224(var_462_object, "Suspicion");
			var_0_object->SetMessage(531162); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(531292, 32610, 32609); //@t
		} else {
					func_1224(var_462_object, "Neutral");
					var_0_object->SetMessage(530485); //@t
					var_0_object->ClearReplies(); //@t
					bool var_496_bool;
					func_3142(var_1_object);
					if(var_496_bool != 0)
						var_0_object->AddReply(530486, 31853, 31852); //@t
					bool var_505_bool = false;
					bool var_506_bool;
					func_3166(var_1_object);
					if(var_506_bool != 0) {
						bool var_512_bool;
						func_3178(var_512_bool, var_1_object);
						if(var_512_bool != 0)
							var_505_bool = true;
					}
					if(var_505_bool != 0)
						var_0_object->AddReply(531172, 32623, 32480); //@t
					bool var_524_bool;
					func_3189(var_1_object);
					if(var_524_bool != 0)
						var_0_object->AddReply(531179, 32617, 32487); //@t
					var_0_object->AddReply(530489, -1, 31855); //@t
		}
	}
	for(;;) {
		bool var_486_bool;
		func_2976(var_486_bool);
		if(var_486_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_2787(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_1223;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1223:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x45c";


void func_2649(bool var_124_bool, object var_125_object)
{
	int var_131_int; int var_132_int;
	@GetVariable("voice_common", var_131_int);
	if(var_131_int != 0) {
		bool var_135_bool; object var_136_object;
		var_125_object = var_136_object;
		func_2707(var_135_bool, var_136_object);
		if(!var_135_bool) { //@nz
			bool var_166_bool; object var_167_object;
			var_125_object = var_167_object;
			func_2744(var_166_bool, var_167_object);
			if(!var_166_bool) { //@nz
				var_124_bool = false;
				return 4;
			}
		}
		@irand(var_132_int, 2);
		if(var_132_int != 0)
			@SetVariable("voice_common", ((var_131_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_211_bool; object var_212_object;
		var_125_object = var_212_object;
		func_2744(var_211_bool, var_212_object);
		if(!var_211_bool) { //@nz
			bool var_214_bool; object var_215_object;
			var_125_object = var_215_object;
			func_2707(var_214_bool, var_215_object);
			if(!var_214_bool) { //@nz
				var_124_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2705;
	
Label_2705:
	var_124_bool = true;
	
}


void func_2905(bool var_514_bool, object var_515_object, string var_516_string)
{
	int var_519_int;
	@GetInvItemByName(var_519_int, var_516_string);
	bool var_520_bool;
	var_515_object->HasItem(var_519_int, var_520_bool);
	var_520_bool = var_514_bool;
}


// @pe
void func_3166(bool var_506_bool)
{
	int var_508_int;
	func_2856(var_508_int, "b10q03");
	if(var_508_int == 2)
		var_506_bool = true;
	var_506_bool = false;
}


void func_2912(bool var_80_bool, string var_81_string, string var_82_string)
{
	object var_84_object;
	@FindActor(var_84_object, var_81_string);
	if(var_84_object == null)
		var_80_bool = false;
	@Trigger(var_84_object, var_82_string);
	var_80_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2149(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_629_object, object var_630_object)
{
	var_0_object = var_630_object;
	var_1_object = var_629_object;
	var_3_string = false;
	if(1 != 0) {
		func_2207(var_630_object, "Neutral");
		var_0_object->SetMessage(540551); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540552, -1, 42561); //@t
		var_0_object->AddReply(540795, -1, 42844); //@t
		goto Label_2177;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x869";
	}
Label_2177:
	bool var_651_bool;
	func_2976(var_651_bool);
	if(var_651_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2787(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2206;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2206:
		return 0;

	}
	
}


// @pe
void func_3178(bool var_512_bool, object var_513_object)
{
	object var_515_object;
	var_513_object = var_515_object;
	bool var_514_bool;
	func_2905(var_514_bool, var_515_object, "b10q03_toy_burah");
	if(var_514_bool != 0) {
		var_512_bool = true;
		return 0;
	}
	var_512_bool = false;
}


void func_2924(float var_54_float)
{
	float var_56_float;
	@GetGameTime(var_56_float);
	var_56_float = var_54_float;
}


void func_2929(int var_179_int)
{
	float var_181_float;
	@GetGameTime(var_181_float);
	var_179_int = 1 + (var_181_float / 24);
}


// @pe
void func_3189(bool var_524_bool)
{
	int var_526_int;
	func_2856(var_526_int, "b10q03");
	if(var_526_int == 4)
		var_524_bool = true;
	var_524_bool = false;
}


// @pe
void func_2938(bool var_278_bool, int var_279_int)
{
	int var_280_int;
	func_2929(var_280_int);
	var_278_bool = var_280_int == var_279_int;
}


// @pe
void func_1917(object var_2_object, string var_571_string)
{
	bool var_572_bool;
	func_2976(var_572_bool);
	if(!var_572_bool) //@nz
		return 0;
	if(var_571_string == var_2_object)
		return 0;
	string var_575_string; bool var_576_bool;
	var_571_string = var_575_string;
	if(var_571_string == "")
		var_576_bool = false;
	else
		var_576_bool = true;
	func_2803(var_575_string, var_576_bool);
	var_2_object = var_571_string;
	
}


void func_2944(string var_56_string, int var_57_int)
{
	string var_59_string = "idle";
	if(var_57_int != 0)
		var_59_string += var_57_int;
	var_59_string = var_56_string;
}


// @pe
void func_3201(bool var_330_bool)
{
	int var_332_int;
	func_2856(var_332_int, "b1q05");
	if(var_332_int == 1000)
		var_330_bool = true;
	var_330_bool = false;
}


void func_2951(int var_50_int)
{
	int var_53_int; bool var_54_bool;
	var_53_int = 0;
	
	for(;;) {
		string var_56_string; int var_57_int;
		var_53_int = var_57_int;
		func_2944(var_56_string, var_57_int);
		@HasAnimation(var_54_bool, "all", var_56_string);
		if(!var_54_bool) //@nz
			break;
		var_53_int += 1;
	}
	var_53_int = var_50_int;
}


// @pe
void func_139(object var_2_object, string var_226_string)
{
	bool var_227_bool;
	func_2976(var_227_bool);
	if(!var_227_bool) //@nz
		return 0;
	if(var_226_string == var_2_object)
		return 0;
	string var_230_string; bool var_231_bool;
	var_226_string = var_230_string;
	if(var_226_string == "")
		var_231_bool = false;
	else
		var_231_bool = true;
	func_2803(var_230_string, var_231_bool);
	var_2_object = var_226_string;
	
}


// @pe
void func_3213(bool var_580_bool)
{
	int var_582_int;
	func_2856(var_582_int, "oob12Mishka1");
	if(var_582_int == 0) {
		var_580_bool = true;
		return 0;
	}
	var_580_bool = false;
}


void func_2707(bool var_135_bool, object var_136_object)
{
	string var_142_string; bool var_144_bool; int var_145_int; string var_146_string;
	var_142_string = "c";
	int var_143_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_136_object->HasProperty((var_142_string + (var_143_int + 1)), var_144_bool);
			if(!var_144_bool) { //@nz
			} else {
				var_143_int += 1;
			}
		}
		if(!var_143_int) { //@nz
			var_135_bool = false;
			return 10;
		}
		var_145_int = 0;
		if(var_143_int > 1)
			@irand(var_145_int, var_143_int);
		var_136_object->GetProperty((var_142_string + (var_145_int + 1)), var_146_string);
		bool var_158_bool; string var_159_string;
		var_146_string = var_159_string;
		func_2818(var_158_bool, var_159_string);
		var_158_bool = var_135_bool;
		return 10;

	}
}


void func_2454(void)
{
	bool var_44_bool; int var_45_int; int var_46_int; bool var_47_bool;
	@WaitForAnimEnd();
	bool var_48_bool;
	func_2557(var_48_bool);
	if(!var_48_bool) //@nz
		return 12;
	int var_50_int;
	func_2951(var_50_int);
	int var_42_int;
	var_50_int = var_42_int;
	int var_43_int = 0;
	
	for(;;) {
		bool var_63_bool = false;
		if(var_43_int < 5) {
			bool var_66_bool;
			func_2557(var_66_bool);
			if(var_66_bool != 0)
				var_63_bool = true;
		}
		if(var_63_bool != 0) {
			if(!var_42_int) { //@nz
				@Sleep(3, var_44_bool);
				if(!var_44_bool) { //@nz
				} else {
			} else {
			@irand(var_45_int, var_42_int);
			@irand(var_46_int, 5);
			if(var_46_int != 0)
				var_45_int = 0;
			string var_77_string; int var_78_int;
			var_45_int = var_78_int;
			func_2944(var_77_string, var_78_int);
			@PlayAnimation("all", var_77_string);
			@WaitForAnimEnd(var_47_bool);
			var_79_bool = !var_47_bool; //@nz
			if(var_79_bool == 0) goto Label_2509;
			goto Label_2520;
			}
				Label_2509:
					bool var_70_bool;
					func_2523(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_2515;
			}
		}
	Label_2520:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2515:
		@ResetAAS();
		var_43_int += 1;
	}
	
}


void func_2968(int var_112_int)
{
	var_112_int = 515546;
}


void func_3225(void)
{
	object var_207_object;
	@CreateDiaryEntry(var_207_object, 605, 2, 531184);
	bool var_211_bool; object var_212_object;
	var_207_object = var_212_object;
	func_3303(var_211_bool, var_212_object, 594);
}
EMIT "Stack[-1] = 0";


void func_666(object var_0_object, int var_281_int, object var_282_object)
{
	var_0_object = var_282_object;
	bool var_292_bool; object var_293_object;
	var_282_object = var_293_object;
	func_2562(var_292_bool, var_293_object, 70.0);
	if(!var_292_bool) { //@nz
		var_281_int = -2;
		return 8;
	}
	object var_288_object;
	@CreateDialog(var_288_object);
	int var_296_int;
	func_2970(var_296_int);
	var_288_object->SetNPCName(var_296_int);
	int var_297_int;
	func_2968(var_297_int);
	var_288_object->SetNPCDescription(var_297_int);
	string var_298_string;
	func_2972(var_298_string);
	var_288_object->SetPhoto(var_298_string);
	string var_299_string;
	func_2974(var_299_string);
	var_288_object->SetPhoto2(var_299_string);
	int var_300_int;
	func_3381(var_300_int);
	var_288_object->SetPlayerName(var_300_int);
	bool var_289_bool;
	@IsOverrideActive(var_289_bool);
	if(var_289_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	@DoDialog(var_288_object);
	bool var_302_bool; object var_303_object;
	object var_304_object;
	func_2840(var_304_object);
	var_304_object = var_303_object;
	func_2649(var_302_bool, var_303_object);
	object var_305_object; object var_306_object;
	var_282_object = var_305_object;
	var_288_object = var_306_object;
	TaskCall(5);
	func_747(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object);
	TaskReturn();
	bool var_291_bool;
	var_288_object->IsDialogEnd(var_291_bool);
	
	for(;;) {
		var_350_bool = !var_291_bool; //@nz
		if(var_350_bool == 0) goto Label_736;
		@sync();
		var_288_object->IsDialogEnd(var_291_bool);
	}
	
Label_736:
	object var_351_object;
	var_282_object = var_351_object;
	func_2631();
	@StopDialog(var_288_object);
	var_288_object->GetReturnValue(-1);
	int var_290_int = var_281_int;
}
EMIT "Stack[-4] = 0";


void func_2970(int var_111_int)
{
	var_111_int = 502871;
}


void func_2972(string var_113_string)
{
	var_113_string = "ui/NPC_Mishka.png";
}


void func_2974(string var_114_string)
{
	var_114_string = "ui/NPC_Mishka_b.png";
}


// @pe
void func_2207(object var_2_object, string var_636_string)
{
	bool var_637_bool;
	func_2976(var_637_bool);
	if(!var_637_bool) //@nz
		return 0;
	if(var_636_string == var_2_object)
		return 0;
	string var_640_string; bool var_641_bool;
	var_636_string = var_640_string;
	if(var_636_string == "")
		var_641_bool = false;
	else
		var_641_bool = true;
	func_2803(var_640_string, var_641_bool);
	var_2_object = var_636_string;
	
}


void func_2976(bool var_106_bool)
{
	var_106_bool = true;
}


// @pe
void func_417(object var_2_object, string var_402_string)
{
	bool var_403_bool;
	func_2976(var_403_bool);
	if(!var_403_bool) //@nz
		return 0;
	if(var_402_string == var_2_object)
		return 0;
	string var_406_string; bool var_407_bool;
	var_402_string = var_406_string;
	if(var_402_string == "")
		var_407_bool = false;
	else
		var_407_bool = true;
	func_2803(var_406_string, var_407_bool);
	var_2_object = var_402_string;
	
}


// @pe
void func_2978(object var_143_object)
{
	@Trace("avroks blood is given");
	object var_146_object;
	var_143_object = var_146_object;
	func_2892(var_146_object, "avroks_blood", 1);
}


void func_3238(void)
{
	object var_117_object;
	@CreateDiaryEntry(var_117_object, 607, 2, 531500);
	bool var_121_bool; object var_122_object;
	var_117_object = var_122_object;
	func_3303(var_121_bool, var_122_object, 594);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2989(void)
{
	@SetVariable("oob8Mishka1", 1);
}


void func_3251(void)
{
	object var_58_object;
	@CreateDiaryEntry(var_58_object, 596, 2, 531147);
	bool var_62_bool; object var_63_object;
	var_58_object = var_63_object;
	func_3303(var_62_bool, var_63_object, 594);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2995(void)
{
	@SetVariable("oob1Mishka1", 1);
}


void func_2744(bool var_166_bool, object var_167_object)
{
	bool var_175_bool; int var_176_int; string var_177_string;
	int var_179_int;
	func_2929(var_179_int);
	string var_173_string = ("d" + var_179_int) + "m";
	int var_174_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_167_object->HasProperty((var_173_string + (var_174_int + 1)), var_175_bool);
			if(!var_175_bool) { //@nz
			} else {
				var_174_int += 1;
			}
		}
		if(!var_174_int) { //@nz
			var_166_bool = false;
			return 10;
		}
		var_176_int = 0;
		if(var_174_int > 1)
			@irand(var_176_int, var_174_int);
		var_167_object->GetProperty((var_173_string + (var_176_int + 1)), var_177_string);
		bool var_198_bool; string var_199_string;
		var_177_string = var_199_string;
		func_2818(var_198_bool, var_199_string);
		var_198_bool = var_166_bool;
		return 10;

	}
}


// @pe
void func_3001(void)
{
	@SetVariable("b10q04MishkaTalk", 9);
	func_3277();
}


void func_3264(void)
{
	object var_182_object;
	@CreateDiaryEntry(var_182_object, 603, 2, 531182);
	bool var_186_bool; object var_187_object;
	var_182_object = var_187_object;
	func_3303(var_186_bool, var_187_object, 594);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3010(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1224(object var_2_object, string var_474_string)
{
	bool var_475_bool;
	func_2976(var_475_bool);
	if(!var_475_bool) //@nz
		return 0;
	if(var_474_string == var_2_object)
		return 0;
	string var_478_string; bool var_479_bool;
	var_474_string = var_478_string;
	if(var_474_string == "")
		var_479_bool = false;
	else
		var_479_bool = true;
	func_2803(var_478_string, var_479_bool);
	var_2_object = var_474_string;
	
}


void func_3016(void)
{
	@SetVariable("b10q03", 2);
	object var_43_object;
	func_3331(var_43_object);
	object var_40_object;
	var_43_object = var_40_object;
	float var_54_float;
	func_2924(var_54_float);
	var_40_object->AddMark("b10q03MishkaGotoDoll", "pt_b10q03_plant1", 0, 531262, var_54_float);
	func_3251();
	bool var_80_bool;
	func_2912(var_80_bool, "quest_b10_03", "place_doll");
}
EMIT "Stack[-1] = 0";


void func_3277(void)
{
	object var_134_object;
	@CreateDiaryEntry(var_134_object, 558, 2, 530537);
	bool var_138_bool; object var_139_object;
	var_134_object = var_139_object;
	func_3303(var_138_bool, var_139_object, 549);
}
EMIT "Stack[-1] = 0";


void func_3290(object var_71_object)
{
	object var_73_object;
	@GetDiaryRoot(var_73_object);
	if(!var_73_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_71_object = false;
	}
	var_73_object = var_71_object;
}
EMIT "Stack[-1] = 0";


void func_2523(bool var_70_bool)
{
	var_70_bool = true;
}


void func_2525(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2530(float var_46_float, object var_47_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_47_object->GetPosition(var_52_cvector);
	var_46_float = (var_52_cvector - var_51_cvector) | (var_52_cvector - var_51_cvector);
}


void func_2787(string var_252_string)
{
	bool var_256_bool; float var_257_float; float var_258_float;
	@lshHasAnimation(var_256_bool, var_252_string);
	if(var_256_bool != 0) {
		@lshGetAnimTimes(var_252_string, var_257_float, var_258_float);
		@lshPlayAnimation(var_257_float, var_258_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_252_string);
	}
	
}


// @pe
void func_3044(object var_87_object)
{
	object var_91_object;
	func_3331(var_91_object);
	object var_88_object;
	var_91_object = var_88_object;
	func_3348(var_88_object, "pt_b10q03_plant1", (float)2);
	object var_111_object;
	func_3331(var_111_object);
	var_87_object->ShowMap(var_111_object);
}


void func_2278(object var_0_object)
{
	bool var_32_bool;
	func_2557(var_32_bool);
	if(!var_32_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2454();
	}
}
EMIT "Return(); Pop(0)";


void func_3303(bool var_62_bool, object var_63_object, int var_64_int)
{
	object var_71_object;
	func_3290(var_71_object);
	object var_68_object;
	var_71_object = var_68_object;
	object var_69_object;
	var_68_object->Find(var_64_int, var_69_object);
	if(!var_69_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_64_int);
		var_62_bool = false;
	}
	var_69_object->AddChild(var_63_object);
	@SendWorldWndMessage(7);
	int var_70_int;
	var_63_object->GetCategory(var_70_int);
	@SetDiarySection(var_70_int);
	var_62_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1768(object var_0_object, int var_540_int, object var_541_object)
{
	var_0_object = var_541_object;
	bool var_551_bool; object var_552_object;
	var_541_object = var_552_object;
	func_2562(var_551_bool, var_552_object, 70.0);
	if(!var_551_bool) { //@nz
		var_540_int = -2;
		return 8;
	}
	object var_547_object;
	@CreateDialog(var_547_object);
	int var_555_int;
	func_2970(var_555_int);
	var_547_object->SetNPCName(var_555_int);
	int var_556_int;
	func_2968(var_556_int);
	var_547_object->SetNPCDescription(var_556_int);
	string var_557_string;
	func_2972(var_557_string);
	var_547_object->SetPhoto(var_557_string);
	string var_558_string;
	func_2974(var_558_string);
	var_547_object->SetPhoto2(var_558_string);
	int var_559_int;
	func_3381(var_559_int);
	var_547_object->SetPlayerName(var_559_int);
	bool var_548_bool;
	@IsOverrideActive(var_548_bool);
	if(var_548_bool != 0) {
		var_540_int = -2;
		return 8;
	}
	@DoDialog(var_547_object);
	bool var_561_bool; object var_562_object;
	object var_563_object;
	func_2840(var_563_object);
	var_563_object = var_562_object;
	func_2649(var_561_bool, var_562_object);
	object var_564_object; object var_565_object;
	var_541_object = var_564_object;
	var_547_object = var_565_object;
	TaskCall(9);
	func_1849(var_566_object, var_567_object, var_568_string, var_569_bool, var_564_object, var_565_object);
	TaskReturn();
	bool var_550_bool;
	var_547_object->IsDialogEnd(var_550_bool);
	
	for(;;) {
		var_603_bool = !var_550_bool; //@nz
		if(var_603_bool == 0) goto Label_1838;
		@sync();
		var_547_object->IsDialogEnd(var_550_bool);
	}
	
Label_1838:
	object var_604_object;
	var_541_object = var_604_object;
	func_2631();
	@StopDialog(var_547_object);
	var_547_object->GetReturnValue(-1);
	int var_549_int = var_540_int;
}
EMIT "Stack[-4] = 0";


void func_2538(bool var_39_bool, cvector var_40_cvector)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector = var_40_cvector - var_44_cvector;
	var_47_float = GetByIndex(var_45_cvector, 0);
	var_48_float = GetByIndex(var_45_cvector, 2);
	bool var_46_bool;
	@Rotate(var_47_float, var_48_float, var_46_bool);
	var_46_bool = var_39_bool;
}


// @pe
void func_747(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_305_object, object var_306_object)
{
	var_0_object = var_306_object;
	var_1_object = var_305_object;
	var_3_string = false;
	if(1 != 0) {
		func_819(var_306_object, "Autizm");
		var_0_object->SetMessage(527115); //@t
		var_0_object->ClearReplies(); //@t
		bool var_321_bool = false;
		bool var_322_bool;
		func_3130(var_1_object);
		if(var_322_bool != 0) {
			bool var_330_bool;
			func_3201(var_1_object);
			if(var_330_bool != 0)
				var_321_bool = true;
		}
		if(var_321_bool != 0)
			var_0_object->AddReply(527116, 28416, 28414); //@t
		var_0_object->AddReply(527117, -1, 28415); //@t
		goto Label_789;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2ef";
	}
Label_789:
	bool var_342_bool;
	func_2976(var_342_bool);
	if(var_342_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2787(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_818;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_818:
		return 0;

	}
	
}


void func_239(object var_0_object, int var_354_int, object var_355_object)
{
	var_0_object = var_355_object;
	bool var_365_bool; object var_366_object;
	var_355_object = var_366_object;
	func_2562(var_365_bool, var_366_object, 70.0);
	if(!var_365_bool) { //@nz
		var_354_int = -2;
		return 8;
	}
	object var_361_object;
	@CreateDialog(var_361_object);
	int var_369_int;
	func_2970(var_369_int);
	var_361_object->SetNPCName(var_369_int);
	int var_370_int;
	func_2968(var_370_int);
	var_361_object->SetNPCDescription(var_370_int);
	string var_371_string;
	func_2972(var_371_string);
	var_361_object->SetPhoto(var_371_string);
	string var_372_string;
	func_2974(var_372_string);
	var_361_object->SetPhoto2(var_372_string);
	int var_373_int;
	func_3381(var_373_int);
	var_361_object->SetPlayerName(var_373_int);
	bool var_362_bool;
	@IsOverrideActive(var_362_bool);
	if(var_362_bool != 0) {
		var_354_int = -2;
		return 8;
	}
	@DoDialog(var_361_object);
	bool var_375_bool; object var_376_object;
	object var_377_object;
	func_2840(var_377_object);
	var_377_object = var_376_object;
	func_2649(var_375_bool, var_376_object);
	object var_378_object; object var_379_object;
	var_355_object = var_378_object;
	var_361_object = var_379_object;
	TaskCall(3);
	func_320(var_380_object, var_381_object, var_382_string, var_383_bool, var_378_object, var_379_object);
	TaskReturn();
	bool var_364_bool;
	var_361_object->IsDialogEnd(var_364_bool);
	
	for(;;) {
		var_433_bool = !var_364_bool; //@nz
		if(var_433_bool == 0) goto Label_309;
		@sync();
		var_361_object->IsDialogEnd(var_364_bool);
	}
	
Label_309:
	object var_434_object;
	var_355_object = var_434_object;
	func_2631();
	@StopDialog(var_361_object);
	var_361_object->GetReturnValue(-1);
	int var_363_int = var_354_int;
}
EMIT "Stack[-4] = 0";


void func_2803(string var_230_string, bool var_231_bool)
{
	bool var_237_bool; float var_238_float; float var_239_float;
	@lshHasAnimation(var_237_bool, var_230_string);
	if(var_237_bool != 0) {
		@lshGetAnimTimes(var_230_string, var_238_float, var_239_float);
		@lshPlayAnimation(var_238_float, var_239_float, var_231_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_230_string);
	}
	
}


void func_2292(bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	if(!var_58_object) //@nz
		var_56_bool = false;
	bool var_61_bool; object var_62_object;
	var_58_object = var_62_object;
	func_2548(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3060(void)
{
	@SetVariable("b10q03", 3);
	func_3264();
	bool var_189_bool;
	func_2912(var_189_bool, "quest_b10_03", "place_blood");
}


void func_2548(bool var_35_bool, object var_36_object)
{
	cvector var_38_cvector;
	var_36_object->GetPosition(var_38_cvector);
	bool var_39_bool; cvector var_40_cvector;
	var_38_cvector = var_40_cvector;
	func_2538(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
}


void func_2557(bool var_32_bool)
{
	bool var_34_bool;
	@IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
}


