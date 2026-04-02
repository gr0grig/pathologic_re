// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool;
		func_6948(var_20_bool);
		if(var_20_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		if(1 != 0) {
			func_5801();
			if(var_20_bool == 45532) {
				object var_25_object = var_1_object;
				func_6009(var_0_bool);
			}
			if(var_20_bool == 45530) {
				object var_30_object = var_1_object;
				func_6009(var_0_bool);
			}
			if(var_20_bool == 45555) {
				object var_34_object = var_1_object;
				func_6009(var_0_bool);
			}
			if(var_20_bool == 45580) {
				object var_38_object = var_1_object;
				func_6009(var_0_bool);
			}
			if(var_20_bool == 45602) {
				object var_42_object = var_1_object;
				func_6009(var_0_bool);
			}
			if(var_20_bool == 45603) {
				object var_46_object = var_1_object;
				func_6009(var_0_bool);
			}
			if(var_20_bool == 38691) {
				object var_50_object = var_1_object;
				func_6009(var_0_bool);
			}
			if(var_19_object == 45527) {
				bool var_54_bool;
				func_6026(var_1_object);
				if(var_54_bool != 0) {
					func_742(var_20_bool, "Neutral");
					var_0_bool->SetMessage(543072); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_80_bool;
					func_6038(var_80_bool, var_1_object);
					if(var_80_bool != 0)
						var_0_bool->AddReply(543073, 45531, 45528); //@t
					bool var_94_bool;
					func_6048(var_94_bool, var_1_object);
					if(var_94_bool != 0)
						var_0_bool->AddReply(543092, 45550, 45547); //@t
					bool var_103_bool = true;
					bool var_104_bool;
					func_6058(var_104_bool, var_1_object);
					if(var_104_bool != 1) {
						bool var_110_bool;
						func_6098(var_110_bool, var_1_object);
						if(var_110_bool != 1)
							var_103_bool = false;
					}
					if(var_103_bool != 0)
						var_0_bool->AddReply(543108, 45564, 45563); //@t
					bool var_119_bool;
					func_6068(var_119_bool, var_1_object);
					if(var_119_bool != 0)
						var_0_bool->AddReply(543101, 45557, 45556); //@t
					bool var_128_bool;
					func_6078(var_128_bool, var_1_object);
					if(var_128_bool != 0)
						var_0_bool->AddReply(543117, 45573, 45572); //@t
					bool var_137_bool;
					func_6088(var_137_bool, var_1_object);
					if(var_137_bool != 0)
						var_0_bool->AddReply(543127, 45583, 45582); //@t
					bool var_146_bool = true;
					bool var_147_bool;
					func_6108(var_147_bool, var_1_object);
					if(var_147_bool != 1) {
						bool var_153_bool;
						func_6118(var_153_bool, var_1_object);
						if(var_153_bool != 1)
							var_146_bool = false;
					}
					if(var_146_bool != 0)
						var_0_bool->AddReply(543139, 45595, 45594); //@t
					bool var_162_bool;
					func_6038(var_162_bool, var_1_object);
					if(var_162_bool != 0)
						var_0_bool->AddReply(543075, -1, 45530); //@t
					bool var_167_bool = true;
					bool var_168_bool = true;
					bool var_169_bool = true;
					bool var_170_bool;
					func_6048(var_170_bool, var_1_object);
					if(var_170_bool != 1) {
						bool var_172_bool;
						func_6058(var_172_bool, var_1_object);
						if(var_172_bool != 1)
							var_169_bool = false;
					}
					if(var_169_bool != 1) {
						bool var_174_bool;
						func_6068(var_174_bool, var_1_object);
						if(var_174_bool != 1)
							var_168_bool = false;
					}
					if(var_168_bool != 1) {
						bool var_176_bool;
						func_6078(var_176_bool, var_1_object);
						if(var_176_bool != 1)
							var_167_bool = false;
					}
					if(var_167_bool != 0)
						var_0_bool->AddReply(543100, -1, 45555); //@t
					bool var_181_bool;
					func_6088(var_181_bool, var_1_object);
					if(var_181_bool != 0)
						var_0_bool->AddReply(543125, -1, 45580); //@t
					bool var_186_bool = true;
					bool var_187_bool = true;
					bool var_188_bool;
					func_6098(var_188_bool, var_1_object);
					if(var_188_bool != 1) {
						bool var_190_bool;
						func_6108(var_190_bool, var_1_object);
						if(var_190_bool != 1)
							var_187_bool = false;
					}
					if(var_187_bool != 1) {
						bool var_192_bool;
						func_6118(var_192_bool, var_1_object);
						if(var_192_bool != 1)
							var_186_bool = false;
					}
					if(var_186_bool != 0)
						var_0_bool->AddReply(543147, -1, 45602); //@t
					bool var_197_bool = true;
					bool var_198_bool = true;
					bool var_199_bool;
					func_6128(var_199_bool, var_1_object);
					if(var_199_bool != 1) {
						bool var_205_bool;
						func_6138(var_205_bool, var_1_object);
						if(var_205_bool != 1)
							var_198_bool = false;
					}
					if(var_198_bool != 1) {
						bool var_211_bool;
						func_6148(var_211_bool, var_1_object);
						if(var_211_bool != 1)
							var_197_bool = false;
					}
					if(var_197_bool != 0)
						var_0_bool->AddReply(543148, -1, 45603); //@t
					bool var_220_bool;
					func_6038(var_220_bool, var_1_object);
					if(var_220_bool != 0)
						var_0_bool->AddReply(543074, -1, 45529); //@t
					bool var_225_bool = true;
					bool var_226_bool;
					func_6048(var_226_bool, var_1_object);
					if(var_226_bool != 1) {
						bool var_228_bool;
						func_6058(var_228_bool, var_1_object);
						if(var_228_bool != 1)
							var_225_bool = false;
					}
					if(var_225_bool != 0)
						var_0_bool->AddReply(543090, -1, 45545); //@t
					bool var_233_bool = true;
					bool var_234_bool;
					func_6048(var_234_bool, var_1_object);
					if(var_234_bool != 1) {
						bool var_236_bool;
						func_6058(var_236_bool, var_1_object);
						if(var_236_bool != 1)
							var_233_bool = false;
					}
					if(var_233_bool != 0)
						var_0_bool->AddReply(543099, -1, 45554); //@t
					bool var_241_bool = true;
					bool var_242_bool;
					func_6088(var_242_bool, var_1_object);
					if(var_242_bool != 1) {
						bool var_244_bool;
						func_6118(var_244_bool, var_1_object);
						if(var_244_bool != 1)
							var_241_bool = false;
					}
					if(var_241_bool != 0)
						var_0_bool->AddReply(543126, -1, 45581); //@t
					bool var_249_bool = true;
					bool var_250_bool = true;
					bool var_251_bool = true;
					bool var_252_bool;
					func_6098(var_252_bool, var_1_object);
					if(var_252_bool != 1) {
						bool var_254_bool;
						func_6108(var_254_bool, var_1_object);
						if(var_254_bool != 1)
							var_251_bool = false;
					}
					if(var_251_bool != 1) {
						bool var_256_bool;
						func_6128(var_256_bool, var_1_object);
						if(var_256_bool != 1)
							var_250_bool = false;
					}
					if(var_250_bool != 1) {
						bool var_258_bool;
						func_6148(var_258_bool, var_1_object);
						if(var_258_bool != 1)
							var_249_bool = false;
					}
					if(var_249_bool != 0)
						var_0_bool->AddReply(543149, -1, 45604); //@t
					bool var_263_bool = true;
					bool var_264_bool = true;
					bool var_265_bool = true;
					bool var_266_bool = true;
					bool var_267_bool;
					func_6068(var_267_bool, var_1_object);
					if(var_267_bool != 1) {
						bool var_269_bool;
						func_6078(var_269_bool, var_1_object);
						if(var_269_bool != 1)
							var_266_bool = false;
					}
					if(var_266_bool != 1) {
						bool var_271_bool;
						func_6118(var_271_bool, var_1_object);
						if(var_271_bool != 1)
							var_265_bool = false;
					}
					if(var_265_bool != 1) {
						bool var_273_bool;
						func_6138(var_273_bool, var_1_object);
						if(var_273_bool != 1)
							var_264_bool = false;
					}
					if(var_264_bool != 1) {
						bool var_275_bool;
						func_6148(var_275_bool, var_1_object);
						if(var_275_bool != 1)
							var_263_bool = false;
					}
					if(var_263_bool != 0)
						var_0_bool->AddReply(543150, -1, 45605); //@t
					return 0;
				}
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536854); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536855, -1, 38691); //@t
				bool var_285_bool = false;
				bool var_286_bool;
				func_6038(var_286_bool, var_1_object);
				if(var_286_bool != 0) {
					bool var_288_bool;
					func_6158(var_288_bool, var_1_object);
					if(var_288_bool != 0)
						var_285_bool = true;
				}
				if(var_285_bool != 0)
					var_0_bool->AddReply(536856, 38693, 38692); //@t
				bool var_306_bool = false;
				bool var_307_bool;
				func_6038(var_307_bool, var_1_object);
				if(var_307_bool != 0) {
					bool var_309_bool;
					func_6168(var_309_bool, var_1_object);
					if(var_309_bool != 0)
						var_306_bool = true;
				}
				if(var_306_bool != 0)
					var_0_bool->AddReply(536870, 38709, 38708); //@t
				bool var_319_bool;
				func_6048(var_319_bool, var_1_object);
				if(var_319_bool != 0)
					var_0_bool->AddReply(536885, 38724, 38723); //@t
				bool var_324_bool;
				func_6058(var_324_bool, var_1_object);
				if(var_324_bool != 0)
					var_0_bool->AddReply(536904, 38743, 38742); //@t
				bool var_329_bool;
				func_6068(var_329_bool, var_1_object);
				if(var_329_bool != 0)
					var_0_bool->AddReply(536916, 38755, 38754); //@t
				bool var_334_bool = false;
				bool var_335_bool;
				func_6088(var_335_bool, var_1_object);
				if(var_335_bool != 0) {
					bool var_337_bool;
					func_6014(var_1_object);
					if(var_337_bool != 0)
						var_334_bool = true;
				}
				if(var_334_bool != 0)
					var_0_bool->AddReply(536931, 38770, 38769); //@t
				bool var_346_bool;
				func_6108(var_346_bool, var_1_object);
				if(var_346_bool != 0)
					var_0_bool->AddReply(536943, 38782, 38781); //@t
				bool var_351_bool;
				func_6118(var_351_bool, var_1_object);
				if(var_351_bool != 0)
					var_0_bool->AddReply(536961, 38800, 38799); //@t
				bool var_356_bool;
				func_6128(var_356_bool, var_1_object);
				if(var_356_bool != 0)
					var_0_bool->AddReply(536978, 38817, 38816); //@t
				bool var_361_bool = false;
				bool var_362_bool;
				func_6138(var_362_bool, var_1_object);
				if(var_362_bool != 0) {
					bool var_364_bool;
					func_6014(var_1_object);
					if(var_364_bool != 0)
						var_361_bool = true;
				}
				if(var_361_bool != 0)
					var_0_bool->AddReply(536993, 38832, 38831); //@t
				bool var_369_bool = false;
				bool var_370_bool;
				func_6038(var_370_bool, var_1_object);
				if(var_370_bool != 0) {
					bool var_372_bool;
					func_6014(var_1_object);
					if(var_372_bool != 0)
						var_369_bool = true;
				}
				if(var_369_bool != 0)
					var_0_bool->AddReply(537006, 38846, 38845); //@t
				bool var_377_bool = false;
				bool var_378_bool;
				func_6038(var_378_bool, var_1_object);
				if(var_378_bool != 0) {
					bool var_380_bool;
					func_6014(var_1_object);
					if(var_380_bool != 0)
						var_377_bool = true;
				}
				if(var_377_bool != 0)
					var_0_bool->AddReply(537017, 38857, 38856); //@t
				bool var_385_bool;
				func_6038(var_385_bool, var_1_object);
				if(var_385_bool != 0)
					var_0_bool->AddReply(537025, 38865, 38864); //@t
				bool var_390_bool;
				func_6038(var_390_bool, var_1_object);
				if(var_390_bool != 0)
					var_0_bool->AddReply(537035, 38875, 38874); //@t
				bool var_395_bool;
				func_6038(var_395_bool, var_1_object);
				if(var_395_bool != 0)
					var_0_bool->AddReply(537044, 38884, 38883); //@t
				var_0_bool->AddReply(537050, -1, 38889); //@t
				return 0;
			}
			if(var_19_object == 38884) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537045); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537046, 38886, 38885); //@t
				var_0_bool->AddReply(537049, -1, 38888); //@t
				return 0;
			}
			if(var_19_object == 38886) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537047); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537048, -1, 38887); //@t
				return 0;
			}
			if(var_19_object == 38875) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537036); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537037, 38877, 38876); //@t
				var_0_bool->AddReply(537043, -1, 38882); //@t
				return 0;
			}
			if(var_19_object == 38877) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537038); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_434_bool;
				func_6014(var_1_object);
				if(var_434_bool != 0)
					var_0_bool->AddReply(537039, 38879, 38878); //@t
				var_0_bool->AddReply(537042, -1, 38881); //@t
				return 0;
			}
			if(var_19_object == 38879) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537040); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537041, -1, 38880); //@t
				return 0;
			}
			if(var_19_object == 38865) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537026); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537027, 38867, 38866); //@t
				var_0_bool->AddReply(537034, -1, 38873); //@t
				return 0;
			}
			if(var_19_object == 38867) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537028); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537029, 38869, 38868); //@t
				var_0_bool->AddReply(537033, -1, 38872); //@t
				return 0;
			}
			if(var_19_object == 38869) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537030); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537031, -1, 38870); //@t
				bool var_476_bool;
				func_6014(var_1_object);
				if(var_476_bool != 0)
					var_0_bool->AddReply(537032, -1, 38871); //@t
				return 0;
			}
			if(var_19_object == 38857) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537018); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537019, 38859, 38858); //@t
				return 0;
			}
			if(var_19_object == 38859) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537020); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537021, 38861, 38860); //@t
				return 0;
			}
			if(var_19_object == 38861) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537022); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537023, -1, 38862); //@t
				var_0_bool->AddReply(537024, -1, 38863); //@t
				return 0;
			}
			if(var_19_object == 38846) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537007); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537008, 38848, 38847); //@t
				var_0_bool->AddReply(537016, -1, 38855); //@t
				return 0;
			}
			if(var_19_object == 38848) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537009); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537010, 38850, 38849); //@t
				return 0;
			}
			if(var_19_object == 38850) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537011); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537012, 38852, 38851); //@t
				return 0;
			}
			if(var_19_object == 38852) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537013); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537014, -1, 38853); //@t
				var_0_bool->AddReply(537015, -1, 38854); //@t
				return 0;
			}
			if(var_19_object == 38832) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536994); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536995, 38834, 38833); //@t
				var_0_bool->AddReply(537005, -1, 38844); //@t
				return 0;
			}
			if(var_19_object == 38834) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536996); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536997, 38836, 38835); //@t
				var_0_bool->AddReply(537004, -1, 38843); //@t
				return 0;
			}
			if(var_19_object == 38836) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536998); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536999, 38838, 38837); //@t
				var_0_bool->AddReply(537003, 38838, 38841); //@t
				return 0;
			}
			if(var_19_object == 38838) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(537000); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537001, -1, 38839); //@t
				var_0_bool->AddReply(537002, -1, 38840); //@t
				return 0;
			}
			if(var_19_object == 38817) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536979); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536980, 38819, 38818); //@t
				var_0_bool->AddReply(536992, -1, 38830); //@t
				return 0;
			}
			if(var_19_object == 38819) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536981); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536982, 38821, 38820); //@t
				var_0_bool->AddReply(536991, -1, 38829); //@t
				return 0;
			}
			if(var_19_object == 38821) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536983); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536984, 38823, 38822); //@t
				return 0;
			}
			if(var_19_object == 38823) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536985); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536986, 38825, 38824); //@t
				var_0_bool->AddReply(536990, -1, 38828); //@t
				return 0;
			}
			if(var_19_object == 38825) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536987); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536988, -1, 38826); //@t
				var_0_bool->AddReply(536989, -1, 38827); //@t
				return 0;
			}
			if(var_19_object == 38800) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536962); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536963, 38802, 38801); //@t
				var_0_bool->AddReply(536971, 38810, 38809); //@t
				return 0;
			}
			if(var_19_object == 38810) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536972); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536973, 38812, 38811); //@t
				var_0_bool->AddReply(536976, -1, 38814); //@t
				var_0_bool->AddReply(536977, -1, 38815); //@t
				return 0;
			}
			if(var_19_object == 38812) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536974); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536975, -1, 38813); //@t
				return 0;
			}
			if(var_19_object == 38802) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536964); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536965, 38804, 38803); //@t
				return 0;
			}
			if(var_19_object == 38804) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536966); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536967, 38806, 38805); //@t
				return 0;
			}
			if(var_19_object == 38806) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536968); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536969, -1, 38807); //@t
				var_0_bool->AddReply(536970, -1, 38808); //@t
				return 0;
			}
			if(var_19_object == 38782) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536944); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536945, 38784, 38783); //@t
				var_0_bool->AddReply(536960, -1, 38798); //@t
				return 0;
			}
			if(var_19_object == 38784) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536946); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536947, 38786, 38785); //@t
				return 0;
			}
			if(var_19_object == 38786) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536948); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536949, 38788, 38787); //@t
				bool var_704_bool;
				func_6014(var_1_object);
				if(var_704_bool != 0)
					var_0_bool->AddReply(536957, 38796, 38795); //@t
				return 0;
			}
			if(var_19_object == 38796) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536958); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536959, -1, 38797); //@t
				return 0;
			}
			if(var_19_object == 38788) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536950); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536951, 38790, 38789); //@t
				return 0;
			}
			if(var_19_object == 38790) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536952); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536953, 38792, 38791); //@t
				var_0_bool->AddReply(536956, -1, 38794); //@t
				return 0;
			}
			if(var_19_object == 38792) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536954); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536955, -1, 38793); //@t
				return 0;
			}
			if(var_19_object == 38770) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536932); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536933, 38772, 38771); //@t
				var_0_bool->AddReply(536942, -1, 38780); //@t
				return 0;
			}
			if(var_19_object == 38772) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536934); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536935, 38774, 38773); //@t
				return 0;
			}
			if(var_19_object == 38774) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536936); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536937, 38776, 38775); //@t
				var_0_bool->AddReply(536941, -1, 38779); //@t
				return 0;
			}
			if(var_19_object == 38776) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536938); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536939, -1, 38777); //@t
				var_0_bool->AddReply(536940, -1, 38778); //@t
				return 0;
			}
			if(var_19_object == 38755) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536917); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536918, 38757, 38756); //@t
				bool var_784_bool;
				func_6014(var_1_object);
				if(var_784_bool != 0)
					var_0_bool->AddReply(536930, -1, 38768); //@t
				return 0;
			}
			if(var_19_object == 38757) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536919); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536920, 38759, 38758); //@t
				var_0_bool->AddReply(536929, -1, 38767); //@t
				return 0;
			}
			if(var_19_object == 38759) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536921); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_803_bool;
				func_6014(var_1_object);
				if(var_803_bool != 0)
					var_0_bool->AddReply(536922, 38761, 38760); //@t
				var_0_bool->AddReply(536926, 38765, 38764); //@t
				return 0;
			}
			if(var_19_object == 38765) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536927); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536928, -1, 38766); //@t
				return 0;
			}
			if(var_19_object == 38761) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536923); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536924, -1, 38762); //@t
				var_0_bool->AddReply(536925, -1, 38763); //@t
				return 0;
			}
			if(var_19_object == 38743) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536905); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536906, 38745, 38744); //@t
				return 0;
			}
			if(var_19_object == 38745) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536907); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536908, 38747, 38746); //@t
				bool var_842_bool;
				func_6014(var_1_object);
				if(var_842_bool != 0)
					var_0_bool->AddReply(536912, 38751, 38750); //@t
				return 0;
			}
			if(var_19_object == 38751) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536913); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536914, -1, 38752); //@t
				var_0_bool->AddReply(536915, -1, 38753); //@t
				return 0;
			}
			if(var_19_object == 38747) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536909); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536910, -1, 38748); //@t
				var_0_bool->AddReply(536911, -1, 38749); //@t
				return 0;
			}
			if(var_19_object == 38724) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536886); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536887, 38726, 38725); //@t
				var_0_bool->AddReply(536901, 38740, 38739); //@t
				return 0;
			}
			if(var_19_object == 38740) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536902); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536903, -1, 38741); //@t
				return 0;
			}
			if(var_19_object == 38726) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536888); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536889, 38728, 38727); //@t
				return 0;
			}
			if(var_19_object == 38728) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536890); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536891, 38730, 38729); //@t
				var_0_bool->AddReply(536900, -1, 38738); //@t
				return 0;
			}
			if(var_19_object == 38730) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536892); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_905_bool;
				func_6014(var_1_object);
				if(var_905_bool != 0)
					var_0_bool->AddReply(536893, 38732, 38731); //@t
				var_0_bool->AddReply(536899, -1, 38737); //@t
				return 0;
			}
			if(var_19_object == 38732) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536894); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536895, 38734, 38733); //@t
				var_0_bool->AddReply(536898, -1, 38736); //@t
				return 0;
			}
			if(var_19_object == 38734) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536896); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536897, -1, 38735); //@t
				return 0;
			}
			if(var_19_object == 38709) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536871); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536872, 38711, 38710); //@t
				var_0_bool->AddReply(536882, 38721, 38720); //@t
				return 0;
			}
			if(var_19_object == 38721) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536883); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536884, -1, 38722); //@t
				return 0;
			}
			if(var_19_object == 38711) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536873); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536874, 38713, 38712); //@t
				var_0_bool->AddReply(536881, -1, 38719); //@t
				return 0;
			}
			if(var_19_object == 38713) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536875); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536876, 38715, 38714); //@t
				bool var_964_bool;
				func_6014(var_1_object);
				if(var_964_bool != 0)
					var_0_bool->AddReply(536880, -1, 38718); //@t
				return 0;
			}
			if(var_19_object == 38715) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536877); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536878, -1, 38716); //@t
				var_0_bool->AddReply(536879, -1, 38717); //@t
				return 0;
			}
			if(var_19_object == 38693) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536857); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536858, 38695, 38694); //@t
				var_0_bool->AddReply(536867, 38705, 38704); //@t
				return 0;
			}
			if(var_19_object == 38705) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536868); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536869, 38697, 38706); //@t
				return 0;
			}
			if(var_19_object == 38695) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536859); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536860, 38697, 38696); //@t
				var_0_bool->AddReply(536864, 38701, 38700); //@t
				return 0;
			}
			if(var_19_object == 38701) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536865); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536866, 38697, 38702); //@t
				return 0;
			}
			if(var_19_object == 38697) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(536861); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(536862, -1, 38698); //@t
				var_0_bool->AddReply(536863, -1, 38699); //@t
				return 0;
			}
			if(var_19_object == 45595) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543140); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543141, -1, 45596); //@t
				var_0_bool->AddReply(543142, -1, 45597); //@t
				var_0_bool->AddReply(543143, 45599, 45598); //@t
				return 0;
			}
			if(var_19_object == 45599) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543144); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543145, -1, 45600); //@t
				var_0_bool->AddReply(543146, -1, 45601); //@t
				return 0;
			}
			if(var_19_object == 45583) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543128); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543129, 45587, 45584); //@t
				var_0_bool->AddReply(543130, -1, 45585); //@t
				var_0_bool->AddReply(543131, -1, 45586); //@t
				return 0;
			}
			if(var_19_object == 45587) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543132); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543133, -1, 45588); //@t
				var_0_bool->AddReply(543134, 45591, 45589); //@t
				var_0_bool->AddReply(543135, -1, 45590); //@t
				return 0;
			}
			if(var_19_object == 45591) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543136); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543137, -1, 45592); //@t
				var_0_bool->AddReply(543138, -1, 45593); //@t
				return 0;
			}
			if(var_19_object == 45573) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543118); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543119, -1, 45574); //@t
				var_0_bool->AddReply(543120, 45577, 45575); //@t
				var_0_bool->AddReply(543121, -1, 45576); //@t
				return 0;
			}
			if(var_19_object == 45577) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543122); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543123, -1, 45578); //@t
				var_0_bool->AddReply(543124, -1, 45579); //@t
				return 0;
			}
			if(var_19_object == 45557) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543102); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543103, -1, 45558); //@t
				var_0_bool->AddReply(543104, 45560, 45559); //@t
				return 0;
			}
			if(var_19_object == 45560) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543105); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543106, -1, 45561); //@t
				var_0_bool->AddReply(543107, -1, 45562); //@t
				return 0;
			}
			if(var_19_object == 45564) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543109); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543110, -1, 45565); //@t
				var_0_bool->AddReply(543111, 45568, 45566); //@t
				return 0;
			}
			if(var_19_object == 45568) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543113); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543114, -1, 45569); //@t
				var_0_bool->AddReply(543116, -1, 45571); //@t
				return 0;
			}
			if(var_19_object == 45550) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543095); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543096, -1, 45551); //@t
				var_0_bool->AddReply(543098, -1, 45553); //@t
				return 0;
			}
			if(var_19_object == 45531) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543076); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543077, -1, 45532); //@t
				var_0_bool->AddReply(543078, -1, 45533); //@t
				var_0_bool->AddReply(543079, 45535, 45534); //@t
				return 0;
			}
			if(var_19_object == 45535) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543080); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543081, -1, 45536); //@t
				var_0_bool->AddReply(543082, 45538, 45537); //@t
				return 0;
			}
			if(var_19_object == 45538) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543083); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543084, 45541, 45539); //@t
				var_0_bool->AddReply(543085, -1, 45540); //@t
				return 0;
			}
			if(var_19_object == 45541) {
				func_742(var_20_bool, "Neutral");
				var_0_bool->SetMessage(543086); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543087, -1, 45542); //@t
				var_0_bool->AddReply(543088, -1, 45543); //@t
				return 0;
			}
			var_3_object = true;
			bool var_1198_bool;
			func_6948(var_1198_bool);
			if(var_1198_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2fd";
	
	}

}


task task_3
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6894(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			object var_26_object;
			var_19_bool = var_26_object;
			func_6897(var_26_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_6903();
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, int var_7_int, float var_8_float, float var_9_float, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, int var_15_int, int var_16_int, bool var_17_bool, float var_18_float, int var_19_int, bool var_20_bool, object var_21_object, bool var_22_bool)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, string var_7_string, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
	}

}


maintask task_4
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		@SensePlayerOnly(true);
		func_6950();
		func_3467();
	
		for(;;) {
			var_2_object = false;
			func_3728(var_17_object, var_18_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6894(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3663(var_21_int);
			object var_29_object;
			var_19_bool = var_29_object;
			func_6897(var_29_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_22_object;
		var_19_bool = var_22_object;
		func_6666(var_22_object);
		int var_31_int; object var_32_object;
		var_19_bool = var_32_object;
		func_6749(var_31_int, var_32_object);
		int var_21_int;
		var_31_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3663(var_21_int);
			object var_72_object;
			var_19_bool = var_72_object;
			func_6759(var_72_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_19_bool = var_25_object;
		object var_26_object;
		var_20_object = var_26_object;
		bool var_27_bool;
		var_21_bool = var_27_bool;
		bool var_24_bool;
		func_7000(var_24_bool, var_25_object, var_26_object, var_27_bool);
		if(var_24_bool != 0) {
			int var_86_int; object var_87_object; bool var_88_bool;
			var_19_bool = var_87_object;
			var_21_bool = var_88_bool;
			func_6842(var_87_object, var_88_bool);
			var_86_int = var_23_int;
			if(var_23_int > 0) {
				if(var_23_int > 1)
					func_3663(var_23_int);
				object var_124_object;
				var_19_bool = var_124_object;
				func_6849(var_124_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6884(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_3663(var_21_int);
			object var_29_object;
			var_19_bool = var_29_object;
			func_6887();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_19_object = var_24_object;
		string var_25_string;
		var_20_bool = var_25_string;
		bool var_23_bool;
		func_6580(var_23_bool, var_24_object, var_25_string);
		if(var_23_bool != 0) {
			func_3663(var_22_int);
			object var_52_object; string var_53_string;
			var_19_object = var_52_object;
			var_20_bool = var_53_string;
			func_6612(var_52_object, var_53_string);
		} else {
			int var_128_int; string var_129_string; object var_130_object;
			var_20_bool = var_129_string;
			var_19_object = var_130_object;
			func_6889(var_130_object);
			var_128_int = var_22_int;
			if(!(var_22_int > 0)) goto Label_3604;
			if(var_22_int > 1)
				func_3663(var_22_int);
			string var_135_string; object var_136_object;
			var_20_bool = var_135_string;
			var_19_object = var_136_object;
			func_6892();
		}
	Label_3604:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, string var_9_string, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool; string var_21_string;
		func_6679(var_20_bool, var_21_string);
		if(var_20_bool != 0) {
			func_3663(var_21_string);
			string var_30_string;
			var_19_bool = var_30_string;
			func_6695(var_30_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		bool var_20_bool; object var_21_object;
		func_6637(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			func_3663(var_21_object);
			object var_33_object;
			var_19_bool = var_33_object;
			func_6660(var_33_object);
		} else {
			object var_35_object;
			func_3688(var_35_object, var_35_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_20_object;
		func_3688(var_20_object, var_20_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, int var_9_int, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		if(var_19_bool != 110) {
		}
		var_2_object = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_3663(var_18_bool);
		func_6903();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		func_3663(var_19_bool);
		object var_21_object;
		var_19_bool = var_21_object;
		func_6556();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		@RequestClearPath(var_19_bool);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		@Stop();
	}

}


task task_5
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6894(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_4066();
			object var_28_object;
			var_19_bool = var_28_object;
			func_6897(var_28_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_22_object;
		var_19_bool = var_22_object;
		func_6666(var_22_object);
		int var_31_int; object var_32_object;
		var_19_bool = var_32_object;
		func_6749(var_31_int, var_32_object);
		int var_21_int;
		var_31_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_4066();
			object var_71_object;
			var_19_bool = var_71_object;
			func_6759(var_71_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_19_bool = var_25_object;
		object var_26_object;
		var_20_object = var_26_object;
		bool var_27_bool;
		var_21_bool = var_27_bool;
		bool var_24_bool;
		func_7000(var_24_bool, var_25_object, var_26_object, var_27_bool);
		if(var_24_bool != 0) {
			int var_86_int; object var_87_object; bool var_88_bool;
			var_19_bool = var_87_object;
			var_21_bool = var_88_bool;
			func_6842(var_87_object, var_88_bool);
			var_86_int = var_23_int;
			if(var_23_int > 0) {
				if(var_23_int > 1)
					func_4066();
				object var_123_object;
				var_19_bool = var_123_object;
				func_6849(var_123_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6884(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_4066();
			object var_28_object;
			var_19_bool = var_28_object;
			func_6887();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_19_object = var_24_object;
		string var_25_string;
		var_20_bool = var_25_string;
		bool var_23_bool;
		func_6580(var_23_bool, var_24_object, var_25_string);
		if(var_23_bool != 0) {
			func_4066();
			object var_51_object; string var_52_string;
			var_19_object = var_51_object;
			var_20_bool = var_52_string;
			func_6612(var_51_object, var_52_string);
		} else {
			int var_127_int; string var_128_string; object var_129_object;
			var_20_bool = var_128_string;
			var_19_object = var_129_object;
			func_6889(var_129_object);
			var_127_int = var_22_int;
			if(!(var_22_int > 0)) goto Label_3949;
			if(var_22_int > 1)
				func_4066();
			string var_134_string; object var_135_object;
			var_20_bool = var_134_string;
			var_19_object = var_135_object;
			func_6892();
		}
	Label_3949:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, string var_9_string, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		string var_21_string;
		var_19_bool = var_21_string;
		bool var_20_bool;
		func_6679(var_20_bool, var_21_string);
		if(var_20_bool != 0) {
			func_4066();
			string var_29_string;
			var_19_bool = var_29_string;
			func_6695(var_29_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_4066();
		func_6903();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_21_object;
		var_19_bool = var_21_object;
		bool var_20_bool;
		func_6637(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			func_4066();
			object var_32_object;
			var_19_bool = var_32_object;
			func_6660(var_32_object);
		}
	}

}


task task_6
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6894(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_4270();
			object var_30_object;
			var_19_bool = var_30_object;
			func_6897(var_30_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_22_object;
		var_19_bool = var_22_object;
		func_6666(var_22_object);
		int var_31_int; object var_32_object;
		var_19_bool = var_32_object;
		func_6749(var_31_int, var_32_object);
		int var_21_int;
		var_31_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_4270();
			object var_73_object;
			var_19_bool = var_73_object;
			func_6759(var_73_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, bool var_12_bool, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
		int var_23_int;
		object var_25_object;
		var_19_bool = var_25_object;
		object var_26_object;
		var_20_object = var_26_object;
		bool var_27_bool;
		var_21_bool = var_27_bool;
		bool var_24_bool;
		func_7000(var_24_bool, var_25_object, var_26_object, var_27_bool);
		if(var_24_bool != 0) {
			int var_86_int; object var_87_object; bool var_88_bool;
			var_19_bool = var_87_object;
			var_21_bool = var_88_bool;
			func_6842(var_87_object, var_88_bool);
			var_86_int = var_23_int;
			if(var_23_int > 0) {
				if(var_23_int > 1)
					func_4270();
				object var_125_object;
				var_19_bool = var_125_object;
				func_6849(var_125_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_23_object;
		var_19_bool = var_23_object;
		func_6884(var_23_object);
		int var_21_int;
		int var_22_int = var_21_int;
		if(var_21_int > 0) {
			if(var_21_int > 1)
				func_4270();
			object var_30_object;
			var_19_bool = var_30_object;
			func_6887();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, string var_11_string, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_19_object = var_24_object;
		string var_25_string;
		var_20_bool = var_25_string;
		bool var_23_bool;
		func_6580(var_23_bool, var_24_object, var_25_string);
		if(var_23_bool != 0) {
			func_4270();
			object var_53_object; string var_54_string;
			var_19_object = var_53_object;
			var_20_bool = var_54_string;
			func_6612(var_53_object, var_54_string);
		} else {
			int var_129_int; string var_130_string; object var_131_object;
			var_20_bool = var_130_string;
			var_19_object = var_131_object;
			func_6889(var_131_object);
			var_129_int = var_22_int;
			if(!(var_22_int > 0)) goto Label_4255;
			if(var_22_int > 1)
				func_4270();
			string var_136_string; object var_137_object;
			var_20_bool = var_136_string;
			var_19_object = var_137_object;
			func_6892();
		}
	Label_4255:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		string var_21_string;
		var_19_bool = var_21_string;
		bool var_20_bool;
		func_6679(var_20_bool, var_21_string);
		if(var_20_bool != 0) {
			func_4270();
			string var_31_string;
			var_19_bool = var_31_string;
			func_6695(var_31_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		func_4270();
		object var_22_object;
		var_19_bool = var_22_object;
		func_6556();
	}

	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		if(var_19_bool != 111)
			return 4;
		bool var_26_bool;
		func_5445(var_26_bool, var_0_bool);
		if(!var_26_bool) { //@nz
			func_4270();
			return 4;
		}
		cvector var_22_cvector;
		@GetDirection(var_22_cvector);
		cvector var_63_cvector;
		func_5299(var_63_cvector, var_0_bool);
		cvector var_23_cvector;
		var_63_cvector = var_23_cvector;
		float var_69_float; cvector var_70_cvector; cvector var_71_cvector;
		var_22_cvector = var_70_cvector;
		var_23_cvector = var_71_cvector;
		func_5933(var_69_float, var_70_cvector, var_71_cvector);
		if(var_69_float < 0.49999997)
			func_5595(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_4270();
		func_6903();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		object var_21_object;
		var_19_bool = var_21_object;
		bool var_20_bool;
		func_6637(var_20_bool, var_21_object);
		if(var_20_bool != 0) {
			func_4270();
			object var_34_object;
			var_19_bool = var_34_object;
			func_6660(var_34_object);
		}
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_5092(var_18_bool);
		func_6903();
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, int var_19_int)
	{
		if(var_19_int == 1) {
			func_5989(var_1_object);
		} else {
			int var_27_int;
			func_5236(var_18_bool, var_27_int, var_27_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_20_bool = false;
		if(var_1_object == var_19_object) {
			if(!var_2_object) //@nz
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			var_2_object = true;
			object var_23_object;
			var_19_object = var_23_object;
			func_5790(var_23_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		bool var_20_bool = false;
		if(var_1_object == var_19_object) {
			if(var_2_object != 0)
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		@RequestClearPath(var_19_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
	{
		func_5092(var_19_object);
		object var_24_object;
		var_19_object = var_24_object;
		func_6556();
	}

}


void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, string var_20_string)
{
	float var_22_float;
	if(var_20_string == "health") {
		@GetProperty("health", var_22_float);
		if(var_22_float <= 0)
			@SignalDeath(var_19_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	func_6535(var_20_object);
}


// @pe
void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float)
{
	object var_23_object;
	var_19_object = var_23_object;
	int var_24_int;
	var_20_int = var_24_int;
	float var_25_float;
	var_21_float = var_25_float;
	func_5513(var_23_object, var_24_int, var_25_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool, object var_19_object, int var_20_int, float var_21_float, float var_22_float, cvector var_23_cvector, cvector var_24_cvector)
{
	object var_25_object;
	var_19_object = var_25_object;
	int var_26_int;
	var_20_int = var_26_int;
	float var_27_float;
	var_21_float = var_27_float;
	cvector var_28_cvector;
	var_23_cvector = var_28_cvector;
	cvector var_29_cvector;
	var_24_cvector = var_29_cvector;
	func_5581(var_27_float, var_28_cvector, var_29_cvector);
}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_535_bool;
		func_6948(var_535_bool);
		if(var_535_bool == 0) goto Label_15;
		func_5759("Neutral");
		@lshWaitForAnimEnd();
		break;
	Label_24:
	}
	if(false == 0) goto Label_24;
	return 0;
	
Label_15:
	@WaitForAnimEnd();
	@PlayAnimation("all", "idle");
}
EMIT "Return(); Pop(0)";


// @pe
void func_6148(bool var_280_bool, object var_281_object)
{
	object var_283_object;
	var_281_object = var_283_object;
	func_6255(var_283_object);
	bool var_282_bool;
	if(var_282_bool != 0) {
		var_280_bool = true;
		return 0;
	}
	var_280_bool = false;
}


// @pe
void func_6660(object var_34_object)
{
	object var_35_object;
	var_34_object = var_35_object;
	func_6907();
}


// @pe
void func_6666(object var_22_object)
{
	bool var_23_bool; object var_24_object;
	func_5314(var_23_bool, var_24_object);
	if(var_23_bool != 0) {
		object var_27_object;
		func_5875(var_27_object);
		@ReportReputationChange(var_24_object, var_27_object, -0.05);
	}
}


// @pe
void func_6158(bool var_375_bool, object var_376_object)
{
	object var_378_object;
	var_376_object = var_378_object;
	func_6262(var_378_object);
	bool var_377_bool;
	if(var_377_bool != 0) {
		var_375_bool = true;
		return 0;
	}
	var_375_bool = false;
}


void func_5134(bool var_0_bool, object var_1_object, bool var_234_bool, object var_235_object, float var_236_float, float var_237_float, bool var_238_bool, bool var_239_bool)
{
	bool var_248_bool; object var_250_object; cvector var_251_cvector; cvector var_252_cvector; float var_254_float; object var_255_object;
	var_0_bool = false;
	var_1_object = var_235_object;
	bool var_249_bool;
	var_239_bool = var_249_bool;
	
	for(;;) {
		bool var_256_bool; object var_257_object;
		var_235_object = var_257_object;
		func_5274(var_256_bool, var_257_object);
		if(!var_256_bool) { //@nz
			var_234_bool = false;
			return 16;
		}
		var_235_object->GetPosition(var_251_cvector);
		@GetPosition(var_252_cvector);
		var_254_float = (var_251_cvector - var_252_cvector) | (var_251_cvector - var_252_cvector);
		bool var_261_bool = false;
		if(var_237_float > 0) {
			if(var_254_float > (var_237_float * var_237_float))
				var_261_bool = true;
		}
		if(var_261_bool != 0) {
			@Stop();
			var_234_bool = false;
			return 16;
		}
		if(var_254_float > (var_236_float * var_236_float)) {
			var_235_object->GetPFPosition(var_251_cvector);
			@FindPathTo(var_255_object, var_251_cvector);
			if(var_255_object != null) {
				var_255_object = var_250_object;
				var_255_object = null;
			}
			if(var_250_object != null) {
				if(var_249_bool == 0) goto Label_5187;
				var_249_bool = false;
				@RotatePath(var_250_object, var_248_bool);
				if(!var_248_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_274_string;
						func_5281(var_274_string);
						string var_275_string;
						func_5283(var_275_string);
						@FollowPath(var_250_object, var_238_bool, var_248_bool, var_274_string, var_275_string);
						if(!var_248_bool) { //@nz
							if(var_0_bool == 0) goto Label_5206;
							var_250_object = null;
						}
					EMIT "GOTO 0x1457";

					Label_5206:
						} else {
					var_250_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_248_bool);
					if(!var_248_bool) { //@nz
						if(var_0_bool != 0) {
							var_250_object = null;
							goto Label_5234;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_5234;
		}
			var_255_object = null;
			goto Label_5232;

		Label_5232:
			var_250_object = null;

		}
	Label_5234:
		for(;;) {
			var_234_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_4624(bool var_0_bool, float var_460_float, int var_461_int)
{
	object var_465_object; float var_466_float; float var_467_float;
	@GetVictim((var_460_float * 0.9), var_465_object);
	@ReportAttack(var_0_bool);
	if(var_465_object == var_0_bool) {
		float var_471_float; object var_472_object; int var_473_int;
		var_465_object = var_472_object;
		var_461_int = var_473_int;
		func_4354(var_473_int);
		var_471_float = var_466_float;
		float var_474_float; object var_475_object; float var_476_float; int var_477_int;
		var_465_object = var_475_object;
		int var_478_int; object var_479_object; int var_480_int;
		var_465_object = var_479_object;
		var_461_int = var_480_int;
		func_4357(var_480_int);
		var_478_int = var_477_int;
		func_5331(var_474_float, var_475_object, var_476_float, var_477_int);
		var_474_float = var_467_float;
		int var_539_int;
		func_5007(var_539_int);
		@ReportHit(var_0_bool, var_539_int, var_467_float, var_476_float);
		object var_540_object; float var_541_float;
		var_465_object = var_540_object;
		var_467_float = var_541_float;
		func_5014();
	}
}
EMIT "Stack[-3] = 0";


void func_6679(bool var_20_bool, string var_21_string)
{
	object var_23_object;
	if(var_21_string == "heal") {
		@FindActor(var_23_object, "player");
		bool var_27_bool; object var_28_object;
		var_23_object = var_28_object;
		func_6935(var_28_object);
		var_27_bool = var_20_bool;
	EMIT "Stack[-1] = 0";
	}
	var_20_bool = false;
}


// @pe
void func_6168(bool var_396_bool, object var_397_object)
{
	object var_399_object;
	var_397_object = var_399_object;
	func_6283(var_399_object);
	bool var_398_bool;
	if(var_398_bool != 0) {
		var_396_bool = true;
		return 0;
	}
	var_396_bool = false;
}


void func_4122(bool var_0_bool)
{
	func_5790(var_0_bool);
}


// @pe
void func_6178(bool var_151_bool)
{
	int var_153_int;
	func_5972(var_153_int);
	var_151_bool = var_153_int == 1;
}


void func_6695(string var_31_string)
{
	object var_33_object;
	if(var_31_string == "heal") {
		@FindActor(var_33_object, "player");
		object var_37_object;
		var_33_object = var_37_object;
		func_6938();
		var_33_object = null;
	}
}


void func_40(bool var_0_bool, int var_44_int, object var_45_object)
{
	var_0_bool = var_45_object;
	bool var_55_bool; object var_56_object;
	var_45_object = var_56_object;
	func_5611(var_55_bool, var_56_object, 70.0);
	if(!var_55_bool) { //@nz
		var_44_int = -2;
		return 8;
	}
	object var_51_object;
	@CreateDialog(var_51_object);
	int var_103_int;
	func_6942(var_103_int);
	var_51_object->SetNPCName(var_103_int);
	int var_104_int;
	func_6940(var_104_int);
	var_51_object->SetNPCDescription(var_104_int);
	string var_105_string;
	func_6944(var_105_string);
	var_51_object->SetPhoto(var_105_string);
	string var_106_string;
	func_6946(var_106_string);
	var_51_object->SetPhoto2(var_106_string);
	int var_107_int;
	func_6294(var_107_int);
	var_51_object->SetPlayerName(var_107_int);
	bool var_52_bool;
	@IsOverrideActive(var_52_bool);
	if(var_52_bool != 0) {
		var_44_int = -2;
		return 8;
	}
	@DoDialog(var_51_object);
	object var_116_object; object var_117_object;
	var_45_object = var_116_object;
	var_51_object = var_117_object;
	TaskCall(2);
	func_114(var_118_object, var_119_object, var_120_string, var_121_bool, var_116_object, var_117_object);
	TaskReturn();
	bool var_54_bool;
	var_51_object->IsDialogEnd(var_54_bool);
	
	for(;;) {
		var_490_bool = !var_54_bool; //@nz
		if(var_490_bool == 0) goto Label_103;
		@sync();
		var_51_object->IsDialogEnd(var_54_bool);
	}
	
Label_103:
	object var_491_object;
	var_45_object = var_491_object;
	func_5680();
	@StopDialog(var_51_object);
	var_51_object->GetReturnValue(-1);
	int var_53_int = var_44_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_6185(bool var_165_bool)
{
	int var_167_int;
	func_5972(var_167_int);
	var_165_bool = var_167_int == 2;
}


void func_5680(void)
{
	bool var_493_bool;
	@CameraSwitchToNormal(true);
	bool var_495_bool;
	func_6948(var_495_bool);
	if(var_495_bool != 0) {
	} else {
		@HasAnimationTrack(var_493_bool, "head");
		if(var_493_bool == 0) goto Label_5697;
		@UnlookAsync("head");
	}
Label_5697:
	
}


// @pe
void func_6192(bool var_175_bool)
{
	int var_177_int;
	func_5972(var_177_int);
	var_175_bool = var_177_int == 3;
}


void func_6708(string var_155_string, int var_156_int)
{
	string var_158_string = "idle";
	if(var_156_int != 0)
		var_158_string += var_156_int;
	var_158_string = var_155_string;
}


void func_4663(bool var_0_bool, object var_1_object, bool var_423_bool, float var_424_float)
{
	string var_432_string;
	func_5002(var_432_string);
	int var_429_int;
	@irand(var_429_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_5998();
	@PlayAnimation("all", ("attack_begin" + (var_429_int + 1)));
	@WaitForAnimEnd();
	int var_431_int;
	func_4970(var_431_int, var_432_string);
	bool var_457_bool;
	func_5445(var_457_bool, var_0_bool);
	if(!var_457_bool) { //@nz
		@StopAsync();
		var_423_bool = false;
		return 8;
	}
	float var_460_float; int var_461_int;
	var_424_float = var_460_float;
	var_429_int = var_461_int;
	func_4624(var_432_string, var_460_float, var_461_int);
	bool var_430_bool;
	@HasAnimation(var_430_bool, "all", ("attack_middle" + var_429_int));
	if(var_430_bool != 0) {
		func_5998();
		@PlayAnimation("all", ("attack_middle" + var_429_int));
		@WaitForAnimEnd();
		func_5002(var_432_string);
		bool var_549_bool;
		func_5445(var_549_bool, var_0_bool);
		if(!var_549_bool) { //@nz
			@StopAsync();
			var_423_bool = false;
			return 8;
		}
		float var_552_float; int var_553_int;
		var_424_float = var_552_float;
		func_4624(var_432_string, var_552_float, var_553_int);
		var_431_int = 1;

		for(;;) {
			var_432_string = (("attack_middle" + var_553_int) + "_") + var_431_int;
			@HasAnimation(var_430_bool, "all", var_432_string);
			if(!var_430_bool) { //@nz
			} else {
				func_5998();
				@PlayAnimation("all", var_432_string);
				@WaitForAnimEnd();
				func_5002(var_432_string);
				bool var_575_bool;
				func_5445(var_575_bool, var_0_bool);
				if(!var_575_bool) { //@nz
					@StopAsync();
					var_423_bool = false;
					return 8;
				}
				float var_578_float; int var_579_int;
				var_424_float = var_578_float;
				var_429_int = var_579_int;
				func_4624(var_432_string, var_578_float, var_579_int);
				var_431_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_429_int));
		bool var_564_bool;
		func_5016(var_564_bool);
		if(var_564_bool != 0) {
			bool var_565_bool;
			func_4800(var_565_bool, 0.75);
			@StopAsync();
		}
		var_423_bool = true;
		return 8;

	}
}


// @pe
void func_6199(bool var_190_bool)
{
	int var_192_int;
	func_5972(var_192_int);
	var_190_bool = var_192_int == 4;
}


void func_6715(int var_149_int)
{
	int var_152_int; bool var_153_bool;
	var_152_int = 0;
	
	for(;;) {
		string var_155_string; int var_156_int;
		var_152_int = var_156_int;
		func_6708(var_155_string, var_156_int);
		@HasAnimation(var_153_bool, "all", var_155_string);
		if(!var_153_bool) //@nz
			break;
		var_152_int += 1;
	}
	var_152_int = var_149_int;
}


// @pe
void func_6206(bool var_199_bool)
{
	int var_201_int;
	func_5972(var_201_int);
	var_199_bool = var_201_int == 5;
}


// @pe
void func_5698(bool var_500_bool, object var_501_object)
{
	object var_503_object;
	var_501_object = var_503_object;
	bool var_502_bool;
	func_5706(var_502_bool, var_503_object, (float)70);
	var_502_bool = var_500_bool;
}


// @pe
void func_6213(bool var_208_bool)
{
	int var_210_int;
	func_5972(var_210_int);
	var_208_bool = var_210_int == 6;
}


void func_5706(bool var_502_bool, object var_503_object, float var_504_float)
{
	cvector var_514_cvector;
	var_503_object->GetPosition(var_514_cvector);
	float var_513_float;
	var_503_object->GetEyesHeight(var_513_float);
	var_521_float = GetByIndex(var_514_cvector, 1);
	SetByIndex(var_514_cvector, 1) = (var_521_float + var_513_float);
	cvector var_515_cvector;
	@GetPosition(var_515_cvector);
	@GetEyesHeight(var_513_float);
	var_522_float = GetByIndex(var_515_cvector, 1);
	SetByIndex(var_515_cvector, 1) = (var_522_float + var_513_float);
	cvector var_516_cvector = var_514_cvector - var_515_cvector;
	var_523_float = GetByIndex(var_516_cvector, 1);
	SetByIndex(var_516_cvector, 1) = (float)0;
	var_525_float = sqrt(var_516_cvector | var_516_cvector);
	var_516_cvector /= var_525_float;
	cvector var_517_cvector = -var_516_cvector;
	cvector var_518_cvector = (var_516_cvector * var_504_float) - [0.0, 10.0, 0.0];
	bool var_520_bool;
	@IsOverrideActive(var_520_bool);
	if(var_520_bool != 0)
		var_502_bool = false;
	@StopWorld();
	@CameraTransit((var_515_cvector + var_518_cvector), var_517_cvector, true);
	var_530_float = GetByIndex(var_518_cvector, 0);
	var_531_float = GetByIndex(var_518_cvector, 2);
	@Rotate(var_530_float, var_531_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_502_bool = true;
}


// @pe
void func_6732(int var_62_int)
{
	bool var_64_bool;
	func_6998(var_64_bool);
	if(var_64_bool != 0)
		var_62_int = 2;
	else
		var_62_int = 0;
	
}


// @pe
void func_6220(bool var_181_bool)
{
	int var_183_int;
	func_5972(var_183_int);
	var_181_bool = var_183_int == 7;
}


void func_3663(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_3799(var_18_object, var_19_bool);
}


// @pe
void func_6227(bool var_218_bool)
{
	int var_220_int;
	func_5972(var_220_int);
	var_218_bool = var_220_int == 8;
}


// @pe
void func_6741(object var_61_object)
{
	object var_62_object;
	var_61_object = var_62_object;
	TaskCall(6);
	func_4071(var_63_object, var_62_object);
	TaskReturn();
}


void func_3671(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_3806(var_23_bool, var_24_int);
}


// @pe
void func_6234(bool var_224_bool)
{
	int var_226_int;
	func_5972(var_226_int);
	var_224_bool = var_226_int == 9;
}


// @pe
void func_6749(int var_89_int, object var_90_object)
{
	object var_92_object;
	var_90_object = var_92_object;
	bool var_91_bool;
	func_5445(var_91_bool, var_92_object);
	if(var_91_bool != 0)
		var_89_int = 2;
	else
		var_89_int = 0;
	
}


// @pe
void func_6241(bool var_270_bool)
{
	int var_272_int;
	func_5972(var_272_int);
	var_270_bool = var_272_int == 10;
}


// @pe
void func_6759(object var_126_object)
{
	object var_127_object;
	var_126_object = var_127_object;
	TaskCall(7);
	func_4346(var_127_object);
	TaskReturn();
}


void func_3688(object var_2_object, object var_20_object)
{
	bool var_25_bool; object var_26_object;
	func_5445(var_25_bool, var_26_object);
	if(!var_25_bool) //@nz
		return 4;
	if(var_2_object != 0)
		return 4;
	bool var_23_bool;
	@IsPlayerActor(var_26_object, var_23_bool);
	if(!var_23_bool) //@nz
		return 4;
	int var_62_int; object var_63_object;
	var_20_object = var_63_object;
	func_6732(var_63_object);
	int var_24_int;
	var_62_int = var_24_int;
	if(var_24_int > 0) {
		if(var_24_int > 1)
			func_3671(var_24_int);
		object var_70_object;
		var_20_object = var_70_object;
		func_6741(var_70_object);
		var_2_object = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_6248(bool var_276_bool)
{
	int var_278_int;
	func_5972(var_278_int);
	var_276_bool = var_278_int == 11;
}


// @pe
void func_6255(bool var_282_bool)
{
	int var_284_int;
	func_5972(var_284_int);
	var_282_bool = var_284_int == 12;
}


void func_6767(bool var_35_bool, object var_36_object, bool var_37_bool)
{
	bool var_42_bool; object var_43_object;
	func_5319(var_42_bool, var_43_object, "class");
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 4;
	}
	string var_40_string;
	@GetProperty("class", var_40_string);
	string var_41_string;
	var_43_object->GetProperty("class", var_41_string);
	bool var_54_bool = false;
	if(!var_37_bool) { //@nz
		if(var_40_string == var_41_string)
			var_54_bool = true;
	}
	if(var_54_bool != 0) {
		var_35_bool = true;
		return 4;
	}
	if(var_41_string == "rat") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	if(var_41_string == "rat_big") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	if(var_41_string == "dog") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	if(var_41_string == "grabitel") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	if(var_41_string == "bomber") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	if(var_41_string == "sanitar") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	if(var_41_string == "hunter") {
		var_35_bool = false;
		return 4;
	EMIT "GOTO 0x1ab8";
	}
	if(var_41_string == "soldier") {
		var_35_bool = false;
		return 4;
	}
	var_35_bool = true;
}


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_116_object, object var_117_object)
{
	var_0_bool = var_117_object;
	var_1_object = var_116_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_123_bool;
		func_6026(var_1_object);
		if(var_123_bool != 0) {
			func_742(var_117_object, "Neutral");
			var_0_bool->SetMessage(543072); //@t
			var_0_bool->ClearReplies(); //@t
			bool var_149_bool;
			func_6038(var_149_bool, var_1_object);
			if(var_149_bool != 0)
				var_0_bool->AddReply(543073, 45531, 45528); //@t
			bool var_163_bool;
			func_6048(var_163_bool, var_1_object);
			if(var_163_bool != 0)
				var_0_bool->AddReply(543092, 45550, 45547); //@t
			bool var_172_bool = true;
			bool var_173_bool;
			func_6058(var_173_bool, var_1_object);
			if(var_173_bool != 1) {
				bool var_179_bool;
				func_6098(var_179_bool, var_1_object);
				if(var_179_bool != 1)
					var_172_bool = false;
			}
			if(var_172_bool != 0)
				var_0_bool->AddReply(543108, 45564, 45563); //@t
			bool var_188_bool;
			func_6068(var_188_bool, var_1_object);
			if(var_188_bool != 0)
				var_0_bool->AddReply(543101, 45557, 45556); //@t
			bool var_197_bool;
			func_6078(var_197_bool, var_1_object);
			if(var_197_bool != 0)
				var_0_bool->AddReply(543117, 45573, 45572); //@t
			bool var_206_bool;
			func_6088(var_206_bool, var_1_object);
			if(var_206_bool != 0)
				var_0_bool->AddReply(543127, 45583, 45582); //@t
			bool var_215_bool = true;
			bool var_216_bool;
			func_6108(var_216_bool, var_1_object);
			if(var_216_bool != 1) {
				bool var_222_bool;
				func_6118(var_222_bool, var_1_object);
				if(var_222_bool != 1)
					var_215_bool = false;
			}
			if(var_215_bool != 0)
				var_0_bool->AddReply(543139, 45595, 45594); //@t
			bool var_231_bool;
			func_6038(var_231_bool, var_1_object);
			if(var_231_bool != 0)
				var_0_bool->AddReply(543075, -1, 45530); //@t
			bool var_236_bool = true;
			bool var_237_bool = true;
			bool var_238_bool = true;
			bool var_239_bool;
			func_6048(var_239_bool, var_1_object);
			if(var_239_bool != 1) {
				bool var_241_bool;
				func_6058(var_241_bool, var_1_object);
				if(var_241_bool != 1)
					var_238_bool = false;
			}
			if(var_238_bool != 1) {
				bool var_243_bool;
				func_6068(var_243_bool, var_1_object);
				if(var_243_bool != 1)
					var_237_bool = false;
			}
			if(var_237_bool != 1) {
				bool var_245_bool;
				func_6078(var_245_bool, var_1_object);
				if(var_245_bool != 1)
					var_236_bool = false;
			}
			if(var_236_bool != 0)
				var_0_bool->AddReply(543100, -1, 45555); //@t
			bool var_250_bool;
			func_6088(var_250_bool, var_1_object);
			if(var_250_bool != 0)
				var_0_bool->AddReply(543125, -1, 45580); //@t
			bool var_255_bool = true;
			bool var_256_bool = true;
			bool var_257_bool;
			func_6098(var_257_bool, var_1_object);
			if(var_257_bool != 1) {
				bool var_259_bool;
				func_6108(var_259_bool, var_1_object);
				if(var_259_bool != 1)
					var_256_bool = false;
			}
			if(var_256_bool != 1) {
				bool var_261_bool;
				func_6118(var_261_bool, var_1_object);
				if(var_261_bool != 1)
					var_255_bool = false;
			}
			if(var_255_bool != 0)
				var_0_bool->AddReply(543147, -1, 45602); //@t
			bool var_266_bool = true;
			bool var_267_bool = true;
			bool var_268_bool;
			func_6128(var_268_bool, var_1_object);
			if(var_268_bool != 1) {
				bool var_274_bool;
				func_6138(var_274_bool, var_1_object);
				if(var_274_bool != 1)
					var_267_bool = false;
			}
			if(var_267_bool != 1) {
				bool var_280_bool;
				func_6148(var_280_bool, var_1_object);
				if(var_280_bool != 1)
					var_266_bool = false;
			}
			if(var_266_bool != 0)
				var_0_bool->AddReply(543148, -1, 45603); //@t
			bool var_289_bool;
			func_6038(var_289_bool, var_1_object);
			if(var_289_bool != 0)
				var_0_bool->AddReply(543074, -1, 45529); //@t
			bool var_294_bool = true;
			bool var_295_bool;
			func_6048(var_295_bool, var_1_object);
			if(var_295_bool != 1) {
				bool var_297_bool;
				func_6058(var_297_bool, var_1_object);
				if(var_297_bool != 1)
					var_294_bool = false;
			}
			if(var_294_bool != 0)
				var_0_bool->AddReply(543090, -1, 45545); //@t
			bool var_302_bool = true;
			bool var_303_bool;
			func_6048(var_303_bool, var_1_object);
			if(var_303_bool != 1) {
				bool var_305_bool;
				func_6058(var_305_bool, var_1_object);
				if(var_305_bool != 1)
					var_302_bool = false;
			}
			if(var_302_bool != 0)
				var_0_bool->AddReply(543099, -1, 45554); //@t
			bool var_310_bool = true;
			bool var_311_bool;
			func_6088(var_311_bool, var_1_object);
			if(var_311_bool != 1) {
				bool var_313_bool;
				func_6118(var_313_bool, var_1_object);
				if(var_313_bool != 1)
					var_310_bool = false;
			}
			if(var_310_bool != 0)
				var_0_bool->AddReply(543126, -1, 45581); //@t
			bool var_318_bool = true;
			bool var_319_bool = true;
			bool var_320_bool = true;
			bool var_321_bool;
			func_6098(var_321_bool, var_1_object);
			if(var_321_bool != 1) {
				bool var_323_bool;
				func_6108(var_323_bool, var_1_object);
				if(var_323_bool != 1)
					var_320_bool = false;
			}
			if(var_320_bool != 1) {
				bool var_325_bool;
				func_6128(var_325_bool, var_1_object);
				if(var_325_bool != 1)
					var_319_bool = false;
			}
			if(var_319_bool != 1) {
				bool var_327_bool;
				func_6148(var_327_bool, var_1_object);
				if(var_327_bool != 1)
					var_318_bool = false;
			}
			if(var_318_bool != 0)
				var_0_bool->AddReply(543149, -1, 45604); //@t
			bool var_332_bool = true;
			bool var_333_bool = true;
			bool var_334_bool = true;
			bool var_335_bool = true;
			bool var_336_bool;
			func_6068(var_336_bool, var_1_object);
			if(var_336_bool != 1) {
				bool var_338_bool;
				func_6078(var_338_bool, var_1_object);
				if(var_338_bool != 1)
					var_335_bool = false;
			}
			if(var_335_bool != 1) {
				bool var_340_bool;
				func_6118(var_340_bool, var_1_object);
				if(var_340_bool != 1)
					var_334_bool = false;
			}
			if(var_334_bool != 1) {
				bool var_342_bool;
				func_6138(var_342_bool, var_1_object);
				if(var_342_bool != 1)
					var_333_bool = false;
			}
			if(var_333_bool != 1) {
				bool var_344_bool;
				func_6148(var_344_bool, var_1_object);
				if(var_344_bool != 1)
					var_332_bool = false;
			}
			if(var_332_bool != 0)
				var_0_bool->AddReply(543150, -1, 45605); //@t
		} else {
					func_742(var_117_object, "Neutral");
					var_0_bool->SetMessage(536854); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(536855, -1, 38691); //@t
					bool var_372_bool = false;
					bool var_373_bool;
					func_6038(var_373_bool, var_1_object);
					if(var_373_bool != 0) {
						bool var_375_bool;
						func_6158(var_375_bool, var_1_object);
						if(var_375_bool != 0)
							var_372_bool = true;
					}
					if(var_372_bool != 0)
						var_0_bool->AddReply(536856, 38693, 38692); //@t
					bool var_393_bool = false;
					bool var_394_bool;
					func_6038(var_394_bool, var_1_object);
					if(var_394_bool != 0) {
						bool var_396_bool;
						func_6168(var_396_bool, var_1_object);
						if(var_396_bool != 0)
							var_393_bool = true;
					}
					if(var_393_bool != 0)
						var_0_bool->AddReply(536870, 38709, 38708); //@t
					bool var_406_bool;
					func_6048(var_406_bool, var_1_object);
					if(var_406_bool != 0)
						var_0_bool->AddReply(536885, 38724, 38723); //@t
					bool var_411_bool;
					func_6058(var_411_bool, var_1_object);
					if(var_411_bool != 0)
						var_0_bool->AddReply(536904, 38743, 38742); //@t
					bool var_416_bool;
					func_6068(var_416_bool, var_1_object);
					if(var_416_bool != 0)
						var_0_bool->AddReply(536916, 38755, 38754); //@t
					bool var_421_bool = false;
					bool var_422_bool;
					func_6088(var_422_bool, var_1_object);
					if(var_422_bool != 0) {
						bool var_424_bool;
						func_6014(var_1_object);
						if(var_424_bool != 0)
							var_421_bool = true;
					}
					if(var_421_bool != 0)
						var_0_bool->AddReply(536931, 38770, 38769); //@t
					bool var_433_bool;
					func_6108(var_433_bool, var_1_object);
					if(var_433_bool != 0)
						var_0_bool->AddReply(536943, 38782, 38781); //@t
					bool var_438_bool;
					func_6118(var_438_bool, var_1_object);
					if(var_438_bool != 0)
						var_0_bool->AddReply(536961, 38800, 38799); //@t
					bool var_443_bool;
					func_6128(var_443_bool, var_1_object);
					if(var_443_bool != 0)
						var_0_bool->AddReply(536978, 38817, 38816); //@t
					bool var_448_bool = false;
					bool var_449_bool;
					func_6138(var_449_bool, var_1_object);
					if(var_449_bool != 0) {
						bool var_451_bool;
						func_6014(var_1_object);
						if(var_451_bool != 0)
							var_448_bool = true;
					}
					if(var_448_bool != 0)
						var_0_bool->AddReply(536993, 38832, 38831); //@t
					bool var_456_bool = false;
					bool var_457_bool;
					func_6038(var_457_bool, var_1_object);
					if(var_457_bool != 0) {
						bool var_459_bool;
						func_6014(var_1_object);
						if(var_459_bool != 0)
							var_456_bool = true;
					}
					if(var_456_bool != 0)
						var_0_bool->AddReply(537006, 38846, 38845); //@t
					bool var_464_bool = false;
					bool var_465_bool;
					func_6038(var_465_bool, var_1_object);
					if(var_465_bool != 0) {
						bool var_467_bool;
						func_6014(var_1_object);
						if(var_467_bool != 0)
							var_464_bool = true;
					}
					if(var_464_bool != 0)
						var_0_bool->AddReply(537017, 38857, 38856); //@t
					bool var_472_bool;
					func_6038(var_472_bool, var_1_object);
					if(var_472_bool != 0)
						var_0_bool->AddReply(537025, 38865, 38864); //@t
					bool var_477_bool;
					func_6038(var_477_bool, var_1_object);
					if(var_477_bool != 0)
						var_0_bool->AddReply(537035, 38875, 38874); //@t
					bool var_482_bool;
					func_6038(var_482_bool, var_1_object);
					if(var_482_bool != 0)
						var_0_bool->AddReply(537044, 38884, 38883); //@t
					var_0_bool->AddReply(537050, -1, 38889); //@t
		}
	}
	for(;;) {
		bool var_349_bool;
		func_6948(var_349_bool);
		if(var_349_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_5759(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_741;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_741:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x76";


// @pe
void func_5236(bool var_0_bool, object var_1_object, int var_27_int)
{
	if(var_27_int != 0)
		return 0;
	bool var_30_bool;
	func_5274(var_30_bool, var_1_object);
	if(!var_30_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_6262(bool var_377_bool)
{
	bool var_379_bool = false;
	int var_380_int;
	func_5981(var_380_int);
	if(var_380_int >= 0) {
		int var_387_int;
		func_5981(var_387_int);
		if(var_387_int < 12)
			var_379_bool = true;
	}
	if(var_379_bool != 0) {
		var_377_bool = true;
		return 0;
	}
	var_377_bool = false;
}


// @pe
void func_5754(void)
{
	@CameraSwitchToNormal(true);
}


void func_5759(string var_351_string)
{
	bool var_355_bool; float var_356_float; float var_357_float;
	@lshHasAnimation(var_355_bool, var_351_string);
	if(var_355_bool != 0) {
		@lshGetAnimTimes(var_351_string, var_356_float, var_357_float);
		@lshPlayAnimation(var_356_float, var_357_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_351_string);
	}
	
}


void func_5258(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_6283(bool var_398_bool)
{
	int var_400_int;
	func_5981(var_400_int);
	if(var_400_int >= 12)
		var_398_bool = true;
	var_398_bool = false;
}


void func_5775(string var_135_string, bool var_136_bool)
{
	bool var_142_bool; float var_143_float; float var_144_float;
	@lshHasAnimation(var_142_bool, var_135_string);
	if(var_142_bool != 0) {
		@lshGetAnimTimes(var_135_string, var_143_float, var_144_float);
		@lshPlayAnimation(var_143_float, var_144_float, var_136_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_135_string);
	}
	
}


void func_3728(bool var_0_bool, object var_1_object)
{
	float var_112_float; cvector var_113_cvector; cvector var_114_cvector; bool var_115_bool; object var_116_object; bool var_117_bool;
	@rand(var_112_float, 0.5);
	@Sleep(var_112_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_3740:
				@GetPosition(var_114_cvector);
				float var_121_float;
				func_3787(var_121_float);
				@GetRandomPFPointInCircle(var_113_cvector, var_114_cvector, var_121_float, var_115_bool);
				if(var_115_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_3740;
			}
				var_1_object = false;
		}
		}
		goto Label_3756;

	Label_3756:
		object var_125_object; cvector var_126_cvector;
		var_113_cvector = var_126_cvector;
		func_3815(var_125_object, var_126_cvector);
		var_125_object = var_116_object;
		if(var_116_object != null) {
			@RotatePath(var_116_object, var_117_bool);
			if(var_117_bool != 0) {
				bool var_131_bool;
				func_3813(var_131_bool);
				@FollowPath(var_116_object, var_131_bool, var_117_bool);
				var_116_object = null;
				if(var_117_bool != 0) {
					TaskCall(5);
					func_3985();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_116_object = null;
	}
	
}


void func_6294(int var_107_int)
{
	int var_109_int;
	@GetVariable("branch", var_109_int);
	if(var_109_int == 0) {
		var_107_int = 1;
		return 2;
	EMIT "GOTO 0x18a5";
	}
	if(var_109_int == 1) {
		var_107_int = 2;
		return 2;
	}
	var_107_int = 3;
}


// @pe
void func_5274(bool var_30_bool, object var_31_object)
{
	object var_33_object;
	var_31_object = var_33_object;
	bool var_32_bool;
	func_5445(var_32_bool, var_33_object);
	var_32_bool = var_30_bool;
}


void func_5790(object var_23_object)
{
	float var_26_float;
	var_23_object->GetEyesHeight(var_26_float);
	cvector var_27_cvector = [0.0, 0.0, 0.0];
	var_28_float = GetByIndex(var_27_cvector, 1);
	var_26_float = var_28_float;
	SetByIndex(var_27_cvector, 1) = var_28_float;
	@LookAsync(var_23_object, "head", var_27_cvector);
}


void func_5281(string var_274_string)
{
	var_274_string = "walk";
}


void func_5283(string var_275_string)
{
	var_275_string = "run";
}


// @pe
void func_5285(string var_502_string, int var_503_int)
{
	if(var_503_int == 2) {
		var_502_string = "fire";
		return 0;
	EMIT "GOTO 0x14b1";
	}
	if(var_503_int == 1) {
		var_502_string = "bullet";
		return 0;
	}
	var_502_string = "phys";
}


void func_6311(int var_158_int)
{
	int var_160_int;
	@GetVariable("branch", var_160_int);
	var_160_int = var_158_int;
}


void func_5801(void)
{
	bool var_22_bool;
	func_6948(var_22_bool);
	if(var_22_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_6317(object var_36_object)
{
	int var_37_int;
	func_6311(var_37_int);
	if(var_37_int == 1)
		@WorkWithCorpse(var_36_object);
	else
		@Barter(var_36_object);
	
}


void func_4270(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_5808(string var_58_string, int var_59_int, int var_60_int)
{
	bool var_62_bool;
	int var_64_int;
	var_59_int = var_64_int;
	int var_65_int;
	var_60_int = var_65_int;
	bool var_63_bool;
	func_5909(var_63_bool, var_64_int, var_65_int);
	if(var_63_bool != 0)
		@AddItem(var_62_bool, var_58_string, 0);
}


void func_5299(cvector var_53_cvector, object var_54_object)
{
	cvector var_57_cvector;
	@GetPosition(var_57_cvector);
	cvector var_58_cvector;
	var_54_object->GetPosition(var_58_cvector);
	var_53_cvector = var_58_cvector - var_57_cvector;
}


// @pe
void func_6842(int var_86_int, object var_87_object)
{
	object var_90_object;
	var_87_object = var_90_object;
	int var_89_int;
	func_6749(var_89_int, var_90_object);
	var_89_int = var_86_int;
}


void func_6330(int var_116_int, int var_117_int)
{
	if(var_116_int > var_117_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_129_int = 0;
	if(var_116_int != var_117_int) {
		@irand(var_129_int, (var_117_int - var_116_int));
	} else if(var_116_int == 0) {
		return 4;
	}
	var_129_int += var_116_int;
	if(var_129_int == 0)
		return 4;
	int var_137_int;
	func_6530(var_137_int, "Money");
	bool var_130_bool;
	@AddItem(var_130_bool, var_137_int, 0, var_129_int);
	
}


void func_5819(string var_36_string, int var_37_int, int var_38_int, int var_39_int)
{
	int var_42_int; bool var_43_bool;
	int var_45_int;
	var_37_int = var_45_int;
	int var_46_int;
	var_38_int = var_46_int;
	bool var_44_bool;
	func_5909(var_44_bool, var_45_int, var_46_int);
	if(var_44_bool != 0) {
		@irand(var_42_int, var_39_int);
		@AddItem(var_43_bool, var_36_string, 0, (var_42_int + 1));
	}
}


void func_5306(float var_37_float, object var_38_object)
{
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	cvector var_43_cvector;
	var_38_object->GetPosition(var_43_cvector);
	var_37_float = (var_43_cvector - var_42_cvector) | (var_43_cvector - var_42_cvector);
}


void func_4800(bool var_565_bool, float var_566_float)
{
	float var_569_float; bool var_570_bool;
	@rand(var_569_float);
	if(var_569_float < var_566_float) {

		for(;;) {
			@IsAnimationPlaying(var_570_bool);
			if(!var_570_bool) { //@nz
			} else {
				bool var_573_bool;
				func_4898(var_573_bool);
				if(var_573_bool != 0) {
					var_565_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_565_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_5002(var_570_bool);
}


// @pe
void func_6849(object var_125_object)
{
	object var_126_object;
	var_125_object = var_126_object;
	func_6759(var_126_object);
}


void func_5314(bool var_103_bool, object var_104_object)
{
	bool var_106_bool;
	@IsPlayerActor(var_104_object, var_106_bool);
	var_106_bool = var_103_bool;
}


void func_5319(bool var_54_bool, object var_55_object, string var_56_string)
{
	var_61_bool = IsFuncExist(var_55_object, "HasProperty", 2);
	if(!var_61_bool) { //@nz
		var_54_bool = false;
		return 2;
	}
	bool var_58_bool;
	var_55_object->HasProperty(var_56_string, var_58_bool);
	var_58_bool = var_54_bool;
}


void func_6855(bool var_28_bool, object var_29_object, object var_30_object, float var_31_float, bool var_32_bool)
{
	object var_36_object;
	var_30_object = var_36_object;
	bool var_35_bool;
	func_6767(var_35_bool, var_36_object, !var_32_bool);
	if(!var_35_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_34_bool;
	@CanSee(var_34_bool, var_29_object);
	bool var_74_bool = true;
	if(var_34_bool != 1) {
		float var_76_float; object var_77_object;
		var_29_object = var_77_object;
		func_5306(var_76_float, var_77_object);
		var_85_bool = var_76_float <= (var_31_float * var_31_float);
		if(var_85_bool != 1)
			var_74_bool = false;
	}
	if(var_74_bool != 0) {
		var_28_bool = true;
		return 2;
	}
	var_28_bool = false;
}


void func_5834(string var_45_string)
{
	bool var_54_bool; int var_55_int; bool var_56_bool; int var_57_int; bool var_58_bool; float var_59_float; cvector var_60_cvector; cvector var_61_cvector;
	@IsExisting3DSound(var_54_bool, var_45_string);
	if(!var_54_bool) { //@nz
		var_55_int = 0;

		for(;;) {
			@IsExisting3DSound(var_56_bool, (var_45_string + (var_55_int + 1)));
			if(!var_56_bool) { //@nz
				break;
			Label_5854:
				@irand(var_57_int, var_55_int);
				var_45_string += (var_57_int + 1);
	}
			@Is3DSoundLoaded(var_58_bool, var_45_string);
			if(var_58_bool != 0) {
				@GetEyesHeight(var_59_float);
				@GetDirection(var_60_cvector);
				var_61_cvector = var_60_cvector * 50;
				var_72_float = GetByIndex(var_61_cvector, 1);
				SetByIndex(var_61_cvector, 1) = (var_72_float + var_59_float);
				@PlayGlobalSound(var_45_string, var_61_cvector);
			}
		}
		var_55_int += 1;
	}
	var_67_bool = !var_55_int; //@nz
	if(var_67_bool == 0) goto Label_5854;
}


void func_3787(float var_121_float)
{
	float var_123_float;
	@GetCameraFarDistance(var_123_float);
	var_123_float = var_121_float;
}


void func_5331(float var_474_float, object var_475_object, float var_476_float, int var_477_int)
{
	int var_487_int; int var_489_int;
	object var_494_object;
	var_475_object = var_494_object;
	bool var_493_bool;
	func_5319(var_493_bool, var_494_object, "health");
	if(!var_493_bool) //@nz
		var_474_float = 0.0;
	bool var_497_bool; object var_498_object;
	func_5319(var_497_bool, var_498_object, "armor");
	if(!var_497_bool) //@nz
		var_487_int = 0;
	else
		var_498_object->GetProperty("armor", var_487_int);
	string var_502_string; int var_503_int;
	var_477_int = var_503_int;
	func_5285(var_502_string, var_503_int);
	string var_488_string = "armor_" + var_502_string;
	bool var_508_bool; object var_509_object; string var_510_string;
	var_475_object = var_509_object;
	func_5319(var_508_bool, var_509_object, var_510_string);
	if(!var_508_bool) //@nz
		var_489_int = 0;
	else
		var_475_object->GetProperty(var_510_string, var_489_int);

	float var_512_float;
	func_5891(var_512_float, ((var_487_int + var_489_int) / 100.0), (float)1);
	float var_490_float;
	var_512_float = var_490_float;
	float var_491_float;
	var_475_object->GetProperty("health", var_491_float);
	float var_492_float = var_476_float * (1 - var_490_float);
	float var_522_float;
	func_5898(var_522_float, (var_491_float - var_492_float), (float)0, (float)1);
	var_475_object->SetProperty("health", var_522_float);
	bool var_528_bool; object var_529_object;
	var_475_object = var_529_object;
	func_5314(var_528_bool, var_529_object);
	if(var_528_bool != 0) {
		float var_530_float = -var_492_float;
		func_5955(var_530_float);
	}
	var_492_float = var_474_float;
	
}


void func_3799(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_6361(string var_164_string)
{
	object var_168_object;
	@CreateInvItem(var_168_object);
	var_168_object->SetItemName(var_164_string);
	var_168_object->SetProperty("Organ", 1);
	int var_169_int;
	var_168_object->GetItemID(var_169_int);
	bool var_170_bool;
	@AddItem(var_170_bool, var_168_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_4827(bool var_0_bool, bool var_362_bool, float var_363_float)
{
	bool var_369_bool; cvector var_370_cvector; cvector var_371_cvector; cvector var_372_cvector; float var_373_float;
	
	for(;;) {
		@IsAnimationPlaying(var_369_bool);
		if(!var_369_bool) //@nz
			break;
		bool var_375_bool;
		func_4898(var_375_bool);
		if(var_375_bool != 0) {
			var_362_bool = true;
			return 10;
		}
		bool var_418_bool;
		func_5445(var_418_bool, var_0_bool);
		if(!var_418_bool) { //@nz
			var_362_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_370_cvector); //@t
		@GetPFPosition(var_371_cvector);
		var_372_cvector = var_370_cvector - var_371_cvector;
		var_373_float = var_372_cvector | var_372_cvector;
		if(var_373_float < (var_363_float * var_363_float)) {
			bool var_423_bool; float var_424_float;
			var_363_float = var_424_float;
			func_4663(var_372_cvector, var_373_float, var_423_bool, var_424_float);
			var_362_bool = true;
			return 10;
		}
		@sync();
	}
	func_5002(var_373_float);
	var_362_bool = false;
}


void func_3806(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_3296(object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	func_3329(var_22_object);
	object var_102_object;
	var_21_object = var_102_object;
	func_7010(var_102_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_6884(int var_22_int)
{
	var_22_int = 0;
}


void func_3813(bool var_131_bool)
{
	var_131_bool = false;
}


// @pe
void func_742(object var_2_object, string var_131_string)
{
	bool var_132_bool;
	func_6948(var_132_bool);
	if(!var_132_bool) //@nz
		return 0;
	if(var_131_string == var_2_object)
		return 0;
	string var_135_string; bool var_136_bool;
	var_131_string = var_135_string;
	if(var_131_string == "")
		var_136_bool = false;
	else
		var_136_bool = true;
	func_5775(var_135_string, var_136_bool);
	var_2_object = var_131_string;
	
}


// @pe
void func_6887(void)
{
}


void func_3815(object var_125_object, cvector var_126_cvector)
{
	object var_128_object;
	@FindShiftedPathTo(var_128_object, var_126_cvector);
	var_128_object = var_125_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6889(int var_129_int)
{
	var_129_int = 0;
}


void func_6378(void)
{
	int var_158_int;
	func_6311(var_158_int);
	if(var_158_int != 1) {
	}
	func_6361("liver");
	func_6361("kidney");
	func_6361("heart");
	func_6361("blood");
}


// @pe
void func_6892(void)
{
}


// @pe
void func_6894(int var_22_int)
{
	var_22_int = 2;
}


// @pe
void func_6897(object var_30_object)
{
	object var_31_object;
	func_6958(var_31_object, var_31_object);
}


void func_5875(object var_107_object)
{
	object var_109_object;
	@self(var_109_object);
	var_109_object = var_107_object;
}
EMIT "Stack[-1] = 0";


void func_6903(void)
{
}


// @pe
void func_6904(bool var_25_bool)
{
	var_25_bool = false;
}


void func_5881(cvector var_51_cvector, cvector var_52_cvector)
{
	float var_60_float = sqrt(var_52_cvector | var_52_cvector);
	if(var_60_float < 0.000001)
		var_51_cvector = [0.0, 0.0, 0.0];
	var_51_cvector = var_52_cvector / var_60_float;
}


// @pe
void func_4346(object var_127_object)
{
	object var_134_object;
	func_4360(var_130_int, var_131_bool, var_132_float, var_133_int, var_134_object, var_134_object, true, 180.0);
}


// @pe
void func_6907(void)
{
}


void func_6909(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	@CanSee(var_35_bool, var_33_object);
	var_32_bool = true;
	if(var_35_bool != 1) {
		float var_37_float; object var_38_object;
		var_33_object = var_38_object;
		func_5306(var_37_float, var_38_object);
		var_46_bool = var_37_float <= 2250000;
		if(var_46_bool != 1)
			var_32_bool = false;
	}
}


void func_3329(object var_22_object)
{
	cvector var_33_cvector; cvector var_34_cvector; cvector var_35_cvector; cvector var_36_cvector; string var_37_string; object var_38_object; bool var_39_bool; bool var_40_bool; float var_41_float; cvector var_42_cvector;
	if(var_22_object == null) {
		func_3420("fdie");
	} else {
		var_22_object->GetPosition(var_33_cvector);
		@GetPosition(var_34_cvector);
		@GetDirection(var_35_cvector);
		var_36_cvector = var_34_cvector - var_33_cvector;
		var_76_float = GetByIndex(var_36_cvector, 0);
		var_77_float = GetByIndex(var_35_cvector, 0);
		var_79_float = GetByIndex(var_36_cvector, 2);
		var_80_float = GetByIndex(var_35_cvector, 2);
		if(((var_76_float * var_77_float) + (var_79_float * var_80_float)) >= 0)
			var_37_string = "fdie";
		else
			var_37_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_22_object = var_38_object;
		var_87_bool = IsFuncExist(var_22_object, "GetScriptProperty", 2);
		if(var_87_bool != 0) {
			var_22_object->HasScriptProperty(var_39_bool, "Owner");
			if(var_39_bool != 0) {
				var_22_object->GetScriptProperty(var_38_object, "Owner");
				if(var_38_object == null)
					var_22_object = var_38_object;
			}
		}
		var_94_bool = IsFuncExist(var_38_object, "@GetEyesHeight", 1);
		if(var_94_bool != 0) {
			var_38_object->GetEyesHeight(var_41_float);
			var_42_cvector = [0.0, 0.0, 0.0];
			var_95_float = GetByIndex(var_42_cvector, 1);
			var_41_float = var_95_float;
			SetByIndex(var_42_cvector, 1) = var_95_float;
			@LookAsync(var_22_object, "head", var_42_cvector);
			var_40_bool = true;
		} else {
			var_40_bool = false;

		}
		string var_97_string;
		var_37_string = var_97_string;
		func_5834(var_97_string);
		@PlayAnimation("all", var_37_string);
		@WaitForAnimEnd();
		if(var_40_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_37_string);
		@RemoveEnvelope();
		var_38_object = null;
	}
	
}


// @pe
void func_4354(float var_471_float)
{
	var_471_float = 0.03;
}


// @pe
void func_5891(float var_512_float, float var_513_float, float var_514_float)
{
	if(var_513_float < var_514_float)
		var_513_float = var_512_float;
	else
		var_514_float = var_512_float;
	
}


void func_6402(void)
{
	@ClearSubContainer(0);
	int var_119_int;
	func_5972(var_119_int);
	func_6330(0, (10 + (var_119_int * 10)));
	func_5808("hook", 1, 4);
	func_5808("watch", 1, 10);
}


// @pe
void func_4357(int var_478_int)
{
	var_478_int = 0;
}


void func_4870(bool var_0_bool, bool var_377_bool)
{
	cvector var_383_cvector; cvector var_384_cvector;
	bool var_388_bool;
	func_5445(var_388_bool, var_0_bool);
	if(!var_388_bool) { //@nz
		var_377_bool = false;
		return 10;
	}
	bool var_391_bool;
	float var_387_float;
	func_4959(var_387_float, var_391_bool);
	if(var_391_bool != 0) {
		var_0_bool->GetPFPosition(var_383_cvector); //@t
		@GetPFPosition(var_384_cvector);
		var_0_bool->GetAttackDistance(var_387_float); //@t
		var_377_bool = ((var_383_cvector - var_384_cvector) | (var_383_cvector - var_384_cvector)) <= ((var_387_float + 50) * (var_387_float + 50));
		return 10;
	}
	var_377_bool = false;
}


void func_4360(bool var_0_bool, object var_3_object, bool var_5_bool, object var_134_object, bool var_135_bool, float var_136_float, bool var_211_bool, bool var_303_bool)
{
	float var_148_float; cvector var_149_cvector; cvector var_150_cvector; bool var_152_bool; float var_155_float; cvector var_156_cvector; bool var_157_bool; float var_158_float;
	func_4589(var_156_cvector, var_157_bool, var_158_float);
	var_5_bool = 0;
	var_183_bool = IsFuncExist(var_134_object, "@GetAttackDistance", 1);
	if(var_183_bool != 0) {
		var_134_object->GetAttackDistance(var_148_float);
		var_148_float += 50;
	} else {
						var_136_float = var_148_float;
	}
	if(var_148_float >= 150)
		var_148_float = 150;
	var_3_object = false;
	var_0_bool = var_134_object;
	bool var_151_bool;
	@IsPlayerActor(var_0_bool, var_151_bool);
	if(var_151_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_189_object;
		func_5875(var_189_object);
		@SendPlayerEnemy(var_134_object, var_189_object);
	}
	if(var_135_bool != 0)
		var_152_bool = false;
	else
		var_152_bool = true;

	
Label_4400:
	for(;;) {
		bool var_194_bool = false;
		bool var_195_bool;
		func_5445(var_195_bool, var_0_bool);
		if(var_195_bool != 0) {
			if(!var_3_object) //@nz
				var_194_bool = true;
		}
		if(var_194_bool != 0) {
			func_5002(var_158_float);
			var_0_bool->GetPFPosition(var_149_cvector); //@t
			@GetPFPosition(var_150_cvector);
			var_155_float = (var_149_cvector - var_150_cvector) | (var_149_cvector - var_150_cvector);
			if(var_155_float >= ((400.0 + var_148_float) * (400.0 + var_148_float))) {
				bool var_205_bool; float var_207_float;
				var_148_float = var_207_float;
				TaskCall(8);
				func_5029(var_213_bool, var_205_bool, var_0_bool, var_207_float, 3000.0, true, false);
				TaskReturn();
				if(!var_211_bool) { //@nz
				} else {
					var_152_bool = false;
			} else {
			if(var_155_float >= (var_136_float * var_136_float)) {
				var_0_bool->GetPFPosition(var_156_cvector); //@t
				@CanReachByPF(var_157_bool, var_156_cvector);
				if(!var_157_bool) { //@nz
					bool var_297_bool; float var_299_float;
					var_148_float = var_299_float;
					TaskCall(8);
					func_5029(var_305_bool, var_297_bool, var_0_bool, var_299_float, 3000.0, true, false);
					TaskReturn();
					if(!var_303_bool) { //@nz
						goto Label_4572;
					}
					var_152_bool = false;
					goto Label_4400;
				}
				if(!var_152_bool) { //@nz
					func_5595(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_5002(var_158_float);
					@StopAsync();
					var_152_bool = true;
					bool var_319_bool;
					func_5445(var_319_bool, var_0_bool);
					if(!var_319_bool) { //@nz
						goto Label_4572;
					}
				}
				@rand(var_158_float);
				bool var_322_bool;
				var_324_bool = var_158_float < 0.25;
				if(var_324_bool != 1) {
					bool var_325_bool;
					func_4959(true, var_325_bool);
					if(var_325_bool != 1)
						var_322_bool = false;
				}
				if(var_322_bool != 0) {
					@Face(var_0_bool);
					func_5009();
					@PlayAnimation("all", "attack_stay");
					bool var_362_bool; float var_363_float;
					func_4827(var_158_float, var_362_bool, var_363_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_5002(var_158_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_584_bool;
					func_4959(var_158_float, var_584_bool);
					var_585_bool = !var_584_bool; //@nz
					if(var_585_bool == 0) goto Label_4562;
					bool var_586_bool;
					func_5445(var_586_bool, var_0_bool);
					if(!var_586_bool) { //@nz
						goto Label_4572;
					}
					var_0_bool->GetPFPosition(var_149_cvector); //@t
					@GetPFPosition(var_150_cvector);
					if(!(((var_149_cvector - var_150_cvector) | (var_149_cvector - var_150_cvector)) < (var_363_float * var_363_float))) goto Label_4562;
					bool var_591_bool; float var_592_float;
					var_136_float = var_592_float;
					func_4663(var_157_bool, var_158_float, var_591_bool, var_592_float);
					var_593_bool = !var_591_bool; //@nz
					if(var_593_bool == 0) goto Label_4562;
					goto Label_4572;
			}
				bool var_594_bool; float var_595_float;
				var_136_float = var_595_float;
				func_4663(var_157_bool, var_158_float, var_594_bool, var_595_float);
				if(!var_594_bool) { //@nz
					goto Label_4572;
				}
				var_152_bool = true;

			}
		Label_4562:
			goto Label_4571;
			}
			Label_4571:
			}
		}
	Label_4572:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_151_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_5898(float var_522_float, float var_523_float, float var_524_float, float var_525_float)
{
	if(var_523_float < var_524_float) {
		var_524_float = var_522_float;
		return 0;
	}
	if(var_523_float > var_525_float) {
		var_525_float = var_522_float;
		return 0;
	}
	var_523_float = var_522_float;
}


// @pe
void func_6924(object var_60_object)
{
	object var_61_object;
	var_60_object = var_61_object;
	func_6741(var_61_object);
}


// @pe
void func_6930(bool var_49_bool)
{
	var_49_bool = false;
}


void func_5909(bool var_44_bool, int var_45_int, int var_46_int)
{
	int var_48_int;
	@irand(var_48_int, var_46_int);
	var_44_bool = var_48_int < var_45_int;
}


// @pe
void func_6933(void)
{
}


// @pe
void func_6935(bool var_27_bool)
{
	var_27_bool = false;
}


// @pe
void func_5914(float var_72_float, cvector var_73_cvector, cvector var_74_cvector)
{
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_76_float = GetByIndex(var_74_cvector, 0);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_79_float = GetByIndex(var_74_cvector, 2);
	var_72_float = (var_75_float * var_76_float) + (var_78_float * var_79_float);
}


// @pe
void func_6938(void)
{
}


void func_6940(int var_104_int)
{
	var_104_int = 515558;
}


void func_5404(bool var_47_bool, object var_48_object)
{
	bool var_50_bool;
	var_48_object->IsDead(var_50_bool);
	var_50_bool = var_47_bool;
}


void func_6942(int var_103_int)
{
	var_103_int = 503343;
}


void func_6430(bool var_21_bool)
{
	@ClearSubContainer(0);
	int var_29_int;
	func_5972(var_29_int);
	int var_27_int;
	var_29_int = var_27_int;
	if(var_21_bool != 0) {
		func_5819("alpha_pills", 1, 2, 4);
		func_5819("meradorm", 2, 3, 3);
		if(var_27_int >= 3)
			func_5808("beta_pills", 1, 4);
		if(var_27_int >= 8) {
			func_5819("monomicin", 1, 2, 2);
		} else {
				if(var_27_int >= 4)
					func_5808("monomicin", 1, 2);
				func_5808("lockpick", 1, 4);
				func_5808("rifle_ammo", 1, 2);
				func_5808("revolver_ammo", 1, 2);
				func_5819("samopal_ammo", 1, 2, 2);
				if(var_27_int >= 8)
					func_5819("monomicin", 1, 2, 2);
			}
			} else if(var_27_int >= 4) {
		func_5808("monomicin", 1, 2);
			}
	
}


void func_6944(string var_105_string)
{
	var_105_string = "ui/NPC_Citizen3.png";
}


void func_5409(bool var_36_bool, object var_37_object)
{
	if(var_37_object == null) {
		var_36_bool = false;
		return 4;
	}
	bool var_43_bool = false;
	var_46_bool = IsFuncExist(var_37_object, "IsDead", 1);
	if(var_46_bool != 0) {
		bool var_47_bool; object var_48_object;
		var_37_object = var_48_object;
		func_5404(var_47_bool, var_48_object);
		if(var_47_bool != 0)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		var_36_bool = false;
		return 4;
	}
	object var_40_object;
	@GetScene(var_40_object);
	if(var_40_object == null) {
		var_36_bool = false;
		return 4;
	}
	object var_41_object;
	var_37_object->GetScene(var_41_object);
	if(var_40_object != var_41_object) {
		var_36_bool = false;
		return 4;
	}
	var_36_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_6946(string var_106_string)
{
	var_106_string = "ui/NPC_Citizen3_b.png";
}


void func_4898(bool var_375_bool)
{
	bool var_376_bool = false;
	bool var_377_bool;
	func_4870(var_376_bool, var_377_bool);
	if(var_377_bool != 0) {
		bool var_394_bool;
		func_4914(var_375_bool, var_376_bool, var_394_bool);
		if(var_394_bool != 0)
			var_376_bool = true;
	}
	if(var_376_bool != 0) {
		var_375_bool = true;
		return 0;
	}
	var_375_bool = false;
}


void func_6948(bool var_98_bool)
{
	var_98_bool = false;
}


// @pe
void func_5923(float var_81_float, cvector var_82_cvector)
{
	var_83_float = GetByIndex(var_82_cvector, 0);
	var_84_float = GetByIndex(var_82_cvector, 0);
	var_86_float = GetByIndex(var_82_cvector, 2);
	var_87_float = GetByIndex(var_82_cvector, 2);
	var_81_float = sqrt((var_83_float * var_84_float) + (var_86_float * var_87_float));
}


void func_6950(void)
{
	var_20_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_6430(true);
}


// @pe
void func_5933(float var_69_float, cvector var_70_cvector, cvector var_71_cvector)
{
	cvector var_73_cvector;
	var_70_cvector = var_73_cvector;
	cvector var_74_cvector;
	var_71_cvector = var_74_cvector;
	float var_72_float;
	func_5914(var_72_float, var_73_cvector, var_74_cvector);
	float var_81_float; cvector var_82_cvector;
	var_70_cvector = var_82_cvector;
	func_5923(var_81_float, var_82_cvector);
	float var_90_float; cvector var_91_cvector;
	var_71_cvector = var_91_cvector;
	func_5923(var_90_float, var_91_cvector);
	var_69_float = var_72_float / (var_81_float * var_90_float);
}


void func_6958(object var_31_object, object var_46_object)
{
	bool var_33_bool;
	var_34_bool = GlobalVars[0];
	if(var_34_bool != 0) {
		@IsOverrideActive(var_33_bool);
		if(!var_33_bool) { //@nz
			object var_36_object;
			var_31_object = var_36_object;
			func_6317(var_36_object);
		}
		return 2;
	EMIT "GOTO 0x1b55";
	}
	int var_44_int; object var_45_object;
	var_31_object = var_45_object;
	TaskCall(1);
	func_40(var_46_object, var_44_int, var_45_object);
	TaskReturn();
	if(1000 == var_46_object) {
		bool var_500_bool; object var_501_object;
		var_31_object = var_501_object;
		func_5698(var_500_bool, var_501_object);
		if(!var_500_bool) //@nz
			return 2;
		object var_533_object;
		var_31_object = var_533_object;
		TaskCall(0);
		func_0(var_533_object);
		TaskReturn();
		object var_540_object;
		var_31_object = var_540_object;
		func_5754();
	}
}


void func_4914(bool var_0_bool, string var_4_string, bool var_394_bool)
{
	object var_400_object; float var_402_float; cvector var_403_cvector; cvector var_404_cvector;
	@GetScene(var_400_object);
	bool var_401_bool = false;
	
	for(;;) {
		cvector var_405_cvector;
		func_5299(var_405_cvector, var_0_bool);
		var_411_int = -var_405_cvector;
		@FindDirLength(var_402_float, var_411_int, var_4_string);
		if(var_402_float < var_4_string) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_403_cvector); //@t
				@GetPFPosition(var_404_cvector);
				@WaitForAnimEnd();
				func_5002(var_404_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_401_bool = true;
				bool var_416_bool;
				func_4870(var_404_cvector, var_416_bool);
				var_417_bool = !var_416_bool; //@nz
				if(var_417_bool == 0) goto Label_4955;
		}
		for(;;) {
			var_401_bool = var_394_bool;

		}

	Label_4955:
	}
}
EMIT "Stack[-5] = 0";


void func_5950(int var_125_int, string var_126_string)
{
	int var_128_int;
	@GetVariable(var_126_string, var_128_int);
	var_128_int = var_125_int;
}


void func_5955(float var_530_float)
{
	object var_532_object;
	@CreateFloatVector(var_532_object);
	var_532_object->add(var_530_float);
	if(var_530_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_532_object);
}
EMIT "Stack[-1] = 0";


void func_5445(bool var_32_bool, object var_33_object)
{
	object var_37_object;
	var_33_object = var_37_object;
	bool var_36_bool;
	func_5409(var_36_bool, var_37_object);
	if(!var_36_bool) { //@nz
		var_32_bool = false;
		return 2;
	}
	bool var_54_bool; object var_55_object;
	func_5319(var_54_bool, var_55_object, "noaccess");
	if(!var_54_bool) { //@nz
		var_32_bool = true;
		return 2;
	}
	int var_35_int;
	var_55_object->GetProperty("noaccess", var_35_int);
	var_32_bool = var_35_int == 0;
}


void func_5972(int var_29_int)
{
	float var_31_float;
	@GetGameTime(var_31_float);
	var_29_int = 1 + (var_31_float / 24);
}


void func_6998(bool var_64_bool)
{
	var_64_bool = false;
}


// @pe
void func_7000(bool var_24_bool, object var_25_object, object var_26_object, bool var_27_bool)
{
	object var_29_object;
	var_25_object = var_29_object;
	object var_30_object;
	var_26_object = var_30_object;
	bool var_32_bool;
	var_27_bool = var_32_bool;
	bool var_28_bool;
	func_6855(var_28_bool, var_29_object, var_30_object, 700.0, var_32_bool);
	var_28_bool = var_24_bool;
}


// @pe
void func_3420(string var_44_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_45_string;
	var_44_string = var_45_string;
	func_5834(var_45_string);
	@PlayAnimation("all", var_44_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_44_string);
	@RemoveEnvelope();
}


void func_5469(object var_36_object)
{
	string var_50_string;
	if(var_36_object == null)
		return 14;
	bool var_44_bool;
	@IsDead(var_44_bool);
	if(var_44_bool != 0)
		return 14;
	int var_45_int;
	@GetSecondaryAnimationType(var_45_int);
	if(var_45_int < 0)
		return 14;
	cvector var_46_cvector;
	var_36_object->GetPosition(var_46_cvector);
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	@GetDirection(var_48_cvector);
	cvector var_49_cvector = var_47_cvector - var_46_cvector;
	var_55_float = GetByIndex(var_49_cvector, 0);
	var_56_float = GetByIndex(var_48_cvector, 0);
	var_58_float = GetByIndex(var_49_cvector, 2);
	var_59_float = GetByIndex(var_48_cvector, 2);
	if(((var_55_float * var_56_float) + (var_58_float * var_59_float)) >= 0)
		var_50_string = "fhit";
	else
		var_50_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_50_string + "1"), (var_50_string + "2"), -10);
	
}


void func_5981(int var_380_int)
{
	float var_382_float;
	@GetGameTime(var_382_float);
	int var_383_int;
	var_382_float = var_383_int;
	var_380_int = var_383_int % 24;
}


void func_4959(bool var_0_bool, bool var_325_bool)
{
	bool var_327_bool;
	var_330_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_330_bool != 0) {
		var_0_bool->IsAttacking(var_327_bool); //@t
		var_327_bool = var_325_bool;
	}
	var_325_bool = false;
}


// @pe
void func_7010(object var_102_object)
{
	bool var_103_bool; object var_104_object;
	func_5314(var_103_bool, var_104_object);
	if(var_103_bool != 0) {
		object var_107_object;
		func_5875(var_107_object);
		@ReportReputationChange(var_104_object, var_107_object, -0.1, true);
		bool var_112_bool = true;
		func_6402();
	}
	func_6378();
	var_178_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_5989(object var_22_object)
{
	bool var_24_bool;
	@IsPlayerActor(var_22_object, var_24_bool);
	if(var_24_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_4970(object var_2_object, bool var_5_bool)
{
	int var_445_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_444_float;
	@rand(var_444_float);
	float var_451_float;
	func_5020(var_451_float);
	if(var_444_float < var_451_float) {
		@irand(var_445_int, var_2_object);
		@Speak("attack" + (var_445_int + 1));
		int var_456_int;
		func_5018(var_456_int);
		var_5_bool = var_456_int;
	}
}


void func_5998(void)
{
	object var_436_object;
	@GetScene(var_436_object);
	object var_438_object;
	func_5875(var_438_object);
	@BroadcastMessage("battle", var_438_object, var_436_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_6009(object var_26_object)
{
	var_26_object->SetReturnValue(1000);
}


// @pe
void func_6014(bool var_424_bool)
{
	int var_426_int;
	func_5950(var_426_int, "branch");
	if(var_426_int == 0) {
		var_424_bool = true;
		return 0;
	}
	var_424_bool = false;
}


void func_6530(int var_137_int, string var_138_string)
{
	int var_140_int;
	@GetInvItemByName(var_140_int, var_138_string);
	var_140_int = var_137_int;
}


// @pe
void func_6535(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	TaskCall(3);
	func_3296(var_21_object);
	TaskReturn();
}


void func_5513(object var_23_object, int var_24_int, float var_25_float)
{
	cvector var_35_cvector; object var_36_object; int var_37_int; bool var_38_bool; cvector var_39_cvector; cvector var_40_cvector;
	bool var_44_bool = false;
	bool var_45_bool = false;
	if(var_23_object != 0) {
		if(var_24_int != 4)
			var_45_bool = true;
	}
	if(var_45_bool != 0) {
		if(var_24_int != 5)
			var_44_bool = true;
	}
	if(var_44_bool != 0) {
		cvector var_51_cvector; cvector var_52_cvector;
		cvector var_53_cvector; object var_54_object;
		var_23_object = var_54_object;
		func_5299(var_53_cvector, var_54_object);
		var_53_cvector = var_52_cvector;
		func_5881(var_51_cvector, var_52_cvector);
		var_51_cvector = var_35_cvector;
		@CreateVectorVector(var_36_object);
		var_37_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_37_int), var_38_bool, var_39_cvector, var_40_cvector);
			if(!var_38_bool) { //@nz
				break;
			Label_5575:
				var_36_object = null;
	}
			object var_113_object;
			var_23_object = var_113_object;
			func_5469(var_113_object);
		}
		if((var_40_cvector | var_35_cvector) >= 0.70710677)
			var_36_object->add(var_39_cvector);
		var_37_int += 1;
	}
	int var_41_int;
	var_36_object->size(var_41_int);
	if(var_41_int == 0) goto Label_5575;
	int var_42_int;
	@irand(var_42_int, var_41_int);
	cvector var_43_cvector;
	var_36_object->get(var_43_cvector, var_42_int);
	object var_68_object; int var_69_int; float var_70_float; cvector var_71_cvector; cvector var_72_cvector;
	var_23_object = var_68_object;
	var_24_int = var_69_int;
	var_25_float = var_70_float;
	var_43_cvector = var_71_cvector;
	var_72_cvector = -var_35_cvector;
	func_5581(var_70_float, var_71_cvector, var_72_cvector);
}


// @pe
void func_6026(bool var_123_bool)
{
	int var_125_int;
	func_5950(var_125_int, "branch");
	if(var_125_int == 2)
		var_123_bool = true;
	var_123_bool = false;
}


void func_3467(void)
{
	bool var_102_bool;
	func_5606(var_102_bool);
	if(!var_102_bool) //@nz
		func_6903();
}


void func_5002(bool var_0_bool)
{
	func_5989(var_0_bool);
}


void func_5007(int var_539_int)
{
	var_539_int = 0;
}


void func_3985(void)
{
	int var_142_int; int var_143_int; bool var_144_bool; float var_145_float; bool var_146_bool;
	@WaitForAnimEnd();
	bool var_147_bool;
	func_5606(var_147_bool);
	if(!var_147_bool) //@nz
		return 14;
	int var_149_int;
	func_6715(var_149_int);
	int var_140_int;
	var_149_int = var_140_int;
	int var_141_int = 0;
	
	for(;;) {
		bool var_162_bool = false;
		if(var_141_int < 5) {
			bool var_165_bool;
			func_5606(var_165_bool);
			if(var_165_bool != 0)
				var_162_bool = true;
		}
		if(var_162_bool != 0) {
			@irand(var_142_int, 3);
			if(var_142_int == 0) {
				if(var_140_int == 0) goto Label_4032;
				@irand(var_143_int, var_140_int);
				string var_171_string; int var_172_int;
				var_143_int = var_172_int;
				func_6708(var_171_string, var_172_int);
				@PlayAnimation("all", var_171_string);
				@WaitForAnimEnd(var_144_bool);
				if(!var_144_bool) { //@nz
				} else {
			} else {
			if(var_142_int == 1) {
				@rand(var_145_float, 4);
				@Sleep((var_145_float + 1), var_146_bool);
				if(!var_146_bool) { //@nz
					goto Label_4061;
				}
			} else if(var_141_int != 0) {
				goto Label_4061;
			}
			}
					bool var_174_bool;
					func_4064(var_174_bool);
					var_175_bool = !var_174_bool; //@nz
					if(var_175_bool == 0) goto Label_4056;
			}
		}
	Label_4061:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_4056:
		@ResetAAS();
		var_141_int += 1;
	}
	
}


void func_5009(void)
{
	func_5834("attack_stay");
}


// @pe
void func_6038(bool var_149_bool, object var_150_object)
{
	object var_152_object;
	var_150_object = var_152_object;
	func_6178(var_152_object);
	bool var_151_bool;
	if(var_151_bool != 0) {
		var_149_bool = true;
		return 0;
	}
	var_149_bool = false;
}


// @pe
void func_5014(void)
{
}


void func_5016(bool var_564_bool)
{
	var_564_bool = true;
}


void func_5018(int var_456_int)
{
	var_456_int = 1;
}


void func_5020(float var_451_float)
{
	var_451_float = 0.5;
}


// @pe
void func_6048(bool var_163_bool, object var_164_object)
{
	object var_166_object;
	var_164_object = var_166_object;
	func_6185(var_166_object);
	bool var_165_bool;
	if(var_165_bool != 0) {
		var_163_bool = true;
		return 0;
	}
	var_163_bool = false;
}


void func_5029(object var_2_object, bool var_205_bool, object var_206_object, float var_207_float, float var_208_float, bool var_209_bool, bool var_210_bool)
{
	object var_218_object;
	func_5989(var_218_object);
	@SetTimer(1, 5);
	bool var_216_bool;
	@CanSee(var_216_bool, var_218_object);
	if(var_216_bool != 0) {
		var_2_object = true;
		object var_222_object;
		var_206_object = var_222_object;
		func_5790(var_222_object);
	} else {
		var_2_object = false;
	}
	bool var_229_bool; object var_230_object;
	func_5314(var_229_bool, var_230_object);
	if(var_229_bool != 0) {
		object var_233_object;
		func_5875(var_233_object);
		@SendPlayerEnemy(var_230_object, var_233_object);
	}
	bool var_234_bool; object var_235_object; float var_236_float; float var_237_float; bool var_238_bool; bool var_239_bool;
	var_206_object = var_235_object;
	var_207_float = var_236_float;
	var_208_float = var_237_float;
	var_209_bool = var_238_bool;
	var_210_bool = var_239_bool;
	bool var_217_bool;
	func_5134(var_216_bool, var_217_bool, var_234_bool, var_235_object, var_236_float, var_237_float, var_238_bool, var_239_bool);
	var_234_bool = var_217_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_217_bool = var_205_bool;
	
}


// @pe
void func_6058(bool var_173_bool, object var_174_object)
{
	object var_176_object;
	var_174_object = var_176_object;
	func_6192(var_176_object);
	bool var_175_bool;
	if(var_175_bool != 0) {
		var_173_bool = true;
		return 0;
	}
	var_173_bool = false;
}


// @pe
void func_6068(bool var_188_bool, object var_189_object)
{
	object var_191_object;
	var_189_object = var_191_object;
	func_6199(var_191_object);
	bool var_190_bool;
	if(var_190_bool != 0) {
		var_188_bool = true;
		return 0;
	}
	var_188_bool = false;
}


// @pe
void func_6580(bool var_23_bool, object var_24_object, string var_25_string)
{
	if(var_25_string == "unholster") {
		bool var_28_bool; object var_29_object;
		var_24_object = var_29_object;
		func_6904(var_29_object);
		var_28_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x19d2";
	}
	if(var_25_string == "player_shot") {
		bool var_32_bool; object var_33_object;
		var_24_object = var_33_object;
		func_6909(var_32_bool, var_33_object);
		var_32_bool = var_23_bool;
		return 0;
	EMIT "GOTO 0x19d2";
	}
	if(var_25_string == "battle") {
		bool var_49_bool; object var_50_object;
		var_24_object = var_50_object;
		func_6930(var_50_object);
		var_49_bool = var_23_bool;
		return 0;
	}
	var_23_bool = false;
}


// @pe
void func_6078(bool var_197_bool, object var_198_object)
{
	object var_200_object;
	var_198_object = var_200_object;
	func_6206(var_200_object);
	bool var_199_bool;
	if(var_199_bool != 0) {
		var_197_bool = true;
		return 0;
	}
	var_197_bool = false;
}


// @pe
void func_6088(bool var_206_bool, object var_207_object)
{
	object var_209_object;
	var_207_object = var_209_object;
	func_6213(var_209_object);
	bool var_208_bool;
	if(var_208_bool != 0) {
		var_206_bool = true;
		return 0;
	}
	var_206_bool = false;
}


void func_5581(object var_25_object, cvector var_28_cvector, cvector var_29_cvector)
{
	object var_32_object;
	@GetScene(var_32_object);
	object var_33_object;
	@AddActorByType(var_33_object, "scripted", var_32_object, var_28_cvector, var_29_cvector, "blood_dir.xml");
	object var_36_object;
	var_25_object = var_36_object;
	func_5469(var_36_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_6098(bool var_179_bool, object var_180_object)
{
	object var_182_object;
	var_180_object = var_182_object;
	func_6220(var_182_object);
	bool var_181_bool;
	if(var_181_bool != 0) {
		var_179_bool = true;
		return 0;
	}
	var_179_bool = false;
}


// @pe
void func_6612(object var_53_object, string var_54_string)
{
	if(var_54_string == "unholster") {
		object var_57_object;
		var_53_object = var_57_object;
		func_6907();
	} else if(var_54_string == "player_shot") {
			object var_60_object;
			var_53_object = var_60_object;
			func_6924(var_60_object);
	}
Label_6636:
	for(;;) {

	}
	
	if(!(var_54_string == "battle")) goto Label_6636;
	object var_128_object;
	var_53_object = var_128_object;
	func_6933();
}


void func_5595(object var_95_object)
{
	cvector var_99_cvector;
	var_95_object->GetPosition(var_99_cvector);
	cvector var_100_cvector;
	@GetPosition(var_100_cvector);
	cvector var_101_cvector = var_99_cvector - var_100_cvector;
	var_102_float = GetByIndex(var_101_cvector, 0);
	var_103_float = GetByIndex(var_101_cvector, 2);
	@RotateAsync(var_102_float, var_103_float);
}


// @pe
void func_6108(bool var_216_bool, object var_217_object)
{
	object var_219_object;
	var_217_object = var_219_object;
	func_6227(var_219_object);
	bool var_218_bool;
	if(var_218_bool != 0) {
		var_216_bool = true;
		return 0;
	}
	var_216_bool = false;
}


void func_4064(bool var_174_bool)
{
	var_174_bool = true;
}


void func_4066(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_5092(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_5258(var_19_object);
}


// @pe
void func_6118(bool var_222_bool, object var_223_object)
{
	object var_225_object;
	var_223_object = var_225_object;
	func_6234(var_225_object);
	bool var_224_bool;
	if(var_224_bool != 0) {
		var_222_bool = true;
		return 0;
	}
	var_222_bool = false;
}


void func_5606(bool var_102_bool)
{
	bool var_104_bool;
	@IsLoaded(var_104_bool);
	var_104_bool = var_102_bool;
}


void func_4071(bool var_0_bool, object var_62_object)
{
	var_0_bool = var_62_object;
	bool var_69_bool;
	func_4122(var_69_bool);
	cvector var_67_cvector;
	@GetDirection(var_67_cvector);
	cvector var_77_cvector;
	func_5299(var_77_cvector, var_0_bool);
	cvector var_68_cvector;
	var_77_cvector = var_68_cvector;
	float var_83_float; cvector var_84_cvector; cvector var_85_cvector;
	var_67_cvector = var_84_cvector;
	var_68_cvector = var_85_cvector;
	func_5933(var_83_float, var_84_cvector, var_85_cvector);
	if(var_83_float < 0) {
		func_5595(var_0_bool);
		var_69_bool = true;
	} else {
		@Sleep(1.5, var_69_bool);
	}
	if(var_69_bool != 0) {
		func_5595(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_5611(bool var_55_bool, object var_56_object, float var_57_float)
{
	cvector var_68_cvector; bool var_75_bool;
	var_56_object->GetPosition(var_68_cvector);
	float var_67_float;
	var_56_object->GetEyesHeight(var_67_float);
	var_76_float = GetByIndex(var_68_cvector, 1);
	SetByIndex(var_68_cvector, 1) = (var_76_float + var_67_float);
	cvector var_69_cvector;
	@GetPosition(var_69_cvector);
	@GetEyesHeight(var_67_float);
	var_77_float = GetByIndex(var_69_cvector, 1);
	SetByIndex(var_69_cvector, 1) = (var_77_float + var_67_float);
	cvector var_70_cvector = var_68_cvector - var_69_cvector;
	var_78_float = GetByIndex(var_70_cvector, 1);
	SetByIndex(var_70_cvector, 1) = (float)0;
	var_80_float = sqrt(var_70_cvector | var_70_cvector);
	var_70_cvector /= var_80_float;
	cvector var_71_cvector = -var_70_cvector;
	cvector var_82_cvector;
	func_5881(var_82_cvector, (var_71_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_72_cvector = ((var_70_cvector * var_57_float) + (var_82_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_74_bool;
	@IsOverrideActive(var_74_bool);
	if(var_74_bool != 0)
		var_55_bool = false;
	@StopWorld();
	@CameraTransit((var_69_cvector + var_72_cvector), var_71_cvector, true);
	var_96_float = GetByIndex(var_72_cvector, 0);
	var_97_float = GetByIndex(var_72_cvector, 2);
	@Rotate(var_96_float, var_97_float);
	bool var_98_bool;
	func_6948(var_98_bool);
	if(var_98_bool != 0) {
	} else {
		@HasAnimationTrack(var_75_bool, "head");
		if(var_75_bool == 0) goto Label_5674;
		@LookAsyncCamera("head");
	}
Label_5674:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_55_bool = true;
	
}


void func_6637(bool var_20_bool, object var_21_object)
{
	bool var_23_bool;
	bool var_24_bool = false;
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_6904(var_26_object);
	if(var_25_bool != 0) {
		bool var_27_bool; object var_28_object;
		func_5314(var_27_bool, var_28_object);
		if(var_27_bool != 0)
			var_24_bool = true;
	}
	if(var_24_bool != 0) {
		var_28_object->IsWeaponHolstered(var_23_bool);
		if(!var_23_bool) //@nz
			var_20_bool = true;
	}
	var_20_bool = false;
}


void func_4589(object var_1_object, object var_2_object, string var_4_string)
{
	bool var_162_bool; bool var_163_bool; cvector var_164_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_162_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_162_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_163_bool, ("attack" + (var_2_object + 1)));
			if(!var_163_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_164_cvector, "all", "bjump");
		var_178_float = GetByIndex(var_164_cvector, 2);
		var_4_string = -var_178_float;

	}
}


// @pe
void func_6128(bool var_268_bool, object var_269_object)
{
	object var_271_object;
	var_269_object = var_271_object;
	func_6241(var_271_object);
	bool var_270_bool;
	if(var_270_bool != 0) {
		var_268_bool = true;
		return 0;
	}
	var_268_bool = false;
}


// @pe
void func_6138(bool var_274_bool, object var_275_object)
{
	object var_277_object;
	var_275_object = var_277_object;
	func_6248(var_277_object);
	bool var_276_bool;
	if(var_276_bool != 0) {
		var_274_bool = true;
		return 0;
	}
	var_274_bool = false;
}


