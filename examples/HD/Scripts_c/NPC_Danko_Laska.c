// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3076();
			if(var_36_bool == 429) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3400();
				func_144(var_37_cvector, "Neutral");
				var_0_object->SetMessage(500370); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500371, 432, 430); //@t
				var_0_object->AddReply(500372, 437, 431); //@t
				return 0;
			}
			if(var_36_bool == 437) {
				func_144(var_37_cvector, "Neutral");
				var_0_object->SetMessage(500377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500378, 432, 438); //@t
				return 0;
			}
			if(var_36_bool == 432) {
				func_144(var_37_cvector, "Neutral");
				var_0_object->SetMessage(500373); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500374, 435, 433); //@t
				var_0_object->AddReply(500375, 435, 434); //@t
				return 0;
			}
			if(var_36_bool == 435) {
				func_144(var_37_cvector, "Neutral");
				var_0_object->SetMessage(500376); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500381, -1, 442); //@t
				var_0_object->AddReply(500379, -1, 440); //@t
				return 0;
			}
			var_3_string = true;
			bool var_97_bool;
			func_3268(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa7";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3076();
			if(var_37_cvector == 35473) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3297();
			}
			if(var_37_cvector == 35486) {
				object var_48_object = var_1_object;
				func_3270(var_0_object);
			}
			if(var_37_cvector == 35487) {
				object var_74_object = var_1_object;
				func_3270(var_0_object);
			}
			if(var_37_cvector == 10416) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_3303();
			}
			if(var_36_bool == 10415) {
				func_431(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509473); //@t
				var_0_object->ClearReplies(); //@t
				bool var_102_bool;
				func_3433(var_1_object);
				if(var_102_bool != 0)
					var_0_object->AddReply(533914, 35474, 35473); //@t
				bool var_113_bool;
				func_3445(var_1_object);
				if(var_113_bool != 0)
					var_0_object->AddReply(509474, 10417, 10416); //@t
				var_0_object->AddReply(509487, -1, 10429); //@t
				return 0;
			}
			if(var_36_bool == 10417) {
				func_431(var_37_cvector, "Autizm");
				var_0_object->SetMessage(509475); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509476, 10419, 10418); //@t
				var_0_object->AddReply(509481, 10424, 10423); //@t
				return 0;
			}
			if(var_36_bool == 10424) {
				func_431(var_37_cvector, "Autizm");
				var_0_object->SetMessage(509482); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509483, 10426, 10425); //@t
				return 0;
			}
			if(var_36_bool == 10426) {
				func_431(var_37_cvector, "Autizm");
				var_0_object->SetMessage(509484); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509485, -1, 10427); //@t
				var_0_object->AddReply(509486, -1, 10428); //@t
				return 0;
			}
			if(var_36_bool == 10419) {
				func_431(var_37_cvector, "Autizm");
				var_0_object->SetMessage(509477); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509478, -1, 10420); //@t
				var_0_object->AddReply(509479, -1, 10421); //@t
				var_0_object->AddReply(509480, -1, 10422); //@t
				return 0;
			}
			if(var_36_bool == 35474) {
				func_431(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(533915); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533916, 35476, 35475); //@t
				var_0_object->AddReply(533923, 35483, 35482); //@t
				return 0;
			}
			if(var_36_bool == 35483) {
				func_431(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(533924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533925, 35478, 35484); //@t
				return 0;
			}
			if(var_36_bool == 35476) {
				func_431(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(533917); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533918, 35478, 35477); //@t
				var_0_object->AddReply(533936, 35499, 35498); //@t
				return 0;
			}
			if(var_36_bool == 35499) {
				func_431(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(533937); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533939, 35504, 35501); //@t
				var_0_object->AddReply(533938, 35478, 35500); //@t
				return 0;
			}
			if(var_36_bool == 35504) {
				func_431(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(533940); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533941, 35506, 35505); //@t
				return 0;
			}
			if(var_36_bool == 35506) {
				func_431(var_37_cvector, "Pain");
				var_0_object->SetMessage(533942); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533943, 35508, 35507); //@t
				var_0_object->AddReply(533948, 35510, 35512); //@t
				return 0;
			}
			if(var_36_bool == 35510) {
				func_431(var_37_cvector, "Pain");
				var_0_object->SetMessage(533946); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533947, -1, 35511); //@t
				return 0;
			}
			if(var_36_bool == 35508) {
				func_431(var_37_cvector, "Pain");
				var_0_object->SetMessage(533944); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533945, -1, 35509); //@t
				return 0;
			}
			if(var_36_bool == 35478) {
				func_431(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(533919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533922, 35485, 35481); //@t
				var_0_object->AddReply(533930, 35490, 35489); //@t
				return 0;
			}
			if(var_36_bool == 35490) {
				func_431(var_37_cvector, "Welldie");
				var_0_object->SetMessage(533931); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533932, 35493, 35491); //@t
				var_0_object->AddReply(533934, 35485, 35494); //@t
				return 0;
			}
			if(var_36_bool == 35493) {
				func_431(var_37_cvector, "Welldie");
				var_0_object->SetMessage(533933); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533935, 35485, 35495); //@t
				return 0;
			}
			if(var_36_bool == 35485) {
				func_431(var_37_cvector, "Neutral");
				var_0_object->SetMessage(533926); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533927, -1, 35486); //@t
				var_0_object->AddReply(533928, -1, 35487); //@t
				return 0;
			}
			var_3_string = true;
			bool var_270_bool;
			func_3268(var_270_bool);
			if(var_270_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1c6";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3076();
			if(var_37_cvector == 10978) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3406();
			}
			if(var_37_cvector == 10976) {
				object var_48_object = var_1_object;
				func_3337(var_0_object);
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_3291();
			}
			if(var_37_cvector == 10977) {
				object var_78_object = var_1_object;
				func_3348(var_0_object);
			}
			if(var_36_bool == 10968) {
				func_1029(var_37_cvector, "Pain");
				var_0_object->SetMessage(509951); //@t
				var_0_object->ClearReplies(); //@t
				bool var_138_bool;
				func_3517(var_1_object);
				if(var_138_bool != 0)
					var_0_object->AddReply(509961, 10970, 10978); //@t
				var_0_object->AddReply(509952, -1, 10969); //@t
				return 0;
			}
			if(var_36_bool == 10970) {
				func_1029(var_37_cvector, "Pain");
				var_0_object->SetMessage(509953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509954, -1, 10971); //@t
				var_0_object->AddReply(509955, 10973, 10972); //@t
				return 0;
			}
			if(var_36_bool == 10973) {
				func_1029(var_37_cvector, "Pain");
				var_0_object->SetMessage(509956); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509957, 10975, 10974); //@t
				var_0_object->AddReply(534181, -1, 35764); //@t
				return 0;
			}
			if(var_36_bool == 10975) {
				func_1029(var_37_cvector, "Welldie");
				var_0_object->SetMessage(509958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509959, -1, 10976); //@t
				var_0_object->AddReply(509960, -1, 10977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_182_bool;
			func_3268(var_182_bool);
			if(var_182_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x41c";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3076();
			if(var_37_cvector == 14233) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3355();
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_3389();
			}
			if(var_37_cvector == 14234) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_3355();
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_3389();
			}
			if(var_37_cvector == 14027) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_3355();
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_3361();
			}
			if(var_37_cvector == 14026) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_3355();
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_3361();
			}
			if(var_36_bool == 14015) {
				func_1349(var_37_cvector, "Neutral");
				var_0_object->SetMessage(512815); //@t
				var_0_object->ClearReplies(); //@t
				bool var_138_bool = false;
				bool var_139_bool;
				func_3481(var_1_object);
				if(var_139_bool != 0) {
					bool var_147_bool;
					func_3493(var_1_object);
					if(var_147_bool != 0)
						var_138_bool = true;
				}
				if(var_138_bool != 0)
					var_0_object->AddReply(512816, 14017, 14016); //@t
				var_0_object->AddReply(512828, -1, 14028); //@t
				return 0;
			}
			if(var_36_bool == 14017) {
				bool var_161_bool;
				func_3469(var_1_object);
				if(!var_161_bool) { //@nz
					func_1349(var_37_cvector, "Disturbance");
					var_0_object->SetMessage(512817); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(513022, 14230, 14229); //@t
					return 0;
				}
				bool var_173_bool;
				func_3469(var_1_object);
				if(var_173_bool != 0) {
					func_1349(var_37_cvector, "Welldie");
					var_0_object->SetMessage(513021); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512818, 14019, 14018); //@t
					return 0;
				}
			}
			if(var_36_bool == 14019) {
				func_1349(var_37_cvector, "Welldie");
				var_0_object->SetMessage(512819); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512820, 14021, 14020); //@t
				return 0;
			}
			if(var_36_bool == 14021) {
				func_1349(var_37_cvector, "Neutral");
				var_0_object->SetMessage(512821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512822, 14023, 14022); //@t
				return 0;
			}
			if(var_36_bool == 14023) {
				func_1349(var_37_cvector, "Autizm");
				var_0_object->SetMessage(512823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512824, 14025, 14024); //@t
				var_0_object->AddReply(512826, -1, 14026); //@t
				return 0;
			}
			if(var_36_bool == 14025) {
				func_1349(var_37_cvector, "Autizm");
				var_0_object->SetMessage(512825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512827, -1, 14027); //@t
				return 0;
			}
			if(var_36_bool == 14230) {
				func_1349(var_37_cvector, "Disturbance");
				var_0_object->SetMessage(513023); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513024, 14232, 14231); //@t
				var_0_object->AddReply(513027, -1, 14234); //@t
				return 0;
			}
			if(var_36_bool == 14232) {
				func_1349(var_37_cvector, "Autizm");
				var_0_object->SetMessage(513025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513026, -1, 14233); //@t
				return 0;
			}
			var_3_string = true;
			bool var_228_bool;
			func_3268(var_228_bool);
			if(var_228_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x55c";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3076();
			if(var_36_bool == 36960) {
				func_1785(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_36_bool == 36962) {
				func_1785(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_36_bool == 36964) {
				func_1785(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_89_bool;
			func_3268(var_89_bool);
			if(var_89_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x710";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3076();
			if(var_37_cvector == 42012) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3309();
			}
			if(var_37_cvector == 42025) {
				object var_48_object = var_1_object;
				func_3412(var_0_object);
			}
			if(var_37_cvector == 42026) {
				object var_74_object = var_1_object;
				func_3412(var_0_object);
				object var_76_object = var_1_object;
				func_3326(var_0_object);
				object var_87_object = var_1_object;
				func_3315(var_0_object);
			}
			if(var_36_bool == 42010) {
				func_2058(var_37_cvector, "Pain");
				var_0_object->SetMessage(540043); //@t
				var_0_object->ClearReplies(); //@t
				bool var_113_bool = false;
				bool var_114_bool;
				func_3505(var_1_object);
				if(var_114_bool != 0) {
					bool var_122_bool;
					func_3457(var_1_object);
					if(var_122_bool != 0)
						var_113_bool = true;
				}
				if(var_113_bool != 0)
					var_0_object->AddReply(540045, 42013, 42012); //@t
				var_0_object->AddReply(540044, -1, 42011); //@t
				var_0_object->AddReply(540060, -1, 42029); //@t
				return 0;
			}
			if(var_36_bool == 42013) {
				func_2058(var_37_cvector, "Pain");
				var_0_object->SetMessage(540046); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540047, 42015, 42014); //@t
				var_0_object->AddReply(540052, 42024, 42019); //@t
				return 0;
			}
			if(var_36_bool == 42015) {
				func_2058(var_37_cvector, "Pain");
				var_0_object->SetMessage(540048); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540049, 42017, 42016); //@t
				return 0;
			}
			if(var_36_bool == 42017) {
				func_2058(var_37_cvector, "Welldie");
				var_0_object->SetMessage(540050); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540051, 42020, 42018); //@t
				var_0_object->AddReply(540056, 42024, 42023); //@t
				return 0;
			}
			if(var_36_bool == 42020) {
				func_2058(var_37_cvector, "Pain");
				var_0_object->SetMessage(540053); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540054, 42024, 42021); //@t
				return 0;
			}
			if(var_36_bool == 42024) {
				func_2058(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540057); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540058, -1, 42025); //@t
				var_0_object->AddReply(540059, -1, 42026); //@t
				return 0;
			}
			var_3_string = true;
			bool var_181_bool;
			func_3268(var_181_bool);
			if(var_181_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x821";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3076();
			if(var_36_int == 42557) {
				func_2419(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540549, -1, 42558); //@t
				var_0_object->AddReply(540797, -1, 42846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_66_bool;
			func_3268(var_66_bool);
			if(var_66_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x98a";
	
	}

}


maintask task_14
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_2487(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_2552();
			bool var_40_bool = false;
			bool var_41_bool;
			func_2800(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_2521(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_2501(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_3083(var_82_object);
					var_82_object = var_81_object;
					func_2950(var_80_bool, var_81_object);
				}
			} else {
				func_2516(var_36_int);
				func_2543();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_2734();
		func_2552();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		@StopGroup0();
		func_2552();
		func_3030("Neutral");
		func_2543();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_2543();
		else
			func_3030("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_2734();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_2791(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_3617(var_54_object);
			func_3030("Neutral");
			func_2552();
			func_2543();
		}
	}

}


void func_0(object var_0_object, int var_59_int, object var_60_object)
{
	var_0_object = var_60_object;
	bool var_70_bool; object var_71_object;
	var_60_object = var_71_object;
	func_2805(var_70_bool, var_71_object, 70.0);
	if(!var_70_bool) { //@nz
		var_59_int = -2;
		return 8;
	}
	object var_66_object;
	@CreateDialog(var_66_object);
	int var_118_int;
	func_3262(var_118_int);
	var_66_object->SetNPCName(var_118_int);
	int var_119_int;
	func_3260(var_119_int);
	var_66_object->SetNPCDescription(var_119_int);
	string var_120_string;
	func_3264(var_120_string);
	var_66_object->SetPhoto(var_120_string);
	string var_121_string;
	func_3266(var_121_string);
	var_66_object->SetPhoto2(var_121_string);
	int var_122_int;
	func_3600(var_122_int);
	var_66_object->SetPlayerName(var_122_int);
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	@DoDialog(var_66_object);
	bool var_131_bool; object var_132_object;
	object var_133_object;
	func_3083(var_133_object);
	var_133_object = var_132_object;
	func_2892(var_131_bool, var_132_object);
	object var_226_object; object var_227_object;
	var_60_object = var_226_object;
	var_66_object = var_227_object;
	TaskCall(1);
	func_81(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object);
	TaskReturn();
	bool var_69_bool;
	var_66_object->IsDialogEnd(var_69_bool);
	
	for(;;) {
		var_279_bool = !var_69_bool; //@nz
		if(var_279_bool == 0) goto Label_70;
		@sync();
		var_66_object->IsDialogEnd(var_69_bool);
	}
	
Label_70:
	object var_280_object;
	var_60_object = var_280_object;
	func_2874();
	@StopDialog(var_66_object);
	var_66_object->GetReturnValue(-1);
	int var_68_int = var_59_int;
}
EMIT "Stack[-4] = 0";


void func_3076(void)
{
	bool var_39_bool;
	func_3268(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1029(object var_2_object, string var_399_string)
{
	bool var_400_bool;
	func_3268(var_400_bool);
	if(!var_400_bool) //@nz
		return 0;
	if(var_399_string == var_2_object)
		return 0;
	string var_403_string; bool var_404_bool;
	var_399_string = var_403_string;
	if(var_399_string == "")
		var_404_bool = false;
	else
		var_404_bool = true;
	func_3046(var_403_string, var_404_bool);
	var_2_object = var_399_string;
	
}


// @pe
void func_3337(object var_48_object)
{
	@Trace("powder is given");
	object var_51_object;
	var_48_object = var_51_object;
	func_3146(var_51_object, "powder", 1);
}


// @pe
void func_2058(object var_2_object, string var_534_string)
{
	bool var_535_bool;
	func_3268(var_535_bool);
	if(!var_535_bool) //@nz
		return 0;
	if(var_534_string == var_2_object)
		return 0;
	string var_538_string; bool var_539_bool;
	var_534_string = var_538_string;
	if(var_534_string == "")
		var_539_bool = false;
	else
		var_539_bool = true;
	func_3046(var_538_string, var_539_bool);
	var_2_object = var_534_string;
	
}


void func_3083(object var_133_object)
{
	object var_135_object;
	@self(var_135_object);
	var_135_object = var_133_object;
}
EMIT "Stack[-1] = 0";


void func_3600(int var_122_int)
{
	int var_124_int;
	@GetVariable("branch", var_124_int);
	if(var_124_int == 0) {
		var_122_int = 1;
		return 2;
	EMIT "GOTO 0xe1f";
	}
	if(var_124_int == 1) {
		var_122_int = 2;
		return 2;
	}
	var_122_int = 3;
}


void func_3089(cvector var_97_cvector, cvector var_98_cvector)
{
	float var_101_float = sqrt(var_98_cvector | var_98_cvector);
	if(var_101_float < 0.000001)
		var_97_cvector = [0.0, 0.0, 0.0];
	var_97_cvector = var_98_cvector / var_101_float;
}


// @pe
void func_3348(object var_78_object)
{
	object var_81_object;
	var_78_object = var_81_object;
	bool var_80_bool;
	func_3159(var_80_bool, var_81_object, 0.3);
}


void func_277(object var_0_object, int var_293_int, object var_294_object)
{
	var_0_object = var_294_object;
	bool var_304_bool; object var_305_object;
	var_294_object = var_305_object;
	func_2805(var_304_bool, var_305_object, 70.0);
	if(!var_304_bool) { //@nz
		var_293_int = -2;
		return 8;
	}
	object var_300_object;
	@CreateDialog(var_300_object);
	int var_308_int;
	func_3262(var_308_int);
	var_300_object->SetNPCName(var_308_int);
	int var_309_int;
	func_3260(var_309_int);
	var_300_object->SetNPCDescription(var_309_int);
	string var_310_string;
	func_3264(var_310_string);
	var_300_object->SetPhoto(var_310_string);
	string var_311_string;
	func_3266(var_311_string);
	var_300_object->SetPhoto2(var_311_string);
	int var_312_int;
	func_3600(var_312_int);
	var_300_object->SetPlayerName(var_312_int);
	bool var_301_bool;
	@IsOverrideActive(var_301_bool);
	if(var_301_bool != 0) {
		var_293_int = -2;
		return 8;
	}
	@DoDialog(var_300_object);
	bool var_314_bool; object var_315_object;
	object var_316_object;
	func_3083(var_316_object);
	var_316_object = var_315_object;
	func_2892(var_314_bool, var_315_object);
	object var_317_object; object var_318_object;
	var_294_object = var_317_object;
	var_300_object = var_318_object;
	TaskCall(3);
	func_358(var_319_object, var_320_object, var_321_string, var_322_bool, var_317_object, var_318_object);
	TaskReturn();
	bool var_303_bool;
	var_300_object->IsDialogEnd(var_303_bool);
	
	for(;;) {
		var_364_bool = !var_303_bool; //@nz
		if(var_364_bool == 0) goto Label_347;
		@sync();
		var_300_object->IsDialogEnd(var_303_bool);
	}
	
Label_347:
	object var_365_object;
	var_294_object = var_365_object;
	func_2874();
	@StopDialog(var_300_object);
	var_300_object->GetReturnValue(-1);
	int var_302_int = var_293_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3099(float var_109_float, float var_110_float, float var_111_float, float var_112_float)
{
	if(var_110_float < var_111_float) {
		var_111_float = var_109_float;
		return 0;
	}
	if(var_110_float > var_112_float) {
		var_112_float = var_109_float;
		return 0;
	}
	var_110_float = var_109_float;
}


// @pe
void func_3355(void)
{
	@SetVariable("ood6Laska1", 1);
}


void func_3617(object var_54_object)
{
	int var_56_int;
	@GetVariable("mt_laska", var_56_int);
	if(!var_56_int) { //@nz
		int var_59_int; object var_60_object;
		var_54_object = var_60_object;
		TaskCall(0);
		func_0(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		@SetVariable("mt_laska", 1);
	}
	bool var_290_bool;
	func_3230(var_290_bool, 2);
	if(var_290_bool != 0) {
		int var_293_int; object var_294_object;
		var_54_object = var_294_object;
		TaskCall(2);
		func_277(var_295_object, var_293_int, var_294_object);
		TaskReturn();
		return 2;
	}
	bool var_366_bool;
	func_3230(var_366_bool, 3);
	if(var_366_bool != 0) {
		int var_368_int; object var_369_object;
		var_54_object = var_369_object;
		TaskCall(4);
		func_885(var_370_object, var_368_int, var_369_object);
		TaskReturn();
		return 2;
	}
	bool var_430_bool;
	func_3230(var_430_bool, 6);
	if(var_430_bool != 0) {
		int var_432_int; object var_433_object;
		var_54_object = var_433_object;
		TaskCall(6);
		func_1196(var_434_object, var_432_int, var_433_object);
		TaskReturn();
		return 2;
	}
	bool var_501_bool;
	func_3230(var_501_bool, 11);
	if(var_501_bool != 0) {
		int var_503_int; object var_504_object;
		var_54_object = var_504_object;
		TaskCall(10);
		func_1900(var_505_object, var_503_int, var_504_object);
		TaskReturn();
		return 2;
	}
	bool var_575_bool;
	func_3230(var_575_bool, 12);
	if(var_575_bool != 0) {
		int var_577_int; object var_578_object;
		var_54_object = var_578_object;
		TaskCall(8);
		func_1641(var_579_object, var_577_int, var_578_object);
		TaskReturn();
		return 2;
	}
	int var_636_int; object var_637_object;
	var_54_object = var_637_object;
	TaskCall(12);
	func_2280(var_638_object, var_636_int, var_637_object);
	TaskReturn();
}


void func_3361(void)
{
	@SetVariable("d6q01", 3);
	object var_72_object;
	func_3583(var_72_object);
	object var_69_object;
	var_72_object = var_69_object;
	float var_83_float;
	func_3216(var_83_float);
	var_69_object->AddMark("d6q01LaskaGotoAlbinos", "pt_d6q03_albinos", 1, 515400, var_83_float);
	func_3529();
	bool var_109_bool;
	func_3204(var_109_bool, "quest_d6_01", "albinos_klara");
}
EMIT "Stack[-1] = 0";


void func_3110(int var_335_int, string var_336_string)
{
	int var_338_int;
	@GetVariable(var_336_string, var_338_int);
	var_338_int = var_335_int;
}


void func_3115(int var_67_int, int var_68_int)
{
	object var_70_object;
	@CreateIntVector(var_70_object);
	var_70_object->add(var_67_int);
	var_70_object->add(var_68_int);
	@SendWorldWndMessage(3, var_70_object);
}
EMIT "Stack[-1] = 0";


void func_3127(object var_56_object, object var_57_object, int var_58_int)
{
	int var_62_int;
	var_57_object->GetItemID(var_62_int);
	int var_63_int;
	@GetInvItemProperty(var_63_int, var_62_int, "Category");
	bool var_64_bool;
	var_56_object->AddItem(var_64_bool, var_57_object, var_63_int, var_58_int);
	if(!var_64_bool) { //@nz
		var_56_object->DropItems(var_57_object, var_58_int);
	} else {
		int var_67_int; int var_68_int;
		var_62_int = var_67_int;
		var_58_int = var_68_int;
		func_3115(var_67_int, var_68_int);
	}
	
}


// @pe
void func_2361(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_660_object, object var_661_object)
{
	var_0_object = var_661_object;
	var_1_object = var_660_object;
	var_3_string = false;
	if(1 != 0) {
		func_2419(var_661_object, "Neutral");
		var_0_object->SetMessage(540548); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540549, -1, 42558); //@t
		var_0_object->AddReply(540797, -1, 42846); //@t
		goto Label_2389;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x93d";
	}
Label_2389:
	bool var_682_bool;
	func_3268(var_682_bool);
	if(var_682_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3030(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2418;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2418:
		return 0;

	}
	
}


void func_2874(void)
{
	bool var_282_bool;
	@CameraSwitchToNormal(true);
	bool var_284_bool;
	func_3268(var_284_bool);
	if(var_284_bool != 0) {
	} else {
		@HasAnimationTrack(var_282_bool, "head");
		if(var_282_bool == 0) goto Label_2891;
		@UnlookAsync("head");
	}
Label_2891:
	
}


// @pe
void func_3389(void)
{
	@SetVariable("d6q01", 4);
	bool var_50_bool;
	func_3204(var_50_bool, "quest_d6_01", "eva_klara");
}


// @pe
void func_1349(object var_2_object, string var_463_string)
{
	bool var_464_bool;
	func_3268(var_464_bool);
	if(!var_464_bool) //@nz
		return 0;
	if(var_463_string == var_2_object)
		return 0;
	string var_467_string; bool var_468_bool;
	var_463_string = var_467_string;
	if(var_463_string == "")
		var_468_bool = false;
	else
		var_468_bool = true;
	func_3046(var_467_string, var_468_bool);
	var_2_object = var_463_string;
	
}


// @pe
void func_3400(void)
{
	@SetVariable("KnowLaska", 1);
}


void func_3146(object var_79_object, string var_80_string, int var_81_int)
{
	object var_83_object;
	@CreateInvItem(var_83_object);
	var_83_object->SetItemName(var_80_string);
	object var_84_object; object var_85_object; int var_86_int;
	var_79_object = var_84_object;
	var_83_object = var_85_object;
	var_81_int = var_86_int;
	func_3127(var_84_object, var_85_object, var_86_int);
}
EMIT "Stack[-1] = 0";


void func_2892(bool var_131_bool, object var_132_object)
{
	int var_138_int; int var_139_int;
	@GetVariable("voice_common", var_138_int);
	if(var_138_int != 0) {
		bool var_142_bool; object var_143_object;
		var_132_object = var_143_object;
		func_2950(var_142_bool, var_143_object);
		if(!var_142_bool) { //@nz
			bool var_173_bool; object var_174_object;
			var_132_object = var_174_object;
			func_2987(var_173_bool, var_174_object);
			if(!var_173_bool) { //@nz
				var_131_bool = false;
				return 4;
			}
		}
		@irand(var_139_int, 2);
		if(var_139_int != 0)
			@SetVariable("voice_common", ((var_138_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_218_bool; object var_219_object;
		var_132_object = var_219_object;
		func_2987(var_218_bool, var_219_object);
		if(!var_218_bool) { //@nz
			bool var_221_bool; object var_222_object;
			var_132_object = var_222_object;
			func_2950(var_221_bool, var_222_object);
			if(!var_221_bool) { //@nz
				var_131_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2948;
	
Label_2948:
	var_131_bool = true;
	
}


// @pe
void func_3406(void)
{
	@SetVariable("ood3Laska1", 1);
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_226_object, object var_227_object)
{
	var_0_object = var_227_object;
	var_3_string = false;
	if(1 != 0) {
		object var_233_object; object var_234_object;
		var_233_object = var_226_object;
		var_234_object = var_0_object;
		func_3400();
		func_144(var_227_object, "Neutral");
		var_0_object->SetMessage(500370); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(500371, 432, 430); //@t
		var_0_object->AddReply(500372, 437, 431); //@t
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	bool var_261_bool;
	func_3268(var_261_bool);
	if(var_261_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3030(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_143;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_143:
		return 0;

	}
	
}


void func_3412(object var_48_object)
{
	@Trace("Knife is given");
	object var_51_object;
	@CreateInvItem(var_51_object);
	var_51_object->SetItemName("Knife");
	var_51_object->SetProperty("durability", 100);
	object var_56_object; object var_57_object;
	var_48_object = var_56_object;
	var_51_object = var_57_object;
	func_3127(var_56_object, var_57_object, 1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3159(bool var_80_bool, object var_81_object, float var_82_float)
{
	if(!var_81_object) { //@nz
		var_80_bool = false;
		return 0;
	}
	if(var_82_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_82_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_87_float;
		var_82_float = var_87_float;
		func_3194(var_87_float);
		bool var_91_bool; object var_92_object; float var_94_float;
		var_81_object = var_92_object;
		var_82_float = var_94_float;
		func_2759(var_91_bool, var_92_object, "reputation", var_94_float, (float)0, (float)1);
		var_80_bool = true;
		return 0;

	}
	
	var_80_bool = false;
}


// @pe
void func_358(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_317_object, object var_318_object)
{
	var_0_object = var_318_object;
	var_1_object = var_317_object;
	var_3_string = false;
	if(1 != 0) {
		func_431(var_318_object, "Neutral");
		var_0_object->SetMessage(509473); //@t
		var_0_object->ClearReplies(); //@t
		bool var_333_bool;
		func_3433(var_1_object);
		if(var_333_bool != 0)
			var_0_object->AddReply(533914, 35474, 35473); //@t
		bool var_344_bool;
		func_3445(var_1_object);
		if(var_344_bool != 0)
			var_0_object->AddReply(509474, 10417, 10416); //@t
		var_0_object->AddReply(509487, -1, 10429); //@t
		goto Label_401;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x16a";
	}
Label_401:
	bool var_356_bool;
	func_3268(var_356_bool);
	if(var_356_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3030(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_430;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_430:
		return 0;

	}
	
}


void func_2663(void)
{
	bool var_48_bool; int var_49_int; int var_50_int; bool var_51_bool;
	@WaitForAnimEnd();
	bool var_52_bool;
	func_2800(var_52_bool);
	if(!var_52_bool) //@nz
		return 12;
	int var_54_int;
	func_3243(var_54_int);
	int var_46_int;
	var_54_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_67_bool = false;
		if(var_47_int < 5) {
			bool var_70_bool;
			func_2800(var_70_bool);
			if(var_70_bool != 0)
				var_67_bool = true;
		}
		if(var_67_bool != 0) {
			if(!var_46_int) { //@nz
				@Sleep(3, var_48_bool);
				if(!var_48_bool) { //@nz
				} else {
			} else {
			@irand(var_49_int, var_46_int);
			@irand(var_50_int, 5);
			if(var_50_int != 0)
				var_49_int = 0;
			string var_81_string; int var_82_int;
			var_49_int = var_82_int;
			func_3236(var_81_string, var_82_int);
			@PlayAnimation("all", var_81_string);
			@WaitForAnimEnd(var_51_bool);
			var_83_bool = !var_51_bool; //@nz
			if(var_83_bool == 0) goto Label_2718;
			goto Label_2729;
			}
				Label_2718:
					bool var_74_bool;
					func_2732(var_74_bool);
					var_75_bool = !var_74_bool; //@nz
					if(var_75_bool == 0) goto Label_2724;
			}
		}
	Label_2729:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2724:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


void func_1641(object var_0_object, int var_577_int, object var_578_object)
{
	var_0_object = var_578_object;
	bool var_588_bool; object var_589_object;
	var_578_object = var_589_object;
	func_2805(var_588_bool, var_589_object, 70.0);
	if(!var_588_bool) { //@nz
		var_577_int = -2;
		return 8;
	}
	object var_584_object;
	@CreateDialog(var_584_object);
	int var_592_int;
	func_3262(var_592_int);
	var_584_object->SetNPCName(var_592_int);
	int var_593_int;
	func_3260(var_593_int);
	var_584_object->SetNPCDescription(var_593_int);
	string var_594_string;
	func_3264(var_594_string);
	var_584_object->SetPhoto(var_594_string);
	string var_595_string;
	func_3266(var_595_string);
	var_584_object->SetPhoto2(var_595_string);
	int var_596_int;
	func_3600(var_596_int);
	var_584_object->SetPlayerName(var_596_int);
	bool var_585_bool;
	@IsOverrideActive(var_585_bool);
	if(var_585_bool != 0) {
		var_577_int = -2;
		return 8;
	}
	@DoDialog(var_584_object);
	bool var_598_bool; object var_599_object;
	object var_600_object;
	func_3083(var_600_object);
	var_600_object = var_599_object;
	func_2892(var_598_bool, var_599_object);
	object var_601_object; object var_602_object;
	var_578_object = var_601_object;
	var_584_object = var_602_object;
	TaskCall(9);
	func_1722(var_603_object, var_604_object, var_605_string, var_606_bool, var_601_object, var_602_object);
	TaskReturn();
	bool var_587_bool;
	var_584_object->IsDialogEnd(var_587_bool);
	
	for(;;) {
		var_634_bool = !var_587_bool; //@nz
		if(var_634_bool == 0) goto Label_1711;
		@sync();
		var_584_object->IsDialogEnd(var_587_bool);
	}
	
Label_1711:
	object var_635_object;
	var_578_object = var_635_object;
	func_2874();
	@StopDialog(var_584_object);
	var_584_object->GetReturnValue(-1);
	int var_586_int = var_577_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3433(bool var_333_bool)
{
	int var_335_int;
	func_3110(var_335_int, "ood2Laska1");
	if(var_335_int == 0) {
		var_333_bool = true;
		return 0;
	}
	var_333_bool = false;
}


void func_1900(object var_0_object, int var_503_int, object var_504_object)
{
	var_0_object = var_504_object;
	bool var_514_bool; object var_515_object;
	var_504_object = var_515_object;
	func_2805(var_514_bool, var_515_object, 70.0);
	if(!var_514_bool) { //@nz
		var_503_int = -2;
		return 8;
	}
	object var_510_object;
	@CreateDialog(var_510_object);
	int var_518_int;
	func_3262(var_518_int);
	var_510_object->SetNPCName(var_518_int);
	int var_519_int;
	func_3260(var_519_int);
	var_510_object->SetNPCDescription(var_519_int);
	string var_520_string;
	func_3264(var_520_string);
	var_510_object->SetPhoto(var_520_string);
	string var_521_string;
	func_3266(var_521_string);
	var_510_object->SetPhoto2(var_521_string);
	int var_522_int;
	func_3600(var_522_int);
	var_510_object->SetPlayerName(var_522_int);
	bool var_511_bool;
	@IsOverrideActive(var_511_bool);
	if(var_511_bool != 0) {
		var_503_int = -2;
		return 8;
	}
	@DoDialog(var_510_object);
	bool var_524_bool; object var_525_object;
	object var_526_object;
	func_3083(var_526_object);
	var_526_object = var_525_object;
	func_2892(var_524_bool, var_525_object);
	object var_527_object; object var_528_object;
	var_504_object = var_527_object;
	var_510_object = var_528_object;
	TaskCall(11);
	func_1981(var_529_object, var_530_object, var_531_string, var_532_bool, var_527_object, var_528_object);
	TaskReturn();
	bool var_513_bool;
	var_510_object->IsDialogEnd(var_513_bool);
	
	for(;;) {
		var_573_bool = !var_513_bool; //@nz
		if(var_573_bool == 0) goto Label_1970;
		@sync();
		var_510_object->IsDialogEnd(var_513_bool);
	}
	
Label_1970:
	object var_574_object;
	var_504_object = var_574_object;
	func_2874();
	@StopDialog(var_510_object);
	var_510_object->GetReturnValue(-1);
	int var_512_int = var_503_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2419(object var_2_object, string var_667_string)
{
	bool var_668_bool;
	func_3268(var_668_bool);
	if(!var_668_bool) //@nz
		return 0;
	if(var_667_string == var_2_object)
		return 0;
	string var_671_string; bool var_672_bool;
	var_667_string = var_671_string;
	if(var_667_string == "")
		var_672_bool = false;
	else
		var_672_bool = true;
	func_3046(var_671_string, var_672_bool);
	var_2_object = var_667_string;
	
}


// @pe
void func_3445(bool var_344_bool)
{
	int var_346_int;
	func_3110(var_346_int, "ood2Laska2");
	if(var_346_int == 0) {
		var_344_bool = true;
		return 0;
	}
	var_344_bool = false;
}


void func_885(object var_0_object, int var_368_int, object var_369_object)
{
	var_0_object = var_369_object;
	bool var_379_bool; object var_380_object;
	var_369_object = var_380_object;
	func_2805(var_379_bool, var_380_object, 70.0);
	if(!var_379_bool) { //@nz
		var_368_int = -2;
		return 8;
	}
	object var_375_object;
	@CreateDialog(var_375_object);
	int var_383_int;
	func_3262(var_383_int);
	var_375_object->SetNPCName(var_383_int);
	int var_384_int;
	func_3260(var_384_int);
	var_375_object->SetNPCDescription(var_384_int);
	string var_385_string;
	func_3264(var_385_string);
	var_375_object->SetPhoto(var_385_string);
	string var_386_string;
	func_3266(var_386_string);
	var_375_object->SetPhoto2(var_386_string);
	int var_387_int;
	func_3600(var_387_int);
	var_375_object->SetPlayerName(var_387_int);
	bool var_376_bool;
	@IsOverrideActive(var_376_bool);
	if(var_376_bool != 0) {
		var_368_int = -2;
		return 8;
	}
	@DoDialog(var_375_object);
	bool var_389_bool; object var_390_object;
	object var_391_object;
	func_3083(var_391_object);
	var_391_object = var_390_object;
	func_2892(var_389_bool, var_390_object);
	object var_392_object; object var_393_object;
	var_369_object = var_392_object;
	var_375_object = var_393_object;
	TaskCall(5);
	func_966(var_394_object, var_395_object, var_396_string, var_397_bool, var_392_object, var_393_object);
	TaskReturn();
	bool var_378_bool;
	var_375_object->IsDialogEnd(var_378_bool);
	
	for(;;) {
		var_428_bool = !var_378_bool; //@nz
		if(var_428_bool == 0) goto Label_955;
		@sync();
		var_375_object->IsDialogEnd(var_378_bool);
	}
	
Label_955:
	object var_429_object;
	var_369_object = var_429_object;
	func_2874();
	@StopDialog(var_375_object);
	var_375_object->GetReturnValue(-1);
	int var_377_int = var_368_int;
}
EMIT "Stack[-4] = 0";


void func_3194(float var_87_float)
{
	object var_89_object;
	@CreateFloatVector(var_89_object);
	var_89_object->add(var_87_float);
	@SendWorldWndMessage(16, var_89_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3457(bool var_550_bool)
{
	int var_552_int;
	func_3110(var_552_int, "ood11Laska1");
	if(var_552_int == 0) {
		var_550_bool = true;
		return 0;
	}
	var_550_bool = false;
}


void func_3204(bool var_50_bool, string var_51_string, string var_52_string)
{
	object var_54_object;
	@FindActor(var_54_object, var_51_string);
	if(var_54_object == null)
		var_50_bool = false;
	@Trigger(var_54_object, var_52_string);
	var_50_bool = true;
}
EMIT "Stack[-1] = 0";


void func_2950(bool var_142_bool, object var_143_object)
{
	string var_149_string; bool var_151_bool; int var_152_int; string var_153_string;
	var_149_string = "c";
	int var_150_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_143_object->HasProperty((var_149_string + (var_150_int + 1)), var_151_bool);
			if(!var_151_bool) { //@nz
			} else {
				var_150_int += 1;
			}
		}
		if(!var_150_int) { //@nz
			var_142_bool = false;
			return 10;
		}
		var_152_int = 0;
		if(var_150_int > 1)
			@irand(var_152_int, var_150_int);
		var_143_object->GetProperty((var_149_string + (var_152_int + 1)), var_153_string);
		bool var_165_bool; string var_166_string;
		var_153_string = var_166_string;
		func_3061(var_165_bool, var_166_string);
		var_165_bool = var_142_bool;
		return 10;

	}
}


// @pe
void func_3469(bool var_161_bool)
{
	int var_163_int;
	func_3110(var_163_int, "d6q03AlbinosKilled");
	if(var_163_int == 1)
		var_161_bool = true;
	var_161_bool = false;
}


// @pe
void func_144(object var_2_object, string var_237_string)
{
	bool var_238_bool;
	func_3268(var_238_bool);
	if(!var_238_bool) //@nz
		return 0;
	if(var_237_string == var_2_object)
		return 0;
	string var_241_string; bool var_242_bool;
	var_237_string = var_241_string;
	if(var_237_string == "")
		var_242_bool = false;
	else
		var_242_bool = true;
	func_3046(var_241_string, var_242_bool);
	var_2_object = var_237_string;
	
}


void func_3216(float var_83_float)
{
	float var_85_float;
	@GetGameTime(var_85_float);
	var_85_float = var_83_float;
}


void func_3221(int var_186_int)
{
	float var_188_float;
	@GetGameTime(var_188_float);
	var_186_int = 1 + (var_188_float / 24);
}


// @pe
void func_3481(bool var_473_bool)
{
	int var_475_int;
	func_3110(var_475_int, "d6q01");
	if(var_475_int == 2)
		var_473_bool = true;
	var_473_bool = false;
}


// @pe
void func_3230(bool var_290_bool, int var_291_int)
{
	int var_292_int;
	func_3221(var_292_int);
	var_290_bool = var_292_int == var_291_int;
}


void func_3236(string var_60_string, int var_61_int)
{
	string var_63_string = "idle";
	if(var_61_int != 0)
		var_63_string += var_61_int;
	var_63_string = var_60_string;
}


// @pe
void func_3493(bool var_479_bool)
{
	int var_481_int;
	func_3110(var_481_int, "ood6Laska1");
	if(var_481_int == 0) {
		var_479_bool = true;
		return 0;
	}
	var_479_bool = false;
}


void func_3243(int var_54_int)
{
	int var_57_int; bool var_58_bool;
	var_57_int = 0;
	
	for(;;) {
		string var_60_string; int var_61_int;
		var_57_int = var_61_int;
		func_3236(var_60_string, var_61_int);
		@HasAnimation(var_58_bool, "all", var_60_string);
		if(!var_58_bool) //@nz
			break;
		var_57_int += 1;
	}
	var_57_int = var_54_int;
}


void func_2732(bool var_74_bool)
{
	var_74_bool = true;
}


void func_1196(object var_0_object, int var_432_int, object var_433_object)
{
	var_0_object = var_433_object;
	bool var_443_bool; object var_444_object;
	var_433_object = var_444_object;
	func_2805(var_443_bool, var_444_object, 70.0);
	if(!var_443_bool) { //@nz
		var_432_int = -2;
		return 8;
	}
	object var_439_object;
	@CreateDialog(var_439_object);
	int var_447_int;
	func_3262(var_447_int);
	var_439_object->SetNPCName(var_447_int);
	int var_448_int;
	func_3260(var_448_int);
	var_439_object->SetNPCDescription(var_448_int);
	string var_449_string;
	func_3264(var_449_string);
	var_439_object->SetPhoto(var_449_string);
	string var_450_string;
	func_3266(var_450_string);
	var_439_object->SetPhoto2(var_450_string);
	int var_451_int;
	func_3600(var_451_int);
	var_439_object->SetPlayerName(var_451_int);
	bool var_440_bool;
	@IsOverrideActive(var_440_bool);
	if(var_440_bool != 0) {
		var_432_int = -2;
		return 8;
	}
	@DoDialog(var_439_object);
	bool var_453_bool; object var_454_object;
	object var_455_object;
	func_3083(var_455_object);
	var_455_object = var_454_object;
	func_2892(var_453_bool, var_454_object);
	object var_456_object; object var_457_object;
	var_433_object = var_456_object;
	var_439_object = var_457_object;
	TaskCall(7);
	func_1277(var_458_object, var_459_object, var_460_string, var_461_bool, var_456_object, var_457_object);
	TaskReturn();
	bool var_442_bool;
	var_439_object->IsDialogEnd(var_442_bool);
	
	for(;;) {
		var_499_bool = !var_442_bool; //@nz
		if(var_499_bool == 0) goto Label_1266;
		@sync();
		var_439_object->IsDialogEnd(var_442_bool);
	}
	
Label_1266:
	object var_500_object;
	var_433_object = var_500_object;
	func_2874();
	@StopDialog(var_439_object);
	var_439_object->GetReturnValue(-1);
	int var_441_int = var_432_int;
}
EMIT "Stack[-4] = 0";


void func_2734(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2987(bool var_173_bool, object var_174_object)
{
	bool var_182_bool; int var_183_int; string var_184_string;
	int var_186_int;
	func_3221(var_186_int);
	string var_180_string = ("d" + var_186_int) + "m";
	int var_181_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_174_object->HasProperty((var_180_string + (var_181_int + 1)), var_182_bool);
			if(!var_182_bool) { //@nz
			} else {
				var_181_int += 1;
			}
		}
		if(!var_181_int) { //@nz
			var_173_bool = false;
			return 10;
		}
		var_183_int = 0;
		if(var_181_int > 1)
			@irand(var_183_int, var_181_int);
		var_174_object->GetProperty((var_180_string + (var_183_int + 1)), var_184_string);
		bool var_205_bool; string var_206_string;
		var_184_string = var_206_string;
		func_3061(var_205_bool, var_206_string);
		var_205_bool = var_173_bool;
		return 10;

	}
}


// @pe
void func_431(object var_2_object, string var_324_string)
{
	bool var_325_bool;
	func_3268(var_325_bool);
	if(!var_325_bool) //@nz
		return 0;
	if(var_324_string == var_2_object)
		return 0;
	string var_328_string; bool var_329_bool;
	var_324_string = var_328_string;
	if(var_324_string == "")
		var_329_bool = false;
	else
		var_329_bool = true;
	func_3046(var_328_string, var_329_bool);
	var_2_object = var_324_string;
	
}


// @pe
void func_3505(bool var_544_bool)
{
	int var_546_int;
	func_3110(var_546_int, "d11q01");
	if(var_546_int == 3)
		var_544_bool = true;
	var_544_bool = false;
}


void func_2739(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


void func_2487(object var_0_object)
{
	bool var_36_bool;
	func_2800(var_36_bool);
	if(!var_36_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2663();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1722(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_601_object, object var_602_object)
{
	var_0_object = var_602_object;
	var_1_object = var_601_object;
	var_3_string = false;
	if(1 != 0) {
		func_1785(var_602_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_1755;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x6be";
	}
Label_1755:
	bool var_626_bool;
	func_3268(var_626_bool);
	if(var_626_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3030(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1784;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1784:
		return 0;

	}
	
}


void func_2747(bool var_99_bool, object var_100_object, string var_101_string)
{
	var_106_bool = IsFuncExist(var_100_object, "HasProperty", 2);
	if(!var_106_bool) { //@nz
		var_99_bool = false;
		return 2;
	}
	bool var_103_bool;
	var_100_object->HasProperty(var_101_string, var_103_bool);
	var_103_bool = var_99_bool;
}


void func_3260(int var_119_int)
{
	var_119_int = 515542;
}


// @pe
void func_3517(bool var_408_bool)
{
	int var_410_int;
	func_3110(var_410_int, "ood3Laska1");
	if(var_410_int == 0) {
		var_408_bool = true;
		return 0;
	}
	var_408_bool = false;
}


void func_3262(int var_118_int)
{
	var_118_int = 502867;
}


// @pe
void func_1981(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_527_object, object var_528_object)
{
	var_0_object = var_528_object;
	var_1_object = var_527_object;
	var_3_string = false;
	if(1 != 0) {
		func_2058(var_528_object, "Pain");
		var_0_object->SetMessage(540043); //@t
		var_0_object->ClearReplies(); //@t
		bool var_543_bool = false;
		bool var_544_bool;
		func_3505(var_1_object);
		if(var_544_bool != 0) {
			bool var_550_bool;
			func_3457(var_1_object);
			if(var_550_bool != 0)
				var_543_bool = true;
		}
		if(var_543_bool != 0)
			var_0_object->AddReply(540045, 42013, 42012); //@t
		var_0_object->AddReply(540044, -1, 42011); //@t
		var_0_object->AddReply(540060, -1, 42029); //@t
		goto Label_2028;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7c1";
	}
Label_2028:
	bool var_565_bool;
	func_3268(var_565_bool);
	if(var_565_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3030(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2057;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2057:
		return 0;

	}
	
}


void func_3264(string var_120_string)
{
	var_120_string = "ui/NPC_Laska.png";
}


void func_3266(string var_121_string)
{
	var_121_string = "ui/NPC_Laska_b.png";
}


void func_3268(bool var_113_bool)
{
	var_113_bool = true;
}


void func_2501(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_2791(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


void func_3270(object var_48_object)
{
	@Trace("lockpick1time is given");
	object var_51_object;
	@CreateInvItem(var_51_object);
	var_51_object->SetItemName("lockpick");
	var_51_object->SetProperty("uses", 1);
	object var_56_object; object var_57_object;
	var_48_object = var_56_object;
	var_51_object = var_57_object;
	func_3127(var_56_object, var_57_object, 1);
}
EMIT "Stack[-1] = 0";


void func_2759(bool var_91_bool, object var_92_object, string var_93_string, float var_94_float, float var_95_float, float var_96_float)
{
	object var_100_object;
	var_92_object = var_100_object;
	string var_101_string;
	var_93_string = var_101_string;
	bool var_99_bool;
	func_2747(var_99_bool, var_100_object, var_101_string);
	if(!var_99_bool) //@nz
		var_91_bool = false;
	float var_98_float;
	var_92_object->GetProperty(var_93_string, var_98_float);
	float var_109_float; float var_111_float; float var_112_float;
	var_95_float = var_111_float;
	var_96_float = var_112_float;
	func_3099(var_109_float, (var_98_float + var_94_float), var_111_float, var_112_float);
	var_92_object->SetProperty(var_93_string, var_109_float);
	var_91_bool = true;
}


// @pe
void func_966(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_392_object, object var_393_object)
{
	var_0_object = var_393_object;
	var_3_string = false;
	if(1 != 0) {
		func_1029(var_393_object, "Pain");
		var_0_object->SetMessage(509951); //@t
		var_0_object->ClearReplies(); //@t
		bool var_408_bool;
		func_3517(var_392_object);
		if(var_408_bool != 0)
			var_0_object->AddReply(509961, 10970, 10978); //@t
		var_0_object->AddReply(509952, -1, 10969); //@t
		goto Label_999;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x3ca";
	}
Label_999:
	bool var_420_bool;
	func_3268(var_420_bool);
	if(var_420_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3030(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1028;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1028:
		return 0;

	}
	
}


void func_3529(void)
{
	object var_87_object;
	@CreateDiaryEntry(var_87_object, 117, 1, 513740);
	bool var_91_bool; object var_92_object;
	var_87_object = var_92_object;
	func_3555(var_91_bool, var_92_object, 111);
}
EMIT "Stack[-1] = 0";


void func_2516(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


void func_3030(string var_263_string)
{
	bool var_267_bool; float var_268_float; float var_269_float;
	@lshHasAnimation(var_267_bool, var_263_string);
	if(var_267_bool != 0) {
		@lshGetAnimTimes(var_263_string, var_268_float, var_269_float);
		@lshPlayAnimation(var_268_float, var_269_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_263_string);
	}
	
}


void func_3542(object var_100_object)
{
	object var_102_object;
	@GetDiaryRoot(var_102_object);
	if(!var_102_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_100_object = false;
	}
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_2521(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_2739(var_51_float, var_52_object);
	if(var_51_float > 90000.0) {
		var_44_bool = false;
		return 4;
	}
	bool var_48_bool;
	@CanSee(var_48_bool, var_52_object);
	var_48_bool = var_44_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_3291(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_2781(bool var_44_bool, cvector var_45_cvector)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector = var_45_cvector - var_49_cvector;
	var_52_float = GetByIndex(var_50_cvector, 0);
	var_53_float = GetByIndex(var_50_cvector, 2);
	bool var_51_bool;
	@Rotate(var_52_float, var_53_float, var_51_bool);
	var_51_bool = var_44_bool;
}


// @pe
void func_3297(void)
{
	@SetVariable("ood2Laska1", 1);
}


void func_3555(bool var_91_bool, object var_92_object, int var_93_int)
{
	object var_100_object;
	func_3542(var_100_object);
	object var_97_object;
	var_100_object = var_97_object;
	object var_98_object;
	var_97_object->Find(var_93_int, var_98_object);
	if(!var_98_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_93_int);
		var_91_bool = false;
	}
	var_98_object->AddChild(var_92_object);
	@SendWorldWndMessage(7);
	int var_99_int;
	var_92_object->GetCategory(var_99_int);
	@SetDiarySection(var_99_int);
	var_91_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_3046(string var_241_string, bool var_242_bool)
{
	bool var_248_bool; float var_249_float; float var_250_float;
	@lshHasAnimation(var_248_bool, var_241_string);
	if(var_248_bool != 0) {
		@lshGetAnimTimes(var_241_string, var_249_float, var_250_float);
		@lshPlayAnimation(var_249_float, var_250_float, var_242_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_241_string);
	}
	
}


// @pe
void func_3303(void)
{
	@SetVariable("ood2Laska2", 1);
}


void func_2791(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_2781(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


void func_2280(object var_0_object, int var_636_int, object var_637_object)
{
	var_0_object = var_637_object;
	bool var_647_bool; object var_648_object;
	var_637_object = var_648_object;
	func_2805(var_647_bool, var_648_object, 70.0);
	if(!var_647_bool) { //@nz
		var_636_int = -2;
		return 8;
	}
	object var_643_object;
	@CreateDialog(var_643_object);
	int var_651_int;
	func_3262(var_651_int);
	var_643_object->SetNPCName(var_651_int);
	int var_652_int;
	func_3260(var_652_int);
	var_643_object->SetNPCDescription(var_652_int);
	string var_653_string;
	func_3264(var_653_string);
	var_643_object->SetPhoto(var_653_string);
	string var_654_string;
	func_3266(var_654_string);
	var_643_object->SetPhoto2(var_654_string);
	int var_655_int;
	func_3600(var_655_int);
	var_643_object->SetPlayerName(var_655_int);
	bool var_644_bool;
	@IsOverrideActive(var_644_bool);
	if(var_644_bool != 0) {
		var_636_int = -2;
		return 8;
	}
	@DoDialog(var_643_object);
	bool var_657_bool; object var_658_object;
	object var_659_object;
	func_3083(var_659_object);
	var_659_object = var_658_object;
	func_2892(var_657_bool, var_658_object);
	object var_660_object; object var_661_object;
	var_637_object = var_660_object;
	var_643_object = var_661_object;
	TaskCall(13);
	func_2361(var_662_object, var_663_object, var_664_string, var_665_bool, var_660_object, var_661_object);
	TaskReturn();
	bool var_646_bool;
	var_643_object->IsDialogEnd(var_646_bool);
	
	for(;;) {
		var_690_bool = !var_646_bool; //@nz
		if(var_690_bool == 0) goto Label_2350;
		@sync();
		var_643_object->IsDialogEnd(var_646_bool);
	}
	
Label_2350:
	object var_691_object;
	var_637_object = var_691_object;
	func_2874();
	@StopDialog(var_643_object);
	var_643_object->GetReturnValue(-1);
	int var_645_int = var_636_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3309(void)
{
	@SetVariable("ood11Laska1", 1);
}


void func_2543(void)
{
	float var_695_float;
	@rand(var_695_float, 8, 16);
	@SetTimer(10, var_695_float);
}


void func_2800(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


// @pe
void func_3315(object var_87_object)
{
	@Trace("bandage is given");
	object var_90_object;
	var_87_object = var_90_object;
	func_3146(var_90_object, "bandage", 1);
}


void func_2805(bool var_70_bool, object var_71_object, float var_72_float)
{
	cvector var_83_cvector; bool var_90_bool;
	var_71_object->GetPosition(var_83_cvector);
	float var_82_float;
	var_71_object->GetEyesHeight(var_82_float);
	var_91_float = GetByIndex(var_83_cvector, 1);
	SetByIndex(var_83_cvector, 1) = (var_91_float + var_82_float);
	cvector var_84_cvector;
	@GetPosition(var_84_cvector);
	@GetEyesHeight(var_82_float);
	var_92_float = GetByIndex(var_84_cvector, 1);
	SetByIndex(var_84_cvector, 1) = (var_92_float + var_82_float);
	cvector var_85_cvector = var_83_cvector - var_84_cvector;
	var_93_float = GetByIndex(var_85_cvector, 1);
	SetByIndex(var_85_cvector, 1) = (float)0;
	var_95_float = sqrt(var_85_cvector | var_85_cvector);
	var_85_cvector /= var_95_float;
	cvector var_86_cvector = -var_85_cvector;
	cvector var_97_cvector;
	func_3089(var_97_cvector, (var_86_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_87_cvector = ((var_85_cvector * var_72_float) + (var_97_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_89_bool;
	@IsOverrideActive(var_89_bool);
	if(var_89_bool != 0)
		var_70_bool = false;
	@StopWorld();
	@CameraTransit((var_84_cvector + var_87_cvector), var_86_cvector, true);
	var_111_float = GetByIndex(var_87_cvector, 0);
	var_112_float = GetByIndex(var_87_cvector, 2);
	@Rotate(var_111_float, var_112_float);
	bool var_113_bool;
	func_3268(var_113_bool);
	if(var_113_bool != 0) {
	} else {
		@HasAnimationTrack(var_90_bool, "head");
		if(var_90_bool == 0) goto Label_2868;
		@LookAsyncCamera("head");
	}
Label_2868:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_70_bool = true;
	
}


void func_3061(bool var_165_bool, string var_166_string)
{
	bool var_168_bool;
	bool var_169_bool;
	func_3268(var_169_bool);
	if(var_169_bool != 0) {
		@lshHasSpeech(var_168_bool, var_166_string);
		if(var_168_bool != 0) {
			@lshPlaySpeech(var_166_string);
			var_165_bool = true;
		}
	}
	var_165_bool = false;
}


void func_2552(void)
{
	@KillTimer(10);
}


// @pe
void func_1785(object var_2_object, string var_608_string)
{
	bool var_609_bool;
	func_3268(var_609_bool);
	if(!var_609_bool) //@nz
		return 0;
	if(var_608_string == var_2_object)
		return 0;
	string var_612_string; bool var_613_bool;
	var_608_string = var_612_string;
	if(var_608_string == "")
		var_613_bool = false;
	else
		var_613_bool = true;
	func_3046(var_612_string, var_613_bool);
	var_2_object = var_608_string;
	
}


// @pe
void func_1277(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_456_object, object var_457_object)
{
	var_0_object = var_457_object;
	var_1_object = var_456_object;
	var_3_string = false;
	if(1 != 0) {
		func_1349(var_457_object, "Neutral");
		var_0_object->SetMessage(512815); //@t
		var_0_object->ClearReplies(); //@t
		bool var_472_bool = false;
		bool var_473_bool;
		func_3481(var_1_object);
		if(var_473_bool != 0) {
			bool var_479_bool;
			func_3493(var_1_object);
			if(var_479_bool != 0)
				var_472_bool = true;
		}
		if(var_472_bool != 0)
			var_0_object->AddReply(512816, 14017, 14016); //@t
		var_0_object->AddReply(512828, -1, 14028); //@t
		goto Label_1319;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x501";
	}
Label_1319:
	bool var_491_bool;
	func_3268(var_491_bool);
	if(var_491_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3030(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1348;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1348:
		return 0;

	}
	
}


// @pe
void func_3326(object var_76_object)
{
	@Trace("tourniquet is given");
	object var_79_object;
	var_76_object = var_79_object;
	func_3146(var_79_object, "tourniquet", 1);
}


void func_3583(object var_72_object)
{
	object var_75_object; object var_76_object;
	@GetMainOutdoorScene(var_75_object);
	if(var_75_object == null) {
		@Trace("Can't find main outdoor scene");
		var_76_object = null;
		var_76_object = var_72_object;
	}
	var_75_object->GetMap(var_76_object);
	var_76_object = var_72_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


