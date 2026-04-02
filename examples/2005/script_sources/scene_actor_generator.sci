include std.sci

task TGenerator
{
	var object m_Actors;

	void init(void) {
		m_Actors = CreateObjectVector();
	}

	void RemoveActors(void) {
		RemoveActorsFromVector(m_Actors);
	}

	void GenerateActors(string prefix) {
		RemoveActors();
		for (int i = 1; ; ++i) {
			bool bFound;
			Vector vPos, vDir;
			@GetLocator(prefix + i, bFound, vPos, vDir);
			if (!bFound)
				break;
			m_Actors->add(GenerateActor(i, vPos, vDir));
		}
	}

	object GenerateActor(int index, Vector vPos, Vector vDir) {
		object actor;
		@AddActor(actor, GetActorName(index), self(), vPos, vDir, GetXmlName(index));
		return actor;
	}
	
	// override these if you don't override GenerateActor
	// string GetActorName(int index) = 0
	// string GetXmlName(int index) = 0
}
