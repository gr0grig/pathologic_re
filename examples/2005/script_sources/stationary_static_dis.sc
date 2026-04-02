include stationary_static.sci

maintask TStaticDis : TStationaryStatic
{
	bool IsReadyToLoad(void) {
		return true;
	}
}
