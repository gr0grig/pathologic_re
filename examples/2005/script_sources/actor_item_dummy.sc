include std.sci

maintask TActorItem
{
	void init(void) {
		object geo;
		@FindGeometry("object", geo);
		geo->Enable(true);
	}
}
