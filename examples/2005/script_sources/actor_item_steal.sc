include actor_item_base.sci

maintask TActorItemSteal : TActorItem
{
	void OnTaken(object actor) 
	{
		if (actor) {
			object scene;
			@GetScene(scene);
			@BroadcastSteal(actor, scene);
		}
		super.OnTaken(actor);
	}
}
