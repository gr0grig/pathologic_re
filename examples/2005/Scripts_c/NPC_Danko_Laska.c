// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3059();
			if(var_36_bool == 36960) {
				func_157(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_36_bool == 36962) {
				func_157(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_36_bool == 36964) {
				func_157(var_37_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_84_bool;
			func_3251(var_84_bool);
			if(var_84_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xb4";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3059();
			if(var_36_bool == 429) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3362();
				func_416(var_37_cvector, "Neutral");
				var_0_object->SetMessage(500370); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500371, 432, 430); //@t
				var_0_object->AddReply(500372, 437, 431); //@t
				return 0;
			}
			if(var_36_bool == 437) {
				func_416(var_37_cvector, "Neutral");
				var_0_object->SetMessage(500377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500378, 432, 438); //@t
				return 0;
			}
			if(var_36_bool == 432) {
				func_416(var_37_cvector, "Neutral");
				var_0_object->SetMessage(500373); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500374, 435, 433); //@t
				var_0_object->AddReply(500375, 435, 434); //@t
				return 0;
			}
			if(var_36_bool == 435) {
				func_416(var_37_cvector, "Neutral");
				var_0_object->SetMessage(500376); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500381, -1, 442); //@t
				var_0_object->AddReply(500379, -1, 440); //@t
				return 0;
			}
			var_3_string = true;
			bool var_92_bool;
			func_3251(var_92_bool);
			if(var_92_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1b7";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3059();
			if(var_37_cvector == 35473) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3259();
			}
			if(var_37_cvector == 10416) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_3265();
			}
			if(var_36_bool == 10415) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509473); //@t
				var_0_object->ClearReplies(); //@t
				bool var_67_bool;
				func_3395(var_1_object);
				if(var_67_bool != 0)
					var_0_object->AddReply(533914, 35474, 35473); //@t
				bool var_78_bool;
				func_3407(var_1_object);
				if(var_78_bool != 0)
					var_0_object->AddReply(509474, 10417, 10416); //@t
				var_0_object->AddReply(509487, -1, 10429); //@t
				return 0;
			}
			if(var_36_bool == 10417) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509475); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509476, 10419, 10418); //@t
				var_0_object->AddReply(509481, 10424, 10423); //@t
				return 0;
			}
			if(var_36_bool == 10424) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509482); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509483, 10426, 10425); //@t
				return 0;
			}
			if(var_36_bool == 10426) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509484); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509485, -1, 10427); //@t
				var_0_object->AddReply(509486, -1, 10428); //@t
				return 0;
			}
			if(var_36_bool == 10419) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509477); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509478, -1, 10420); //@t
				var_0_object->AddReply(509479, -1, 10421); //@t
				var_0_object->AddReply(509480, -1, 10422); //@t
				return 0;
			}
			if(var_36_bool == 35474) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(533915); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533916, 35476, 35475); //@t
				var_0_object->AddReply(533923, 35483, 35482); //@t
				return 0;
			}
			if(var_36_bool == 35483) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(533924); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533925, 35478, 35484); //@t
				return 0;
			}
			if(var_36_bool == 35476) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(533917); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533918, 35478, 35477); //@t
				var_0_object->AddReply(533936, 35499, 35498); //@t
				return 0;
			}
			if(var_36_bool == 35499) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(533937); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533939, 35504, 35501); //@t
				var_0_object->AddReply(533938, 35478, 35500); //@t
				return 0;
			}
			if(var_36_bool == 35504) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(533940); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533941, 35506, 35505); //@t
				return 0;
			}
			if(var_36_bool == 35506) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(533942); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533943, 35508, 35507); //@t
				var_0_object->AddReply(533948, 35510, 35512); //@t
				return 0;
			}
			if(var_36_bool == 35510) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(533946); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533947, -1, 35511); //@t
				return 0;
			}
			if(var_36_bool == 35508) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(533944); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533945, -1, 35509); //@t
				return 0;
			}
			if(var_36_bool == 35478) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(533919); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533922, 35485, 35481); //@t
				var_0_object->AddReply(533930, 35490, 35489); //@t
				return 0;
			}
			if(var_36_bool == 35490) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(533931); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533932, 35493, 35491); //@t
				var_0_object->AddReply(533934, 35485, 35494); //@t
				return 0;
			}
			if(var_36_bool == 35493) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(533933); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533935, 35485, 35495); //@t
				return 0;
			}
			if(var_36_bool == 35485) {
				func_703(var_37_cvector, "Neutral");
				var_0_object->SetMessage(533926); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(533927, -1, 35486); //@t
				var_0_object->AddReply(533928, -1, 35487); //@t
				return 0;
			}
			var_3_string = true;
			bool var_235_bool;
			func_3251(var_235_bool);
			if(var_235_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2d6";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3059();
			if(var_37_cvector == 10978) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3368();
			}
			if(var_37_cvector == 10976) {
				object var_48_object = var_1_object;
				func_3299(var_0_object);
				object var_72_object; object var_73_object;
				var_72_object = var_1_object;
				var_73_object = var_0_object;
				func_3253();
			}
			if(var_37_cvector == 10977) {
				object var_78_object = var_1_object;
				func_3310(var_0_object);
			}
			if(var_36_bool == 10968) {
				func_1285(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509951); //@t
				var_0_object->ClearReplies(); //@t
				bool var_133_bool;
				func_3479(var_1_object);
				if(var_133_bool != 0)
					var_0_object->AddReply(509961, 10970, 10978); //@t
				var_0_object->AddReply(509952, -1, 10969); //@t
				return 0;
			}
			if(var_36_bool == 10970) {
				func_1285(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509954, -1, 10971); //@t
				var_0_object->AddReply(509955, 10973, 10972); //@t
				return 0;
			}
			if(var_36_bool == 10973) {
				func_1285(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509956); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509957, 10975, 10974); //@t
				var_0_object->AddReply(534181, -1, 35764); //@t
				return 0;
			}
			if(var_36_bool == 10975) {
				func_1285(var_37_cvector, "Neutral");
				var_0_object->SetMessage(509958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509959, -1, 10976); //@t
				var_0_object->AddReply(509960, -1, 10977); //@t
				return 0;
			}
			var_3_string = true;
			bool var_177_bool;
			func_3251(var_177_bool);
			if(var_177_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x51c";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3059();
			if(var_37_cvector == 14233) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3317();
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_3351();
			}
			if(var_37_cvector == 14234) {
				object var_58_object; object var_59_object;
				var_58_object = var_1_object;
				var_59_object = var_0_object;
				func_3317();
				object var_60_object; object var_61_object;
				var_60_object = var_1_object;
				var_61_object = var_0_object;
				func_3351();
			}
			if(var_37_cvector == 14027) {
				object var_64_object; object var_65_object;
				var_64_object = var_1_object;
				var_65_object = var_0_object;
				func_3317();
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_3323();
			}
			if(var_37_cvector == 14026) {
				object var_114_object; object var_115_object;
				var_114_object = var_1_object;
				var_115_object = var_0_object;
				func_3317();
				object var_116_object; object var_117_object;
				var_116_object = var_1_object;
				var_117_object = var_0_object;
				func_3323();
			}
			if(var_36_bool == 14015) {
				func_1605(var_37_cvector, "Neutral");
				var_0_object->SetMessage(512815); //@t
				var_0_object->ClearReplies(); //@t
				bool var_133_bool = false;
				bool var_134_bool;
				func_3443(var_1_object);
				if(var_134_bool != 0) {
					bool var_142_bool;
					func_3455(var_1_object);
					if(var_142_bool != 0)
						var_133_bool = true;
				}
				if(var_133_bool != 0)
					var_0_object->AddReply(512816, 14017, 14016); //@t
				var_0_object->AddReply(512828, -1, 14028); //@t
				return 0;
			}
			if(var_36_bool == 14017) {
				bool var_156_bool;
				func_3431(var_1_object);
				if(!var_156_bool) { //@nz
					func_1605(var_37_cvector, "Neutral");
					var_0_object->SetMessage(512817); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(513022, 14230, 14229); //@t
					return 0;
				}
				bool var_168_bool;
				func_3431(var_1_object);
				if(var_168_bool != 0) {
					func_1605(var_37_cvector, "Neutral");
					var_0_object->SetMessage(513021); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512818, 14019, 14018); //@t
					return 0;
				}
			}
			if(var_36_bool == 14019) {
				func_1605(var_37_cvector, "Neutral");
				var_0_object->SetMessage(512819); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512820, 14021, 14020); //@t
				return 0;
			}
			if(var_36_bool == 14021) {
				func_1605(var_37_cvector, "Neutral");
				var_0_object->SetMessage(512821); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512822, 14023, 14022); //@t
				return 0;
			}
			if(var_36_bool == 14023) {
				func_1605(var_37_cvector, "Neutral");
				var_0_object->SetMessage(512823); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512824, 14025, 14024); //@t
				var_0_object->AddReply(512826, -1, 14026); //@t
				return 0;
			}
			if(var_36_bool == 14025) {
				func_1605(var_37_cvector, "Neutral");
				var_0_object->SetMessage(512825); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512827, -1, 14027); //@t
				return 0;
			}
			if(var_36_bool == 14230) {
				func_1605(var_37_cvector, "Neutral");
				var_0_object->SetMessage(513023); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513024, 14232, 14231); //@t
				var_0_object->AddReply(513027, -1, 14234); //@t
				return 0;
			}
			if(var_36_bool == 14232) {
				func_1605(var_37_cvector, "Neutral");
				var_0_object->SetMessage(513025); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(513026, -1, 14233); //@t
				return 0;
			}
			var_3_string = true;
			bool var_223_bool;
			func_3251(var_223_bool);
			if(var_223_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x65c";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, object var_32_object, object var_33_object, object var_34_object, string var_35_string, bool var_36_bool, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3059();
			if(var_37_cvector == 42012) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_3271();
			}
			if(var_37_cvector == 42025) {
				object var_48_object = var_1_object;
				func_3374(var_0_object);
			}
			if(var_37_cvector == 42026) {
				object var_74_object = var_1_object;
				func_3374(var_0_object);
				object var_76_object = var_1_object;
				func_3288(var_0_object);
				object var_87_object = var_1_object;
				func_3277(var_0_object);
			}
			if(var_36_bool == 42010) {
				func_2055(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540043); //@t
				var_0_object->ClearReplies(); //@t
				bool var_108_bool = false;
				bool var_109_bool;
				func_3467(var_1_object);
				if(var_109_bool != 0) {
					bool var_117_bool;
					func_3419(var_1_object);
					if(var_117_bool != 0)
						var_108_bool = true;
				}
				if(var_108_bool != 0)
					var_0_object->AddReply(540045, 42013, 42012); //@t
				var_0_object->AddReply(540044, -1, 42011); //@t
				var_0_object->AddReply(540060, -1, 42029); //@t
				return 0;
			}
			if(var_36_bool == 42013) {
				func_2055(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540046); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540047, 42015, 42014); //@t
				var_0_object->AddReply(540052, 42024, 42019); //@t
				return 0;
			}
			if(var_36_bool == 42015) {
				func_2055(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540048); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540049, 42017, 42016); //@t
				return 0;
			}
			if(var_36_bool == 42017) {
				func_2055(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540050); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540051, 42020, 42018); //@t
				var_0_object->AddReply(540056, 42024, 42023); //@t
				return 0;
			}
			if(var_36_bool == 42020) {
				func_2055(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540053); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540054, 42024, 42021); //@t
				return 0;
			}
			if(var_36_bool == 42024) {
				func_2055(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540057); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540058, -1, 42025); //@t
				var_0_object->AddReply(540059, -1, 42026); //@t
				return 0;
			}
			var_3_string = true;
			bool var_176_bool;
			func_3251(var_176_bool);
			if(var_176_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x81e";
	
	}

}


task task_13
{
}


task task_14
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, int var_35_int, int var_36_int, cvector var_37_cvector)
	{
		if(1 != 0) {
			func_3059();
			if(var_36_int == 42557) {
				func_2416(var_37_cvector, "Neutral");
				var_0_object->SetMessage(540548); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540549, -1, 42558); //@t
				var_0_object->AddReply(540797, -1, 42846); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_3251(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x987";
	
	}

}


maintask task_15
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_2484(var_35_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, int var_36_int)
	{
		if(var_36_int == 10) {
			func_2555();
			bool var_40_bool = false;
			bool var_41_bool;
			func_2803(var_41_bool);
			if(var_41_bool != 0) {
				bool var_44_bool;
				func_2524(var_44_bool);
				if(var_44_bool != 0)
					var_40_bool = true;
			}
			if(var_40_bool != 0) {
				bool var_61_bool;
				func_2504(var_61_bool);
				if(var_61_bool != 0) {
					bool var_80_bool; object var_81_object;
					object var_82_object;
					func_3066(var_82_object);
					var_82_object = var_81_object;
					func_2951(var_80_bool, var_81_object);
				}
			} else {
				func_2519(var_36_int);
				func_2546();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
	{
		func_2737();
		func_2555();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector)
		{
		@StopGroup0();
		func_2555();
		func_3031("Neutral");
		func_2546();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, bool var_36_bool)
	{
		if(var_36_bool != 0)
			func_2546();
		else
			func_3031("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, object var_30_object, object var_31_object, object var_32_object, string var_33_string, bool var_34_bool, cvector var_35_cvector, object var_36_object)
	{
		bool var_38_bool;
		@IsOverrideActive(var_38_bool);
		if(!var_38_bool) { //@nz
			disable OnUse;
			func_2737();
			bool var_40_bool; object var_41_object;
			var_36_object = var_41_object;
			func_2794(var_40_bool, var_41_object);
			enable OnUse;
			object var_54_object;
			var_36_object = var_54_object;
			func_3579(var_54_object);
			func_3031("Neutral");
			func_2555();
			func_2546();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_40_bool;
	func_2803(var_40_bool);
	if(!var_40_bool) goto Label_0; //@nz
}


void func_3072(cvector var_192_cvector, cvector var_193_cvector)
{
	float var_196_float = sqrt(var_193_cvector | var_193_cvector);
	if(var_196_float < 0.000001)
		var_192_cvector = [0.0, 0.0, 0.0];
	var_192_cvector = var_193_cvector / var_196_float;
}


// @pe
void func_1285(object var_2_object, string var_387_string)
{
	bool var_388_bool;
	func_3251(var_388_bool);
	if(!var_388_bool) //@nz
		return 0;
	if(var_387_string == var_2_object)
		return 0;
	string var_391_string; bool var_392_bool;
	var_387_string = var_391_string;
	if(var_387_string == "")
		var_392_bool = false;
	else
		var_392_bool = true;
	func_3038(var_391_string, var_392_bool);
	var_2_object = var_387_string;
	
}


// @pe
void func_2055(object var_2_object, string var_522_string)
{
	bool var_523_bool;
	func_3251(var_523_bool);
	if(!var_523_bool) //@nz
		return 0;
	if(var_522_string == var_2_object)
		return 0;
	string var_526_string; bool var_527_bool;
	var_522_string = var_526_string;
	if(var_522_string == "")
		var_527_bool = false;
	else
		var_527_bool = true;
	func_3038(var_526_string, var_527_bool);
	var_2_object = var_522_string;
	
}


// @pe
void func_3082(float var_109_float, float var_110_float, float var_111_float, float var_112_float)
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


void func_13(object var_0_object, int var_565_int, object var_566_object)
{
	var_0_object = var_566_object;
	bool var_576_bool; object var_577_object;
	object var_578_object;
	func_3066(var_578_object);
	var_578_object = var_577_object;
	func_2893(var_576_bool, var_577_object);
	bool var_579_bool; object var_580_object;
	var_566_object = var_580_object;
	func_2808(var_579_bool, var_580_object, 70.0);
	if(!var_579_bool) { //@nz
		var_565_int = -2;
		return 8;
	}
	object var_572_object;
	@CreateDialog(var_572_object);
	int var_583_int;
	func_3245(var_583_int);
	var_572_object->SetNPCName(var_583_int);
	int var_584_int;
	func_3243(var_584_int);
	var_572_object->SetNPCDescription(var_584_int);
	string var_585_string;
	func_3247(var_585_string);
	var_572_object->SetPhoto(var_585_string);
	string var_586_string;
	func_3249(var_586_string);
	var_572_object->SetPhoto2(var_586_string);
	int var_587_int;
	func_3562(var_587_int);
	var_572_object->SetPlayerName(var_587_int);
	bool var_573_bool;
	@IsOverrideActive(var_573_bool);
	if(var_573_bool != 0) {
		var_565_int = -2;
		return 8;
	}
	@DoDialog(var_572_object);
	object var_589_object; object var_590_object;
	var_566_object = var_589_object;
	var_572_object = var_590_object;
	TaskCall(2);
	func_94(var_591_object, var_592_object, var_593_string, var_594_bool, var_589_object, var_590_object);
	TaskReturn();
	bool var_575_bool;
	var_572_object->IsDialogEnd(var_575_bool);
	
	for(;;) {
		var_622_bool = !var_575_bool; //@nz
		if(var_622_bool == 0) goto Label_83;
		@sync();
		var_572_object->IsDialogEnd(var_575_bool);
	}
	
Label_83:
	object var_623_object;
	var_566_object = var_623_object;
	func_2876();
	@StopDialog(var_572_object);
	var_572_object->GetReturnValue(-1);
	int var_574_int = var_565_int;
}
EMIT "Stack[-4] = 0";


void func_272(object var_0_object, int var_59_int, object var_60_object)
{
	var_0_object = var_60_object;
	bool var_70_bool; object var_71_object;
	object var_72_object;
	func_3066(var_72_object);
	var_72_object = var_71_object;
	func_2893(var_70_bool, var_71_object);
	bool var_165_bool; object var_166_object;
	var_60_object = var_166_object;
	func_2808(var_165_bool, var_166_object, 70.0);
	if(!var_165_bool) { //@nz
		var_59_int = -2;
		return 8;
	}
	object var_66_object;
	@CreateDialog(var_66_object);
	int var_212_int;
	func_3245(var_212_int);
	var_66_object->SetNPCName(var_212_int);
	int var_213_int;
	func_3243(var_213_int);
	var_66_object->SetNPCDescription(var_213_int);
	string var_214_string;
	func_3247(var_214_string);
	var_66_object->SetPhoto(var_214_string);
	string var_215_string;
	func_3249(var_215_string);
	var_66_object->SetPhoto2(var_215_string);
	int var_216_int;
	func_3562(var_216_int);
	var_66_object->SetPlayerName(var_216_int);
	bool var_67_bool;
	@IsOverrideActive(var_67_bool);
	if(var_67_bool != 0) {
		var_59_int = -2;
		return 8;
	}
	@DoDialog(var_66_object);
	object var_225_object; object var_226_object;
	var_60_object = var_225_object;
	var_66_object = var_226_object;
	TaskCall(4);
	func_353(var_227_object, var_228_object, var_229_string, var_230_bool, var_225_object, var_226_object);
	TaskReturn();
	bool var_69_bool;
	var_66_object->IsDialogEnd(var_69_bool);
	
	for(;;) {
		var_268_bool = !var_69_bool; //@nz
		if(var_268_bool == 0) goto Label_342;
		@sync();
		var_66_object->IsDialogEnd(var_69_bool);
	}
	
Label_342:
	object var_269_object;
	var_60_object = var_269_object;
	func_2876();
	@StopDialog(var_66_object);
	var_66_object->GetReturnValue(-1);
	int var_68_int = var_59_int;
}
EMIT "Stack[-4] = 0";


void func_3093(int var_323_int, string var_324_string)
{
	int var_326_int;
	@GetVariable(var_324_string, var_326_int);
	var_326_int = var_323_int;
}


// @pe
void func_3351(void)
{
	@SetVariable("d6q01", 4);
	bool var_50_bool;
	func_3187(var_50_bool, "quest_d6_01", "eva_klara");
}


void func_3098(int var_67_int, int var_68_int)
{
	object var_70_object;
	@CreateIntVector(var_70_object);
	var_70_object->add(var_67_int);
	var_70_object->add(var_68_int);
	@SendWorldWndMessage(3, var_70_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3362(void)
{
	@SetVariable("KnowLaska", 1);
}


void func_549(object var_0_object, int var_281_int, object var_282_object)
{
	var_0_object = var_282_object;
	bool var_292_bool; object var_293_object;
	object var_294_object;
	func_3066(var_294_object);
	var_294_object = var_293_object;
	func_2893(var_292_bool, var_293_object);
	bool var_295_bool; object var_296_object;
	var_282_object = var_296_object;
	func_2808(var_295_bool, var_296_object, 70.0);
	if(!var_295_bool) { //@nz
		var_281_int = -2;
		return 8;
	}
	object var_288_object;
	@CreateDialog(var_288_object);
	int var_299_int;
	func_3245(var_299_int);
	var_288_object->SetNPCName(var_299_int);
	int var_300_int;
	func_3243(var_300_int);
	var_288_object->SetNPCDescription(var_300_int);
	string var_301_string;
	func_3247(var_301_string);
	var_288_object->SetPhoto(var_301_string);
	string var_302_string;
	func_3249(var_302_string);
	var_288_object->SetPhoto2(var_302_string);
	int var_303_int;
	func_3562(var_303_int);
	var_288_object->SetPlayerName(var_303_int);
	bool var_289_bool;
	@IsOverrideActive(var_289_bool);
	if(var_289_bool != 0) {
		var_281_int = -2;
		return 8;
	}
	@DoDialog(var_288_object);
	object var_305_object; object var_306_object;
	var_282_object = var_305_object;
	var_288_object = var_306_object;
	TaskCall(6);
	func_630(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object);
	TaskReturn();
	bool var_291_bool;
	var_288_object->IsDialogEnd(var_291_bool);
	
	for(;;) {
		var_352_bool = !var_291_bool; //@nz
		if(var_352_bool == 0) goto Label_619;
		@sync();
		var_288_object->IsDialogEnd(var_291_bool);
	}
	
Label_619:
	object var_353_object;
	var_282_object = var_353_object;
	func_2876();
	@StopDialog(var_288_object);
	var_288_object->GetReturnValue(-1);
	int var_290_int = var_281_int;
}
EMIT "Stack[-4] = 0";


void func_3110(object var_56_object, object var_57_object, int var_58_int)
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
		func_3098(var_67_int, var_68_int);
	}
	
}


// @pe
void func_3368(void)
{
	@SetVariable("ood3Laska1", 1);
}


void func_3374(object var_48_object)
{
	@Trace("Knife is given");
	object var_51_object;
	@CreateInvItem(var_51_object);
	var_51_object->SetItemName("Knife");
	var_51_object->SetProperty("durability", 100);
	object var_56_object; object var_57_object;
	var_48_object = var_56_object;
	var_51_object = var_57_object;
	func_3110(var_56_object, var_57_object, 1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2358(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_648_object, object var_649_object)
{
	var_0_object = var_649_object;
	var_1_object = var_648_object;
	var_3_string = false;
	if(1 != 0) {
		func_2416(var_649_object, "Neutral");
		var_0_object->SetMessage(540548); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540549, -1, 42558); //@t
		var_0_object->AddReply(540797, -1, 42846); //@t
		goto Label_2386;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x93a";
	}
Label_2386:
	bool var_670_bool;
	func_3251(var_670_bool);
	if(var_670_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3031(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2415;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2415:
		return 0;

	}
	
}


void func_3129(object var_79_object, string var_80_string, int var_81_int)
{
	object var_83_object;
	@CreateInvItem(var_83_object);
	var_83_object->SetItemName(var_80_string);
	object var_84_object; object var_85_object; int var_86_int;
	var_79_object = var_84_object;
	var_83_object = var_85_object;
	var_81_int = var_86_int;
	func_3110(var_84_object, var_85_object, var_86_int);
}
EMIT "Stack[-1] = 0";


void func_2876(void)
{
	bool var_271_bool;
	@CameraSwitchToNormal();
	bool var_272_bool;
	func_3251(var_272_bool);
	if(var_272_bool != 0) {
	} else {
		@HasAnimationTrack(var_271_bool, "head");
		if(var_271_bool == 0) goto Label_2892;
		@UnlookAsync("head");
	}
Label_2892:
	
}


// @pe
void func_3395(bool var_321_bool)
{
	int var_323_int;
	func_3093(var_323_int, "ood2Laska1");
	if(var_323_int == 0) {
		var_321_bool = true;
		return 0;
	}
	var_321_bool = false;
}


// @pe
void func_1605(object var_2_object, string var_451_string)
{
	bool var_452_bool;
	func_3251(var_452_bool);
	if(!var_452_bool) //@nz
		return 0;
	if(var_451_string == var_2_object)
		return 0;
	string var_455_string; bool var_456_bool;
	var_451_string = var_455_string;
	if(var_451_string == "")
		var_456_bool = false;
	else
		var_456_bool = true;
	func_3038(var_455_string, var_456_bool);
	var_2_object = var_451_string;
	
}


// @pe
void func_3142(bool var_80_bool, object var_81_object, float var_82_float)
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
		func_3177(var_87_float);
		bool var_91_bool; object var_92_object; float var_94_float;
		var_81_object = var_92_object;
		var_82_float = var_94_float;
		func_2762(var_91_bool, var_92_object, "reputation", var_94_float, (float)0, (float)1);
		var_80_bool = true;
		return 0;

	}
	
	var_80_bool = false;
}


void func_2893(bool var_70_bool, object var_71_object)
{
	int var_77_int; int var_78_int;
	@GetVariable("voice_common", var_77_int);
	if(var_77_int != 0) {
		bool var_81_bool; object var_82_object;
		var_71_object = var_82_object;
		func_2951(var_81_bool, var_82_object);
		if(!var_81_bool) { //@nz
			bool var_112_bool; object var_113_object;
			var_71_object = var_113_object;
			func_2988(var_112_bool, var_113_object);
			if(!var_112_bool) { //@nz
				var_70_bool = false;
				return 4;
			}
		}
		@irand(var_78_int, 2);
		if(var_78_int != 0)
			@SetVariable("voice_common", ((var_77_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_157_bool; object var_158_object;
		var_71_object = var_158_object;
		func_2988(var_157_bool, var_158_object);
		if(!var_157_bool) { //@nz
			bool var_160_bool; object var_161_object;
			var_71_object = var_161_object;
			func_2951(var_160_bool, var_161_object);
			if(!var_160_bool) { //@nz
				var_70_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2949;
	
Label_2949:
	var_70_bool = true;
	
}


void func_3323(void)
{
	@SetVariable("d6q01", 3);
	object var_72_object;
	func_3545(var_72_object);
	object var_69_object;
	var_72_object = var_69_object;
	float var_83_float;
	func_3199(var_83_float);
	var_69_object->AddMark("d6q01LaskaGotoAlbinos", "pt_d6q03_albinos", 1, 515400, var_83_float);
	func_3491();
	bool var_109_bool;
	func_3187(var_109_bool, "quest_d6_01", "albinos_klara");
}
EMIT "Stack[-1] = 0";


// @pe
void func_3407(bool var_332_bool)
{
	int var_334_int;
	func_3093(var_334_int, "ood2Laska2");
	if(var_334_int == 0) {
		var_332_bool = true;
		return 0;
	}
	var_332_bool = false;
}


void func_3579(object var_54_object)
{
	int var_56_int;
	@GetVariable("mt_laska", var_56_int);
	if(!var_56_int) { //@nz
		int var_59_int; object var_60_object;
		var_54_object = var_60_object;
		TaskCall(3);
		func_272(var_61_object, var_59_int, var_60_object);
		TaskReturn();
		@SetVariable("mt_laska", 1);
	}
	bool var_278_bool;
	func_3213(var_278_bool, 2);
	if(var_278_bool != 0) {
		int var_281_int; object var_282_object;
		var_54_object = var_282_object;
		TaskCall(5);
		func_549(var_283_object, var_281_int, var_282_object);
		TaskReturn();
		return 2;
	}
	bool var_354_bool;
	func_3213(var_354_bool, 3);
	if(var_354_bool != 0) {
		int var_356_int; object var_357_object;
		var_54_object = var_357_object;
		TaskCall(7);
		func_1141(var_358_object, var_356_int, var_357_object);
		TaskReturn();
		return 2;
	}
	bool var_418_bool;
	func_3213(var_418_bool, 6);
	if(var_418_bool != 0) {
		int var_420_int; object var_421_object;
		var_54_object = var_421_object;
		TaskCall(9);
		func_1452(var_422_object, var_420_int, var_421_object);
		TaskReturn();
		return 2;
	}
	bool var_489_bool;
	func_3213(var_489_bool, 11);
	if(var_489_bool != 0) {
		int var_491_int; object var_492_object;
		var_54_object = var_492_object;
		TaskCall(11);
		func_1897(var_493_object, var_491_int, var_492_object);
		TaskReturn();
		return 2;
	}
	bool var_563_bool;
	func_3213(var_563_bool, 12);
	if(var_563_bool != 0) {
		int var_565_int; object var_566_object;
		var_54_object = var_566_object;
		TaskCall(1);
		func_13(var_567_object, var_565_int, var_566_object);
		TaskReturn();
		return 2;
	}
	int var_624_int; object var_625_object;
	var_54_object = var_625_object;
	TaskCall(13);
	func_2277(var_626_object, var_624_int, var_625_object);
	TaskReturn();
}


// @pe
void func_3419(bool var_538_bool)
{
	int var_540_int;
	func_3093(var_540_int, "ood11Laska1");
	if(var_540_int == 0) {
		var_538_bool = true;
		return 0;
	}
	var_538_bool = false;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_589_object, object var_590_object)
{
	var_0_object = var_590_object;
	var_1_object = var_589_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_590_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_127;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_127:
	bool var_614_bool;
	func_3251(var_614_bool);
	if(var_614_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3031(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_156;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_156:
		return 0;

	}
	
}


// @pe
void func_353(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_225_object, object var_226_object)
{
	var_0_object = var_226_object;
	var_3_string = false;
	if(1 != 0) {
		object var_232_object; object var_233_object;
		var_232_object = var_225_object;
		var_233_object = var_0_object;
		func_3362();
		func_416(var_226_object, "Neutral");
		var_0_object->SetMessage(500370); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(500371, 432, 430); //@t
		var_0_object->AddReply(500372, 437, 431); //@t
		goto Label_386;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x165";
	}
Label_386:
	bool var_255_bool;
	func_3251(var_255_bool);
	if(var_255_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3031(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_415;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_415:
		return 0;

	}
	
}


// @pe
void func_3431(bool var_156_bool)
{
	int var_158_int;
	func_3093(var_158_int, "d6q03AlbinosKilled");
	if(var_158_int == 1)
		var_156_bool = true;
	var_156_bool = false;
}


void func_3177(float var_87_float)
{
	object var_89_object;
	@CreateFloatVector(var_89_object);
	var_89_object->add(var_87_float);
	@SendWorldWndMessage(16, var_89_object);
}
EMIT "Stack[-1] = 0";


void func_2666(void)
{
	bool var_62_bool; int var_63_int; int var_64_int; bool var_65_bool;
	@WaitForAnimEnd();
	bool var_66_bool;
	func_2803(var_66_bool);
	if(!var_66_bool) //@nz
		return 12;
	int var_68_int;
	func_3226(var_68_int);
	int var_60_int;
	var_68_int = var_60_int;
	int var_61_int = 0;
	
	for(;;) {
		bool var_81_bool = false;
		if(var_61_int < 5) {
			bool var_84_bool;
			func_2803(var_84_bool);
			if(var_84_bool != 0)
				var_81_bool = true;
		}
		if(var_81_bool != 0) {
			if(!var_60_int) { //@nz
				@Sleep(3, var_62_bool);
				if(!var_62_bool) { //@nz
				} else {
			} else {
			@irand(var_63_int, var_60_int);
			@irand(var_64_int, 5);
			if(var_64_int != 0)
				var_63_int = 0;
			string var_95_string; int var_96_int;
			var_63_int = var_96_int;
			func_3219(var_95_string, var_96_int);
			@PlayAnimation("all", var_95_string);
			@WaitForAnimEnd(var_65_bool);
			var_97_bool = !var_65_bool; //@nz
			if(var_97_bool == 0) goto Label_2721;
			goto Label_2732;
			}
				Label_2721:
					bool var_88_bool;
					func_2735(var_88_bool);
					var_89_bool = !var_88_bool; //@nz
					if(var_89_bool == 0) goto Label_2727;
			}
		}
	Label_2732:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2727:
		@ResetAAS();
		var_61_int += 1;
	}
	
}


void func_1897(object var_0_object, int var_491_int, object var_492_object)
{
	var_0_object = var_492_object;
	bool var_502_bool; object var_503_object;
	object var_504_object;
	func_3066(var_504_object);
	var_504_object = var_503_object;
	func_2893(var_502_bool, var_503_object);
	bool var_505_bool; object var_506_object;
	var_492_object = var_506_object;
	func_2808(var_505_bool, var_506_object, 70.0);
	if(!var_505_bool) { //@nz
		var_491_int = -2;
		return 8;
	}
	object var_498_object;
	@CreateDialog(var_498_object);
	int var_509_int;
	func_3245(var_509_int);
	var_498_object->SetNPCName(var_509_int);
	int var_510_int;
	func_3243(var_510_int);
	var_498_object->SetNPCDescription(var_510_int);
	string var_511_string;
	func_3247(var_511_string);
	var_498_object->SetPhoto(var_511_string);
	string var_512_string;
	func_3249(var_512_string);
	var_498_object->SetPhoto2(var_512_string);
	int var_513_int;
	func_3562(var_513_int);
	var_498_object->SetPlayerName(var_513_int);
	bool var_499_bool;
	@IsOverrideActive(var_499_bool);
	if(var_499_bool != 0) {
		var_491_int = -2;
		return 8;
	}
	@DoDialog(var_498_object);
	object var_515_object; object var_516_object;
	var_492_object = var_515_object;
	var_498_object = var_516_object;
	TaskCall(12);
	func_1978(var_517_object, var_518_object, var_519_string, var_520_bool, var_515_object, var_516_object);
	TaskReturn();
	bool var_501_bool;
	var_498_object->IsDialogEnd(var_501_bool);
	
	for(;;) {
		var_561_bool = !var_501_bool; //@nz
		if(var_561_bool == 0) goto Label_1967;
		@sync();
		var_498_object->IsDialogEnd(var_501_bool);
	}
	
Label_1967:
	object var_562_object;
	var_492_object = var_562_object;
	func_2876();
	@StopDialog(var_498_object);
	var_498_object->GetReturnValue(-1);
	int var_500_int = var_491_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2416(object var_2_object, string var_655_string)
{
	bool var_656_bool;
	func_3251(var_656_bool);
	if(!var_656_bool) //@nz
		return 0;
	if(var_655_string == var_2_object)
		return 0;
	string var_659_string; bool var_660_bool;
	var_655_string = var_659_string;
	if(var_655_string == "")
		var_660_bool = false;
	else
		var_660_bool = true;
	func_3038(var_659_string, var_660_bool);
	var_2_object = var_655_string;
	
}


void func_3187(bool var_50_bool, string var_51_string, string var_52_string)
{
	object var_54_object;
	@FindActor(var_54_object, var_51_string);
	if(var_54_object == null)
		var_50_bool = false;
	@Trigger(var_54_object, var_52_string);
	var_50_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3443(bool var_461_bool)
{
	int var_463_int;
	func_3093(var_463_int, "d6q01");
	if(var_463_int == 2)
		var_461_bool = true;
	var_461_bool = false;
}


void func_1141(object var_0_object, int var_356_int, object var_357_object)
{
	var_0_object = var_357_object;
	bool var_367_bool; object var_368_object;
	object var_369_object;
	func_3066(var_369_object);
	var_369_object = var_368_object;
	func_2893(var_367_bool, var_368_object);
	bool var_370_bool; object var_371_object;
	var_357_object = var_371_object;
	func_2808(var_370_bool, var_371_object, 70.0);
	if(!var_370_bool) { //@nz
		var_356_int = -2;
		return 8;
	}
	object var_363_object;
	@CreateDialog(var_363_object);
	int var_374_int;
	func_3245(var_374_int);
	var_363_object->SetNPCName(var_374_int);
	int var_375_int;
	func_3243(var_375_int);
	var_363_object->SetNPCDescription(var_375_int);
	string var_376_string;
	func_3247(var_376_string);
	var_363_object->SetPhoto(var_376_string);
	string var_377_string;
	func_3249(var_377_string);
	var_363_object->SetPhoto2(var_377_string);
	int var_378_int;
	func_3562(var_378_int);
	var_363_object->SetPlayerName(var_378_int);
	bool var_364_bool;
	@IsOverrideActive(var_364_bool);
	if(var_364_bool != 0) {
		var_356_int = -2;
		return 8;
	}
	@DoDialog(var_363_object);
	object var_380_object; object var_381_object;
	var_357_object = var_380_object;
	var_363_object = var_381_object;
	TaskCall(8);
	func_1222(var_382_object, var_383_object, var_384_string, var_385_bool, var_380_object, var_381_object);
	TaskReturn();
	bool var_366_bool;
	var_363_object->IsDialogEnd(var_366_bool);
	
	for(;;) {
		var_416_bool = !var_366_bool; //@nz
		if(var_416_bool == 0) goto Label_1211;
		@sync();
		var_363_object->IsDialogEnd(var_366_bool);
	}
	
Label_1211:
	object var_417_object;
	var_357_object = var_417_object;
	func_2876();
	@StopDialog(var_363_object);
	var_363_object->GetReturnValue(-1);
	int var_365_int = var_356_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_630(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_305_object, object var_306_object)
{
	var_0_object = var_306_object;
	var_1_object = var_305_object;
	var_3_string = false;
	if(1 != 0) {
		func_703(var_306_object, "Neutral");
		var_0_object->SetMessage(509473); //@t
		var_0_object->ClearReplies(); //@t
		bool var_321_bool;
		func_3395(var_1_object);
		if(var_321_bool != 0)
			var_0_object->AddReply(533914, 35474, 35473); //@t
		bool var_332_bool;
		func_3407(var_1_object);
		if(var_332_bool != 0)
			var_0_object->AddReply(509474, 10417, 10416); //@t
		var_0_object->AddReply(509487, -1, 10429); //@t
		goto Label_673;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x27a";
	}
Label_673:
	bool var_344_bool;
	func_3251(var_344_bool);
	if(var_344_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3031(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_702;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_702:
		return 0;

	}
	
}


void func_3199(float var_83_float)
{
	float var_85_float;
	@GetGameTime(var_85_float);
	var_85_float = var_83_float;
}


// @pe
void func_3455(bool var_467_bool)
{
	int var_469_int;
	func_3093(var_469_int, "ood6Laska1");
	if(var_469_int == 0) {
		var_467_bool = true;
		return 0;
	}
	var_467_bool = false;
}


void func_3204(int var_125_int)
{
	float var_127_float;
	@GetGameTime(var_127_float);
	var_125_int = 1 + (var_127_float / 24);
}


void func_2951(bool var_81_bool, object var_82_object)
{
	string var_88_string; bool var_90_bool; int var_91_int; string var_92_string;
	var_88_string = "c";
	int var_89_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_82_object->HasProperty((var_88_string + (var_89_int + 1)), var_90_bool);
			if(!var_90_bool) { //@nz
			} else {
				var_89_int += 1;
			}
		}
		if(!var_89_int) { //@nz
			var_81_bool = false;
			return 10;
		}
		var_91_int = 0;
		if(var_89_int > 1)
			@irand(var_91_int, var_89_int);
		var_82_object->GetProperty((var_88_string + (var_91_int + 1)), var_92_string);
		bool var_104_bool; string var_105_string;
		var_92_string = var_105_string;
		func_3044(var_104_bool, var_105_string);
		var_104_bool = var_81_bool;
		return 10;

	}
}


// @pe
void func_3467(bool var_532_bool)
{
	int var_534_int;
	func_3093(var_534_int, "d11q01");
	if(var_534_int == 3)
		var_532_bool = true;
	var_532_bool = false;
}


// @pe
void func_3213(bool var_278_bool, int var_279_int)
{
	int var_280_int;
	func_3204(var_280_int);
	var_278_bool = var_280_int == var_279_int;
}


void func_3219(string var_74_string, int var_75_int)
{
	string var_77_string = "idle";
	if(var_75_int != 0)
		var_77_string += var_75_int;
	var_77_string = var_74_string;
}


// @pe
void func_3479(bool var_396_bool)
{
	int var_398_int;
	func_3093(var_398_int, "ood3Laska1");
	if(var_398_int == 0) {
		var_396_bool = true;
		return 0;
	}
	var_396_bool = false;
}


void func_3226(int var_68_int)
{
	int var_71_int; bool var_72_bool;
	var_71_int = 0;
	
	for(;;) {
		string var_74_string; int var_75_int;
		var_71_int = var_75_int;
		func_3219(var_74_string, var_75_int);
		@HasAnimation(var_72_bool, "all", var_74_string);
		if(!var_72_bool) //@nz
			break;
		var_71_int += 1;
	}
	var_71_int = var_68_int;
}


// @pe
void func_157(object var_2_object, string var_596_string)
{
	bool var_597_bool;
	func_3251(var_597_bool);
	if(!var_597_bool) //@nz
		return 0;
	if(var_596_string == var_2_object)
		return 0;
	string var_600_string; bool var_601_bool;
	var_596_string = var_600_string;
	if(var_596_string == "")
		var_601_bool = false;
	else
		var_601_bool = true;
	func_3038(var_600_string, var_601_bool);
	var_2_object = var_596_string;
	
}


// @pe
void func_416(object var_2_object, string var_236_string)
{
	bool var_237_bool;
	func_3251(var_237_bool);
	if(!var_237_bool) //@nz
		return 0;
	if(var_236_string == var_2_object)
		return 0;
	string var_240_string; bool var_241_bool;
	var_236_string = var_240_string;
	if(var_236_string == "")
		var_241_bool = false;
	else
		var_241_bool = true;
	func_3038(var_240_string, var_241_bool);
	var_2_object = var_236_string;
	
}


void func_3491(void)
{
	object var_87_object;
	@CreateDiaryEntry(var_87_object, 117, 1, 513740);
	bool var_91_bool; object var_92_object;
	var_87_object = var_92_object;
	func_3517(var_91_bool, var_92_object, 111);
}
EMIT "Stack[-1] = 0";


void func_3243(int var_213_int)
{
	var_213_int = 515542;
}


void func_2988(bool var_112_bool, object var_113_object)
{
	bool var_121_bool; int var_122_int; string var_123_string;
	int var_125_int;
	func_3204(var_125_int);
	string var_119_string = ("d" + var_125_int) + "m";
	int var_120_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_113_object->HasProperty((var_119_string + (var_120_int + 1)), var_121_bool);
			if(!var_121_bool) { //@nz
			} else {
				var_120_int += 1;
			}
		}
		if(!var_120_int) { //@nz
			var_112_bool = false;
			return 10;
		}
		var_122_int = 0;
		if(var_120_int > 1)
			@irand(var_122_int, var_120_int);
		var_113_object->GetProperty((var_119_string + (var_122_int + 1)), var_123_string);
		bool var_144_bool; string var_145_string;
		var_123_string = var_145_string;
		func_3044(var_144_bool, var_145_string);
		var_144_bool = var_112_bool;
		return 10;

	}
}


void func_3245(int var_212_int)
{
	var_212_int = 502867;
}


void func_1452(object var_0_object, int var_420_int, object var_421_object)
{
	var_0_object = var_421_object;
	bool var_431_bool; object var_432_object;
	object var_433_object;
	func_3066(var_433_object);
	var_433_object = var_432_object;
	func_2893(var_431_bool, var_432_object);
	bool var_434_bool; object var_435_object;
	var_421_object = var_435_object;
	func_2808(var_434_bool, var_435_object, 70.0);
	if(!var_434_bool) { //@nz
		var_420_int = -2;
		return 8;
	}
	object var_427_object;
	@CreateDialog(var_427_object);
	int var_438_int;
	func_3245(var_438_int);
	var_427_object->SetNPCName(var_438_int);
	int var_439_int;
	func_3243(var_439_int);
	var_427_object->SetNPCDescription(var_439_int);
	string var_440_string;
	func_3247(var_440_string);
	var_427_object->SetPhoto(var_440_string);
	string var_441_string;
	func_3249(var_441_string);
	var_427_object->SetPhoto2(var_441_string);
	int var_442_int;
	func_3562(var_442_int);
	var_427_object->SetPlayerName(var_442_int);
	bool var_428_bool;
	@IsOverrideActive(var_428_bool);
	if(var_428_bool != 0) {
		var_420_int = -2;
		return 8;
	}
	@DoDialog(var_427_object);
	object var_444_object; object var_445_object;
	var_421_object = var_444_object;
	var_427_object = var_445_object;
	TaskCall(10);
	func_1533(var_446_object, var_447_object, var_448_string, var_449_bool, var_444_object, var_445_object);
	TaskReturn();
	bool var_430_bool;
	var_427_object->IsDialogEnd(var_430_bool);
	
	for(;;) {
		var_487_bool = !var_430_bool; //@nz
		if(var_487_bool == 0) goto Label_1522;
		@sync();
		var_427_object->IsDialogEnd(var_430_bool);
	}
	
Label_1522:
	object var_488_object;
	var_421_object = var_488_object;
	func_2876();
	@StopDialog(var_427_object);
	var_427_object->GetReturnValue(-1);
	int var_429_int = var_420_int;
}
EMIT "Stack[-4] = 0";


void func_3247(string var_214_string)
{
	var_214_string = "ui/NPC_Laska.png";
}


void func_2735(bool var_88_bool)
{
	var_88_bool = true;
}


void func_3249(string var_215_string)
{
	var_215_string = "ui/NPC_Laska_b.png";
}


void func_2737(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3251(bool var_108_bool)
{
	var_108_bool = true;
}


void func_3504(object var_100_object)
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


// @pe
void func_3253(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_2742(float var_51_float, object var_52_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_52_object->GetPosition(var_57_cvector);
	var_51_float = (var_57_cvector - var_56_cvector) | (var_57_cvector - var_56_cvector);
}


void func_2484(object var_0_object)
{
	bool var_36_bool;
	func_2803(var_36_bool);
	if(!var_36_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2612();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2666();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1978(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_515_object, object var_516_object)
{
	var_0_object = var_516_object;
	var_1_object = var_515_object;
	var_3_string = false;
	if(1 != 0) {
		func_2055(var_516_object, "Neutral");
		var_0_object->SetMessage(540043); //@t
		var_0_object->ClearReplies(); //@t
		bool var_531_bool = false;
		bool var_532_bool;
		func_3467(var_1_object);
		if(var_532_bool != 0) {
			bool var_538_bool;
			func_3419(var_1_object);
			if(var_538_bool != 0)
				var_531_bool = true;
		}
		if(var_531_bool != 0)
			var_0_object->AddReply(540045, 42013, 42012); //@t
		var_0_object->AddReply(540044, -1, 42011); //@t
		var_0_object->AddReply(540060, -1, 42029); //@t
		goto Label_2025;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7be";
	}
Label_2025:
	bool var_553_bool;
	func_3251(var_553_bool);
	if(var_553_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3031(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2054;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2054:
		return 0;

	}
	
}


// @pe
void func_3259(void)
{
	@SetVariable("ood2Laska1", 1);
}


void func_3517(bool var_91_bool, object var_92_object, int var_93_int)
{
	object var_100_object;
	func_3504(var_100_object);
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


void func_2750(bool var_99_bool, object var_100_object, string var_101_string)
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


// @pe
void func_703(object var_2_object, string var_312_string)
{
	bool var_313_bool;
	func_3251(var_313_bool);
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
	func_3038(var_316_string, var_317_bool);
	var_2_object = var_312_string;
	
}


// @pe
void func_3265(void)
{
	@SetVariable("ood2Laska2", 1);
}


// @pe
void func_1222(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_380_object, object var_381_object)
{
	var_0_object = var_381_object;
	var_3_string = false;
	if(1 != 0) {
		func_1285(var_381_object, "Neutral");
		var_0_object->SetMessage(509951); //@t
		var_0_object->ClearReplies(); //@t
		bool var_396_bool;
		func_3479(var_380_object);
		if(var_396_bool != 0)
			var_0_object->AddReply(509961, 10970, 10978); //@t
		var_0_object->AddReply(509952, -1, 10969); //@t
		goto Label_1255;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4ca";
	}
Label_1255:
	bool var_408_bool;
	func_3251(var_408_bool);
	if(var_408_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3031(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1284;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1284:
		return 0;

	}
	
}


// @pe
void func_3271(void)
{
	@SetVariable("ood11Laska1", 1);
}


void func_2504(bool var_61_bool)
{
	object var_63_object;
	@FindActor(var_63_object, "player");
	if(!var_63_object) //@nz
		var_61_bool = false;
	bool var_66_bool; object var_67_object;
	var_63_object = var_67_object;
	func_2794(var_66_bool, var_67_object);
	var_66_bool = var_61_bool;
}
EMIT "Stack[-1] = 0";


void func_2762(bool var_91_bool, object var_92_object, string var_93_string, float var_94_float, float var_95_float, float var_96_float)
{
	object var_100_object;
	var_92_object = var_100_object;
	string var_101_string;
	var_93_string = var_101_string;
	bool var_99_bool;
	func_2750(var_99_bool, var_100_object, var_101_string);
	if(!var_99_bool) //@nz
		var_91_bool = false;
	float var_98_float;
	var_92_object->GetProperty(var_93_string, var_98_float);
	float var_109_float; float var_111_float; float var_112_float;
	var_95_float = var_111_float;
	var_96_float = var_112_float;
	func_3082(var_109_float, (var_98_float + var_94_float), var_111_float, var_112_float);
	var_92_object->SetProperty(var_93_string, var_109_float);
	var_91_bool = true;
}


// @pe
void func_3277(object var_87_object)
{
	@Trace("bandage is given");
	object var_90_object;
	var_87_object = var_90_object;
	func_3129(var_90_object, "bandage", 1);
}


void func_3031(string var_43_string)
{
	float var_46_float; float var_47_float;
	@lshGetAnimTimes(var_43_string, var_46_float, var_47_float);
	@lshPlayAnimation(var_46_float, var_47_float, false);
}


// @pe
void func_3288(object var_76_object)
{
	@Trace("tourniquet is given");
	object var_79_object;
	var_76_object = var_79_object;
	func_3129(var_79_object, "tourniquet", 1);
}


void func_2519(object var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0);
	var_114_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_113_float, var_114_float);
}


void func_3545(object var_72_object)
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


void func_2524(bool var_44_bool)
{
	object var_47_object;
	@FindActor(var_47_object, "player");
	if(!var_47_object) { //@nz
		var_44_bool = false;
		return 4;
	}
	float var_51_float; object var_52_object;
	func_2742(var_51_float, var_52_object);
	if(var_51_float > 90000.0) {
		var_44_bool = false;
		return 4;
	}
	bool var_48_bool;
	@CanSee(var_48_bool, var_52_object);
	var_48_bool = var_44_bool;
}
EMIT "Stack[-2] = 0";


void func_3038(string var_240_string, bool var_241_bool)
{
	float var_246_float; float var_247_float;
	@lshGetAnimTimes(var_240_string, var_246_float, var_247_float);
	@lshPlayAnimation(var_246_float, var_247_float, var_241_bool);
}


void func_2784(bool var_44_bool, cvector var_45_cvector)
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
void func_3299(object var_48_object)
{
	@Trace("powder is given");
	object var_51_object;
	var_48_object = var_51_object;
	func_3129(var_51_object, "powder", 1);
}


void func_3044(bool var_104_bool, string var_105_string)
{
	bool var_107_bool;
	bool var_108_bool;
	func_3251(var_108_bool);
	if(var_108_bool != 0) {
		@lshHasSpeech(var_107_bool, var_105_string);
		if(var_107_bool != 0) {
			@lshPlaySpeech(var_105_string);
			var_104_bool = true;
		}
	}
	var_104_bool = false;
}


void func_2277(object var_0_object, int var_624_int, object var_625_object)
{
	var_0_object = var_625_object;
	bool var_635_bool; object var_636_object;
	object var_637_object;
	func_3066(var_637_object);
	var_637_object = var_636_object;
	func_2893(var_635_bool, var_636_object);
	bool var_638_bool; object var_639_object;
	var_625_object = var_639_object;
	func_2808(var_638_bool, var_639_object, 70.0);
	if(!var_638_bool) { //@nz
		var_624_int = -2;
		return 8;
	}
	object var_631_object;
	@CreateDialog(var_631_object);
	int var_642_int;
	func_3245(var_642_int);
	var_631_object->SetNPCName(var_642_int);
	int var_643_int;
	func_3243(var_643_int);
	var_631_object->SetNPCDescription(var_643_int);
	string var_644_string;
	func_3247(var_644_string);
	var_631_object->SetPhoto(var_644_string);
	string var_645_string;
	func_3249(var_645_string);
	var_631_object->SetPhoto2(var_645_string);
	int var_646_int;
	func_3562(var_646_int);
	var_631_object->SetPlayerName(var_646_int);
	bool var_632_bool;
	@IsOverrideActive(var_632_bool);
	if(var_632_bool != 0) {
		var_624_int = -2;
		return 8;
	}
	@DoDialog(var_631_object);
	object var_648_object; object var_649_object;
	var_625_object = var_648_object;
	var_631_object = var_649_object;
	TaskCall(14);
	func_2358(var_650_object, var_651_object, var_652_string, var_653_bool, var_648_object, var_649_object);
	TaskReturn();
	bool var_634_bool;
	var_631_object->IsDialogEnd(var_634_bool);
	
	for(;;) {
		var_678_bool = !var_634_bool; //@nz
		if(var_678_bool == 0) goto Label_2347;
		@sync();
		var_631_object->IsDialogEnd(var_634_bool);
	}
	
Label_2347:
	object var_679_object;
	var_625_object = var_679_object;
	func_2876();
	@StopDialog(var_631_object);
	var_631_object->GetReturnValue(-1);
	int var_633_int = var_624_int;
}
EMIT "Stack[-4] = 0";


void func_2794(bool var_40_bool, object var_41_object)
{
	cvector var_43_cvector;
	var_41_object->GetPosition(var_43_cvector);
	bool var_44_bool; cvector var_45_cvector;
	var_43_cvector = var_45_cvector;
	func_2784(var_44_bool, var_45_cvector);
	var_44_bool = var_40_bool;
}


void func_3562(int var_216_int)
{
	int var_218_int;
	@GetVariable("branch", var_218_int);
	if(var_218_int == 0) {
		var_216_int = 1;
		return 2;
	EMIT "GOTO 0xdf9";
	}
	if(var_218_int == 1) {
		var_216_int = 2;
		return 2;
	}
	var_216_int = 3;
}


// @pe
void func_3310(object var_78_object)
{
	object var_81_object;
	var_78_object = var_81_object;
	bool var_80_bool;
	func_3142(var_80_bool, var_81_object, 0.3);
}


void func_2546(void)
{
	float var_50_float;
	@rand(var_50_float, 8, 16);
	@SetTimer(10, var_50_float);
}


void func_2803(bool var_36_bool)
{
	bool var_38_bool;
	@IsLoaded(var_38_bool);
	var_38_bool = var_36_bool;
}


void func_3059(void)
{
	bool var_39_bool;
	func_3251(var_39_bool);
	if(var_39_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_3317(void)
{
	@SetVariable("ood6Laska1", 1);
}


void func_2808(bool var_165_bool, object var_166_object, float var_167_float)
{
	cvector var_178_cvector; bool var_185_bool;
	var_166_object->GetPosition(var_178_cvector);
	float var_177_float;
	var_166_object->GetEyesHeight(var_177_float);
	var_186_float = GetByIndex(var_178_cvector, 1);
	SetByIndex(var_178_cvector, 1) = (var_186_float + var_177_float);
	cvector var_179_cvector;
	@GetPosition(var_179_cvector);
	@GetEyesHeight(var_177_float);
	var_187_float = GetByIndex(var_179_cvector, 1);
	SetByIndex(var_179_cvector, 1) = (var_187_float + var_177_float);
	cvector var_180_cvector = var_178_cvector - var_179_cvector;
	var_188_float = GetByIndex(var_180_cvector, 1);
	SetByIndex(var_180_cvector, 1) = (float)0;
	var_190_float = sqrt(var_180_cvector | var_180_cvector);
	var_180_cvector /= var_190_float;
	cvector var_181_cvector = -var_180_cvector;
	cvector var_192_cvector;
	func_3072(var_192_cvector, (var_181_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_182_cvector = ((var_180_cvector * var_167_float) + (var_192_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_184_bool;
	@IsOverrideActive(var_184_bool);
	if(var_184_bool != 0)
		var_165_bool = false;
	@StopWorld();
	@CameraTransit((var_179_cvector + var_182_cvector), var_181_cvector);
	var_205_float = GetByIndex(var_182_cvector, 0);
	var_206_float = GetByIndex(var_182_cvector, 2);
	@Rotate(var_205_float, var_206_float);
	bool var_207_bool;
	func_3251(var_207_bool);
	if(var_207_bool != 0) {
	} else {
		@HasAnimationTrack(var_185_bool, "head");
		if(var_185_bool == 0) goto Label_2870;
		@LookAsyncCamera("head");
	}
Label_2870:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_165_bool = true;
	
}


void func_3066(object var_72_object)
{
	object var_74_object;
	@self(var_74_object);
	var_74_object = var_72_object;
}
EMIT "Stack[-1] = 0";


void func_2555(void)
{
	@KillTimer(10);
}


// @pe
void func_1533(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_444_object, object var_445_object)
{
	var_0_object = var_445_object;
	var_1_object = var_444_object;
	var_3_string = false;
	if(1 != 0) {
		func_1605(var_445_object, "Neutral");
		var_0_object->SetMessage(512815); //@t
		var_0_object->ClearReplies(); //@t
		bool var_460_bool = false;
		bool var_461_bool;
		func_3443(var_1_object);
		if(var_461_bool != 0) {
			bool var_467_bool;
			func_3455(var_1_object);
			if(var_467_bool != 0)
				var_460_bool = true;
		}
		if(var_460_bool != 0)
			var_0_object->AddReply(512816, 14017, 14016); //@t
		var_0_object->AddReply(512828, -1, 14028); //@t
		goto Label_1575;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x601";
	}
Label_1575:
	bool var_479_bool;
	func_3251(var_479_bool);
	if(var_479_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_3031(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1604;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1604:
		return 0;

	}
	
}


