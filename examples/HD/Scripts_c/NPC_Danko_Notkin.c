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
			func_2981();
			if(var_31_bool == 243) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3084();
				func_144(var_32_cvector, "Neutral");
				var_0_object->SetMessage(500205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500207, 256, 245); //@t
				var_0_object->AddReply(500206, 246, 244); //@t
				return 0;
			}
			if(var_31_bool == 246) {
				func_144(var_32_cvector, "Neutral");
				var_0_object->SetMessage(500208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500209, 249, 247); //@t
				var_0_object->AddReply(500210, 250, 248); //@t
				return 0;
			}
			if(var_31_bool == 250) {
				func_144(var_32_cvector, "Neutral");
				var_0_object->SetMessage(500212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500215, 249, 253); //@t
				return 0;
			}
			if(var_31_bool == 249) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_3078();
				func_144(var_32_cvector, "Neutral");
				var_0_object->SetMessage(500211); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500213, 252, 251); //@t
				return 0;
			}
			if(var_31_bool == 252) {
				func_144(var_32_cvector, "Neutral");
				var_0_object->SetMessage(500214); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500216, -1, 255); //@t
				return 0;
			}
			if(var_31_bool == 256) {
				func_144(var_32_cvector, "Neutral");
				var_0_object->SetMessage(500217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500218, -1, 257); //@t
				var_0_object->AddReply(500219, -1, 258); //@t
				return 0;
			}
			var_3_string = true;
			bool var_110_bool;
			func_3247(var_110_bool);
			if(var_110_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		if(1 != 0) {
			func_2981();
			if(var_32_cvector == 44102) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3072();
			}
			if(var_31_bool == 8248) {
				func_462(var_32_cvector, "Pride");
				var_0_object->SetMessage(507472); //@t
				var_0_object->ClearReplies(); //@t
				bool var_61_bool;
				func_3150(var_1_object);
				if(var_61_bool != 0)
					var_0_object->AddReply(541871, 10302, 44102); //@t
				var_0_object->AddReply(541869, -1, 44100); //@t
				return 0;
			}
			if(var_31_bool == 10302) {
				func_462(var_32_cvector, "Neutral");
				var_0_object->SetMessage(509377); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509378, 10304, 10303); //@t
				return 0;
			}
			if(var_31_bool == 10304) {
				func_462(var_32_cvector, "Neutral");
				var_0_object->SetMessage(509379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509380, 10306, 10305); //@t
				var_0_object->AddReply(509387, 10306, 10313); //@t
				return 0;
			}
			if(var_31_bool == 10306) {
				func_462(var_32_cvector, "Pride");
				var_0_object->SetMessage(509381); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509382, 10308, 10307); //@t
				var_0_object->AddReply(509386, 10308, 10311); //@t
				return 0;
			}
			if(var_31_bool == 10308) {
				func_462(var_32_cvector, "Distrust");
				var_0_object->SetMessage(509383); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509384, -1, 10309); //@t
				var_0_object->AddReply(509385, -1, 10310); //@t
				return 0;
			}
			var_3_string = true;
			bool var_112_bool;
			func_3247(var_112_bool);
			if(var_112_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1e5";
	
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
			func_2981();
			if(var_32_cvector == 10997) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3090();
			}
			if(var_32_cvector == 35766) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_3048();
			}
			if(var_32_cvector == 35785) {
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_3054();
			}
			if(var_31_bool == 10996) {
				func_795(var_32_cvector, "Neutral");
				var_0_object->SetMessage(509978); //@t
				var_0_object->ClearReplies(); //@t
				bool var_73_bool;
				func_3186(var_1_object);
				if(var_73_bool != 0)
					var_0_object->AddReply(509979, 35759, 10997); //@t
				bool var_84_bool;
				func_3102(var_1_object);
				if(var_84_bool != 0)
					var_0_object->AddReply(534183, 35767, 35766); //@t
				bool var_93_bool;
				func_3114(var_1_object);
				if(var_93_bool != 0)
					var_0_object->AddReply(534202, 35786, 35785); //@t
				var_0_object->AddReply(509990, -1, 11009); //@t
				var_0_object->AddReply(509991, -1, 11011); //@t
				return 0;
			}
			if(var_31_bool == 35786) {
				func_795(var_32_cvector, "Distrust");
				var_0_object->SetMessage(534203); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534204, 35788, 35787); //@t
				var_0_object->AddReply(534215, -1, 35798); //@t
				return 0;
			}
			if(var_31_bool == 35788) {
				func_795(var_32_cvector, "Distrust");
				var_0_object->SetMessage(534205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534206, 35790, 35789); //@t
				var_0_object->AddReply(534214, -1, 35797); //@t
				return 0;
			}
			if(var_31_bool == 35790) {
				func_795(var_32_cvector, "Neutral");
				var_0_object->SetMessage(534207); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534208, 35792, 35791); //@t
				var_0_object->AddReply(534211, 35795, 35794); //@t
				return 0;
			}
			if(var_31_bool == 35795) {
				func_795(var_32_cvector, "Distrust");
				var_0_object->SetMessage(534212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534213, -1, 35796); //@t
				return 0;
			}
			if(var_31_bool == 35792) {
				func_795(var_32_cvector, "Neutral");
				var_0_object->SetMessage(534209); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534210, -1, 35793); //@t
				return 0;
			}
			if(var_31_bool == 35767) {
				func_795(var_32_cvector, "Smile");
				var_0_object->SetMessage(534184); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534185, 35769, 35768); //@t
				var_0_object->AddReply(534198, 35782, 35781); //@t
				return 0;
			}
			if(var_31_bool == 35782) {
				func_795(var_32_cvector, "Think");
				var_0_object->SetMessage(534199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534200, -1, 35783); //@t
				var_0_object->AddReply(534201, -1, 35784); //@t
				return 0;
			}
			if(var_31_bool == 35769) {
				func_795(var_32_cvector, "Smile");
				var_0_object->SetMessage(534186); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534187, 35771, 35770); //@t
				var_0_object->AddReply(534195, 35779, 35778); //@t
				return 0;
			}
			if(var_31_bool == 35779) {
				func_795(var_32_cvector, "Distrust");
				var_0_object->SetMessage(534196); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534197, -1, 35780); //@t
				return 0;
			}
			if(var_31_bool == 35771) {
				func_795(var_32_cvector, "Neutral");
				var_0_object->SetMessage(534188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534189, 35773, 35772); //@t
				return 0;
			}
			if(var_31_bool == 35773) {
				func_795(var_32_cvector, "Neutral");
				var_0_object->SetMessage(534190); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534191, -1, 35774); //@t
				var_0_object->AddReply(534192, 35776, 35775); //@t
				return 0;
			}
			if(var_31_bool == 35776) {
				func_795(var_32_cvector, "Neutral");
				var_0_object->SetMessage(534193); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534194, -1, 35777); //@t
				return 0;
			}
			if(var_31_bool == 35759) {
				func_795(var_32_cvector, "Distrust");
				var_0_object->SetMessage(534176); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534177, 10998, 35760); //@t
				var_0_object->AddReply(534178, 35800, 35761); //@t
				return 0;
			}
			if(var_31_bool == 35800) {
				func_795(var_32_cvector, "Distrust");
				var_0_object->SetMessage(534217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534218, 35802, 35801); //@t
				var_0_object->AddReply(534223, 35802, 35806); //@t
				return 0;
			}
			if(var_31_bool == 35802) {
				func_795(var_32_cvector, "Neutral");
				var_0_object->SetMessage(534219); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534220, -1, 35803); //@t
				var_0_object->AddReply(534221, -1, 35804); //@t
				return 0;
			}
			if(var_31_bool == 10998) {
				func_795(var_32_cvector, "Think");
				var_0_object->SetMessage(509980); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509981, 11000, 10999); //@t
				var_0_object->AddReply(509988, 11000, 11006); //@t
				var_0_object->AddReply(509989, -1, 11008); //@t
				return 0;
			}
			if(var_31_bool == 11000) {
				func_795(var_32_cvector, "Distrust");
				var_0_object->SetMessage(509982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509983, -1, 11001); //@t
				var_0_object->AddReply(509984, 11003, 11002); //@t
				return 0;
			}
			if(var_31_bool == 11003) {
				func_795(var_32_cvector, "Think");
				var_0_object->SetMessage(509985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509986, -1, 11004); //@t
				var_0_object->AddReply(509987, -1, 11005); //@t
				return 0;
			}
			var_3_string = true;
			bool var_276_bool;
			func_3247(var_276_bool);
			if(var_276_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x332";
	
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
			func_2981();
			if(var_32_cvector == 12400) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_3096();
			}
			if(var_32_cvector == 35808) {
				object var_43_object; object var_44_object;
				var_43_object = var_1_object;
				var_44_object = var_0_object;
				func_3060();
			}
			if(var_32_cvector == 35839) {
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_3066();
			}
			if(var_31_bool == 12399) {
				func_1518(var_32_cvector, "Neutral");
				var_0_object->SetMessage(511211); //@t
				var_0_object->ClearReplies(); //@t
				bool var_73_bool = true;
				bool var_74_bool = false;
				bool var_75_bool = false;
				bool var_76_bool;
				func_3162(var_1_object);
				if(var_76_bool != 0) {
					bool var_84_bool;
					func_3210(var_1_object);
					if(var_84_bool != 0)
						var_75_bool = true;
				}
				if(var_75_bool != 0) {
					bool var_90_bool;
					func_3174(var_1_object);
					if(!var_90_bool) //@nz
						var_74_bool = true;
				}
				if(var_74_bool != 1) {
					bool var_97_bool = false;
					bool var_98_bool = false;
					bool var_99_bool;
					func_3198(var_1_object);
					if(var_99_bool != 0) {
						bool var_105_bool;
						func_3210(var_1_object);
						if(var_105_bool != 0)
							var_98_bool = true;
					}
					if(var_98_bool != 0) {
						bool var_107_bool;
						func_3174(var_1_object);
						if(!var_107_bool) //@nz
							var_97_bool = true;
					}
					if(var_97_bool != 1)
						var_73_bool = false;
				}
				if(var_73_bool != 0)
					var_0_object->AddReply(511212, 12401, 12400); //@t
				bool var_113_bool;
				func_3126(var_1_object);
				if(var_113_bool != 0)
					var_0_object->AddReply(534224, 35809, 35808); //@t
				bool var_122_bool;
				func_3138(var_1_object);
				if(var_122_bool != 0)
					var_0_object->AddReply(534252, 35840, 35839); //@t
				var_0_object->AddReply(515335, -1, 16558); //@t
				return 0;
			}
			if(var_31_bool == 35840) {
				func_1518(var_32_cvector, "Triumph");
				var_0_object->SetMessage(534253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534254, 35842, 35841); //@t
				var_0_object->AddReply(534266, 35842, 35853); //@t
				return 0;
			}
			if(var_31_bool == 35842) {
				func_1518(var_32_cvector, "Triumph");
				var_0_object->SetMessage(534255); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534256, 35844, 35843); //@t
				var_0_object->AddReply(534263, 35851, 35850); //@t
				return 0;
			}
			if(var_31_bool == 35851) {
				func_1518(var_32_cvector, "Neutral");
				var_0_object->SetMessage(534264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534265, -1, 35852); //@t
				return 0;
			}
			if(var_31_bool == 35844) {
				func_1518(var_32_cvector, "Distrust");
				var_0_object->SetMessage(534257); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534258, 35846, 35845); //@t
				var_0_object->AddReply(534262, -1, 35849); //@t
				return 0;
			}
			if(var_31_bool == 35846) {
				func_1518(var_32_cvector, "Neutral");
				var_0_object->SetMessage(534259); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534260, -1, 35847); //@t
				var_0_object->AddReply(534261, -1, 35848); //@t
				return 0;
			}
			if(var_31_bool == 35809) {
				func_1518(var_32_cvector, "Think");
				var_0_object->SetMessage(534225); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534226, 35811, 35810); //@t
				return 0;
			}
			if(var_31_bool == 35811) {
				func_1518(var_32_cvector, "Think");
				var_0_object->SetMessage(534227); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534228, 35813, 35812); //@t
				var_0_object->AddReply(534234, 35813, 35818); //@t
				return 0;
			}
			if(var_31_bool == 35813) {
				func_1518(var_32_cvector, "Neutral");
				var_0_object->SetMessage(534229); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534230, -1, 35814); //@t
				var_0_object->AddReply(534233, -1, 35817); //@t
				return 0;
			}
			if(var_31_bool == 12401) {
				func_1518(var_32_cvector, "Pride");
				var_0_object->SetMessage(511213); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511214, 12403, 12402); //@t
				var_0_object->AddReply(511223, 12413, 12412); //@t
				return 0;
			}
			if(var_31_bool == 12413) {
				func_1518(var_32_cvector, "Neutral");
				var_0_object->SetMessage(511224); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511225, 12405, 12414); //@t
				return 0;
			}
			if(var_31_bool == 12403) {
				func_1518(var_32_cvector, "Pride");
				var_0_object->SetMessage(511215); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511220, 12409, 12408); //@t
				var_0_object->AddReply(511216, 12405, 12404); //@t
				return 0;
			}
			if(var_31_bool == 12405) {
				func_1518(var_32_cvector, "Pride");
				var_0_object->SetMessage(511217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511218, -1, 12406); //@t
				var_0_object->AddReply(511219, -1, 12407); //@t
				return 0;
			}
			if(var_31_bool == 12409) {
				func_1518(var_32_cvector, "Think");
				var_0_object->SetMessage(511221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511222, 12405, 12410); //@t
				return 0;
			}
			var_3_string = true;
			bool var_252_bool;
			func_3247(var_252_bool);
			if(var_252_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x605";
	
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
			func_2981();
			if(var_31_bool == 36960) {
				func_2101(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_31_bool == 36962) {
				func_2101(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_31_bool == 36964) {
				func_2101(var_32_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_84_bool;
			func_3247(var_84_bool);
			if(var_84_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x84c";
	
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
			func_2981();
			if(var_31_int == 42551) {
				func_2355(var_32_cvector, "Neutral");
				var_0_object->SetMessage(540542); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540543, -1, 42552); //@t
				var_0_object->AddReply(540796, -1, 42845); //@t
				return 0;
			}
			var_3_string = true;
			bool var_61_bool;
			func_3247(var_61_bool);
			if(var_61_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x94a";
	
	}

}


maintask task_12
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		var_31_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_2426(var_30_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, int var_31_int)
	{
		if(var_31_int == 10) {
			func_2491();
			bool var_35_bool = false;
			bool var_36_bool;
			func_2705(var_36_bool);
			if(var_36_bool != 0) {
				bool var_39_bool;
				func_2460(var_39_bool);
				if(var_39_bool != 0)
					var_35_bool = true;
			}
			if(var_35_bool != 0) {
				bool var_56_bool;
				func_2440(var_56_bool);
				if(var_56_bool != 0) {
					bool var_75_bool; object var_76_object;
					object var_77_object;
					func_2988(var_77_object);
					var_77_object = var_76_object;
					func_2855(var_75_bool, var_76_object);
				}
			} else {
				func_2455(var_31_int);
				func_2482();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		func_2673();
		func_2491();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector)
	{
		@StopGroup0();
		func_2491();
		func_2935("Neutral");
		func_2482();
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, bool var_31_bool)
	{
		if(var_31_bool != 0)
			func_2482();
		else
			func_2935("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, cvector var_30_cvector, object var_31_object)
	{
		bool var_33_bool;
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			disable OnUse;
			func_2673();
			bool var_35_bool; object var_36_object;
			var_31_object = var_36_object;
			func_2696(var_35_bool, var_36_object);
			enable OnUse;
			object var_49_object;
			var_31_object = var_49_object;
			func_3249(var_49_object);
			func_2935("Neutral");
			func_2491();
			func_2482();
		}
	}

}


// @pe
void func_3072(void)
{
	@SetVariable("ood7Notkin1", 1);
}


void func_0(object var_0_object, int var_52_int, object var_53_object)
{
	var_0_object = var_53_object;
	bool var_63_bool; object var_64_object;
	var_53_object = var_64_object;
	func_2710(var_63_bool, var_64_object, 70.0);
	if(!var_63_bool) { //@nz
		var_52_int = -2;
		return 8;
	}
	object var_59_object;
	@CreateDialog(var_59_object);
	int var_111_int;
	func_3241(var_111_int);
	var_59_object->SetNPCName(var_111_int);
	int var_112_int;
	func_3239(var_112_int);
	var_59_object->SetNPCDescription(var_112_int);
	string var_113_string;
	func_3243(var_113_string);
	var_59_object->SetPhoto(var_113_string);
	string var_114_string;
	func_3245(var_114_string);
	var_59_object->SetPhoto2(var_114_string);
	int var_115_int;
	func_3222(var_115_int);
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
	func_2988(var_126_object);
	var_126_object = var_125_object;
	func_2797(var_124_bool, var_125_object);
	object var_219_object; object var_220_object;
	var_53_object = var_219_object;
	var_59_object = var_220_object;
	TaskCall(1);
	func_81(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object);
	TaskReturn();
	bool var_62_bool;
	var_59_object->IsDialogEnd(var_62_bool);
	
	for(;;) {
		var_272_bool = !var_62_bool; //@nz
		if(var_272_bool == 0) goto Label_70;
		@sync();
		var_59_object->IsDialogEnd(var_62_bool);
	}
	
Label_70:
	object var_273_object;
	var_53_object = var_273_object;
	func_2779();
	@StopDialog(var_59_object);
	var_59_object->GetReturnValue(-1);
	int var_61_int = var_52_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3078(void)
{
	@SetVariable("KnowTwoSouls", 1);
}


// @pe
void func_3084(void)
{
	@SetVariable("KnowNotkin", 1);
}


// @pe
void func_3090(void)
{
	@SetVariable("ood3Notkin1", 1);
}


// @pe
void func_3096(void)
{
	@SetVariable("ood4Notkin1", 1);
}


// @pe
void func_795(object var_2_object, string var_318_string)
{
	bool var_319_bool;
	func_3247(var_319_bool);
	if(!var_319_bool) //@nz
		return 0;
	if(var_318_string == var_2_object)
		return 0;
	string var_322_string; bool var_323_bool;
	var_318_string = var_322_string;
	if(var_318_string == "")
		var_323_bool = false;
	else
		var_323_bool = true;
	func_2951(var_322_string, var_323_bool);
	var_2_object = var_318_string;
	
}


void func_1307(object var_0_object, int var_374_int, object var_375_object)
{
	var_0_object = var_375_object;
	bool var_385_bool; object var_386_object;
	var_375_object = var_386_object;
	func_2710(var_385_bool, var_386_object, 70.0);
	if(!var_385_bool) { //@nz
		var_374_int = -2;
		return 8;
	}
	object var_381_object;
	@CreateDialog(var_381_object);
	int var_389_int;
	func_3241(var_389_int);
	var_381_object->SetNPCName(var_389_int);
	int var_390_int;
	func_3239(var_390_int);
	var_381_object->SetNPCDescription(var_390_int);
	string var_391_string;
	func_3243(var_391_string);
	var_381_object->SetPhoto(var_391_string);
	string var_392_string;
	func_3245(var_392_string);
	var_381_object->SetPhoto2(var_392_string);
	int var_393_int;
	func_3222(var_393_int);
	var_381_object->SetPlayerName(var_393_int);
	bool var_382_bool;
	@IsOverrideActive(var_382_bool);
	if(var_382_bool != 0) {
		var_374_int = -2;
		return 8;
	}
	@DoDialog(var_381_object);
	bool var_395_bool; object var_396_object;
	object var_397_object;
	func_2988(var_397_object);
	var_397_object = var_396_object;
	func_2797(var_395_bool, var_396_object);
	object var_398_object; object var_399_object;
	var_375_object = var_398_object;
	var_381_object = var_399_object;
	TaskCall(7);
	func_1388(var_400_object, var_401_object, var_402_string, var_403_bool, var_398_object, var_399_object);
	TaskReturn();
	bool var_384_bool;
	var_381_object->IsDialogEnd(var_384_bool);
	
	for(;;) {
		var_481_bool = !var_384_bool; //@nz
		if(var_481_bool == 0) goto Label_1377;
		@sync();
		var_381_object->IsDialogEnd(var_384_bool);
	}
	
Label_1377:
	object var_482_object;
	var_375_object = var_482_object;
	func_2779();
	@StopDialog(var_381_object);
	var_381_object->GetReturnValue(-1);
	int var_383_int = var_374_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3102(bool var_338_bool)
{
	int var_340_int;
	func_3004(var_340_int, "ood3Notkin2");
	if(var_340_int == 0) {
		var_338_bool = true;
		return 0;
	}
	var_338_bool = false;
}


void func_2855(bool var_135_bool, object var_136_object)
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
		func_2966(var_158_bool, var_159_string);
		var_158_bool = var_135_bool;
		return 10;

	}
}


// @pe
void func_3114(bool var_347_bool)
{
	int var_349_int;
	func_3004(var_349_int, "ood3Notkin3");
	if(var_349_int == 0) {
		var_347_bool = true;
		return 0;
	}
	var_347_bool = false;
}


void func_2602(void)
{
	bool var_44_bool; int var_45_int; int var_46_int; bool var_47_bool;
	@WaitForAnimEnd();
	bool var_48_bool;
	func_2705(var_48_bool);
	if(!var_48_bool) //@nz
		return 12;
	int var_50_int;
	func_3031(var_50_int);
	int var_42_int;
	var_50_int = var_42_int;
	int var_43_int = 0;
	
	for(;;) {
		bool var_63_bool = false;
		if(var_43_int < 5) {
			bool var_66_bool;
			func_2705(var_66_bool);
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
			func_3024(var_77_string, var_78_int);
			@PlayAnimation("all", var_77_string);
			@WaitForAnimEnd(var_47_bool);
			var_79_bool = !var_47_bool; //@nz
			if(var_79_bool == 0) goto Label_2657;
			goto Label_2668;
			}
				Label_2657:
					bool var_70_bool;
					func_2671(var_70_bool);
					var_71_bool = !var_70_bool; //@nz
					if(var_71_bool == 0) goto Label_2663;
			}
		}
	Label_2668:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2663:
		@ResetAAS();
		var_43_int += 1;
	}
	
}


// @pe
void func_2355(object var_2_object, string var_639_string)
{
	bool var_640_bool;
	func_3247(var_640_bool);
	if(!var_640_bool) //@nz
		return 0;
	if(var_639_string == var_2_object)
		return 0;
	string var_643_string; bool var_644_bool;
	var_639_string = var_643_string;
	if(var_639_string == "")
		var_644_bool = false;
	else
		var_644_bool = true;
	func_2951(var_643_string, var_644_bool);
	var_2_object = var_639_string;
	
}


// @pe
void func_2101(object var_2_object, string var_580_string)
{
	bool var_581_bool;
	func_3247(var_581_bool);
	if(!var_581_bool) //@nz
		return 0;
	if(var_580_string == var_2_object)
		return 0;
	string var_584_string; bool var_585_bool;
	var_580_string = var_584_string;
	if(var_580_string == "")
		var_585_bool = false;
	else
		var_585_bool = true;
	func_2951(var_584_string, var_585_bool);
	var_2_object = var_580_string;
	
}


// @pe
void func_3126(bool var_452_bool)
{
	int var_454_int;
	func_3004(var_454_int, "ood4Notkin2");
	if(var_454_int == 0) {
		var_452_bool = true;
		return 0;
	}
	var_452_bool = false;
}


void func_318(object var_0_object, int var_485_int, object var_486_object)
{
	var_0_object = var_486_object;
	bool var_496_bool; object var_497_object;
	var_486_object = var_497_object;
	func_2710(var_496_bool, var_497_object, 70.0);
	if(!var_496_bool) { //@nz
		var_485_int = -2;
		return 8;
	}
	object var_492_object;
	@CreateDialog(var_492_object);
	int var_500_int;
	func_3241(var_500_int);
	var_492_object->SetNPCName(var_500_int);
	int var_501_int;
	func_3239(var_501_int);
	var_492_object->SetNPCDescription(var_501_int);
	string var_502_string;
	func_3243(var_502_string);
	var_492_object->SetPhoto(var_502_string);
	string var_503_string;
	func_3245(var_503_string);
	var_492_object->SetPhoto2(var_503_string);
	int var_504_int;
	func_3222(var_504_int);
	var_492_object->SetPlayerName(var_504_int);
	bool var_493_bool;
	@IsOverrideActive(var_493_bool);
	if(var_493_bool != 0) {
		var_485_int = -2;
		return 8;
	}
	@DoDialog(var_492_object);
	bool var_506_bool; object var_507_object;
	object var_508_object;
	func_2988(var_508_object);
	var_508_object = var_507_object;
	func_2797(var_506_bool, var_507_object);
	object var_509_object; object var_510_object;
	var_486_object = var_509_object;
	var_492_object = var_510_object;
	TaskCall(3);
	func_399(var_511_object, var_512_object, var_513_string, var_514_bool, var_509_object, var_510_object);
	TaskReturn();
	bool var_495_bool;
	var_492_object->IsDialogEnd(var_495_bool);
	
	for(;;) {
		var_545_bool = !var_495_bool; //@nz
		if(var_545_bool == 0) goto Label_388;
		@sync();
		var_492_object->IsDialogEnd(var_495_bool);
	}
	
Label_388:
	object var_546_object;
	var_486_object = var_546_object;
	func_2779();
	@StopDialog(var_492_object);
	var_492_object->GetReturnValue(-1);
	int var_494_int = var_485_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3138(bool var_461_bool)
{
	int var_463_int;
	func_3004(var_463_int, "ood4Notkin3");
	if(var_463_int == 0) {
		var_461_bool = true;
		return 0;
	}
	var_461_bool = false;
}


void func_2892(bool var_166_bool, object var_167_object)
{
	bool var_175_bool; int var_176_int; string var_177_string;
	int var_179_int;
	func_3009(var_179_int);
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
		func_2966(var_198_bool, var_199_string);
		var_198_bool = var_166_bool;
		return 10;

	}
}


// @pe
void func_3150(bool var_525_bool)
{
	int var_527_int;
	func_3004(var_527_int, "ood7Notkin1");
	if(var_527_int == 0) {
		var_525_bool = true;
		return 0;
	}
	var_525_bool = false;
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_219_object, object var_220_object)
{
	var_0_object = var_220_object;
	var_3_string = false;
	if(1 != 0) {
		object var_226_object; object var_227_object;
		var_226_object = var_219_object;
		var_227_object = var_0_object;
		func_3084();
		func_144(var_220_object, "Neutral");
		var_0_object->SetMessage(500205); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(500207, 256, 245); //@t
		var_0_object->AddReply(500206, 246, 244); //@t
		goto Label_114;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_114:
	bool var_254_bool;
	func_3247(var_254_bool);
	if(var_254_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2935(var_2_object);
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


// @pe
void func_3162(bool var_417_bool)
{
	int var_419_int;
	func_3004(var_419_int, "d4q03");
	if(var_419_int == 2)
		var_417_bool = true;
	var_417_bool = false;
}


// @pe
void func_3174(bool var_429_bool)
{
	int var_431_int;
	func_3004(var_431_int, "d4q03_alldead");
	if(var_431_int == 1)
		var_429_bool = true;
	var_429_bool = false;
}


// @pe
void func_1388(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_398_object, object var_399_object)
{
	var_0_object = var_399_object;
	var_1_object = var_398_object;
	var_3_string = false;
	if(1 != 0) {
		func_1518(var_399_object, "Neutral");
		var_0_object->SetMessage(511211); //@t
		var_0_object->ClearReplies(); //@t
		bool var_414_bool = true;
		bool var_415_bool = false;
		bool var_416_bool = false;
		bool var_417_bool;
		func_3162(var_1_object);
		if(var_417_bool != 0) {
			bool var_423_bool;
			func_3210(var_1_object);
			if(var_423_bool != 0)
				var_416_bool = true;
		}
		if(var_416_bool != 0) {
			bool var_429_bool;
			func_3174(var_1_object);
			if(!var_429_bool) //@nz
				var_415_bool = true;
		}
		if(var_415_bool != 1) {
			bool var_436_bool = false;
			bool var_437_bool = false;
			bool var_438_bool;
			func_3198(var_1_object);
			if(var_438_bool != 0) {
				bool var_444_bool;
				func_3210(var_1_object);
				if(var_444_bool != 0)
					var_437_bool = true;
			}
			if(var_437_bool != 0) {
				bool var_446_bool;
				func_3174(var_1_object);
				if(!var_446_bool) //@nz
					var_436_bool = true;
			}
			if(var_436_bool != 1)
				var_414_bool = false;
		}
		if(var_414_bool != 0)
			var_0_object->AddReply(511212, 12401, 12400); //@t
		bool var_452_bool;
		func_3126(var_1_object);
		if(var_452_bool != 0)
			var_0_object->AddReply(534224, 35809, 35808); //@t
		bool var_461_bool;
		func_3138(var_1_object);
		if(var_461_bool != 0)
			var_0_object->AddReply(534252, 35840, 35839); //@t
		var_0_object->AddReply(515335, -1, 16558); //@t
		goto Label_1488;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x570";
	}
Label_1488:
	bool var_473_bool;
	func_3247(var_473_bool);
	if(var_473_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2935(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1517;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1517:
		return 0;

	}
	
}


void func_2671(bool var_70_bool)
{
	var_70_bool = true;
}


void func_2673(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_3186(bool var_327_bool)
{
	int var_329_int;
	func_3004(var_329_int, "ood3Notkin1");
	if(var_329_int == 0) {
		var_327_bool = true;
		return 0;
	}
	var_327_bool = false;
}


void func_626(object var_0_object, int var_287_int, object var_288_object)
{
	var_0_object = var_288_object;
	bool var_298_bool; object var_299_object;
	var_288_object = var_299_object;
	func_2710(var_298_bool, var_299_object, 70.0);
	if(!var_298_bool) { //@nz
		var_287_int = -2;
		return 8;
	}
	object var_294_object;
	@CreateDialog(var_294_object);
	int var_302_int;
	func_3241(var_302_int);
	var_294_object->SetNPCName(var_302_int);
	int var_303_int;
	func_3239(var_303_int);
	var_294_object->SetNPCDescription(var_303_int);
	string var_304_string;
	func_3243(var_304_string);
	var_294_object->SetPhoto(var_304_string);
	string var_305_string;
	func_3245(var_305_string);
	var_294_object->SetPhoto2(var_305_string);
	int var_306_int;
	func_3222(var_306_int);
	var_294_object->SetPlayerName(var_306_int);
	bool var_295_bool;
	@IsOverrideActive(var_295_bool);
	if(var_295_bool != 0) {
		var_287_int = -2;
		return 8;
	}
	@DoDialog(var_294_object);
	bool var_308_bool; object var_309_object;
	object var_310_object;
	func_2988(var_310_object);
	var_310_object = var_309_object;
	func_2797(var_308_bool, var_309_object);
	object var_311_object; object var_312_object;
	var_288_object = var_311_object;
	var_294_object = var_312_object;
	TaskCall(5);
	func_707(var_313_object, var_314_object, var_315_string, var_316_bool, var_311_object, var_312_object);
	TaskReturn();
	bool var_297_bool;
	var_294_object->IsDialogEnd(var_297_bool);
	
	for(;;) {
		var_370_bool = !var_297_bool; //@nz
		if(var_370_bool == 0) goto Label_696;
		@sync();
		var_294_object->IsDialogEnd(var_297_bool);
	}
	
Label_696:
	object var_371_object;
	var_288_object = var_371_object;
	func_2779();
	@StopDialog(var_294_object);
	var_294_object->GetReturnValue(-1);
	int var_296_int = var_287_int;
}
EMIT "Stack[-4] = 0";


void func_2678(float var_46_float, object var_47_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_47_object->GetPosition(var_52_cvector);
	var_46_float = (var_52_cvector - var_51_cvector) | (var_52_cvector - var_51_cvector);
}


void func_2935(string var_256_string)
{
	bool var_260_bool; float var_261_float; float var_262_float;
	@lshHasAnimation(var_260_bool, var_256_string);
	if(var_260_bool != 0) {
		@lshGetAnimTimes(var_256_string, var_261_float, var_262_float);
		@lshPlayAnimation(var_261_float, var_262_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_256_string);
	}
	
}


void func_2426(object var_0_object)
{
	bool var_32_bool;
	func_2705(var_32_bool);
	if(!var_32_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2602();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_3198(bool var_438_bool)
{
	int var_440_int;
	func_3004(var_440_int, "d4q03");
	if(var_440_int == 3)
		var_438_bool = true;
	var_438_bool = false;
}


void func_2686(bool var_39_bool, cvector var_40_cvector)
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


void func_2951(string var_234_string, bool var_235_bool)
{
	bool var_241_bool; float var_242_float; float var_243_float;
	@lshHasAnimation(var_241_bool, var_234_string);
	if(var_241_bool != 0) {
		@lshGetAnimTimes(var_234_string, var_242_float, var_243_float);
		@lshPlayAnimation(var_242_float, var_243_float, var_235_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_234_string);
	}
	
}


void func_2696(bool var_35_bool, object var_36_object)
{
	cvector var_38_cvector;
	var_36_object->GetPosition(var_38_cvector);
	bool var_39_bool; cvector var_40_cvector;
	var_38_cvector = var_40_cvector;
	func_2686(var_39_bool, var_40_cvector);
	var_39_bool = var_35_bool;
}


void func_2440(bool var_56_bool)
{
	object var_58_object;
	@FindActor(var_58_object, "player");
	if(!var_58_object) //@nz
		var_56_bool = false;
	bool var_61_bool; object var_62_object;
	var_58_object = var_62_object;
	func_2696(var_61_bool, var_62_object);
	var_61_bool = var_56_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3210(bool var_423_bool)
{
	int var_425_int;
	func_3004(var_425_int, "ood4Notkin1");
	if(var_425_int == 0) {
		var_423_bool = true;
		return 0;
	}
	var_423_bool = false;
}


// @pe
void func_399(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_509_object, object var_510_object)
{
	var_0_object = var_510_object;
	var_3_string = false;
	if(1 != 0) {
		func_462(var_510_object, "Pride");
		var_0_object->SetMessage(507472); //@t
		var_0_object->ClearReplies(); //@t
		bool var_525_bool;
		func_3150(var_509_object);
		if(var_525_bool != 0)
			var_0_object->AddReply(541871, 10302, 44102); //@t
		var_0_object->AddReply(541869, -1, 44100); //@t
		goto Label_432;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x193";
	}
Label_432:
	bool var_537_bool;
	func_3247(var_537_bool);
	if(var_537_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2935(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_461;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_461:
		return 0;

	}
	
}


// @pe
void func_144(object var_2_object, string var_230_string)
{
	bool var_231_bool;
	func_3247(var_231_bool);
	if(!var_231_bool) //@nz
		return 0;
	if(var_230_string == var_2_object)
		return 0;
	string var_234_string; bool var_235_bool;
	var_230_string = var_234_string;
	if(var_230_string == "")
		var_235_bool = false;
	else
		var_235_bool = true;
	func_2951(var_234_string, var_235_bool);
	var_2_object = var_230_string;
	
}


void func_2705(bool var_32_bool)
{
	bool var_34_bool;
	@IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
}


void func_2710(bool var_63_bool, object var_64_object, float var_65_float)
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
	func_2994(var_90_cvector, (var_79_cvector ^ [0.0, 1.0, 0.0]));
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
	func_3247(var_106_bool);
	if(var_106_bool != 0) {
	} else {
		@HasAnimationTrack(var_83_bool, "head");
		if(var_83_bool == 0) goto Label_2773;
		@LookAsyncCamera("head");
	}
Label_2773:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_63_bool = true;
	
}


void func_2455(object var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0);
	var_109_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_108_float, var_109_float);
}


void func_3222(int var_115_int)
{
	int var_117_int;
	@GetVariable("branch", var_117_int);
	if(var_117_int == 0) {
		var_115_int = 1;
		return 2;
	EMIT "GOTO 0xca5";
	}
	if(var_117_int == 1) {
		var_115_int = 2;
		return 2;
	}
	var_115_int = 3;
}


void func_2966(bool var_158_bool, string var_159_string)
{
	bool var_161_bool;
	bool var_162_bool;
	func_3247(var_162_bool);
	if(var_162_bool != 0) {
		@lshHasSpeech(var_161_bool, var_159_string);
		if(var_161_bool != 0) {
			@lshPlaySpeech(var_159_string);
			var_158_bool = true;
		}
	}
	var_158_bool = false;
}


void func_2460(bool var_39_bool)
{
	object var_42_object;
	@FindActor(var_42_object, "player");
	if(!var_42_object) { //@nz
		var_39_bool = false;
		return 4;
	}
	float var_46_float; object var_47_object;
	func_2678(var_46_float, var_47_object);
	if(var_46_float > 90000.0) {
		var_39_bool = false;
		return 4;
	}
	bool var_43_bool;
	@CanSee(var_43_bool, var_47_object);
	var_43_bool = var_39_bool;
}
EMIT "Stack[-2] = 0";


void func_2981(void)
{
	bool var_34_bool;
	func_3247(var_34_bool);
	if(var_34_bool != 0)
		@lshStopSpeech();
}


void func_1957(object var_0_object, int var_549_int, object var_550_object)
{
	var_0_object = var_550_object;
	bool var_560_bool; object var_561_object;
	var_550_object = var_561_object;
	func_2710(var_560_bool, var_561_object, 70.0);
	if(!var_560_bool) { //@nz
		var_549_int = -2;
		return 8;
	}
	object var_556_object;
	@CreateDialog(var_556_object);
	int var_564_int;
	func_3241(var_564_int);
	var_556_object->SetNPCName(var_564_int);
	int var_565_int;
	func_3239(var_565_int);
	var_556_object->SetNPCDescription(var_565_int);
	string var_566_string;
	func_3243(var_566_string);
	var_556_object->SetPhoto(var_566_string);
	string var_567_string;
	func_3245(var_567_string);
	var_556_object->SetPhoto2(var_567_string);
	int var_568_int;
	func_3222(var_568_int);
	var_556_object->SetPlayerName(var_568_int);
	bool var_557_bool;
	@IsOverrideActive(var_557_bool);
	if(var_557_bool != 0) {
		var_549_int = -2;
		return 8;
	}
	@DoDialog(var_556_object);
	bool var_570_bool; object var_571_object;
	object var_572_object;
	func_2988(var_572_object);
	var_572_object = var_571_object;
	func_2797(var_570_bool, var_571_object);
	object var_573_object; object var_574_object;
	var_550_object = var_573_object;
	var_556_object = var_574_object;
	TaskCall(9);
	func_2038(var_575_object, var_576_object, var_577_string, var_578_bool, var_573_object, var_574_object);
	TaskReturn();
	bool var_559_bool;
	var_556_object->IsDialogEnd(var_559_bool);
	
	for(;;) {
		var_606_bool = !var_559_bool; //@nz
		if(var_606_bool == 0) goto Label_2027;
		@sync();
		var_556_object->IsDialogEnd(var_559_bool);
	}
	
Label_2027:
	object var_607_object;
	var_550_object = var_607_object;
	func_2779();
	@StopDialog(var_556_object);
	var_556_object->GetReturnValue(-1);
	int var_558_int = var_549_int;
}
EMIT "Stack[-4] = 0";


void func_3239(int var_112_int)
{
	var_112_int = 515548;
}


void func_2216(object var_0_object, int var_608_int, object var_609_object)
{
	var_0_object = var_609_object;
	bool var_619_bool; object var_620_object;
	var_609_object = var_620_object;
	func_2710(var_619_bool, var_620_object, 70.0);
	if(!var_619_bool) { //@nz
		var_608_int = -2;
		return 8;
	}
	object var_615_object;
	@CreateDialog(var_615_object);
	int var_623_int;
	func_3241(var_623_int);
	var_615_object->SetNPCName(var_623_int);
	int var_624_int;
	func_3239(var_624_int);
	var_615_object->SetNPCDescription(var_624_int);
	string var_625_string;
	func_3243(var_625_string);
	var_615_object->SetPhoto(var_625_string);
	string var_626_string;
	func_3245(var_626_string);
	var_615_object->SetPhoto2(var_626_string);
	int var_627_int;
	func_3222(var_627_int);
	var_615_object->SetPlayerName(var_627_int);
	bool var_616_bool;
	@IsOverrideActive(var_616_bool);
	if(var_616_bool != 0) {
		var_608_int = -2;
		return 8;
	}
	@DoDialog(var_615_object);
	bool var_629_bool; object var_630_object;
	object var_631_object;
	func_2988(var_631_object);
	var_631_object = var_630_object;
	func_2797(var_629_bool, var_630_object);
	object var_632_object; object var_633_object;
	var_609_object = var_632_object;
	var_615_object = var_633_object;
	TaskCall(11);
	func_2297(var_634_object, var_635_object, var_636_string, var_637_bool, var_632_object, var_633_object);
	TaskReturn();
	bool var_618_bool;
	var_615_object->IsDialogEnd(var_618_bool);
	
	for(;;) {
		var_662_bool = !var_618_bool; //@nz
		if(var_662_bool == 0) goto Label_2286;
		@sync();
		var_615_object->IsDialogEnd(var_618_bool);
	}
	
Label_2286:
	object var_663_object;
	var_609_object = var_663_object;
	func_2779();
	@StopDialog(var_615_object);
	var_615_object->GetReturnValue(-1);
	int var_617_int = var_608_int;
}
EMIT "Stack[-4] = 0";


void func_3241(int var_111_int)
{
	var_111_int = 502873;
}


void func_3243(string var_113_string)
{
	var_113_string = "ui/NPC_Notkin.png";
}


void func_2988(object var_126_object)
{
	object var_128_object;
	@self(var_128_object);
	var_128_object = var_126_object;
}
EMIT "Stack[-1] = 0";


void func_3245(string var_114_string)
{
	var_114_string = "ui/NPC_Notkin_b.png";
}


void func_3247(bool var_106_bool)
{
	var_106_bool = true;
}


// @pe
void func_3249(object var_49_object)
{
	var_50_bool = GlobalVars[1];
	if(!var_50_bool) { //@nz
		int var_52_int; object var_53_object;
		var_49_object = var_53_object;
		TaskCall(0);
		func_0(var_54_object, var_52_int, var_53_object);
		TaskReturn();
		var_281_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_282_bool;
	func_3018(var_282_bool, 1);
	if(var_282_bool != 0)
		return 0;
	bool var_285_bool;
	func_3018(var_285_bool, 3);
	if(var_285_bool != 0) {
		int var_287_int; object var_288_object;
		var_49_object = var_288_object;
		TaskCall(4);
		func_626(var_289_object, var_287_int, var_288_object);
		TaskReturn();
		return 0;
	}
	bool var_372_bool;
	func_3018(var_372_bool, 4);
	if(var_372_bool != 0) {
		int var_374_int; object var_375_object;
		var_49_object = var_375_object;
		TaskCall(6);
		func_1307(var_376_object, var_374_int, var_375_object);
		TaskReturn();
		return 0;
	}
	bool var_483_bool;
	func_3018(var_483_bool, 7);
	if(var_483_bool != 0) {
		int var_485_int; object var_486_object;
		var_49_object = var_486_object;
		TaskCall(2);
		func_318(var_487_object, var_485_int, var_486_object);
		TaskReturn();
		return 0;
	}
	bool var_547_bool;
	func_3018(var_547_bool, 12);
	if(var_547_bool != 0) {
		int var_549_int; object var_550_object;
		var_49_object = var_550_object;
		TaskCall(8);
		func_1957(var_551_object, var_549_int, var_550_object);
		TaskReturn();
		return 0;
	}
	int var_608_int; object var_609_object;
	var_49_object = var_609_object;
	TaskCall(10);
	func_2216(var_610_object, var_608_int, var_609_object);
	TaskReturn();
}


void func_2482(void)
{
	float var_667_float;
	@rand(var_667_float, 8, 16);
	@SetTimer(10, var_667_float);
}


void func_2994(cvector var_90_cvector, cvector var_91_cvector)
{
	float var_94_float = sqrt(var_91_cvector | var_91_cvector);
	if(var_94_float < 0.000001)
		var_90_cvector = [0.0, 0.0, 0.0];
	var_90_cvector = var_91_cvector / var_94_float;
}


void func_2491(void)
{
	@KillTimer(10);
}


void func_3004(int var_329_int, string var_330_string)
{
	int var_332_int;
	@GetVariable(var_330_string, var_332_int);
	var_332_int = var_329_int;
}


void func_3009(int var_179_int)
{
	float var_181_float;
	@GetGameTime(var_181_float);
	var_179_int = 1 + (var_181_float / 24);
}


// @pe
void func_707(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_311_object, object var_312_object)
{
	var_0_object = var_312_object;
	var_1_object = var_311_object;
	var_3_string = false;
	if(1 != 0) {
		func_795(var_312_object, "Neutral");
		var_0_object->SetMessage(509978); //@t
		var_0_object->ClearReplies(); //@t
		bool var_327_bool;
		func_3186(var_1_object);
		if(var_327_bool != 0)
			var_0_object->AddReply(509979, 35759, 10997); //@t
		bool var_338_bool;
		func_3102(var_1_object);
		if(var_338_bool != 0)
			var_0_object->AddReply(534183, 35767, 35766); //@t
		bool var_347_bool;
		func_3114(var_1_object);
		if(var_347_bool != 0)
			var_0_object->AddReply(534202, 35786, 35785); //@t
		var_0_object->AddReply(509990, -1, 11009); //@t
		var_0_object->AddReply(509991, -1, 11011); //@t
		goto Label_765;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2c7";
	}
Label_765:
	bool var_362_bool;
	func_3247(var_362_bool);
	if(var_362_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2935(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_794;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_794:
		return 0;

	}
	
}


// @pe
void func_3018(bool var_282_bool, int var_283_int)
{
	int var_284_int;
	func_3009(var_284_int);
	var_282_bool = var_284_int == var_283_int;
}


// @pe
void func_462(object var_2_object, string var_516_string)
{
	bool var_517_bool;
	func_3247(var_517_bool);
	if(!var_517_bool) //@nz
		return 0;
	if(var_516_string == var_2_object)
		return 0;
	string var_520_string; bool var_521_bool;
	var_516_string = var_520_string;
	if(var_516_string == "")
		var_521_bool = false;
	else
		var_521_bool = true;
	func_2951(var_520_string, var_521_bool);
	var_2_object = var_516_string;
	
}


void func_3024(string var_56_string, int var_57_int)
{
	string var_59_string = "idle";
	if(var_57_int != 0)
		var_59_string += var_57_int;
	var_59_string = var_56_string;
}


void func_3031(int var_50_int)
{
	int var_53_int; bool var_54_bool;
	var_53_int = 0;
	
	for(;;) {
		string var_56_string; int var_57_int;
		var_53_int = var_57_int;
		func_3024(var_56_string, var_57_int);
		@HasAnimation(var_54_bool, "all", var_56_string);
		if(!var_54_bool) //@nz
			break;
		var_53_int += 1;
	}
	var_53_int = var_50_int;
}


void func_2779(void)
{
	bool var_275_bool;
	@CameraSwitchToNormal(true);
	bool var_277_bool;
	func_3247(var_277_bool);
	if(var_277_bool != 0) {
	} else {
		@HasAnimationTrack(var_275_bool, "head");
		if(var_275_bool == 0) goto Label_2796;
		@UnlookAsync("head");
	}
Label_2796:
	
}


// @pe
void func_3048(void)
{
	@SetVariable("ood3Notkin2", 1);
}


void func_2797(bool var_124_bool, object var_125_object)
{
	int var_131_int; int var_132_int;
	@GetVariable("voice_common", var_131_int);
	if(var_131_int != 0) {
		bool var_135_bool; object var_136_object;
		var_125_object = var_136_object;
		func_2855(var_135_bool, var_136_object);
		if(!var_135_bool) { //@nz
			bool var_166_bool; object var_167_object;
			var_125_object = var_167_object;
			func_2892(var_166_bool, var_167_object);
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
		func_2892(var_211_bool, var_212_object);
		if(!var_211_bool) { //@nz
			bool var_214_bool; object var_215_object;
			var_125_object = var_215_object;
			func_2855(var_214_bool, var_215_object);
			if(!var_214_bool) { //@nz
				var_124_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2853;
	
Label_2853:
	var_124_bool = true;
	
}


// @pe
void func_3054(void)
{
	@SetVariable("ood3Notkin3", 1);
}


// @pe
void func_1518(object var_2_object, string var_405_string)
{
	bool var_406_bool;
	func_3247(var_406_bool);
	if(!var_406_bool) //@nz
		return 0;
	if(var_405_string == var_2_object)
		return 0;
	string var_409_string; bool var_410_bool;
	var_405_string = var_409_string;
	if(var_405_string == "")
		var_410_bool = false;
	else
		var_410_bool = true;
	func_2951(var_409_string, var_410_bool);
	var_2_object = var_405_string;
	
}


// @pe
void func_3060(void)
{
	@SetVariable("ood4Notkin2", 1);
}


// @pe
void func_2038(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_573_object, object var_574_object)
{
	var_0_object = var_574_object;
	var_1_object = var_573_object;
	var_3_string = false;
	if(1 != 0) {
		func_2101(var_574_object, "Neutral");
		var_0_object->SetMessage(535284); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535285, 36962, 36961); //@t
		var_0_object->AddReply(535292, -1, 36968); //@t
		var_0_object->AddReply(535293, -1, 36969); //@t
		goto Label_2071;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7fa";
	}
Label_2071:
	bool var_598_bool;
	func_3247(var_598_bool);
	if(var_598_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2935(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2100;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2100:
		return 0;

	}
	
}


// @pe
void func_2297(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_632_object, object var_633_object)
{
	var_0_object = var_633_object;
	var_1_object = var_632_object;
	var_3_string = false;
	if(1 != 0) {
		func_2355(var_633_object, "Neutral");
		var_0_object->SetMessage(540542); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540543, -1, 42552); //@t
		var_0_object->AddReply(540796, -1, 42845); //@t
		goto Label_2325;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8fd";
	}
Label_2325:
	bool var_654_bool;
	func_3247(var_654_bool);
	if(var_654_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2935(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2354;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2354:
		return 0;

	}
	
}


// @pe
void func_3066(void)
{
	@SetVariable("ood4Notkin3", 1);
}


