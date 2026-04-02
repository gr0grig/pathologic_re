// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		bool var_19_bool;
		func_5183(var_19_bool);
		if(var_19_bool != 0)
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
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		if(1 != 0) {
			func_4173();
			if(var_18_object == 45786) {
				bool var_24_bool = false;
				bool var_25_bool;
				func_4326(var_1_object);
				if(var_25_bool != 0) {
					bool var_33_bool;
					func_4358(var_33_bool, var_1_object);
					if(var_33_bool != 0)
						var_24_bool = true;
				}
				if(var_24_bool != 0) {
					func_424(var_19_bool, "Neutral");
					var_0_bool->SetMessage(543329); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(543330, 45790, 45787); //@t
					var_0_bool->AddReply(543332, 45790, 45789); //@t
					var_0_bool->AddReply(543331, -1, 45788); //@t
					return 0;
				}
				bool var_71_bool = false;
				bool var_72_bool;
				func_4326(var_1_object);
				if(var_72_bool != 0) {
					bool var_74_bool;
					func_4358(var_74_bool, var_1_object);
					if(!var_74_bool) //@nz
						var_71_bool = true;
				}
				if(var_71_bool != 0) {
					func_424(var_19_bool, "Neutral");
					var_0_bool->SetMessage(543328); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(543336, -1, 45794); //@t
					return 0;
				}
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(537969); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_84_bool = false;
				bool var_85_bool;
				func_4338(var_85_bool, var_1_object);
				if(var_85_bool != 0) {
					bool var_91_bool;
					func_4314(var_1_object);
					if(var_91_bool != 0)
						var_84_bool = true;
				}
				if(var_84_bool != 0)
					var_0_bool->AddReply(537970, 39833, 39832); //@t
				bool var_100_bool = false;
				bool var_101_bool;
				func_4338(var_101_bool, var_1_object);
				if(var_101_bool != 0) {
					bool var_103_bool;
					func_4314(var_1_object);
					if(var_103_bool != 0)
						var_100_bool = true;
				}
				if(var_100_bool != 0)
					var_0_bool->AddReply(537995, 39861, 39860); //@t
				bool var_108_bool = false;
				bool var_109_bool;
				func_4338(var_109_bool, var_1_object);
				if(var_109_bool != 0) {
					bool var_111_bool;
					func_4314(var_1_object);
					if(var_111_bool != 0)
						var_108_bool = true;
				}
				if(var_108_bool != 0)
					var_0_bool->AddReply(538003, 39869, 39868); //@t
				bool var_116_bool = false;
				bool var_117_bool;
				func_4338(var_117_bool, var_1_object);
				if(var_117_bool != 0) {
					bool var_119_bool;
					func_4314(var_1_object);
					if(var_119_bool != 0)
						var_116_bool = true;
				}
				if(var_116_bool != 0)
					var_0_bool->AddReply(538012, 39878, 39877); //@t
				bool var_124_bool = false;
				bool var_125_bool = false;
				bool var_126_bool;
				func_4338(var_126_bool, var_1_object);
				if(var_126_bool != 0) {
					bool var_128_bool;
					func_4388(var_128_bool, var_1_object);
					if(var_128_bool != 0)
						var_125_bool = true;
				}
				if(var_125_bool != 0) {
					bool var_139_bool;
					func_4314(var_1_object);
					if(var_139_bool != 0)
						var_124_bool = true;
				}
				if(var_124_bool != 0)
					var_0_bool->AddReply(538017, 39883, 39882); //@t
				bool var_144_bool = false;
				bool var_145_bool = false;
				bool var_146_bool;
				func_4348(var_146_bool, var_1_object);
				if(var_146_bool != 0) {
					bool var_152_bool;
					func_4378(var_152_bool, var_1_object);
					if(var_152_bool != 0)
						var_145_bool = true;
				}
				if(var_145_bool != 0) {
					bool var_163_bool;
					func_4314(var_1_object);
					if(var_163_bool != 0)
						var_144_bool = true;
				}
				if(var_144_bool != 0)
					var_0_bool->AddReply(538043, 39911, 39910); //@t
				bool var_168_bool = false;
				bool var_169_bool = false;
				bool var_170_bool;
				func_4368(var_170_bool, var_1_object);
				if(var_170_bool != 0) {
					bool var_176_bool;
					func_4378(var_176_bool, var_1_object);
					if(var_176_bool != 0)
						var_169_bool = true;
				}
				if(var_169_bool != 0) {
					bool var_178_bool;
					func_4314(var_1_object);
					if(var_178_bool != 0)
						var_168_bool = true;
				}
				if(var_168_bool != 0)
					var_0_bool->AddReply(538083, 39952, 39951); //@t
				bool var_183_bool = false;
				bool var_184_bool = false;
				bool var_185_bool;
				func_4368(var_185_bool, var_1_object);
				if(var_185_bool != 0) {
					bool var_187_bool;
					func_4388(var_187_bool, var_1_object);
					if(var_187_bool != 0)
						var_184_bool = true;
				}
				if(var_184_bool != 0) {
					bool var_189_bool;
					func_4314(var_1_object);
					if(var_189_bool != 0)
						var_183_bool = true;
				}
				if(var_183_bool != 0)
					var_0_bool->AddReply(538110, 39980, 39979); //@t
				var_0_bool->AddReply(538126, -1, 39997); //@t
				return 0;
			}
			if(var_18_object == 39980) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538111); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538112, 39982, 39981); //@t
				var_0_bool->AddReply(538124, 39982, 39994); //@t
				var_0_bool->AddReply(538125, -1, 39996); //@t
				return 0;
			}
			if(var_18_object == 39982) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538113); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538114, 39984, 39983); //@t
				var_0_bool->AddReply(538118, 39989, 39988); //@t
				return 0;
			}
			if(var_18_object == 39989) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538119); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538120, 39991, 39990); //@t
				return 0;
			}
			if(var_18_object == 39991) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538121); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538122, -1, 39992); //@t
				var_0_bool->AddReply(538123, -1, 39993); //@t
				return 0;
			}
			if(var_18_object == 39984) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538115); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538116, -1, 39985); //@t
				var_0_bool->AddReply(538117, 39991, 39986); //@t
				return 0;
			}
			if(var_18_object == 39952) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538084); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538085, 39954, 39953); //@t
				var_0_bool->AddReply(538094, 39963, 39962); //@t
				var_0_bool->AddReply(538103, 39972, 39971); //@t
				var_0_bool->AddReply(538109, -1, 39978); //@t
				return 0;
			}
			if(var_18_object == 39972) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538104); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538105, 39974, 39973); //@t
				var_0_bool->AddReply(538108, -1, 39977); //@t
				return 0;
			}
			if(var_18_object == 39974) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538106); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538107, 39963, 39975); //@t
				return 0;
			}
			if(var_18_object == 39963) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538095); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538096, 39965, 39964); //@t
				var_0_bool->AddReply(538100, 39969, 39968); //@t
				return 0;
			}
			if(var_18_object == 39969) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538101); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538102, -1, 39970); //@t
				return 0;
			}
			if(var_18_object == 39965) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538097); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538098, -1, 39966); //@t
				var_0_bool->AddReply(538099, -1, 39967); //@t
				return 0;
			}
			if(var_18_object == 39954) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538086); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538087, 39956, 39955); //@t
				var_0_bool->AddReply(538093, -1, 39961); //@t
				return 0;
			}
			if(var_18_object == 39956) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538088); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538089, 39958, 39957); //@t
				return 0;
			}
			if(var_18_object == 39958) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538090); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538091, -1, 39959); //@t
				var_0_bool->AddReply(538092, -1, 39960); //@t
				return 0;
			}
			if(var_18_object == 39911) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538044); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538045, 39913, 39912); //@t
				var_0_bool->AddReply(538063, 39932, 39931); //@t
				return 0;
			}
			if(var_18_object == 39932) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538064); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538065, 39934, 39933); //@t
				return 0;
			}
			if(var_18_object == 39934) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538066); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538067, 39936, 39935); //@t
				return 0;
			}
			if(var_18_object == 39936) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538068); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538069, 39938, 39937); //@t
				var_0_bool->AddReply(538075, 39944, 39943); //@t
				return 0;
			}
			if(var_18_object == 39944) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538076); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538077, 39946, 39945); //@t
				var_0_bool->AddReply(538082, -1, 39950); //@t
				return 0;
			}
			if(var_18_object == 39946) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538078); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538079, 39948, 39947); //@t
				return 0;
			}
			if(var_18_object == 39948) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538080); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538081, -1, 39949); //@t
				return 0;
			}
			if(var_18_object == 39938) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538070); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538071, 39940, 39939); //@t
				var_0_bool->AddReply(538074, -1, 39942); //@t
				return 0;
			}
			if(var_18_object == 39940) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538072); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538073, -1, 39941); //@t
				return 0;
			}
			if(var_18_object == 39913) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538046); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538047, 39915, 39914); //@t
				var_0_bool->AddReply(538060, 39928, 39927); //@t
				return 0;
			}
			if(var_18_object == 39928) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538061); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538062, 39915, 39929); //@t
				return 0;
			}
			if(var_18_object == 39915) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538048); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538049, 39917, 39916); //@t
				var_0_bool->AddReply(538057, 39925, 39924); //@t
				return 0;
			}
			if(var_18_object == 39925) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538058); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538059, -1, 39926); //@t
				return 0;
			}
			if(var_18_object == 39917) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538050); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538051, 39919, 39918); //@t
				var_0_bool->AddReply(538056, -1, 39923); //@t
				return 0;
			}
			if(var_18_object == 39919) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538052); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538053, 39921, 39920); //@t
				return 0;
			}
			if(var_18_object == 39921) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538054); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538055, -1, 39922); //@t
				return 0;
			}
			if(var_18_object == 39883) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538018); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538019, 39885, 39884); //@t
				var_0_bool->AddReply(538030, 39897, 39896); //@t
				var_0_bool->AddReply(538039, 39907, 39906); //@t
				var_0_bool->AddReply(538042, -1, 39909); //@t
				return 0;
			}
			if(var_18_object == 39907) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538040); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538041, -1, 39908); //@t
				return 0;
			}
			if(var_18_object == 39897) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538031); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538032, 39899, 39898); //@t
				var_0_bool->AddReply(538038, 39899, 39904); //@t
				return 0;
			}
			if(var_18_object == 39899) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538033); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538034, 39901, 39900); //@t
				var_0_bool->AddReply(538037, -1, 39903); //@t
				return 0;
			}
			if(var_18_object == 39901) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538035); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538036, -1, 39902); //@t
				return 0;
			}
			if(var_18_object == 39885) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538020); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538021, 39887, 39886); //@t
				var_0_bool->AddReply(538027, 39894, 39893); //@t
				return 0;
			}
			if(var_18_object == 39894) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538028); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538029, -1, 39895); //@t
				return 0;
			}
			if(var_18_object == 39887) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538022); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538023, 39889, 39888); //@t
				var_0_bool->AddReply(538026, 39889, 39891); //@t
				return 0;
			}
			if(var_18_object == 39889) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538024); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538025, -1, 39890); //@t
				return 0;
			}
			if(var_18_object == 39878) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538013); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538014, 39880, 39879); //@t
				return 0;
			}
			if(var_18_object == 39880) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538015); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538016, -1, 39881); //@t
				return 0;
			}
			if(var_18_object == 39869) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538004); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538005, 39871, 39870); //@t
				var_0_bool->AddReply(538011, -1, 39876); //@t
				return 0;
			}
			if(var_18_object == 39871) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538006); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538007, 39873, 39872); //@t
				return 0;
			}
			if(var_18_object == 39873) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538008); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538009, -1, 39874); //@t
				var_0_bool->AddReply(538010, -1, 39875); //@t
				return 0;
			}
			if(var_18_object == 39861) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(537996); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537997, 39863, 39862); //@t
				return 0;
			}
			if(var_18_object == 39863) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(537998); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537999, 39865, 39864); //@t
				var_0_bool->AddReply(538002, -1, 39867); //@t
				return 0;
			}
			if(var_18_object == 39865) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(538000); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(538001, -1, 39866); //@t
				return 0;
			}
			if(var_18_object == 39833) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(537971); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537972, 39835, 39834); //@t
				var_0_bool->AddReply(537976, 39840, 39839); //@t
				var_0_bool->AddReply(537988, 39852, 39851); //@t
				var_0_bool->AddReply(537994, -1, 39859); //@t
				return 0;
			}
			if(var_18_object == 39852) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(537989); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537990, 39835, 39853); //@t
				var_0_bool->AddReply(537991, 39856, 39855); //@t
				return 0;
			}
			if(var_18_object == 39856) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(537992); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537993, 39840, 39857); //@t
				return 0;
			}
			if(var_18_object == 39840) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(537977); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537978, 39842, 39841); //@t
				var_0_bool->AddReply(537987, -1, 39850); //@t
				return 0;
			}
			if(var_18_object == 39842) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(537979); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537980, 39844, 39843); //@t
				var_0_bool->AddReply(537986, -1, 39849); //@t
				return 0;
			}
			if(var_18_object == 39844) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(537981); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537982, 39846, 39845); //@t
				var_0_bool->AddReply(537985, -1, 39848); //@t
				return 0;
			}
			if(var_18_object == 39846) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(537983); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537984, -1, 39847); //@t
				return 0;
			}
			if(var_18_object == 39835) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(537973); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537974, 39840, 39836); //@t
				var_0_bool->AddReply(537975, -1, 39838); //@t
				return 0;
			}
			if(var_18_object == 45790) {
				func_424(var_19_bool, "Neutral");
				var_0_bool->SetMessage(543333); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543334, -1, 45791); //@t
				var_0_bool->AddReply(543335, -1, 45792); //@t
				return 0;
			}
			var_3_object = true;
			bool var_706_bool;
			func_5183(var_706_bool);
			if(var_706_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1bf";
	
	}

}


task task_3
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_5145(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			object var_25_object;
			var_18_bool = var_25_object;
			func_5148(var_25_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_5154();
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, int var_7_int, float var_8_float, float var_9_float, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int, bool var_19_bool, object var_20_object, bool var_21_bool)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, string var_7_string, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
	}

}


maintask task_4
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		@SensePlayerOnly(true);
		func_5185();
		func_2114();
	
		for(;;) {
			var_2_object = false;
			func_2375(var_16_object, var_17_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_5145(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_2310(var_20_int);
			object var_28_object;
			var_18_bool = var_28_object;
			func_5148(var_28_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_21_object;
		var_18_bool = var_21_object;
		func_4877(var_21_object);
		int var_30_int; object var_31_object;
		var_18_bool = var_31_object;
		func_4959(var_30_int, var_31_object);
		int var_20_int;
		var_30_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_2310(var_20_int);
			object var_71_object;
			var_18_bool = var_71_object;
			func_4969(var_71_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_18_bool = var_24_object;
		object var_25_object;
		var_19_object = var_25_object;
		bool var_26_bool;
		var_20_bool = var_26_bool;
		bool var_23_bool;
		func_5254(var_23_bool, var_24_object, var_25_object, var_26_bool);
		if(var_23_bool != 0) {
			int var_85_int; object var_86_object; bool var_87_bool;
			var_18_bool = var_86_object;
			var_20_bool = var_87_bool;
			func_5052(var_86_object, var_87_bool);
			var_85_int = var_22_int;
			if(var_22_int > 0) {
				if(var_22_int > 1)
					func_2310(var_22_int);
				object var_123_object;
				var_18_bool = var_123_object;
				func_5059(var_123_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_5094(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_2310(var_20_int);
			object var_28_object;
			var_18_bool = var_28_object;
			func_5097();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		int var_21_int;
		object var_23_object;
		var_18_object = var_23_object;
		string var_24_string;
		var_19_bool = var_24_string;
		bool var_22_bool;
		func_4791(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_2310(var_21_int);
			object var_38_object; string var_39_string;
			var_18_object = var_38_object;
			var_19_bool = var_39_string;
			func_4823(var_38_object, var_39_string);
		} else {
			int var_49_int; string var_50_string; object var_51_object;
			var_19_bool = var_50_string;
			var_18_object = var_51_object;
			func_5099(var_49_int, var_50_string, var_51_object);
			var_49_int = var_21_int;
			if(!(var_21_int > 0)) goto Label_2251;
			if(var_21_int > 1)
				func_2310(var_21_int);
			string var_97_string; object var_98_object;
			var_19_bool = var_97_string;
			var_18_object = var_98_object;
			func_5111(var_97_string, var_98_object);
		}
	Label_2251:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, string var_9_string, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		bool var_19_bool; string var_20_string;
		func_4890(var_19_bool, var_20_string);
		if(var_19_bool != 0) {
			func_2310(var_20_string);
			string var_29_string;
			var_18_bool = var_29_string;
			func_4906(var_29_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		bool var_19_bool; object var_20_object;
		func_4848(var_19_bool, var_20_object);
		if(var_19_bool != 0) {
			func_2310(var_20_object);
			object var_32_object;
			var_18_bool = var_32_object;
			func_4871(var_32_object);
		} else {
			object var_34_object;
			func_2335(var_34_object, var_34_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_19_object;
		func_2335(var_19_object, var_19_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, int var_9_int, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		if(var_18_bool != 110) {
		}
		var_2_object = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_2310(var_17_bool);
		func_5154();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		func_2310(var_18_bool);
		object var_20_object;
		var_18_bool = var_20_object;
		func_4767();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		@RequestClearPath(var_18_bool);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		@Stop();
	}

}


task task_5
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_5145(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_2713();
			object var_27_object;
			var_18_bool = var_27_object;
			func_5148(var_27_object);
		}
	}

	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_21_object;
		var_18_bool = var_21_object;
		func_4877(var_21_object);
		int var_30_int; object var_31_object;
		var_18_bool = var_31_object;
		func_4959(var_30_int, var_31_object);
		int var_20_int;
		var_30_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_2713();
			object var_70_object;
			var_18_bool = var_70_object;
			func_4969(var_70_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int, bool var_18_bool, object var_19_object, bool var_20_bool)
	{
		int var_22_int;
		object var_24_object;
		var_18_bool = var_24_object;
		object var_25_object;
		var_19_object = var_25_object;
		bool var_26_bool;
		var_20_bool = var_26_bool;
		bool var_23_bool;
		func_5254(var_23_bool, var_24_object, var_25_object, var_26_bool);
		if(var_23_bool != 0) {
			int var_85_int; object var_86_object; bool var_87_bool;
			var_18_bool = var_86_object;
			var_20_bool = var_87_bool;
			func_5052(var_86_object, var_87_bool);
			var_85_int = var_22_int;
			if(var_22_int > 0) {
				if(var_22_int > 1)
					func_2713();
				object var_122_object;
				var_18_bool = var_122_object;
				func_5059(var_122_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_22_object;
		var_18_bool = var_22_object;
		func_5094(var_22_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_2713();
			object var_27_object;
			var_18_bool = var_27_object;
			func_5097();
		}
	}

	void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, string var_10_string, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
		int var_21_int;
		object var_23_object;
		var_18_object = var_23_object;
		string var_24_string;
		var_19_bool = var_24_string;
		bool var_22_bool;
		func_4791(var_22_bool, var_23_object, var_24_string);
		if(var_22_bool != 0) {
			func_2713();
			object var_37_object; string var_38_string;
			var_18_object = var_37_object;
			var_19_bool = var_38_string;
			func_4823(var_37_object, var_38_string);
		} else {
			int var_48_int; string var_49_string; object var_50_object;
			var_19_bool = var_49_string;
			var_18_object = var_50_object;
			func_5099(var_48_int, var_49_string, var_50_object);
			var_48_int = var_21_int;
			if(!(var_21_int > 0)) goto Label_2596;
			if(var_21_int > 1)
				func_2713();
			string var_96_string; object var_97_object;
			var_19_bool = var_96_string;
			var_18_object = var_97_object;
			func_5111(var_96_string, var_97_object);
		}
	Label_2596:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, string var_9_string, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		string var_20_string;
		var_18_bool = var_20_string;
		bool var_19_bool;
		func_4890(var_19_bool, var_20_string);
		if(var_19_bool != 0) {
			func_2713();
			string var_28_string;
			var_18_bool = var_28_string;
			func_4906(var_28_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_2713();
		func_5154();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_18_bool = var_20_object;
		bool var_19_bool;
		func_4848(var_19_bool, var_20_object);
		if(var_19_bool != 0) {
			func_2713();
			object var_31_object;
			var_18_bool = var_31_object;
			func_4871(var_31_object);
		}
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		func_3464(var_17_bool);
		func_5154();
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, int var_18_int)
	{
		if(var_18_int == 1) {
			func_4294(var_1_object);
		} else {
			int var_26_int;
			func_3608(var_17_bool, var_26_int, var_26_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object)
	{
		bool var_19_bool = false;
		if(var_1_object == var_18_object) {
			if(!var_2_object) //@nz
				var_19_bool = true;
		}
		if(var_19_bool != 0) {
			var_2_object = true;
			object var_22_object;
			var_18_object = var_22_object;
			func_4162(var_22_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object)
	{
		bool var_19_bool = false;
		if(var_1_object == var_18_object) {
			if(var_2_object != 0)
				var_19_bool = true;
		}
		if(var_19_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object)
	{
		@RequestClearPath(var_18_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object)
	{
		func_3464(var_18_object);
		object var_23_object;
		var_18_object = var_23_object;
		func_4767();
	}

}


void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object, string var_19_string)
{
	float var_21_float;
	if(var_19_string == "health") {
		@GetProperty("health", var_21_float);
		if(var_21_float <= 0)
			@SignalDeath(var_18_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	func_4746(var_19_object);
}


// @pe
void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object, int var_19_int, float var_20_float, float var_21_float)
{
	object var_22_object;
	var_18_object = var_22_object;
	int var_23_int;
	var_19_int = var_23_int;
	float var_24_float;
	var_20_float = var_24_float;
	func_3885(var_22_object, var_23_int, var_24_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool, object var_18_object, int var_19_int, float var_20_float, float var_21_float, cvector var_22_cvector, cvector var_23_cvector)
{
	object var_24_object;
	var_18_object = var_24_object;
	int var_25_int;
	var_19_int = var_25_int;
	float var_26_float;
	var_20_float = var_26_float;
	cvector var_27_cvector;
	var_22_cvector = var_27_cvector;
	cvector var_28_cvector;
	var_23_cvector = var_28_cvector;
	func_3953(var_26_float, var_27_cvector, var_28_cvector);
}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_368_bool;
		func_5183(var_368_bool);
		if(var_368_bool == 0) goto Label_15;
		func_4131("Neutral");
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
void func_5121(int var_53_int, object var_54_object)
{
	object var_56_object;
	var_54_object = var_56_object;
	bool var_55_bool;
	func_3817(var_55_bool, var_56_object);
	if(!var_55_bool) { //@nz
		var_53_int = 0;
		return 0;
	}
	bool var_90_bool; object var_91_object;
	var_54_object = var_91_object;
	func_5251(var_91_object);
	if(var_90_bool != 0)
		var_53_int = 2;
	else
		var_53_int = 0;
	
}


// @pe
void func_2067(string var_43_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_44_string;
	var_43_string = var_44_string;
	func_4180(var_44_string);
	@PlayAnimation("all", var_43_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_43_string);
	@RemoveEnvelope();
}


// @pe
void func_5139(object var_100_object)
{
	object var_101_object;
	var_100_object = var_101_object;
	func_4969(var_101_object);
}


// @pe
void func_3608(bool var_0_bool, object var_1_object, int var_26_int)
{
	if(var_26_int != 0)
		return 0;
	bool var_29_bool;
	func_3646(var_29_bool, var_1_object);
	if(!var_29_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_5145(int var_21_int)
{
	var_21_int = 2;
}


// @pe
void func_5148(object var_27_object)
{
	object var_28_object;
	func_5189(var_28_object, var_28_object);
}


// @pe
void func_4126(void)
{
	@CameraSwitchToNormal(true);
}


void func_5154(void)
{
}


void func_4131(string var_181_string)
{
	bool var_185_bool; float var_186_float; float var_187_float;
	@lshHasAnimation(var_185_bool, var_181_string);
	if(var_185_bool != 0) {
		@lshGetAnimTimes(var_181_string, var_186_float, var_187_float);
		@lshPlayAnimation(var_186_float, var_187_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_181_string);
	}
	
}


// @pe
void func_5155(bool var_24_bool)
{
	var_24_bool = false;
}


// @pe
void func_5158(void)
{
}


// @pe
void func_5160(bool var_31_bool)
{
	var_31_bool = false;
}


void func_40(bool var_0_bool, int var_53_int, object var_54_object)
{
	var_0_bool = var_54_object;
	bool var_64_bool; object var_65_object;
	var_54_object = var_65_object;
	func_3983(var_64_bool, var_65_object, 70.0);
	if(!var_64_bool) { //@nz
		var_53_int = -2;
		return 8;
	}
	object var_60_object;
	@CreateDialog(var_60_object);
	int var_112_int;
	func_5177(var_112_int);
	var_60_object->SetNPCName(var_112_int);
	int var_113_int;
	func_5175(var_113_int);
	var_60_object->SetNPCDescription(var_113_int);
	string var_114_string;
	func_5179(var_114_string);
	var_60_object->SetPhoto(var_114_string);
	string var_115_string;
	func_5181(var_115_string);
	var_60_object->SetPhoto2(var_115_string);
	int var_116_int;
	func_4458(var_116_int);
	var_60_object->SetPlayerName(var_116_int);
	bool var_61_bool;
	@IsOverrideActive(var_61_bool);
	if(var_61_bool != 0) {
		var_53_int = -2;
		return 8;
	}
	@DoDialog(var_60_object);
	object var_125_object; object var_126_object;
	var_54_object = var_125_object;
	var_60_object = var_126_object;
	TaskCall(2);
	func_114(var_127_object, var_128_object, var_129_string, var_130_bool, var_125_object, var_126_object);
	TaskReturn();
	bool var_63_bool;
	var_60_object->IsDialogEnd(var_63_bool);
	
	for(;;) {
		var_323_bool = !var_63_bool; //@nz
		if(var_323_bool == 0) goto Label_103;
		@sync();
		var_60_object->IsDialogEnd(var_63_bool);
	}
	
Label_103:
	object var_324_object;
	var_54_object = var_324_object;
	func_4052();
	@StopDialog(var_60_object);
	var_60_object->GetReturnValue(-1);
	int var_62_int = var_53_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5163(void)
{
}


// @pe
void func_5165(bool var_35_bool)
{
	var_35_bool = false;
}


void func_3630(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_5168(void)
{
}


// @pe
void func_5170(bool var_26_bool)
{
	var_26_bool = false;
}


void func_4147(string var_156_string, bool var_157_bool)
{
	bool var_163_bool; float var_164_float; float var_165_float;
	@lshHasAnimation(var_163_bool, var_156_string);
	if(var_163_bool != 0) {
		@lshGetAnimTimes(var_156_string, var_164_float, var_165_float);
		@lshPlayAnimation(var_164_float, var_165_float, var_157_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_156_string);
	}
	
}


// @pe
void func_5173(void)
{
}


void func_5175(int var_113_int)
{
	var_113_int = 515564;
}


void func_5177(int var_112_int)
{
	var_112_int = 503349;
}


void func_5179(string var_114_string)
{
	var_114_string = "ui/NPC_Citizen2.png";
}


void func_5181(string var_115_string)
{
	var_115_string = "ui/NPC_Citizen2_b.png";
}


// @pe
void func_3646(bool var_29_bool, object var_30_object)
{
	object var_32_object;
	var_30_object = var_32_object;
	bool var_31_bool;
	func_3817(var_31_bool, var_32_object);
	var_31_bool = var_29_bool;
}


void func_5183(bool var_107_bool)
{
	var_107_bool = false;
}


void func_5185(void)
{
	var_19_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


void func_2114(void)
{
	bool var_20_bool;
	func_3978(var_20_bool);
	if(!var_20_bool) //@nz
		func_5154();
}


void func_4162(object var_22_object)
{
	float var_25_float;
	var_22_object->GetEyesHeight(var_25_float);
	cvector var_26_cvector = [0.0, 0.0, 0.0];
	var_27_float = GetByIndex(var_26_cvector, 1);
	var_25_float = var_27_float;
	SetByIndex(var_26_cvector, 1) = var_27_float;
	@LookAsync(var_22_object, "head", var_26_cvector);
}


void func_3653(string var_249_string)
{
	var_249_string = "walk";
}


void func_5189(object var_28_object, object var_55_object)
{
	bool var_30_bool;
	var_31_bool = GlobalVars[0];
	if(var_31_bool != 0) {
		@IsOverrideActive(var_30_bool);
		if(!var_30_bool) { //@nz
			object var_33_object;
			var_28_object = var_33_object;
			func_4481(var_33_object);
		}
		return 2;
	EMIT "GOTO 0x1472";
	}
	bool var_40_bool; object var_41_object;
	var_28_object = var_41_object;
	func_5235(var_40_bool, var_41_object);
	if(!var_40_bool) { //@nz
		int var_53_int; object var_54_object;
		var_28_object = var_54_object;
		TaskCall(1);
		func_40(var_55_object, var_53_int, var_54_object);
		TaskReturn();
		if(1000 == var_55_object) {
			bool var_333_bool; object var_334_object;
			var_28_object = var_334_object;
			func_4070(var_333_bool, var_334_object);
			if(!var_333_bool) //@nz
				return 2;
			object var_366_object;
			var_28_object = var_366_object;
			TaskCall(0);
			func_0(var_366_object);
			TaskReturn();
			object var_373_object;
			var_28_object = var_373_object;
			func_4126();
		}
	}
}


void func_3655(string var_250_string)
{
	var_250_string = "run";
}


void func_2632(void)
{
	int var_60_int; int var_61_int; bool var_62_bool; float var_63_float; bool var_64_bool;
	@WaitForAnimEnd();
	bool var_65_bool;
	func_3978(var_65_bool);
	if(!var_65_bool) //@nz
		return 14;
	int var_67_int;
	func_4926(var_67_int);
	int var_58_int;
	var_67_int = var_58_int;
	int var_59_int = 0;
	
	for(;;) {
		bool var_80_bool = false;
		if(var_59_int < 5) {
			bool var_83_bool;
			func_3978(var_83_bool);
			if(var_83_bool != 0)
				var_80_bool = true;
		}
		if(var_80_bool != 0) {
			@irand(var_60_int, 3);
			if(var_60_int == 0) {
				if(var_58_int == 0) goto Label_2679;
				@irand(var_61_int, var_58_int);
				string var_89_string; int var_90_int;
				var_61_int = var_90_int;
				func_4919(var_89_string, var_90_int);
				@PlayAnimation("all", var_89_string);
				@WaitForAnimEnd(var_62_bool);
				if(!var_62_bool) { //@nz
				} else {
			} else {
			if(var_60_int == 1) {
				@rand(var_63_float, 4);
				@Sleep((var_63_float + 1), var_64_bool);
				if(!var_64_bool) { //@nz
					goto Label_2708;
				}
			} else if(var_59_int != 0) {
				goto Label_2708;
			}
			}
					bool var_92_bool;
					func_2711(var_92_bool);
					var_93_bool = !var_92_bool; //@nz
					if(var_93_bool == 0) goto Label_2703;
			}
		}
	Label_2708:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_2703:
		@ResetAAS();
		var_59_int += 1;
	}
	
}


// @pe
void func_3657(string var_477_string, int var_478_int)
{
	if(var_478_int == 2) {
		var_477_string = "fire";
		return 0;
	EMIT "GOTO 0xe55";
	}
	if(var_478_int == 1) {
		var_477_string = "bullet";
		return 0;
	}
	var_477_string = "phys";
}


void func_4173(void)
{
	bool var_21_bool;
	func_5183(var_21_bool);
	if(var_21_bool != 0)
		@lshStopSpeech();
}


void func_4180(string var_44_string)
{
	bool var_53_bool; int var_54_int; bool var_55_bool; int var_56_int; bool var_57_bool; float var_58_float; cvector var_59_cvector; cvector var_60_cvector;
	@IsExisting3DSound(var_53_bool, var_44_string);
	if(!var_53_bool) { //@nz
		var_54_int = 0;

		for(;;) {
			@IsExisting3DSound(var_55_bool, (var_44_string + (var_54_int + 1)));
			if(!var_55_bool) { //@nz
				break;
			Label_4200:
				@irand(var_56_int, var_54_int);
				var_44_string += (var_56_int + 1);
	}
			@Is3DSoundLoaded(var_57_bool, var_44_string);
			if(var_57_bool != 0) {
				@GetEyesHeight(var_58_float);
				@GetDirection(var_59_cvector);
				var_60_cvector = var_59_cvector * 50;
				var_71_float = GetByIndex(var_60_cvector, 1);
				SetByIndex(var_60_cvector, 1) = (var_71_float + var_58_float);
				@PlayGlobalSound(var_44_string, var_60_cvector);
			}
		}
		var_54_int += 1;
	}
	var_66_bool = !var_54_int; //@nz
	if(var_66_bool == 0) goto Label_4200;
}


void func_3671(cvector var_52_cvector, object var_53_object)
{
	cvector var_56_cvector;
	@GetPosition(var_56_cvector);
	cvector var_57_cvector;
	var_53_object->GetPosition(var_57_cvector);
	var_52_cvector = var_57_cvector - var_56_cvector;
}


void func_3678(float var_75_float, object var_76_object)
{
	cvector var_80_cvector;
	@GetPosition(var_80_cvector);
	cvector var_81_cvector;
	var_76_object->GetPosition(var_81_cvector);
	var_75_float = (var_81_cvector - var_80_cvector) | (var_81_cvector - var_80_cvector);
}


void func_3172(bool var_540_bool, float var_541_float)
{
	float var_544_float; bool var_545_bool;
	@rand(var_544_float);
	if(var_544_float < var_541_float) {

		for(;;) {
			@IsAnimationPlaying(var_545_bool);
			if(!var_545_bool) { //@nz
			} else {
				bool var_548_bool;
				func_3270(var_548_bool);
				if(var_548_bool != 0) {
					var_540_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_540_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_3374(var_545_bool);
}


void func_3686(bool var_102_bool, object var_103_object)
{
	bool var_105_bool;
	@IsPlayerActor(var_103_object, var_105_bool);
	var_105_bool = var_102_bool;
}


void func_3691(bool var_53_bool, object var_54_object, string var_55_string)
{
	var_60_bool = IsFuncExist(var_54_object, "HasProperty", 2);
	if(!var_60_bool) { //@nz
		var_53_bool = false;
		return 2;
	}
	bool var_57_bool;
	var_54_object->HasProperty(var_55_string, var_57_bool);
	var_57_bool = var_53_bool;
}


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_125_object, object var_126_object)
{
	var_0_bool = var_126_object;
	var_1_object = var_125_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_132_bool = false;
		bool var_133_bool;
		func_4326(var_1_object);
		if(var_133_bool != 0) {
			bool var_141_bool;
			func_4358(var_141_bool, var_1_object);
			if(var_141_bool != 0)
				var_132_bool = true;
		}
		if(var_132_bool != 0) {
			func_424(var_126_object, "Neutral");
			var_0_bool->SetMessage(543329); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(543330, 45790, 45787); //@t
			var_0_bool->AddReply(543332, 45790, 45789); //@t
			var_0_bool->AddReply(543331, -1, 45788); //@t
		} else {
					bool var_197_bool = false;
					bool var_198_bool;
					func_4326(var_1_object);
					if(var_198_bool != 0) {
						bool var_200_bool;
						func_4358(var_200_bool, var_1_object);
						if(!var_200_bool) //@nz
							var_197_bool = true;
					}
					if(var_197_bool == 0) goto Label_189;
					func_424(var_126_object, "Neutral");
					var_0_bool->SetMessage(543328); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(543336, -1, 45794); //@t
		}
	}
Label_394:
	for(;;) {
		bool var_179_bool;
		func_5183(var_179_bool);
		if(var_179_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_4131(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_423;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_423:
			return 0;

		}

	}
	
Label_189:
	func_424(var_126_object, "Neutral");
	var_0_bool->SetMessage(537969); //@t
	var_0_bool->ClearReplies(); //@t
	bool var_210_bool = false;
	bool var_211_bool;
	func_4338(var_211_bool, var_1_object);
	if(var_211_bool != 0) {
		bool var_217_bool;
		func_4314(var_1_object);
		if(var_217_bool != 0)
			var_210_bool = true;
	}
	if(var_210_bool != 0)
		var_0_bool->AddReply(537970, 39833, 39832); //@t
	bool var_226_bool = false;
	bool var_227_bool;
	func_4338(var_227_bool, var_1_object);
	if(var_227_bool != 0) {
		bool var_229_bool;
		func_4314(var_1_object);
		if(var_229_bool != 0)
			var_226_bool = true;
	}
	if(var_226_bool != 0)
		var_0_bool->AddReply(537995, 39861, 39860); //@t
	bool var_234_bool = false;
	bool var_235_bool;
	func_4338(var_235_bool, var_1_object);
	if(var_235_bool != 0) {
		bool var_237_bool;
		func_4314(var_1_object);
		if(var_237_bool != 0)
			var_234_bool = true;
	}
	if(var_234_bool != 0)
		var_0_bool->AddReply(538003, 39869, 39868); //@t
	bool var_242_bool = false;
	bool var_243_bool;
	func_4338(var_243_bool, var_1_object);
	if(var_243_bool != 0) {
		bool var_245_bool;
		func_4314(var_1_object);
		if(var_245_bool != 0)
			var_242_bool = true;
	}
	if(var_242_bool != 0)
		var_0_bool->AddReply(538012, 39878, 39877); //@t
	bool var_250_bool = false;
	bool var_251_bool = false;
	bool var_252_bool;
	func_4338(var_252_bool, var_1_object);
	if(var_252_bool != 0) {
		bool var_254_bool;
		func_4388(var_254_bool, var_1_object);
		if(var_254_bool != 0)
			var_251_bool = true;
	}
	if(var_251_bool != 0) {
		bool var_265_bool;
		func_4314(var_1_object);
		if(var_265_bool != 0)
			var_250_bool = true;
	}
	if(var_250_bool != 0)
		var_0_bool->AddReply(538017, 39883, 39882); //@t
	bool var_270_bool = false;
	bool var_271_bool = false;
	bool var_272_bool;
	func_4348(var_272_bool, var_1_object);
	if(var_272_bool != 0) {
		bool var_278_bool;
		func_4378(var_278_bool, var_1_object);
		if(var_278_bool != 0)
			var_271_bool = true;
	}
	if(var_271_bool != 0) {
		bool var_289_bool;
		func_4314(var_1_object);
		if(var_289_bool != 0)
			var_270_bool = true;
	}
	if(var_270_bool != 0)
		var_0_bool->AddReply(538043, 39911, 39910); //@t
	bool var_294_bool = false;
	bool var_295_bool = false;
	bool var_296_bool;
	func_4368(var_296_bool, var_1_object);
	if(var_296_bool != 0) {
		bool var_302_bool;
		func_4378(var_302_bool, var_1_object);
		if(var_302_bool != 0)
			var_295_bool = true;
	}
	if(var_295_bool != 0) {
		bool var_304_bool;
		func_4314(var_1_object);
		if(var_304_bool != 0)
			var_294_bool = true;
	}
	if(var_294_bool != 0)
		var_0_bool->AddReply(538083, 39952, 39951); //@t
	bool var_309_bool = false;
	bool var_310_bool = false;
	bool var_311_bool;
	func_4368(var_311_bool, var_1_object);
	if(var_311_bool != 0) {
		bool var_313_bool;
		func_4388(var_313_bool, var_1_object);
		if(var_313_bool != 0)
			var_310_bool = true;
	}
	if(var_310_bool != 0) {
		bool var_315_bool;
		func_4314(var_1_object);
		if(var_315_bool != 0)
			var_309_bool = true;
	}
	if(var_309_bool != 0)
		var_0_bool->AddReply(538110, 39980, 39979); //@t
	var_0_bool->AddReply(538126, -1, 39997); //@t
	goto Label_394;
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x76";


void func_5235(bool var_40_bool, object var_41_object)
{
	float var_43_float;
	bool var_44_bool; object var_45_object;
	func_3686(var_44_bool, var_45_object);
	if(var_44_bool != 0) {
		var_45_object->GetProperty("reputation", var_43_float);
		if(var_43_float < 0.4)
			var_40_bool = true;
	}
	var_40_bool = false;
}


void func_3703(float var_449_float, object var_450_object, float var_451_float, int var_452_int)
{
	int var_462_int; int var_464_int;
	object var_469_object;
	var_450_object = var_469_object;
	bool var_468_bool;
	func_3691(var_468_bool, var_469_object, "health");
	if(!var_468_bool) //@nz
		var_449_float = 0.0;
	bool var_472_bool; object var_473_object;
	func_3691(var_472_bool, var_473_object, "armor");
	if(!var_472_bool) //@nz
		var_462_int = 0;
	else
		var_473_object->GetProperty("armor", var_462_int);
	string var_477_string; int var_478_int;
	var_452_int = var_478_int;
	func_3657(var_477_string, var_478_int);
	string var_463_string = "armor_" + var_477_string;
	bool var_483_bool; object var_484_object; string var_485_string;
	var_450_object = var_484_object;
	func_3691(var_483_bool, var_484_object, var_485_string);
	if(!var_483_bool) //@nz
		var_464_int = 0;
	else
		var_450_object->GetProperty(var_485_string, var_464_int);

	float var_487_float;
	func_4237(var_487_float, ((var_462_int + var_464_int) / 100.0), (float)1);
	float var_465_float;
	var_487_float = var_465_float;
	float var_466_float;
	var_450_object->GetProperty("health", var_466_float);
	float var_467_float = var_451_float * (1 - var_465_float);
	float var_497_float;
	func_4244(var_497_float, (var_466_float - var_467_float), (float)0, (float)1);
	var_450_object->SetProperty("health", var_497_float);
	bool var_503_bool; object var_504_object;
	var_450_object = var_504_object;
	func_3686(var_503_bool, var_504_object);
	if(var_503_bool != 0) {
		float var_505_float = -var_467_float;
		func_4260(var_505_float);
	}
	var_467_float = var_449_float;
	
}


void func_4221(object var_106_object)
{
	object var_108_object;
	@self(var_108_object);
	var_108_object = var_106_object;
}
EMIT "Stack[-1] = 0";


void func_3199(bool var_0_bool, bool var_337_bool, float var_338_float)
{
	bool var_344_bool; cvector var_345_cvector; cvector var_346_cvector; cvector var_347_cvector; float var_348_float;
	
	for(;;) {
		@IsAnimationPlaying(var_344_bool);
		if(!var_344_bool) //@nz
			break;
		bool var_350_bool;
		func_3270(var_350_bool);
		if(var_350_bool != 0) {
			var_337_bool = true;
			return 10;
		}
		bool var_393_bool;
		func_3817(var_393_bool, var_0_bool);
		if(!var_393_bool) { //@nz
			var_337_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_345_cvector); //@t
		@GetPFPosition(var_346_cvector);
		var_347_cvector = var_345_cvector - var_346_cvector;
		var_348_float = var_347_cvector | var_347_cvector;
		if(var_348_float < (var_338_float * var_338_float)) {
			bool var_398_bool; float var_399_float;
			var_338_float = var_399_float;
			func_3035(var_347_cvector, var_348_float, var_398_bool, var_399_float);
			var_337_bool = true;
			return 10;
		}
		@sync();
	}
	func_3374(var_348_float);
	var_337_bool = false;
}


void func_4227(cvector var_50_cvector, cvector var_51_cvector)
{
	float var_59_float = sqrt(var_51_cvector | var_51_cvector);
	if(var_59_float < 0.000001)
		var_50_cvector = [0.0, 0.0, 0.0];
	var_50_cvector = var_51_cvector / var_59_float;
}


// @pe
void func_5251(bool var_90_bool)
{
	var_90_bool = true;
}


void func_4741(int var_138_int, string var_139_string)
{
	int var_141_int;
	@GetInvItemByName(var_141_int, var_139_string);
	var_141_int = var_138_int;
}


// @pe
void func_5254(bool var_23_bool, object var_24_object, object var_25_object, bool var_26_bool)
{
	object var_28_object;
	var_24_object = var_28_object;
	object var_29_object;
	var_25_object = var_29_object;
	bool var_31_bool;
	var_26_bool = var_31_bool;
	bool var_27_bool;
	func_5065(var_27_bool, var_28_object, var_29_object, 700.0, var_31_bool);
	var_27_bool = var_23_bool;
}


// @pe
void func_4746(object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	TaskCall(3);
	func_1943(var_20_object);
	TaskReturn();
}


// @pe
void func_4237(float var_487_float, float var_488_float, float var_489_float)
{
	if(var_488_float < var_489_float)
		var_488_float = var_487_float;
	else
		var_489_float = var_487_float;
	
}


// @pe
void func_5264(object var_101_object)
{
	bool var_102_bool; object var_103_object;
	func_3686(var_102_bool, var_103_object);
	if(var_102_bool != 0) {
		object var_106_object;
		func_4221(var_106_object);
		@ReportReputationChange(var_103_object, var_106_object, -0.04, true);
		func_4566(true);
	}
	func_4542();
	var_245_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


// @pe
void func_4244(float var_497_float, float var_498_float, float var_499_float, float var_500_float)
{
	if(var_498_float < var_499_float) {
		var_499_float = var_497_float;
		return 0;
	}
	if(var_498_float > var_500_float) {
		var_500_float = var_497_float;
		return 0;
	}
	var_498_float = var_497_float;
}


void func_2711(bool var_92_bool)
{
	var_92_bool = true;
}


void func_2713(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2718(object var_102_object)
{
	object var_109_object;
	func_2732(var_105_int, var_106_bool, var_107_float, var_108_int, var_109_object, var_109_object, true, 180.0);
}


void func_4255(int var_135_int, string var_136_string)
{
	int var_138_int;
	@GetVariable(var_136_string, var_138_int);
	var_138_int = var_135_int;
}


void func_4260(float var_505_float)
{
	object var_507_object;
	@CreateFloatVector(var_507_object);
	var_507_object->add(var_505_float);
	if(var_505_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_507_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2726(float var_446_float)
{
	var_446_float = 0.05;
}


// @pe
void func_2729(int var_453_int)
{
	var_453_int = 0;
}


void func_3242(bool var_0_bool, bool var_352_bool)
{
	cvector var_358_cvector; cvector var_359_cvector;
	bool var_363_bool;
	func_3817(var_363_bool, var_0_bool);
	if(!var_363_bool) { //@nz
		var_352_bool = false;
		return 10;
	}
	bool var_366_bool;
	float var_362_float;
	func_3331(var_362_float, var_366_bool);
	if(var_366_bool != 0) {
		var_0_bool->GetPFPosition(var_358_cvector); //@t
		@GetPFPosition(var_359_cvector);
		var_0_bool->GetAttackDistance(var_362_float); //@t
		var_352_bool = ((var_358_cvector - var_359_cvector) | (var_358_cvector - var_359_cvector)) <= ((var_362_float + 50) * (var_362_float + 50));
		return 10;
	}
	var_352_bool = false;
}


void func_2732(bool var_0_bool, object var_3_object, bool var_5_bool, object var_109_object, bool var_110_bool, float var_111_float, bool var_186_bool, bool var_278_bool)
{
	float var_123_float; cvector var_124_cvector; cvector var_125_cvector; bool var_127_bool; float var_130_float; cvector var_131_cvector; bool var_132_bool; float var_133_float;
	func_2961(var_131_cvector, var_132_bool, var_133_float);
	var_5_bool = 0;
	var_158_bool = IsFuncExist(var_109_object, "@GetAttackDistance", 1);
	if(var_158_bool != 0) {
		var_109_object->GetAttackDistance(var_123_float);
		var_123_float += 50;
	} else {
						var_111_float = var_123_float;
	}
	if(var_123_float >= 150)
		var_123_float = 150;
	var_3_object = false;
	var_0_bool = var_109_object;
	bool var_126_bool;
	@IsPlayerActor(var_0_bool, var_126_bool);
	if(var_126_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_164_object;
		func_4221(var_164_object);
		@SendPlayerEnemy(var_109_object, var_164_object);
	}
	if(var_110_bool != 0)
		var_127_bool = false;
	else
		var_127_bool = true;

	
Label_2772:
	for(;;) {
		bool var_169_bool = false;
		bool var_170_bool;
		func_3817(var_170_bool, var_0_bool);
		if(var_170_bool != 0) {
			if(!var_3_object) //@nz
				var_169_bool = true;
		}
		if(var_169_bool != 0) {
			func_3374(var_133_float);
			var_0_bool->GetPFPosition(var_124_cvector); //@t
			@GetPFPosition(var_125_cvector);
			var_130_float = (var_124_cvector - var_125_cvector) | (var_124_cvector - var_125_cvector);
			if(var_130_float >= ((400.0 + var_123_float) * (400.0 + var_123_float))) {
				bool var_180_bool; float var_182_float;
				var_123_float = var_182_float;
				TaskCall(7);
				func_3401(var_188_bool, var_180_bool, var_0_bool, var_182_float, 3000.0, true, false);
				TaskReturn();
				if(!var_186_bool) { //@nz
				} else {
					var_127_bool = false;
			} else {
			if(var_130_float >= (var_111_float * var_111_float)) {
				var_0_bool->GetPFPosition(var_131_cvector); //@t
				@CanReachByPF(var_132_bool, var_131_cvector);
				if(!var_132_bool) { //@nz
					bool var_272_bool; float var_274_float;
					var_123_float = var_274_float;
					TaskCall(7);
					func_3401(var_280_bool, var_272_bool, var_0_bool, var_274_float, 3000.0, true, false);
					TaskReturn();
					if(!var_278_bool) { //@nz
						goto Label_2944;
					}
					var_127_bool = false;
					goto Label_2772;
				}
				if(!var_127_bool) { //@nz
					func_3967(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_3374(var_133_float);
					@StopAsync();
					var_127_bool = true;
					bool var_294_bool;
					func_3817(var_294_bool, var_0_bool);
					if(!var_294_bool) { //@nz
						goto Label_2944;
					}
				}
				@rand(var_133_float);
				bool var_297_bool;
				var_299_bool = var_133_float < 0.25;
				if(var_299_bool != 1) {
					bool var_300_bool;
					func_3331(true, var_300_bool);
					if(var_300_bool != 1)
						var_297_bool = false;
				}
				if(var_297_bool != 0) {
					@Face(var_0_bool);
					func_3381();
					@PlayAnimation("all", "attack_stay");
					bool var_337_bool; float var_338_float;
					func_3199(var_133_float, var_337_bool, var_338_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_3374(var_133_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_559_bool;
					func_3331(var_133_float, var_559_bool);
					var_560_bool = !var_559_bool; //@nz
					if(var_560_bool == 0) goto Label_2934;
					bool var_561_bool;
					func_3817(var_561_bool, var_0_bool);
					if(!var_561_bool) { //@nz
						goto Label_2944;
					}
					var_0_bool->GetPFPosition(var_124_cvector); //@t
					@GetPFPosition(var_125_cvector);
					if(!(((var_124_cvector - var_125_cvector) | (var_124_cvector - var_125_cvector)) < (var_338_float * var_338_float))) goto Label_2934;
					bool var_566_bool; float var_567_float;
					var_111_float = var_567_float;
					func_3035(var_132_bool, var_133_float, var_566_bool, var_567_float);
					var_568_bool = !var_566_bool; //@nz
					if(var_568_bool == 0) goto Label_2934;
					goto Label_2944;
			}
				bool var_569_bool; float var_570_float;
				var_111_float = var_570_float;
				func_3035(var_132_bool, var_133_float, var_569_bool, var_570_float);
				if(!var_569_bool) { //@nz
					goto Label_2944;
				}
				var_127_bool = true;

			}
		Label_2934:
			goto Label_2943;
			}
			Label_2943:
			}
		}
	Label_2944:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_126_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_4277(int var_120_int)
{
	float var_122_float;
	@GetGameTime(var_122_float);
	var_120_int = 1 + (var_122_float / 24);
}


// @pe
void func_4791(bool var_22_bool, object var_23_object, string var_24_string)
{
	if(var_24_string == "unholster") {
		bool var_27_bool; object var_28_object;
		var_23_object = var_28_object;
		func_5155(var_28_object);
		var_27_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0x12d5";
	}
	if(var_24_string == "player_shot") {
		bool var_31_bool; object var_32_object;
		var_23_object = var_32_object;
		func_5160(var_32_object);
		var_31_bool = var_22_bool;
		return 0;
	EMIT "GOTO 0x12d5";
	}
	if(var_24_string == "battle") {
		bool var_35_bool; object var_36_object;
		var_23_object = var_36_object;
		func_5165(var_36_object);
		var_35_bool = var_22_bool;
		return 0;
	}
	var_22_bool = false;
}


void func_4286(int var_258_int)
{
	float var_260_float;
	@GetGameTime(var_260_float);
	int var_261_int;
	var_260_float = var_261_int;
	var_258_int = var_261_int % 24;
}


void func_3776(bool var_46_bool, object var_47_object)
{
	bool var_49_bool;
	var_47_object->IsDead(var_49_bool);
	var_49_bool = var_46_bool;
}


void func_3781(bool var_35_bool, object var_36_object)
{
	if(var_36_object == null) {
		var_35_bool = false;
		return 4;
	}
	bool var_42_bool = false;
	var_45_bool = IsFuncExist(var_36_object, "IsDead", 1);
	if(var_45_bool != 0) {
		bool var_46_bool; object var_47_object;
		var_36_object = var_47_object;
		func_3776(var_46_bool, var_47_object);
		if(var_46_bool != 0)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		var_35_bool = false;
		return 4;
	}
	object var_39_object;
	@GetScene(var_39_object);
	if(var_39_object == null) {
		var_35_bool = false;
		return 4;
	}
	object var_40_object;
	var_36_object->GetScene(var_40_object);
	if(var_39_object != var_40_object) {
		var_35_bool = false;
		return 4;
	}
	var_35_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3270(bool var_350_bool)
{
	bool var_351_bool = false;
	bool var_352_bool;
	func_3242(var_351_bool, var_352_bool);
	if(var_352_bool != 0) {
		bool var_369_bool;
		func_3286(var_350_bool, var_351_bool, var_369_bool);
		if(var_369_bool != 0)
			var_351_bool = true;
	}
	if(var_351_bool != 0) {
		var_350_bool = true;
		return 0;
	}
	var_350_bool = false;
}


void func_4294(object var_21_object)
{
	bool var_23_bool;
	@IsPlayerActor(var_21_object, var_23_bool);
	if(var_23_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_4303(void)
{
	object var_411_object;
	@GetScene(var_411_object);
	object var_413_object;
	func_4221(var_413_object);
	@BroadcastMessage("battle", var_413_object, var_411_object);
}
EMIT "Stack[-1] = 0";


void func_3286(bool var_0_bool, string var_4_string, bool var_369_bool)
{
	object var_375_object; float var_377_float; cvector var_378_cvector; cvector var_379_cvector;
	@GetScene(var_375_object);
	bool var_376_bool = false;
	
	for(;;) {
		cvector var_380_cvector;
		func_3671(var_380_cvector, var_0_bool);
		var_386_int = -var_380_cvector;
		@FindDirLength(var_377_float, var_386_int, var_4_string);
		if(var_377_float < var_4_string) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_378_cvector); //@t
				@GetPFPosition(var_379_cvector);
				@WaitForAnimEnd();
				func_3374(var_379_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_376_bool = true;
				bool var_391_bool;
				func_3242(var_379_cvector, var_391_bool);
				var_392_bool = !var_391_bool; //@nz
				if(var_392_bool == 0) goto Label_3327;
		}
		for(;;) {
			var_376_bool = var_369_bool;

		}

	Label_3327:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_4823(object var_37_object, string var_38_string)
{
	if(var_38_string == "unholster") {
		object var_41_object;
		var_37_object = var_41_object;
		func_5158();
	} else if(var_38_string == "player_shot") {
			object var_44_object;
			var_37_object = var_44_object;
			func_5163();
	}
Label_4847:
	for(;;) {

	}
	
	if(!(var_38_string == "battle")) goto Label_4847;
	object var_47_object;
	var_37_object = var_47_object;
	func_5168();
}


// @pe
void func_4314(bool var_217_bool)
{
	int var_219_int;
	func_4255(var_219_int, "branch");
	if(var_219_int == 0) {
		var_217_bool = true;
		return 0;
	}
	var_217_bool = false;
}


// @pe
void func_4326(bool var_133_bool)
{
	int var_135_int;
	func_4255(var_135_int, "branch");
	if(var_135_int == 2)
		var_133_bool = true;
	var_133_bool = false;
}


void func_3817(bool var_31_bool, object var_32_object)
{
	object var_36_object;
	var_32_object = var_36_object;
	bool var_35_bool;
	func_3781(var_35_bool, var_36_object);
	if(!var_35_bool) { //@nz
		var_31_bool = false;
		return 2;
	}
	bool var_53_bool; object var_54_object;
	func_3691(var_53_bool, var_54_object, "noaccess");
	if(!var_53_bool) { //@nz
		var_31_bool = true;
		return 2;
	}
	int var_34_int;
	var_54_object->GetProperty("noaccess", var_34_int);
	var_31_bool = var_34_int == 0;
}


void func_4848(bool var_19_bool, object var_20_object)
{
	bool var_22_bool;
	bool var_23_bool = false;
	bool var_24_bool; object var_25_object;
	var_20_object = var_25_object;
	func_5155(var_25_object);
	if(var_24_bool != 0) {
		bool var_26_bool; object var_27_object;
		func_3686(var_26_bool, var_27_object);
		if(var_26_bool != 0)
			var_23_bool = true;
	}
	if(var_23_bool != 0) {
		var_27_object->IsWeaponHolstered(var_22_bool);
		if(!var_22_bool) //@nz
			var_19_bool = true;
	}
	var_19_bool = false;
}


// @pe
void func_4338(bool var_211_bool, object var_212_object)
{
	object var_214_object;
	var_212_object = var_214_object;
	func_4398(var_214_object);
	bool var_213_bool;
	if(var_213_bool != 0) {
		var_211_bool = true;
		return 0;
	}
	var_211_bool = false;
}


// @pe
void func_4348(bool var_272_bool, object var_273_object)
{
	object var_275_object;
	var_273_object = var_275_object;
	func_4405(var_275_object);
	bool var_274_bool;
	if(var_274_bool != 0) {
		var_272_bool = true;
		return 0;
	}
	var_272_bool = false;
}


void func_3841(object var_35_object)
{
	string var_49_string;
	if(var_35_object == null)
		return 14;
	bool var_43_bool;
	@IsDead(var_43_bool);
	if(var_43_bool != 0)
		return 14;
	int var_44_int;
	@GetSecondaryAnimationType(var_44_int);
	if(var_44_int < 0)
		return 14;
	cvector var_45_cvector;
	var_35_object->GetPosition(var_45_cvector);
	cvector var_46_cvector;
	@GetPosition(var_46_cvector);
	cvector var_47_cvector;
	@GetDirection(var_47_cvector);
	cvector var_48_cvector = var_46_cvector - var_45_cvector;
	var_54_float = GetByIndex(var_48_cvector, 0);
	var_55_float = GetByIndex(var_47_cvector, 0);
	var_57_float = GetByIndex(var_48_cvector, 2);
	var_58_float = GetByIndex(var_47_cvector, 2);
	if(((var_54_float * var_55_float) + (var_57_float * var_58_float)) >= 0)
		var_49_string = "fhit";
	else
		var_49_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_49_string + "1"), (var_49_string + "2"), -10);
	
}


void func_3331(bool var_0_bool, bool var_300_bool)
{
	bool var_302_bool;
	var_305_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_305_bool != 0) {
		var_0_bool->IsAttacking(var_302_bool); //@t
		var_302_bool = var_300_bool;
	}
	var_300_bool = false;
}


// @pe
void func_4358(bool var_141_bool, object var_142_object)
{
	object var_144_object;
	var_142_object = var_144_object;
	func_4412(var_144_object);
	bool var_143_bool;
	if(var_143_bool != 0) {
		var_141_bool = true;
		return 0;
	}
	var_141_bool = false;
}


void func_2310(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_2446(var_17_object, var_18_bool);
}


// @pe
void func_4871(object var_31_object)
{
	object var_32_object;
	var_31_object = var_32_object;
	func_5158();
}


// @pe
void func_4877(object var_21_object)
{
	bool var_22_bool; object var_23_object;
	func_3686(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		object var_26_object;
		func_4221(var_26_object);
		@ReportReputationChange(var_23_object, var_26_object, -0.01);
	}
}


void func_2318(object var_2_object)
{
	@KillTimer(110);
	var_2_object = false;
	func_2453(var_22_bool, var_23_int);
}


void func_3342(object var_2_object, bool var_5_bool)
{
	int var_420_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_419_float;
	@rand(var_419_float);
	float var_426_float;
	func_3392(var_426_float);
	if(var_419_float < var_426_float) {
		@irand(var_420_int, var_2_object);
		@Speak("attack" + (var_420_int + 1));
		int var_431_int;
		func_3390(var_431_int);
		var_5_bool = var_431_int;
	}
}


// @pe
void func_4368(bool var_296_bool, object var_297_object)
{
	object var_299_object;
	var_297_object = var_299_object;
	func_4419(var_299_object);
	bool var_298_bool;
	if(var_298_bool != 0) {
		var_296_bool = true;
		return 0;
	}
	var_296_bool = false;
}


// @pe
void func_4378(bool var_278_bool, object var_279_object)
{
	object var_281_object;
	var_279_object = var_281_object;
	func_4426(var_281_object);
	bool var_280_bool;
	if(var_280_bool != 0) {
		var_278_bool = true;
		return 0;
	}
	var_278_bool = false;
}


void func_4890(bool var_19_bool, string var_20_string)
{
	object var_22_object;
	if(var_20_string == "heal") {
		@FindActor(var_22_object, "player");
		bool var_26_bool; object var_27_object;
		var_22_object = var_27_object;
		func_5170(var_27_object);
		var_26_bool = var_19_bool;
	EMIT "Stack[-1] = 0";
	}
	var_19_bool = false;
}


void func_2335(object var_2_object, object var_19_object)
{
	bool var_24_bool; object var_25_object;
	func_3817(var_24_bool, var_25_object);
	if(!var_24_bool) //@nz
		return 4;
	if(var_2_object != 0)
		return 4;
	bool var_22_bool;
	@IsPlayerActor(var_25_object, var_22_bool);
	if(!var_22_bool) //@nz
		return 4;
	int var_61_int; object var_62_object;
	var_19_object = var_62_object;
	func_4943(var_61_int, var_62_object);
	int var_23_int;
	var_61_int = var_23_int;
	if(var_23_int > 0) {
		if(var_23_int > 1)
			func_2318(var_23_int);
		object var_79_object;
		var_19_object = var_79_object;
		func_4953(var_79_object);
		var_2_object = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_4388(bool var_254_bool, object var_255_object)
{
	object var_257_object;
	var_255_object = var_257_object;
	func_4447(var_257_object);
	bool var_256_bool;
	if(var_256_bool != 0) {
		var_254_bool = true;
		return 0;
	}
	var_254_bool = false;
}


void func_4906(string var_28_string)
{
	object var_30_object;
	if(var_28_string == "heal") {
		@FindActor(var_30_object, "player");
		object var_34_object;
		var_30_object = var_34_object;
		func_5173();
		var_30_object = null;
	}
}


void func_3885(object var_22_object, int var_23_int, float var_24_float)
{
	cvector var_34_cvector; object var_35_object; int var_36_int; bool var_37_bool; cvector var_38_cvector; cvector var_39_cvector;
	bool var_43_bool = false;
	bool var_44_bool = false;
	if(var_22_object != 0) {
		if(var_23_int != 4)
			var_44_bool = true;
	}
	if(var_44_bool != 0) {
		if(var_23_int != 5)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		cvector var_50_cvector; cvector var_51_cvector;
		cvector var_52_cvector; object var_53_object;
		var_22_object = var_53_object;
		func_3671(var_52_cvector, var_53_object);
		var_52_cvector = var_51_cvector;
		func_4227(var_50_cvector, var_51_cvector);
		var_50_cvector = var_34_cvector;
		@CreateVectorVector(var_35_object);
		var_36_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_36_int), var_37_bool, var_38_cvector, var_39_cvector);
			if(!var_37_bool) { //@nz
				break;
			Label_3947:
				var_35_object = null;
	}
			object var_112_object;
			var_22_object = var_112_object;
			func_3841(var_112_object);
		}
		if((var_39_cvector | var_34_cvector) >= 0.70710677)
			var_35_object->add(var_38_cvector);
		var_36_int += 1;
	}
	int var_40_int;
	var_35_object->size(var_40_int);
	if(var_40_int == 0) goto Label_3947;
	int var_41_int;
	@irand(var_41_int, var_40_int);
	cvector var_42_cvector;
	var_35_object->get(var_42_cvector, var_41_int);
	object var_67_object; int var_68_int; float var_69_float; cvector var_70_cvector; cvector var_71_cvector;
	var_22_object = var_67_object;
	var_23_int = var_68_int;
	var_24_float = var_69_float;
	var_42_cvector = var_70_cvector;
	var_71_cvector = -var_34_cvector;
	func_3953(var_69_float, var_70_cvector, var_71_cvector);
}


void func_3374(bool var_0_bool)
{
	func_4294(var_0_bool);
}


// @pe
void func_4398(bool var_213_bool)
{
	int var_215_int;
	func_4277(var_215_int);
	var_213_bool = var_215_int == 1;
}


void func_3379(int var_514_int)
{
	var_514_int = 0;
}


void func_3381(void)
{
	func_4180("attack_stay");
}


// @pe
void func_4405(bool var_274_bool)
{
	int var_276_int;
	func_4277(var_276_int);
	var_274_bool = var_276_int == 2;
}


void func_4919(string var_73_string, int var_74_int)
{
	string var_76_string = "idle";
	if(var_74_int != 0)
		var_76_string += var_74_int;
	var_76_string = var_73_string;
}


// @pe
void func_3386(void)
{
}


void func_3388(bool var_539_bool)
{
	var_539_bool = true;
}


// @pe
void func_4412(bool var_143_bool)
{
	int var_145_int;
	func_4277(var_145_int);
	var_143_bool = var_145_int == 4;
}


void func_4926(int var_67_int)
{
	int var_70_int; bool var_71_bool;
	var_70_int = 0;
	
	for(;;) {
		string var_73_string; int var_74_int;
		var_70_int = var_74_int;
		func_4919(var_73_string, var_74_int);
		@HasAnimation(var_71_bool, "all", var_73_string);
		if(!var_71_bool) //@nz
			break;
		var_70_int += 1;
	}
	var_70_int = var_67_int;
}


void func_3390(int var_431_int)
{
	var_431_int = 1;
}


void func_3392(float var_426_float)
{
	var_426_float = 0.5;
}


// @pe
void func_4419(bool var_298_bool)
{
	int var_300_int;
	func_4277(var_300_int);
	var_298_bool = var_300_int == 5;
}


void func_2375(bool var_0_bool, object var_1_object)
{
	float var_30_float; cvector var_31_cvector; cvector var_32_cvector; bool var_33_bool; object var_34_object; bool var_35_bool;
	@rand(var_30_float, 0.5);
	@Sleep(var_30_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_2387:
				@GetPosition(var_32_cvector);
				float var_39_float;
				func_2434(var_39_float);
				@GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, var_39_float, var_33_bool);
				if(var_33_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_2387;
			}
				var_1_object = false;
		}
		}
		goto Label_2403;

	Label_2403:
		object var_43_object; cvector var_44_cvector;
		var_31_cvector = var_44_cvector;
		func_2462(var_43_object, var_44_cvector);
		var_43_object = var_34_object;
		if(var_34_object != null) {
			@RotatePath(var_34_object, var_35_bool);
			if(var_35_bool != 0) {
				bool var_49_bool;
				func_2460(var_49_bool);
				@FollowPath(var_34_object, var_49_bool, var_35_bool);
				var_34_object = null;
				if(var_35_bool != 0) {
					TaskCall(5);
					func_2632();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_34_object = null;
	}
	
}


void func_3401(object var_2_object, bool var_180_bool, object var_181_object, float var_182_float, float var_183_float, bool var_184_bool, bool var_185_bool)
{
	object var_193_object;
	func_4294(var_193_object);
	@SetTimer(1, 5);
	bool var_191_bool;
	@CanSee(var_191_bool, var_193_object);
	if(var_191_bool != 0) {
		var_2_object = true;
		object var_197_object;
		var_181_object = var_197_object;
		func_4162(var_197_object);
	} else {
		var_2_object = false;
	}
	bool var_204_bool; object var_205_object;
	func_3686(var_204_bool, var_205_object);
	if(var_204_bool != 0) {
		object var_208_object;
		func_4221(var_208_object);
		@SendPlayerEnemy(var_205_object, var_208_object);
	}
	bool var_209_bool; object var_210_object; float var_211_float; float var_212_float; bool var_213_bool; bool var_214_bool;
	var_181_object = var_210_object;
	var_182_float = var_211_float;
	var_183_float = var_212_float;
	var_184_bool = var_213_bool;
	var_185_bool = var_214_bool;
	bool var_192_bool;
	func_3506(var_191_bool, var_192_bool, var_209_bool, var_210_object, var_211_float, var_212_float, var_213_bool, var_214_bool);
	var_209_bool = var_192_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_192_bool = var_180_bool;
	
}


// @pe
void func_4426(bool var_280_bool)
{
	bool var_282_bool = false;
	int var_283_int;
	func_4286(var_283_int);
	if(var_283_int >= 0) {
		int var_286_int;
		func_4286(var_286_int);
		if(var_286_int < 12)
			var_282_bool = true;
	}
	if(var_282_bool != 0) {
		var_280_bool = true;
		return 0;
	}
	var_280_bool = false;
}


// @pe
void func_4943(int var_61_int, object var_62_object)
{
	object var_64_object;
	var_62_object = var_64_object;
	bool var_63_bool;
	func_5235(var_63_bool, var_64_object);
	if(var_63_bool != 0)
		var_61_int = 2;
	else
		var_61_int = 0;
	
}


// @pe
void func_4953(object var_79_object)
{
	object var_80_object;
	var_79_object = var_80_object;
	func_4969(var_80_object);
}


// @pe
void func_4959(int var_88_int, object var_89_object)
{
	object var_91_object;
	var_89_object = var_91_object;
	bool var_90_bool;
	func_3817(var_90_bool, var_91_object);
	if(var_90_bool != 0)
		var_88_int = 2;
	else
		var_88_int = 0;
	
}


// @pe
void func_4447(bool var_256_bool)
{
	int var_258_int;
	func_4286(var_258_int);
	if(var_258_int >= 12)
		var_256_bool = true;
	var_256_bool = false;
}


// @pe
void func_4969(object var_101_object)
{
	object var_102_object;
	var_101_object = var_102_object;
	TaskCall(6);
	func_2718(var_102_object);
	TaskReturn();
}


void func_4458(int var_116_int)
{
	int var_118_int;
	@GetVariable("branch", var_118_int);
	if(var_118_int == 0) {
		var_116_int = 1;
		return 2;
	EMIT "GOTO 0x1179";
	}
	if(var_118_int == 1) {
		var_116_int = 2;
		return 2;
	}
	var_116_int = 3;
}


void func_3953(object var_24_object, cvector var_27_cvector, cvector var_28_cvector)
{
	object var_31_object;
	@GetScene(var_31_object);
	object var_32_object;
	@AddActorByType(var_32_object, "scripted", var_31_object, var_27_cvector, var_28_cvector, "blood_dir.xml");
	object var_35_object;
	var_24_object = var_35_object;
	func_3841(var_35_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_4977(bool var_34_bool, object var_35_object, bool var_36_bool)
{
	bool var_41_bool; object var_42_object;
	func_3691(var_41_bool, var_42_object, "class");
	if(!var_41_bool) { //@nz
		var_34_bool = false;
		return 4;
	}
	string var_39_string;
	@GetProperty("class", var_39_string);
	string var_40_string;
	var_42_object->GetProperty("class", var_40_string);
	bool var_53_bool = false;
	if(!var_36_bool) { //@nz
		if(var_39_string == var_40_string)
			var_53_bool = true;
	}
	if(var_53_bool != 0) {
		var_34_bool = true;
		return 4;
	}
	if(var_40_string == "rat") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0x13ba";
	}
	if(var_40_string == "rat_big") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0x13ba";
	}
	if(var_40_string == "dog") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0x13ba";
	}
	if(var_40_string == "grabitel") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0x13ba";
	}
	if(var_40_string == "bomber") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0x13ba";
	}
	if(var_40_string == "sanitar") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0x13ba";
	}
	if(var_40_string == "hunter") {
		var_34_bool = false;
		return 4;
	EMIT "GOTO 0x13ba";
	}
	if(var_40_string == "soldier") {
		var_34_bool = false;
		return 4;
	}
	var_34_bool = true;
}


void func_4475(int var_225_int)
{
	int var_227_int;
	@GetVariable("branch", var_227_int);
	var_227_int = var_225_int;
}


void func_3967(object var_283_object)
{
	cvector var_287_cvector;
	var_283_object->GetPosition(var_287_cvector);
	cvector var_288_cvector;
	@GetPosition(var_288_cvector);
	cvector var_289_cvector = var_287_cvector - var_288_cvector;
	var_290_float = GetByIndex(var_289_cvector, 0);
	var_291_float = GetByIndex(var_289_cvector, 2);
	@RotateAsync(var_290_float, var_291_float);
}


// @pe
void func_4481(object var_33_object)
{
	int var_34_int;
	func_4475(var_34_int);
	if(var_34_int == 1)
		@WorkWithCorpse(var_33_object);
	else
		@Barter(var_33_object);
	
}


void func_2434(float var_39_float)
{
	float var_41_float;
	@GetCameraFarDistance(var_41_float);
	var_41_float = var_39_float;
}


void func_3464(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_3630(var_18_object);
}


void func_3978(bool var_20_bool)
{
	bool var_22_bool;
	@IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
}


void func_2446(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_3983(bool var_64_bool, object var_65_object, float var_66_float)
{
	cvector var_77_cvector; bool var_84_bool;
	var_65_object->GetPosition(var_77_cvector);
	float var_76_float;
	var_65_object->GetEyesHeight(var_76_float);
	var_85_float = GetByIndex(var_77_cvector, 1);
	SetByIndex(var_77_cvector, 1) = (var_85_float + var_76_float);
	cvector var_78_cvector;
	@GetPosition(var_78_cvector);
	@GetEyesHeight(var_76_float);
	var_86_float = GetByIndex(var_78_cvector, 1);
	SetByIndex(var_78_cvector, 1) = (var_86_float + var_76_float);
	cvector var_79_cvector = var_77_cvector - var_78_cvector;
	var_87_float = GetByIndex(var_79_cvector, 1);
	SetByIndex(var_79_cvector, 1) = (float)0;
	var_89_float = sqrt(var_79_cvector | var_79_cvector);
	var_79_cvector /= var_89_float;
	cvector var_80_cvector = -var_79_cvector;
	cvector var_91_cvector;
	func_4227(var_91_cvector, (var_80_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_81_cvector = ((var_79_cvector * var_66_float) + (var_91_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_83_bool;
	@IsOverrideActive(var_83_bool);
	if(var_83_bool != 0)
		var_64_bool = false;
	@StopWorld();
	@CameraTransit((var_78_cvector + var_81_cvector), var_80_cvector, true);
	var_105_float = GetByIndex(var_81_cvector, 0);
	var_106_float = GetByIndex(var_81_cvector, 2);
	@Rotate(var_105_float, var_106_float);
	bool var_107_bool;
	func_5183(var_107_bool);
	if(var_107_bool != 0) {
	} else {
		@HasAnimationTrack(var_84_bool, "head");
		if(var_84_bool == 0) goto Label_4046;
		@LookAsyncCamera("head");
	}
Label_4046:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_64_bool = true;
	
}


void func_4494(int var_117_int, int var_118_int)
{
	if(var_117_int > var_118_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_130_int = 0;
	if(var_117_int != var_118_int) {
		@irand(var_130_int, (var_118_int - var_117_int));
	} else if(var_117_int == 0) {
		return 4;
	}
	var_130_int += var_117_int;
	if(var_130_int == 0)
		return 4;
	int var_138_int;
	func_4741(var_138_int, "Money");
	bool var_131_bool;
	@AddItem(var_131_bool, var_138_int, 0, var_130_int);
	
}


void func_2961(object var_1_object, object var_2_object, string var_4_string)
{
	bool var_137_bool; bool var_138_bool; cvector var_139_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_137_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_137_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_138_bool, ("attack" + (var_2_object + 1)));
			if(!var_138_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_139_cvector, "all", "bjump");
		var_153_float = GetByIndex(var_139_cvector, 2);
		var_4_string = -var_153_float;

	}
}


void func_2453(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_1943(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	func_1976(var_21_object);
	object var_101_object;
	var_20_object = var_101_object;
	func_5264(var_101_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2460(bool var_49_bool)
{
	var_49_bool = false;
}


void func_2462(object var_43_object, cvector var_44_cvector)
{
	object var_46_object;
	@FindShiftedPathTo(var_46_object, var_44_cvector);
	var_46_object = var_43_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_424(object var_2_object, string var_152_string)
{
	bool var_153_bool;
	func_5183(var_153_bool);
	if(!var_153_bool) //@nz
		return 0;
	if(var_152_string == var_2_object)
		return 0;
	string var_156_string; bool var_157_bool;
	var_152_string = var_156_string;
	if(var_152_string == "")
		var_157_bool = false;
	else
		var_157_bool = true;
	func_4147(var_156_string, var_157_bool);
	var_2_object = var_152_string;
	
}


void func_4525(string var_231_string)
{
	object var_235_object;
	@CreateInvItem(var_235_object);
	var_235_object->SetItemName(var_231_string);
	var_235_object->SetProperty("Organ", 1);
	int var_236_int;
	var_235_object->GetItemID(var_236_int);
	bool var_237_bool;
	@AddItem(var_237_bool, var_235_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_3506(bool var_0_bool, object var_1_object, bool var_209_bool, object var_210_object, float var_211_float, float var_212_float, bool var_213_bool, bool var_214_bool)
{
	bool var_223_bool; object var_225_object; cvector var_226_cvector; cvector var_227_cvector; float var_229_float; object var_230_object;
	var_0_bool = false;
	var_1_object = var_210_object;
	bool var_224_bool;
	var_214_bool = var_224_bool;
	
	for(;;) {
		bool var_231_bool; object var_232_object;
		var_210_object = var_232_object;
		func_3646(var_231_bool, var_232_object);
		if(!var_231_bool) { //@nz
			var_209_bool = false;
			return 16;
		}
		var_210_object->GetPosition(var_226_cvector);
		@GetPosition(var_227_cvector);
		var_229_float = (var_226_cvector - var_227_cvector) | (var_226_cvector - var_227_cvector);
		bool var_236_bool = false;
		if(var_212_float > 0) {
			if(var_229_float > (var_212_float * var_212_float))
				var_236_bool = true;
		}
		if(var_236_bool != 0) {
			@Stop();
			var_209_bool = false;
			return 16;
		}
		if(var_229_float > (var_211_float * var_211_float)) {
			var_210_object->GetPFPosition(var_226_cvector);
			@FindPathTo(var_230_object, var_226_cvector);
			if(var_230_object != null) {
				var_230_object = var_225_object;
				var_230_object = null;
			}
			if(var_225_object != null) {
				if(var_224_bool == 0) goto Label_3559;
				var_224_bool = false;
				@RotatePath(var_225_object, var_223_bool);
				if(!var_223_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_249_string;
						func_3653(var_249_string);
						string var_250_string;
						func_3655(var_250_string);
						@FollowPath(var_225_object, var_213_bool, var_223_bool, var_249_string, var_250_string);
						if(!var_223_bool) { //@nz
							if(var_0_bool == 0) goto Label_3578;
							var_225_object = null;
						}
					EMIT "GOTO 0xdfb";

					Label_3578:
						} else {
					var_225_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_223_bool);
					if(!var_223_bool) { //@nz
						if(var_0_bool != 0) {
							var_225_object = null;
							goto Label_3606;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_3606;
		}
			var_230_object = null;
			goto Label_3604;

		Label_3604:
			var_225_object = null;

		}
	Label_3606:
		for(;;) {
			var_209_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_2996(bool var_0_bool, float var_435_float, int var_436_int)
{
	object var_440_object; float var_441_float; float var_442_float;
	@GetVictim((var_435_float * 0.9), var_440_object);
	@ReportAttack(var_0_bool);
	if(var_440_object == var_0_bool) {
		float var_446_float; object var_447_object; int var_448_int;
		var_440_object = var_447_object;
		var_436_int = var_448_int;
		func_2726(var_448_int);
		var_446_float = var_441_float;
		float var_449_float; object var_450_object; float var_451_float; int var_452_int;
		var_440_object = var_450_object;
		int var_453_int; object var_454_object; int var_455_int;
		var_440_object = var_454_object;
		var_436_int = var_455_int;
		func_2729(var_455_int);
		var_453_int = var_452_int;
		func_3703(var_449_float, var_450_object, var_451_float, var_452_int);
		var_449_float = var_442_float;
		int var_514_int;
		func_3379(var_514_int);
		@ReportHit(var_0_bool, var_514_int, var_442_float, var_451_float);
		object var_515_object; float var_516_float;
		var_440_object = var_515_object;
		var_442_float = var_516_float;
		func_3386();
	}
}
EMIT "Stack[-3] = 0";


void func_1976(object var_21_object)
{
	cvector var_32_cvector; cvector var_33_cvector; cvector var_34_cvector; cvector var_35_cvector; string var_36_string; object var_37_object; bool var_38_bool; bool var_39_bool; float var_40_float; cvector var_41_cvector;
	if(var_21_object == null) {
		func_2067("fdie");
	} else {
		var_21_object->GetPosition(var_32_cvector);
		@GetPosition(var_33_cvector);
		@GetDirection(var_34_cvector);
		var_35_cvector = var_33_cvector - var_32_cvector;
		var_75_float = GetByIndex(var_35_cvector, 0);
		var_76_float = GetByIndex(var_34_cvector, 0);
		var_78_float = GetByIndex(var_35_cvector, 2);
		var_79_float = GetByIndex(var_34_cvector, 2);
		if(((var_75_float * var_76_float) + (var_78_float * var_79_float)) >= 0)
			var_36_string = "fdie";
		else
			var_36_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_21_object = var_37_object;
		var_86_bool = IsFuncExist(var_21_object, "GetScriptProperty", 2);
		if(var_86_bool != 0) {
			var_21_object->HasScriptProperty(var_38_bool, "Owner");
			if(var_38_bool != 0) {
				var_21_object->GetScriptProperty(var_37_object, "Owner");
				if(var_37_object == null)
					var_21_object = var_37_object;
			}
		}
		var_93_bool = IsFuncExist(var_37_object, "@GetEyesHeight", 1);
		if(var_93_bool != 0) {
			var_37_object->GetEyesHeight(var_40_float);
			var_41_cvector = [0.0, 0.0, 0.0];
			var_94_float = GetByIndex(var_41_cvector, 1);
			var_40_float = var_94_float;
			SetByIndex(var_41_cvector, 1) = var_94_float;
			@LookAsync(var_21_object, "head", var_41_cvector);
			var_39_bool = true;
		} else {
			var_39_bool = false;

		}
		string var_96_string;
		var_36_string = var_96_string;
		func_4180(var_96_string);
		@PlayAnimation("all", var_36_string);
		@WaitForAnimEnd();
		if(var_39_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_36_string);
		@RemoveEnvelope();
		var_37_object = null;
	}
	
}


// @pe
void func_5052(int var_85_int, object var_86_object)
{
	object var_89_object;
	var_86_object = var_89_object;
	int var_88_int;
	func_4959(var_88_int, var_89_object);
	var_88_int = var_85_int;
}


void func_4542(void)
{
	int var_225_int;
	func_4475(var_225_int);
	if(var_225_int != 1) {
	}
	func_4525("liver");
	func_4525("kidney");
	func_4525("heart");
	func_4525("blood");
}


// @pe
void func_5059(object var_122_object)
{
	object var_123_object;
	var_122_object = var_123_object;
	func_4969(var_123_object);
}


void func_5065(bool var_27_bool, object var_28_object, object var_29_object, float var_30_float, bool var_31_bool)
{
	object var_35_object;
	var_29_object = var_35_object;
	bool var_34_bool;
	func_4977(var_34_bool, var_35_object, !var_31_bool);
	if(!var_34_bool) { //@nz
		var_27_bool = false;
		return 2;
	}
	bool var_33_bool;
	@CanSee(var_33_bool, var_28_object);
	bool var_73_bool = true;
	if(var_33_bool != 1) {
		float var_75_float; object var_76_object;
		var_28_object = var_76_object;
		func_3678(var_75_float, var_76_object);
		var_84_bool = var_75_float <= (var_30_float * var_30_float);
		if(var_84_bool != 1)
			var_73_bool = false;
	}
	if(var_73_bool != 0) {
		var_27_bool = true;
		return 2;
	}
	var_27_bool = false;
}


void func_4052(void)
{
	bool var_326_bool;
	@CameraSwitchToNormal(true);
	bool var_328_bool;
	func_5183(var_328_bool);
	if(var_328_bool != 0) {
	} else {
		@HasAnimationTrack(var_326_bool, "head");
		if(var_326_bool == 0) goto Label_4069;
		@UnlookAsync("head");
	}
Label_4069:
	
}


void func_4566(bool var_111_bool)
{
	int var_114_int; bool var_115_bool;
	if(var_111_bool != 0) {
		int var_120_int;
		func_4277(var_120_int);
		func_4494(0, (100 + (var_120_int * 100)));
		@irand(var_114_int, 8);
		if(var_114_int == 0) {
			int var_148_int;
			func_4741(var_148_int, "lemon");
			@AddItem(var_115_bool, var_148_int, 0, 1);
		} else {
				if(var_114_int == 1) {
					int var_154_int;
					func_4741(var_154_int, "rusk");
					@AddItem(var_115_bool, var_154_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_114_int == 2) {
				int var_160_int;
				func_4741(var_160_int, "hook");
				@AddItem(var_115_bool, var_160_int, 0, 1);
			} else if(var_114_int == 4) {
				int var_166_int;
				func_4741(var_166_int, "syringe");
				@AddItem(var_115_bool, var_166_int, 0, 1);
			} else if(var_114_int == 5) {
				int var_172_int;
				func_4741(var_172_int, "watch");
				@AddItem(var_115_bool, var_172_int, 0, 1);
			} else if(var_114_int == 6) {
				int var_178_int;
				func_4741(var_178_int, "razor");
				@AddItem(var_115_bool, var_178_int, 0, 1);
			}
	}
		int var_185_int;
		func_4277(var_185_int);
		func_4494(0, (50 + (var_185_int * 50)));
		@irand(var_114_int, 7);
		if(var_114_int == 0) {
			int var_191_int;
			func_4741(var_191_int, "beads");
			@AddItem(var_115_bool, var_191_int, 0, 1);
		} else if(var_114_int == 1) {
			int var_197_int;
			func_4741(var_197_int, "bracelet");
			@AddItem(var_115_bool, var_197_int, 0, 1);
		} else if(var_114_int == 2) {
			int var_203_int;
			func_4741(var_203_int, "ear_ring");
			@AddItem(var_115_bool, var_203_int, 0, 1);
		} else if(var_114_int == 3) {
			int var_209_int;
			func_4741(var_209_int, "gold_ring");
			@AddItem(var_115_bool, var_209_int, 0, 1);
		} else if(var_114_int == 4) {
			int var_215_int;
			func_4741(var_215_int, "silver_ring");
			@AddItem(var_115_bool, var_215_int, 0, 1);
		} else if(var_114_int == 5) {
			int var_221_int;
			func_4741(var_221_int, "flower");
			@AddItem(var_115_bool, var_221_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_3035(bool var_0_bool, object var_1_object, bool var_398_bool, float var_399_float)
{
	string var_407_string;
	func_3374(var_407_string);
	int var_404_int;
	@irand(var_404_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_4303();
	@PlayAnimation("all", ("attack_begin" + (var_404_int + 1)));
	@WaitForAnimEnd();
	int var_406_int;
	func_3342(var_406_int, var_407_string);
	bool var_432_bool;
	func_3817(var_432_bool, var_0_bool);
	if(!var_432_bool) { //@nz
		@StopAsync();
		var_398_bool = false;
		return 8;
	}
	float var_435_float; int var_436_int;
	var_399_float = var_435_float;
	var_404_int = var_436_int;
	func_2996(var_407_string, var_435_float, var_436_int);
	bool var_405_bool;
	@HasAnimation(var_405_bool, "all", ("attack_middle" + var_404_int));
	if(var_405_bool != 0) {
		func_4303();
		@PlayAnimation("all", ("attack_middle" + var_404_int));
		@WaitForAnimEnd();
		func_3374(var_407_string);
		bool var_524_bool;
		func_3817(var_524_bool, var_0_bool);
		if(!var_524_bool) { //@nz
			@StopAsync();
			var_398_bool = false;
			return 8;
		}
		float var_527_float; int var_528_int;
		var_399_float = var_527_float;
		func_2996(var_407_string, var_527_float, var_528_int);
		var_406_int = 1;

		for(;;) {
			var_407_string = (("attack_middle" + var_528_int) + "_") + var_406_int;
			@HasAnimation(var_405_bool, "all", var_407_string);
			if(!var_405_bool) { //@nz
			} else {
				func_4303();
				@PlayAnimation("all", var_407_string);
				@WaitForAnimEnd();
				func_3374(var_407_string);
				bool var_550_bool;
				func_3817(var_550_bool, var_0_bool);
				if(!var_550_bool) { //@nz
					@StopAsync();
					var_398_bool = false;
					return 8;
				}
				float var_553_float; int var_554_int;
				var_399_float = var_553_float;
				var_404_int = var_554_int;
				func_2996(var_407_string, var_553_float, var_554_int);
				var_406_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_404_int));
		bool var_539_bool;
		func_3388(var_539_bool);
		if(var_539_bool != 0) {
			bool var_540_bool;
			func_3172(var_540_bool, 0.75);
			@StopAsync();
		}
		var_398_bool = true;
		return 8;

	}
}


// @pe
void func_5094(int var_21_int)
{
	var_21_int = 0;
}


// @pe
void func_4070(bool var_333_bool, object var_334_object)
{
	object var_336_object;
	var_334_object = var_336_object;
	bool var_335_bool;
	func_4078(var_335_bool, var_336_object, (float)70);
	var_335_bool = var_333_bool;
}


// @pe
void func_5097(void)
{
}


// @pe
void func_5099(int var_48_int, string var_49_string, object var_50_object)
{
	if(var_49_string == "killme") {
		int var_53_int; object var_54_object;
		var_50_object = var_54_object;
		func_5121(var_53_int, var_54_object);
		var_53_int = var_48_int;
		return 0;
	}
	var_48_int = 0;
}


void func_4078(bool var_335_bool, object var_336_object, float var_337_float)
{
	cvector var_347_cvector;
	var_336_object->GetPosition(var_347_cvector);
	float var_346_float;
	var_336_object->GetEyesHeight(var_346_float);
	var_354_float = GetByIndex(var_347_cvector, 1);
	SetByIndex(var_347_cvector, 1) = (var_354_float + var_346_float);
	cvector var_348_cvector;
	@GetPosition(var_348_cvector);
	@GetEyesHeight(var_346_float);
	var_355_float = GetByIndex(var_348_cvector, 1);
	SetByIndex(var_348_cvector, 1) = (var_355_float + var_346_float);
	cvector var_349_cvector = var_347_cvector - var_348_cvector;
	var_356_float = GetByIndex(var_349_cvector, 1);
	SetByIndex(var_349_cvector, 1) = (float)0;
	var_358_float = sqrt(var_349_cvector | var_349_cvector);
	var_349_cvector /= var_358_float;
	cvector var_350_cvector = -var_349_cvector;
	cvector var_351_cvector = (var_349_cvector * var_337_float) - [0.0, 10.0, 0.0];
	bool var_353_bool;
	@IsOverrideActive(var_353_bool);
	if(var_353_bool != 0)
		var_335_bool = false;
	@StopWorld();
	@CameraTransit((var_348_cvector + var_351_cvector), var_350_cvector, true);
	var_363_float = GetByIndex(var_351_cvector, 0);
	var_364_float = GetByIndex(var_351_cvector, 2);
	@Rotate(var_363_float, var_364_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_335_bool = true;
}


// @pe
void func_5111(string var_96_string, object var_97_object)
{
	if(var_96_string == "killme") {
		object var_100_object;
		var_97_object = var_100_object;
		func_5139(var_100_object);
	}
}


