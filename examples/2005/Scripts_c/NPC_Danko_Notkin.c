// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2672();
			if(var_26_bool == 36960) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535284); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535285, 36962, 36961); //@t
				var_0_object->AddReply(535292, -1, 36968); //@t
				var_0_object->AddReply(535293, -1, 36969); //@t
				return 0;
			}
			if(var_26_bool == 36962) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535286); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535287, 36964, 36963); //@t
				var_0_object->AddReply(535291, -1, 36967); //@t
				return 0;
			}
			if(var_26_bool == 36964) {
				func_157(var_27_cvector, "Neutral");
				var_0_object->SetMessage(535288); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535289, -1, 36965); //@t
				var_0_object->AddReply(535290, -1, 36966); //@t
				return 0;
			}
			var_3_string = true;
			bool var_74_bool;
			func_2920(var_74_bool);
			if(var_74_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2672();
			if(var_26_bool == 243) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2769();
				func_416(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500207, 256, 245); //@t
				var_0_object->AddReply(500206, 246, 244); //@t
				return 0;
			}
			if(var_26_bool == 246) {
				func_416(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500209, 249, 247); //@t
				var_0_object->AddReply(500210, 250, 248); //@t
				return 0;
			}
			if(var_26_bool == 250) {
				func_416(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500215, 249, 253); //@t
				return 0;
			}
			if(var_26_bool == 249) {
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_2763();
				func_416(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500211); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500213, 252, 251); //@t
				return 0;
			}
			if(var_26_bool == 252) {
				func_416(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500214); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500216, -1, 255); //@t
				return 0;
			}
			if(var_26_bool == 256) {
				func_416(var_27_cvector, "Neutral");
				var_0_object->SetMessage(500217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(500218, -1, 257); //@t
				var_0_object->AddReply(500219, -1, 258); //@t
				return 0;
			}
			var_3_string = true;
			bool var_100_bool;
			func_2920(var_100_bool);
			if(var_100_bool != 0)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2672();
			if(var_27_cvector == 10997) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2775();
			}
			if(var_27_cvector == 35766) {
				object var_38_object; object var_39_object;
				var_38_object = var_1_object;
				var_39_object = var_0_object;
				func_2739();
			}
			if(var_27_cvector == 35785) {
				object var_44_object; object var_45_object;
				var_44_object = var_1_object;
				var_45_object = var_0_object;
				func_2745();
			}
			if(var_26_bool == 10996) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(509978); //@t
				var_0_object->ClearReplies(); //@t
				bool var_63_bool;
				func_2859(var_1_object);
				if(var_63_bool != 0)
					var_0_object->AddReply(509979, 35759, 10997); //@t
				bool var_74_bool;
				func_2787(var_1_object);
				if(var_74_bool != 0)
					var_0_object->AddReply(534183, 35767, 35766); //@t
				bool var_83_bool;
				func_2799(var_1_object);
				if(var_83_bool != 0)
					var_0_object->AddReply(534202, 35786, 35785); //@t
				var_0_object->AddReply(509990, -1, 11009); //@t
				var_0_object->AddReply(509991, -1, 11011); //@t
				return 0;
			}
			if(var_26_bool == 35786) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534203); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534204, 35788, 35787); //@t
				var_0_object->AddReply(534215, -1, 35798); //@t
				return 0;
			}
			if(var_26_bool == 35788) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534205); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534206, 35790, 35789); //@t
				var_0_object->AddReply(534214, -1, 35797); //@t
				return 0;
			}
			if(var_26_bool == 35790) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534207); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534208, 35792, 35791); //@t
				var_0_object->AddReply(534211, 35795, 35794); //@t
				return 0;
			}
			if(var_26_bool == 35795) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534212); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534213, -1, 35796); //@t
				return 0;
			}
			if(var_26_bool == 35792) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534209); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534210, -1, 35793); //@t
				return 0;
			}
			if(var_26_bool == 35767) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534184); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534185, 35769, 35768); //@t
				var_0_object->AddReply(534198, 35782, 35781); //@t
				return 0;
			}
			if(var_26_bool == 35782) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534199); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534200, -1, 35783); //@t
				var_0_object->AddReply(534201, -1, 35784); //@t
				return 0;
			}
			if(var_26_bool == 35769) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534186); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534187, 35771, 35770); //@t
				var_0_object->AddReply(534195, 35779, 35778); //@t
				return 0;
			}
			if(var_26_bool == 35779) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534196); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534197, -1, 35780); //@t
				return 0;
			}
			if(var_26_bool == 35771) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534188); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534189, 35773, 35772); //@t
				return 0;
			}
			if(var_26_bool == 35773) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534190); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534191, -1, 35774); //@t
				var_0_object->AddReply(534192, 35776, 35775); //@t
				return 0;
			}
			if(var_26_bool == 35776) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534193); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534194, -1, 35777); //@t
				return 0;
			}
			if(var_26_bool == 35759) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534176); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534177, 10998, 35760); //@t
				var_0_object->AddReply(534178, 35800, 35761); //@t
				return 0;
			}
			if(var_26_bool == 35800) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534218, 35802, 35801); //@t
				var_0_object->AddReply(534223, 35802, 35806); //@t
				return 0;
			}
			if(var_26_bool == 35802) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534219); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534220, -1, 35803); //@t
				var_0_object->AddReply(534221, -1, 35804); //@t
				return 0;
			}
			if(var_26_bool == 10998) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(509980); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509981, 11000, 10999); //@t
				var_0_object->AddReply(509988, 11000, 11006); //@t
				var_0_object->AddReply(509989, -1, 11008); //@t
				return 0;
			}
			if(var_26_bool == 11000) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(509982); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509983, -1, 11001); //@t
				var_0_object->AddReply(509984, 11003, 11002); //@t
				return 0;
			}
			if(var_26_bool == 11003) {
				func_759(var_27_cvector, "Neutral");
				var_0_object->SetMessage(509985); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(509986, -1, 11004); //@t
				var_0_object->AddReply(509987, -1, 11005); //@t
				return 0;
			}
			var_3_string = true;
			bool var_266_bool;
			func_2920(var_266_bool);
			if(var_266_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x30e";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2672();
			if(var_27_cvector == 12400) {
				object var_32_object; object var_33_object;
				var_32_object = var_1_object;
				var_33_object = var_0_object;
				func_2781();
			}
			if(var_27_cvector == 35808) {
				object var_38_object; object var_39_object;
				var_38_object = var_1_object;
				var_39_object = var_0_object;
				func_2751();
			}
			if(var_27_cvector == 35839) {
				object var_44_object; object var_45_object;
				var_44_object = var_1_object;
				var_45_object = var_0_object;
				func_2757();
			}
			if(var_26_bool == 12399) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(511211); //@t
				var_0_object->ClearReplies(); //@t
				bool var_63_bool = true;
				bool var_64_bool = false;
				bool var_65_bool = false;
				bool var_66_bool;
				func_2835(var_1_object);
				if(var_66_bool != 0) {
					bool var_74_bool;
					func_2883(var_1_object);
					if(var_74_bool != 0)
						var_65_bool = true;
				}
				if(var_65_bool != 0) {
					bool var_80_bool;
					func_2847(var_1_object);
					if(!var_80_bool) //@nz
						var_64_bool = true;
				}
				if(var_64_bool != 1) {
					bool var_87_bool = false;
					bool var_88_bool = false;
					bool var_89_bool;
					func_2871(var_1_object);
					if(var_89_bool != 0) {
						bool var_95_bool;
						func_2883(var_1_object);
						if(var_95_bool != 0)
							var_88_bool = true;
					}
					if(var_88_bool != 0) {
						bool var_97_bool;
						func_2847(var_1_object);
						if(!var_97_bool) //@nz
							var_87_bool = true;
					}
					if(var_87_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_0_object->AddReply(511212, 12401, 12400); //@t
				bool var_103_bool;
				func_2811(var_1_object);
				if(var_103_bool != 0)
					var_0_object->AddReply(534224, 35809, 35808); //@t
				bool var_112_bool;
				func_2823(var_1_object);
				if(var_112_bool != 0)
					var_0_object->AddReply(534252, 35840, 35839); //@t
				var_0_object->AddReply(515335, -1, 16558); //@t
				return 0;
			}
			if(var_26_bool == 35840) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534253); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534254, 35842, 35841); //@t
				var_0_object->AddReply(534266, 35842, 35853); //@t
				return 0;
			}
			if(var_26_bool == 35842) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534255); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534256, 35844, 35843); //@t
				var_0_object->AddReply(534263, 35851, 35850); //@t
				return 0;
			}
			if(var_26_bool == 35851) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534265, -1, 35852); //@t
				return 0;
			}
			if(var_26_bool == 35844) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534257); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534258, 35846, 35845); //@t
				var_0_object->AddReply(534262, -1, 35849); //@t
				return 0;
			}
			if(var_26_bool == 35846) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534259); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534260, -1, 35847); //@t
				var_0_object->AddReply(534261, -1, 35848); //@t
				return 0;
			}
			if(var_26_bool == 35809) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534225); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534226, 35811, 35810); //@t
				return 0;
			}
			if(var_26_bool == 35811) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534227); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534228, 35813, 35812); //@t
				var_0_object->AddReply(534234, 35813, 35818); //@t
				return 0;
			}
			if(var_26_bool == 35813) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(534229); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534230, -1, 35814); //@t
				var_0_object->AddReply(534233, -1, 35817); //@t
				return 0;
			}
			if(var_26_bool == 12401) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(511213); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511214, 12403, 12402); //@t
				var_0_object->AddReply(511223, 12413, 12412); //@t
				return 0;
			}
			if(var_26_bool == 12413) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(511224); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511225, 12405, 12414); //@t
				return 0;
			}
			if(var_26_bool == 12403) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(511215); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511220, 12409, 12408); //@t
				var_0_object->AddReply(511216, 12405, 12404); //@t
				return 0;
			}
			if(var_26_bool == 12405) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(511217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511218, -1, 12406); //@t
				var_0_object->AddReply(511219, -1, 12407); //@t
				return 0;
			}
			if(var_26_bool == 12409) {
				func_1482(var_27_cvector, "Neutral");
				var_0_object->SetMessage(511221); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(511222, 12405, 12410); //@t
				return 0;
			}
			var_3_string = true;
			bool var_242_bool;
			func_2920(var_242_bool);
			if(var_242_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5e1";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, cvector var_27_cvector)
	{
		if(1 != 0) {
			func_2672();
			if(var_26_int == 42551) {
				func_2060(var_27_cvector, "Neutral");
				var_0_object->SetMessage(540542); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540543, -1, 42552); //@t
				var_0_object->AddReply(540796, -1, 42845); //@t
				return 0;
			}
			var_3_string = true;
			bool var_51_bool;
			func_2920(var_51_bool);
			if(var_51_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x823";
	
	}

}


maintask task_11
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		var_26_bool = GlobalVars[1];
		GlobalVars[1] = false;
		func_2131(var_25_cvector);
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, int var_26_int)
	{
		if(var_26_int == 10) {
			func_2202();
			bool var_30_bool = false;
			bool var_31_bool;
			func_2416(var_31_bool);
			if(var_31_bool != 0) {
				bool var_34_bool;
				func_2171(var_34_bool);
				if(var_34_bool != 0)
					var_30_bool = true;
			}
			if(var_30_bool != 0) {
				bool var_51_bool;
				func_2151(var_51_bool);
				if(var_51_bool != 0) {
					bool var_70_bool; object var_71_object;
					object var_72_object;
					func_2679(var_72_object);
					var_72_object = var_71_object;
					func_2564(var_70_bool, var_71_object);
				}
			} else {
				func_2166(var_26_int);
				func_2193();
			}
		}
	
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
	{
		func_2384();
		func_2202();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector)
		{
		@StopGroup0();
		func_2202();
		func_2644("Neutral");
		func_2193();
		}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, bool var_26_bool)
	{
		if(var_26_bool != 0)
			func_2193();
		else
			func_2644("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, cvector var_25_cvector, object var_26_object)
	{
		bool var_28_bool;
		@IsOverrideActive(var_28_bool);
		if(!var_28_bool) { //@nz
			disable OnUse;
			func_2384();
			bool var_30_bool; object var_31_object;
			var_26_object = var_31_object;
			func_2407(var_30_bool, var_31_object);
			enable OnUse;
			object var_44_object;
			var_26_object = var_44_object;
			func_2922(var_44_object);
			func_2644("Neutral");
			func_2202();
			func_2193();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_31_bool;
	func_2416(var_31_bool);
	if(!var_31_bool) goto Label_0; //@nz
}


void func_2564(bool var_69_bool, object var_70_object)
{
	string var_76_string; bool var_78_bool; int var_79_int; string var_80_string;
	var_76_string = "c";
	int var_77_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_70_object->HasProperty((var_76_string + (var_77_int + 1)), var_78_bool);
			if(!var_78_bool) { //@nz
			} else {
				var_77_int += 1;
			}
		}
		if(!var_77_int) { //@nz
			var_69_bool = false;
			return 10;
		}
		var_79_int = 0;
		if(var_77_int > 1)
			@irand(var_79_int, var_77_int);
		var_70_object->GetProperty((var_76_string + (var_79_int + 1)), var_80_string);
		bool var_92_bool; string var_93_string;
		var_80_string = var_93_string;
		func_2657(var_92_bool, var_93_string);
		var_92_bool = var_69_bool;
		return 10;

	}
}


// @pe
void func_2823(bool var_444_bool)
{
	int var_446_int;
	func_2695(var_446_int, "ood4Notkin3");
	if(var_446_int == 0) {
		var_444_bool = true;
		return 0;
	}
	var_444_bool = false;
}


void func_2313(void)
{
	bool var_53_bool; int var_54_int; int var_55_int; bool var_56_bool;
	@WaitForAnimEnd();
	bool var_57_bool;
	func_2416(var_57_bool);
	if(!var_57_bool) //@nz
		return 12;
	int var_59_int;
	func_2722(var_59_int);
	int var_51_int;
	var_59_int = var_51_int;
	int var_52_int = 0;
	
	for(;;) {
		bool var_72_bool = false;
		if(var_52_int < 5) {
			bool var_75_bool;
			func_2416(var_75_bool);
			if(var_75_bool != 0)
				var_72_bool = true;
		}
		if(var_72_bool != 0) {
			if(!var_51_int) { //@nz
				@Sleep(3, var_53_bool);
				if(!var_53_bool) { //@nz
				} else {
			} else {
			@irand(var_54_int, var_51_int);
			@irand(var_55_int, 5);
			if(var_55_int != 0)
				var_54_int = 0;
			string var_86_string; int var_87_int;
			var_54_int = var_87_int;
			func_2715(var_86_string, var_87_int);
			@PlayAnimation("all", var_86_string);
			@WaitForAnimEnd(var_56_bool);
			var_88_bool = !var_56_bool; //@nz
			if(var_88_bool == 0) goto Label_2368;
			goto Label_2379;
			}
				Label_2368:
					bool var_79_bool;
					func_2382(var_79_bool);
					var_80_bool = !var_79_bool; //@nz
					if(var_80_bool == 0) goto Label_2374;
			}
		}
	Label_2379:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2374:
		@ResetAAS();
		var_52_int += 1;
	}
	
}


// @pe
void func_2060(object var_2_object, string var_558_string)
{
	bool var_559_bool;
	func_2920(var_559_bool);
	if(!var_559_bool) //@nz
		return 0;
	if(var_558_string == var_2_object)
		return 0;
	string var_562_string; bool var_563_bool;
	var_558_string = var_562_string;
	if(var_558_string == "")
		var_563_bool = false;
	else
		var_563_bool = true;
	func_2651(var_562_string, var_563_bool);
	var_2_object = var_558_string;
	
}


void func_13(object var_0_object, int var_468_int, object var_469_object)
{
	var_0_object = var_469_object;
	bool var_479_bool; object var_480_object;
	object var_481_object;
	func_2679(var_481_object);
	var_481_object = var_480_object;
	func_2506(var_479_bool, var_480_object);
	bool var_482_bool; object var_483_object;
	var_469_object = var_483_object;
	func_2421(var_482_bool, var_483_object, 70.0);
	if(!var_482_bool) { //@nz
		var_468_int = -2;
		return 8;
	}
	object var_475_object;
	@CreateDialog(var_475_object);
	int var_486_int;
	func_2914(var_486_int);
	var_475_object->SetNPCName(var_486_int);
	int var_487_int;
	func_2912(var_487_int);
	var_475_object->SetNPCDescription(var_487_int);
	string var_488_string;
	func_2916(var_488_string);
	var_475_object->SetPhoto(var_488_string);
	string var_489_string;
	func_2918(var_489_string);
	var_475_object->SetPhoto2(var_489_string);
	int var_490_int;
	func_2895(var_490_int);
	var_475_object->SetPlayerName(var_490_int);
	bool var_476_bool;
	@IsOverrideActive(var_476_bool);
	if(var_476_bool != 0) {
		var_468_int = -2;
		return 8;
	}
	@DoDialog(var_475_object);
	object var_492_object; object var_493_object;
	var_469_object = var_492_object;
	var_475_object = var_493_object;
	TaskCall(2);
	func_94(var_494_object, var_495_object, var_496_string, var_497_bool, var_492_object, var_493_object);
	TaskReturn();
	bool var_478_bool;
	var_475_object->IsDialogEnd(var_478_bool);
	
	for(;;) {
		var_525_bool = !var_478_bool; //@nz
		if(var_525_bool == 0) goto Label_83;
		@sync();
		var_475_object->IsDialogEnd(var_478_bool);
	}
	
Label_83:
	object var_526_object;
	var_469_object = var_526_object;
	func_2489();
	@StopDialog(var_475_object);
	var_475_object->GetReturnValue(-1);
	int var_477_int = var_468_int;
}
EMIT "Stack[-4] = 0";


void func_272(object var_0_object, int var_47_int, object var_48_object)
{
	var_0_object = var_48_object;
	bool var_58_bool; object var_59_object;
	object var_60_object;
	func_2679(var_60_object);
	var_60_object = var_59_object;
	func_2506(var_58_bool, var_59_object);
	bool var_153_bool; object var_154_object;
	var_48_object = var_154_object;
	func_2421(var_153_bool, var_154_object, 70.0);
	if(!var_153_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_200_int;
	func_2914(var_200_int);
	var_54_object->SetNPCName(var_200_int);
	int var_201_int;
	func_2912(var_201_int);
	var_54_object->SetNPCDescription(var_201_int);
	string var_202_string;
	func_2916(var_202_string);
	var_54_object->SetPhoto(var_202_string);
	string var_203_string;
	func_2918(var_203_string);
	var_54_object->SetPhoto2(var_203_string);
	int var_204_int;
	func_2895(var_204_int);
	var_54_object->SetPlayerName(var_204_int);
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	@DoDialog(var_54_object);
	object var_213_object; object var_214_object;
	var_48_object = var_213_object;
	var_54_object = var_214_object;
	TaskCall(4);
	func_353(var_215_object, var_216_object, var_217_string, var_218_bool, var_213_object, var_214_object);
	TaskReturn();
	bool var_57_bool;
	var_54_object->IsDialogEnd(var_57_bool);
	
	for(;;) {
		var_256_bool = !var_57_bool; //@nz
		if(var_256_bool == 0) goto Label_342;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_342:
	object var_257_object;
	var_48_object = var_257_object;
	func_2489();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2835(bool var_400_bool)
{
	int var_402_int;
	func_2695(var_402_int, "d4q03");
	if(var_402_int == 2)
		var_400_bool = true;
	var_400_bool = false;
}


// @pe
void func_2847(bool var_412_bool)
{
	int var_414_int;
	func_2695(var_414_int, "d4q03_alldead");
	if(var_414_int == 1)
		var_412_bool = true;
	var_412_bool = false;
}


void func_2601(bool var_100_bool, object var_101_object)
{
	bool var_109_bool; int var_110_int; string var_111_string;
	int var_113_int;
	func_2700(var_113_int);
	string var_107_string = ("d" + var_113_int) + "m";
	int var_108_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_101_object->HasProperty((var_107_string + (var_108_int + 1)), var_109_bool);
			if(!var_109_bool) { //@nz
			} else {
				var_108_int += 1;
			}
		}
		if(!var_108_int) { //@nz
			var_100_bool = false;
			return 10;
		}
		var_110_int = 0;
		if(var_108_int > 1)
			@irand(var_110_int, var_108_int);
		var_101_object->GetProperty((var_107_string + (var_110_int + 1)), var_111_string);
		bool var_132_bool; string var_133_string;
		var_111_string = var_133_string;
		func_2657(var_132_bool, var_133_string);
		var_132_bool = var_100_bool;
		return 10;

	}
}


// @pe
void func_2859(bool var_310_bool)
{
	int var_312_int;
	func_2695(var_312_int, "ood3Notkin1");
	if(var_312_int == 0) {
		var_310_bool = true;
		return 0;
	}
	var_310_bool = false;
}


// @pe
void func_2871(bool var_421_bool)
{
	int var_423_int;
	func_2695(var_423_int, "d4q03");
	if(var_423_int == 3)
		var_421_bool = true;
	var_421_bool = false;
}


// @pe
void func_2883(bool var_406_bool)
{
	int var_408_int;
	func_2695(var_408_int, "ood4Notkin1");
	if(var_408_int == 0) {
		var_406_bool = true;
		return 0;
	}
	var_406_bool = false;
}


// @pe
void func_1352(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_381_object, object var_382_object)
{
	var_0_object = var_382_object;
	var_1_object = var_381_object;
	var_3_string = false;
	if(1 != 0) {
		func_1482(var_382_object, "Neutral");
		var_0_object->SetMessage(511211); //@t
		var_0_object->ClearReplies(); //@t
		bool var_397_bool = true;
		bool var_398_bool = false;
		bool var_399_bool = false;
		bool var_400_bool;
		func_2835(var_1_object);
		if(var_400_bool != 0) {
			bool var_406_bool;
			func_2883(var_1_object);
			if(var_406_bool != 0)
				var_399_bool = true;
		}
		if(var_399_bool != 0) {
			bool var_412_bool;
			func_2847(var_1_object);
			if(!var_412_bool) //@nz
				var_398_bool = true;
		}
		if(var_398_bool != 1) {
			bool var_419_bool = false;
			bool var_420_bool = false;
			bool var_421_bool;
			func_2871(var_1_object);
			if(var_421_bool != 0) {
				bool var_427_bool;
				func_2883(var_1_object);
				if(var_427_bool != 0)
					var_420_bool = true;
			}
			if(var_420_bool != 0) {
				bool var_429_bool;
				func_2847(var_1_object);
				if(!var_429_bool) //@nz
					var_419_bool = true;
			}
			if(var_419_bool != 1)
				var_397_bool = false;
		}
		if(var_397_bool != 0)
			var_0_object->AddReply(511212, 12401, 12400); //@t
		bool var_435_bool;
		func_2811(var_1_object);
		if(var_435_bool != 0)
			var_0_object->AddReply(534224, 35809, 35808); //@t
		bool var_444_bool;
		func_2823(var_1_object);
		if(var_444_bool != 0)
			var_0_object->AddReply(534252, 35840, 35839); //@t
		var_0_object->AddReply(515335, -1, 16558); //@t
		goto Label_1452;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x54c";
	}
Label_1452:
	bool var_456_bool;
	func_2920(var_456_bool);
	if(var_456_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2644(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1481;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1481:
		return 0;

	}
	
}


void func_590(object var_0_object, int var_270_int, object var_271_object)
{
	var_0_object = var_271_object;
	bool var_281_bool; object var_282_object;
	object var_283_object;
	func_2679(var_283_object);
	var_283_object = var_282_object;
	func_2506(var_281_bool, var_282_object);
	bool var_284_bool; object var_285_object;
	var_271_object = var_285_object;
	func_2421(var_284_bool, var_285_object, 70.0);
	if(!var_284_bool) { //@nz
		var_270_int = -2;
		return 8;
	}
	object var_277_object;
	@CreateDialog(var_277_object);
	int var_288_int;
	func_2914(var_288_int);
	var_277_object->SetNPCName(var_288_int);
	int var_289_int;
	func_2912(var_289_int);
	var_277_object->SetNPCDescription(var_289_int);
	string var_290_string;
	func_2916(var_290_string);
	var_277_object->SetPhoto(var_290_string);
	string var_291_string;
	func_2918(var_291_string);
	var_277_object->SetPhoto2(var_291_string);
	int var_292_int;
	func_2895(var_292_int);
	var_277_object->SetPlayerName(var_292_int);
	bool var_278_bool;
	@IsOverrideActive(var_278_bool);
	if(var_278_bool != 0) {
		var_270_int = -2;
		return 8;
	}
	@DoDialog(var_277_object);
	object var_294_object; object var_295_object;
	var_271_object = var_294_object;
	var_277_object = var_295_object;
	TaskCall(6);
	func_671(var_296_object, var_297_object, var_298_string, var_299_bool, var_294_object, var_295_object);
	TaskReturn();
	bool var_280_bool;
	var_277_object->IsDialogEnd(var_280_bool);
	
	for(;;) {
		var_353_bool = !var_280_bool; //@nz
		if(var_353_bool == 0) goto Label_660;
		@sync();
		var_277_object->IsDialogEnd(var_280_bool);
	}
	
Label_660:
	object var_354_object;
	var_271_object = var_354_object;
	func_2489();
	@StopDialog(var_277_object);
	var_277_object->GetReturnValue(-1);
	int var_279_int = var_270_int;
}
EMIT "Stack[-4] = 0";


void func_2382(bool var_79_bool)
{
	var_79_bool = true;
}


void func_2895(int var_204_int)
{
	int var_206_int;
	@GetVariable("branch", var_206_int);
	if(var_206_int == 0) {
		var_204_int = 1;
		return 2;
	EMIT "GOTO 0xb5e";
	}
	if(var_206_int == 1) {
		var_204_int = 2;
		return 2;
	}
	var_204_int = 3;
}


void func_2384(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2131(object var_0_object)
{
	bool var_27_bool;
	func_2416(var_27_bool);
	if(!var_27_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2259();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_2313();
	}
}
EMIT "Return(); Pop(0)";


void func_2644(string var_34_string)
{
	float var_37_float; float var_38_float;
	@lshGetAnimTimes(var_34_string, var_37_float, var_38_float);
	@lshPlayAnimation(var_37_float, var_38_float, false);
}


void func_2389(float var_41_float, object var_42_object)
{
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	var_42_object->GetPosition(var_47_cvector);
	var_41_float = (var_47_cvector - var_46_cvector) | (var_47_cvector - var_46_cvector);
}


void func_2651(string var_228_string, bool var_229_bool)
{
	float var_234_float; float var_235_float;
	@lshGetAnimTimes(var_228_string, var_234_float, var_235_float);
	@lshPlayAnimation(var_234_float, var_235_float, var_229_bool);
}


void func_2397(bool var_34_bool, cvector var_35_cvector)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector = var_35_cvector - var_39_cvector;
	var_42_float = GetByIndex(var_40_cvector, 0);
	var_43_float = GetByIndex(var_40_cvector, 2);
	bool var_41_bool;
	@Rotate(var_42_float, var_43_float, var_41_bool);
	var_41_bool = var_34_bool;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_492_object, object var_493_object)
{
	var_0_object = var_493_object;
	var_1_object = var_492_object;
	var_3_string = false;
	if(1 != 0) {
		func_157(var_493_object, "Neutral");
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
	bool var_517_bool;
	func_2920(var_517_bool);
	if(var_517_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2644(var_2_object);
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


void func_2912(int var_201_int)
{
	var_201_int = 515548;
}


// @pe
void func_353(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_213_object, object var_214_object)
{
	var_0_object = var_214_object;
	var_3_string = false;
	if(1 != 0) {
		object var_220_object; object var_221_object;
		var_220_object = var_213_object;
		var_221_object = var_0_object;
		func_2769();
		func_416(var_214_object, "Neutral");
		var_0_object->SetMessage(500205); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(500207, 256, 245); //@t
		var_0_object->AddReply(500206, 246, 244); //@t
		goto Label_386;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x165";
	}
Label_386:
	bool var_243_bool;
	func_2920(var_243_bool);
	if(var_243_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2644(var_2_object);
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


void func_2914(int var_200_int)
{
	var_200_int = 502873;
}


void func_2657(bool var_92_bool, string var_93_string)
{
	bool var_95_bool;
	bool var_96_bool;
	func_2920(var_96_bool);
	if(var_96_bool != 0) {
		@lshHasSpeech(var_95_bool, var_93_string);
		if(var_95_bool != 0) {
			@lshPlaySpeech(var_93_string);
			var_92_bool = true;
		}
	}
	var_92_bool = false;
}


void func_2916(string var_202_string)
{
	var_202_string = "ui/NPC_Notkin.png";
}


void func_2918(string var_203_string)
{
	var_203_string = "ui/NPC_Notkin_b.png";
}


void func_2407(bool var_30_bool, object var_31_object)
{
	cvector var_33_cvector;
	var_31_object->GetPosition(var_33_cvector);
	bool var_34_bool; cvector var_35_cvector;
	var_33_cvector = var_35_cvector;
	func_2397(var_34_bool, var_35_cvector);
	var_34_bool = var_30_bool;
}


void func_2920(bool var_96_bool)
{
	var_96_bool = true;
}


void func_2151(bool var_51_bool)
{
	object var_53_object;
	@FindActor(var_53_object, "player");
	if(!var_53_object) //@nz
		var_51_bool = false;
	bool var_56_bool; object var_57_object;
	var_53_object = var_57_object;
	func_2407(var_56_bool, var_57_object);
	var_56_bool = var_51_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2922(object var_44_object)
{
	var_45_bool = GlobalVars[1];
	if(!var_45_bool) { //@nz
		int var_47_int; object var_48_object;
		var_44_object = var_48_object;
		TaskCall(3);
		func_272(var_49_object, var_47_int, var_48_object);
		TaskReturn();
		var_264_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_265_bool;
	func_2709(var_265_bool, 1);
	if(var_265_bool != 0)
		return 0;
	bool var_268_bool;
	func_2709(var_268_bool, 3);
	if(var_268_bool != 0) {
		int var_270_int; object var_271_object;
		var_44_object = var_271_object;
		TaskCall(5);
		func_590(var_272_object, var_270_int, var_271_object);
		TaskReturn();
		return 0;
	}
	bool var_355_bool;
	func_2709(var_355_bool, 4);
	if(var_355_bool != 0) {
		int var_357_int; object var_358_object;
		var_44_object = var_358_object;
		TaskCall(7);
		func_1271(var_359_object, var_357_int, var_358_object);
		TaskReturn();
		return 0;
	}
	bool var_466_bool;
	func_2709(var_466_bool, 12);
	if(var_466_bool != 0) {
		int var_468_int; object var_469_object;
		var_44_object = var_469_object;
		TaskCall(1);
		func_13(var_470_object, var_468_int, var_469_object);
		TaskReturn();
		return 0;
	}
	int var_527_int; object var_528_object;
	var_44_object = var_528_object;
	TaskCall(9);
	func_1921(var_529_object, var_527_int, var_528_object);
	TaskReturn();
}


void func_2416(bool var_27_bool)
{
	bool var_29_bool;
	@IsLoaded(var_29_bool);
	var_29_bool = var_27_bool;
}


void func_2672(void)
{
	bool var_29_bool;
	func_2920(var_29_bool);
	if(var_29_bool != 0)
		@lshStopSpeech();
}


void func_2421(bool var_153_bool, object var_154_object, float var_155_float)
{
	cvector var_166_cvector; bool var_173_bool;
	var_154_object->GetPosition(var_166_cvector);
	float var_165_float;
	var_154_object->GetEyesHeight(var_165_float);
	var_174_float = GetByIndex(var_166_cvector, 1);
	SetByIndex(var_166_cvector, 1) = (var_174_float + var_165_float);
	cvector var_167_cvector;
	@GetPosition(var_167_cvector);
	@GetEyesHeight(var_165_float);
	var_175_float = GetByIndex(var_167_cvector, 1);
	SetByIndex(var_167_cvector, 1) = (var_175_float + var_165_float);
	cvector var_168_cvector = var_166_cvector - var_167_cvector;
	var_176_float = GetByIndex(var_168_cvector, 1);
	SetByIndex(var_168_cvector, 1) = (float)0;
	var_178_float = sqrt(var_168_cvector | var_168_cvector);
	var_168_cvector /= var_178_float;
	cvector var_169_cvector = -var_168_cvector;
	cvector var_180_cvector;
	func_2685(var_180_cvector, (var_169_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_170_cvector = ((var_168_cvector * var_155_float) + (var_180_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_172_bool;
	@IsOverrideActive(var_172_bool);
	if(var_172_bool != 0)
		var_153_bool = false;
	@StopWorld();
	@CameraTransit((var_167_cvector + var_170_cvector), var_169_cvector);
	var_193_float = GetByIndex(var_170_cvector, 0);
	var_194_float = GetByIndex(var_170_cvector, 2);
	@Rotate(var_193_float, var_194_float);
	bool var_195_bool;
	func_2920(var_195_bool);
	if(var_195_bool != 0) {
	} else {
		@HasAnimationTrack(var_173_bool, "head");
		if(var_173_bool == 0) goto Label_2483;
		@LookAsyncCamera("head");
	}
Label_2483:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_153_bool = true;
	
}


void func_2166(object var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0);
	var_104_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_103_float, var_104_float);
}


void func_2679(object var_60_object)
{
	object var_62_object;
	@self(var_62_object);
	var_62_object = var_60_object;
}
EMIT "Stack[-1] = 0";


void func_2171(bool var_34_bool)
{
	object var_37_object;
	@FindActor(var_37_object, "player");
	if(!var_37_object) { //@nz
		var_34_bool = false;
		return 4;
	}
	float var_41_float; object var_42_object;
	func_2389(var_41_float, var_42_object);
	if(var_41_float > 90000.0) {
		var_34_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_42_object);
	var_38_bool = var_34_bool;
}
EMIT "Stack[-2] = 0";


void func_2685(cvector var_180_cvector, cvector var_181_cvector)
{
	float var_184_float = sqrt(var_181_cvector | var_181_cvector);
	if(var_184_float < 0.000001)
		var_180_cvector = [0.0, 0.0, 0.0];
	var_180_cvector = var_181_cvector / var_184_float;
}


void func_1921(object var_0_object, int var_527_int, object var_528_object)
{
	var_0_object = var_528_object;
	bool var_538_bool; object var_539_object;
	object var_540_object;
	func_2679(var_540_object);
	var_540_object = var_539_object;
	func_2506(var_538_bool, var_539_object);
	bool var_541_bool; object var_542_object;
	var_528_object = var_542_object;
	func_2421(var_541_bool, var_542_object, 70.0);
	if(!var_541_bool) { //@nz
		var_527_int = -2;
		return 8;
	}
	object var_534_object;
	@CreateDialog(var_534_object);
	int var_545_int;
	func_2914(var_545_int);
	var_534_object->SetNPCName(var_545_int);
	int var_546_int;
	func_2912(var_546_int);
	var_534_object->SetNPCDescription(var_546_int);
	string var_547_string;
	func_2916(var_547_string);
	var_534_object->SetPhoto(var_547_string);
	string var_548_string;
	func_2918(var_548_string);
	var_534_object->SetPhoto2(var_548_string);
	int var_549_int;
	func_2895(var_549_int);
	var_534_object->SetPlayerName(var_549_int);
	bool var_535_bool;
	@IsOverrideActive(var_535_bool);
	if(var_535_bool != 0) {
		var_527_int = -2;
		return 8;
	}
	@DoDialog(var_534_object);
	object var_551_object; object var_552_object;
	var_528_object = var_551_object;
	var_534_object = var_552_object;
	TaskCall(10);
	func_2002(var_553_object, var_554_object, var_555_string, var_556_bool, var_551_object, var_552_object);
	TaskReturn();
	bool var_537_bool;
	var_534_object->IsDialogEnd(var_537_bool);
	
	for(;;) {
		var_581_bool = !var_537_bool; //@nz
		if(var_581_bool == 0) goto Label_1991;
		@sync();
		var_534_object->IsDialogEnd(var_537_bool);
	}
	
Label_1991:
	object var_582_object;
	var_528_object = var_582_object;
	func_2489();
	@StopDialog(var_534_object);
	var_534_object->GetReturnValue(-1);
	int var_536_int = var_527_int;
}
EMIT "Stack[-4] = 0";


void func_2695(int var_312_int, string var_313_string)
{
	int var_315_int;
	@GetVariable(var_313_string, var_315_int);
	var_315_int = var_312_int;
}


void func_2700(int var_113_int)
{
	float var_115_float;
	@GetGameTime(var_115_float);
	var_113_int = 1 + (var_115_float / 24);
}


void func_2193(void)
{
	float var_41_float;
	@rand(var_41_float, 8, 16);
	@SetTimer(10, var_41_float);
}


// @pe
void func_2709(bool var_265_bool, int var_266_int)
{
	int var_267_int;
	func_2700(var_267_int);
	var_265_bool = var_267_int == var_266_int;
}


void func_2202(void)
{
	@KillTimer(10);
}


void func_2715(string var_65_string, int var_66_int)
{
	string var_68_string = "idle";
	if(var_66_int != 0)
		var_68_string += var_66_int;
	var_68_string = var_65_string;
}


// @pe
void func_157(object var_2_object, string var_499_string)
{
	bool var_500_bool;
	func_2920(var_500_bool);
	if(!var_500_bool) //@nz
		return 0;
	if(var_499_string == var_2_object)
		return 0;
	string var_503_string; bool var_504_bool;
	var_499_string = var_503_string;
	if(var_499_string == "")
		var_504_bool = false;
	else
		var_504_bool = true;
	func_2651(var_503_string, var_504_bool);
	var_2_object = var_499_string;
	
}


// @pe
void func_671(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_294_object, object var_295_object)
{
	var_0_object = var_295_object;
	var_1_object = var_294_object;
	var_3_string = false;
	if(1 != 0) {
		func_759(var_295_object, "Neutral");
		var_0_object->SetMessage(509978); //@t
		var_0_object->ClearReplies(); //@t
		bool var_310_bool;
		func_2859(var_1_object);
		if(var_310_bool != 0)
			var_0_object->AddReply(509979, 35759, 10997); //@t
		bool var_321_bool;
		func_2787(var_1_object);
		if(var_321_bool != 0)
			var_0_object->AddReply(534183, 35767, 35766); //@t
		bool var_330_bool;
		func_2799(var_1_object);
		if(var_330_bool != 0)
			var_0_object->AddReply(534202, 35786, 35785); //@t
		var_0_object->AddReply(509990, -1, 11009); //@t
		var_0_object->AddReply(509991, -1, 11011); //@t
		goto Label_729;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x2a3";
	}
Label_729:
	bool var_345_bool;
	func_2920(var_345_bool);
	if(var_345_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2644(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_758;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_758:
		return 0;

	}
	
}


// @pe
void func_416(object var_2_object, string var_224_string)
{
	bool var_225_bool;
	func_2920(var_225_bool);
	if(!var_225_bool) //@nz
		return 0;
	if(var_224_string == var_2_object)
		return 0;
	string var_228_string; bool var_229_bool;
	var_224_string = var_228_string;
	if(var_224_string == "")
		var_229_bool = false;
	else
		var_229_bool = true;
	func_2651(var_228_string, var_229_bool);
	var_2_object = var_224_string;
	
}


void func_2722(int var_59_int)
{
	int var_62_int; bool var_63_bool;
	var_62_int = 0;
	
	for(;;) {
		string var_65_string; int var_66_int;
		var_62_int = var_66_int;
		func_2715(var_65_string, var_66_int);
		@HasAnimation(var_63_bool, "all", var_65_string);
		if(!var_63_bool) //@nz
			break;
		var_62_int += 1;
	}
	var_62_int = var_59_int;
}


// @pe
void func_2739(void)
{
	@SetVariable("ood3Notkin2", 1);
}


void func_2489(void)
{
	bool var_259_bool;
	@CameraSwitchToNormal();
	bool var_260_bool;
	func_2920(var_260_bool);
	if(var_260_bool != 0) {
	} else {
		@HasAnimationTrack(var_259_bool, "head");
		if(var_259_bool == 0) goto Label_2505;
		@UnlookAsync("head");
	}
Label_2505:
	
}


// @pe
void func_2745(void)
{
	@SetVariable("ood3Notkin3", 1);
}


// @pe
void func_2751(void)
{
	@SetVariable("ood4Notkin2", 1);
}


// @pe
void func_2757(void)
{
	@SetVariable("ood4Notkin3", 1);
}


void func_2506(bool var_58_bool, object var_59_object)
{
	int var_65_int; int var_66_int;
	@GetVariable("voice_common", var_65_int);
	if(var_65_int != 0) {
		bool var_69_bool; object var_70_object;
		var_59_object = var_70_object;
		func_2564(var_69_bool, var_70_object);
		if(!var_69_bool) { //@nz
			bool var_100_bool; object var_101_object;
			var_59_object = var_101_object;
			func_2601(var_100_bool, var_101_object);
			if(!var_100_bool) { //@nz
				var_58_bool = false;
				return 4;
			}
		}
		@irand(var_66_int, 2);
		if(var_66_int != 0)
			@SetVariable("voice_common", ((var_65_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_145_bool; object var_146_object;
		var_59_object = var_146_object;
		func_2601(var_145_bool, var_146_object);
		if(!var_145_bool) { //@nz
			bool var_148_bool; object var_149_object;
			var_59_object = var_149_object;
			func_2564(var_148_bool, var_149_object);
			if(!var_148_bool) { //@nz
				var_58_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2562;
	
Label_2562:
	var_58_bool = true;
	
}


// @pe
void func_2763(void)
{
	@SetVariable("KnowTwoSouls", 1);
}


// @pe
void func_1482(object var_2_object, string var_388_string)
{
	bool var_389_bool;
	func_2920(var_389_bool);
	if(!var_389_bool) //@nz
		return 0;
	if(var_388_string == var_2_object)
		return 0;
	string var_392_string; bool var_393_bool;
	var_388_string = var_392_string;
	if(var_388_string == "")
		var_393_bool = false;
	else
		var_393_bool = true;
	func_2651(var_392_string, var_393_bool);
	var_2_object = var_388_string;
	
}


// @pe
void func_2769(void)
{
	@SetVariable("KnowNotkin", 1);
}


// @pe
void func_2002(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_551_object, object var_552_object)
{
	var_0_object = var_552_object;
	var_1_object = var_551_object;
	var_3_string = false;
	if(1 != 0) {
		func_2060(var_552_object, "Neutral");
		var_0_object->SetMessage(540542); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540543, -1, 42552); //@t
		var_0_object->AddReply(540796, -1, 42845); //@t
		goto Label_2030;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x7d6";
	}
Label_2030:
	bool var_573_bool;
	func_2920(var_573_bool);
	if(var_573_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2644(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_2059;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2059:
		return 0;

	}
	
}


// @pe
void func_2775(void)
{
	@SetVariable("ood3Notkin1", 1);
}


// @pe
void func_2781(void)
{
	@SetVariable("ood4Notkin1", 1);
}


// @pe
void func_2787(bool var_321_bool)
{
	int var_323_int;
	func_2695(var_323_int, "ood3Notkin2");
	if(var_323_int == 0) {
		var_321_bool = true;
		return 0;
	}
	var_321_bool = false;
}


// @pe
void func_759(object var_2_object, string var_301_string)
{
	bool var_302_bool;
	func_2920(var_302_bool);
	if(!var_302_bool) //@nz
		return 0;
	if(var_301_string == var_2_object)
		return 0;
	string var_305_string; bool var_306_bool;
	var_301_string = var_305_string;
	if(var_301_string == "")
		var_306_bool = false;
	else
		var_306_bool = true;
	func_2651(var_305_string, var_306_bool);
	var_2_object = var_301_string;
	
}


// @pe
void func_2799(bool var_330_bool)
{
	int var_332_int;
	func_2695(var_332_int, "ood3Notkin3");
	if(var_332_int == 0) {
		var_330_bool = true;
		return 0;
	}
	var_330_bool = false;
}


void func_1271(object var_0_object, int var_357_int, object var_358_object)
{
	var_0_object = var_358_object;
	bool var_368_bool; object var_369_object;
	object var_370_object;
	func_2679(var_370_object);
	var_370_object = var_369_object;
	func_2506(var_368_bool, var_369_object);
	bool var_371_bool; object var_372_object;
	var_358_object = var_372_object;
	func_2421(var_371_bool, var_372_object, 70.0);
	if(!var_371_bool) { //@nz
		var_357_int = -2;
		return 8;
	}
	object var_364_object;
	@CreateDialog(var_364_object);
	int var_375_int;
	func_2914(var_375_int);
	var_364_object->SetNPCName(var_375_int);
	int var_376_int;
	func_2912(var_376_int);
	var_364_object->SetNPCDescription(var_376_int);
	string var_377_string;
	func_2916(var_377_string);
	var_364_object->SetPhoto(var_377_string);
	string var_378_string;
	func_2918(var_378_string);
	var_364_object->SetPhoto2(var_378_string);
	int var_379_int;
	func_2895(var_379_int);
	var_364_object->SetPlayerName(var_379_int);
	bool var_365_bool;
	@IsOverrideActive(var_365_bool);
	if(var_365_bool != 0) {
		var_357_int = -2;
		return 8;
	}
	@DoDialog(var_364_object);
	object var_381_object; object var_382_object;
	var_358_object = var_381_object;
	var_364_object = var_382_object;
	TaskCall(8);
	func_1352(var_383_object, var_384_object, var_385_string, var_386_bool, var_381_object, var_382_object);
	TaskReturn();
	bool var_367_bool;
	var_364_object->IsDialogEnd(var_367_bool);
	
	for(;;) {
		var_464_bool = !var_367_bool; //@nz
		if(var_464_bool == 0) goto Label_1341;
		@sync();
		var_364_object->IsDialogEnd(var_367_bool);
	}
	
Label_1341:
	object var_465_object;
	var_358_object = var_465_object;
	func_2489();
	@StopDialog(var_364_object);
	var_364_object->GetReturnValue(-1);
	int var_366_int = var_357_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2811(bool var_435_bool)
{
	int var_437_int;
	func_2695(var_437_int, "ood4Notkin2");
	if(var_437_int == 0) {
		var_435_bool = true;
		return 0;
	}
	var_435_bool = false;
}


