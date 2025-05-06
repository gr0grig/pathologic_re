GlobalVarCount = 0

Strings:
	default
	player
	health
	GetProperty
	immunity
	reputation
	hunger
	tiredness
	disease
	infection
	armor
	armor_fire
	armor_phys
	armor_bullet
	armor_disease
	reputation_text
	health_text
	immunity_text
	hunger_text
	tiredness_text
	infection_text
	armor_phys_text
	armor_bullet_text
	armor_fire_text
	armor_disease_text
	body_text
	clothes_text
	time_text
	people_button

Import:
	CaptureKeyboard (0 args)
	SetCursor (1 args)
	FindActor (2 args)
	DestroyWindow (0 args)
	SendMessage (2 args)
	ProcessEvents (0 args)
	DestroyWindow (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_200 Op = 0x94 Vars = (int, string, object)
		EVENT_100 Op = 0x9c Vars = (int)


0x0: PushEmpty(object, float, float, float, float, float, float, object, float, float, float, float, float, float)
0x1: @ CaptureKeyboard()
0x2: Pop(0)
0x3: Push("default")
0x4: @ SetCursor(Stack[-1])
0x5: Pop(1)
0x6: Push("player")
0x7: @ FindActor(Stack[-8], Stack[-1])
0x8: Pop(1)
0x9: Pop(0); Push((bool) Stack[-7] == 0)
0xa: IF (Stack[-1] == 0) GOTO 0xe; Pop(1)

0xb: @ DestroyWindow()
0xc: Pop(0)
0xd: Return(); Pop(14)

0xe: Push("health")
0xf: @@ GetProperty(Stack[-1], Stack[-7])
0x10: Pop(1)
0x11: Push((int) 100)
0x12: Pop(1); Push(Stack[-1] * Stack[-7]);
0x13: Push("health")
0x14: @ SendMessage(Stack[-2], Stack[-1])
0x15: Pop(2)
0x16: Push("immunity")
0x17: @@ GetProperty(Stack[-1], Stack[-7])
0x18: Pop(1)
0x19: Push((int) 100)
0x1a: Pop(1); Push(Stack[-1] * Stack[-7]);
0x1b: Push("immunity")
0x1c: @ SendMessage(Stack[-2], Stack[-1])
0x1d: Pop(2)
0x1e: Push("reputation")
0x1f: @@ GetProperty(Stack[-1], Stack[-7])
0x20: Pop(1)
0x21: Push((int) 100)
0x22: Pop(1); Push(Stack[-1] * Stack[-7]);
0x23: Push("reputation")
0x24: @ SendMessage(Stack[-2], Stack[-1])
0x25: Pop(2)
0x26: Push("hunger")
0x27: @@ GetProperty(Stack[-1], Stack[-7])
0x28: Pop(1)
0x29: Push((int) 100)
0x2a: Pop(1); Push(Stack[-1] * Stack[-7]);
0x2b: Push("hunger")
0x2c: @ SendMessage(Stack[-2], Stack[-1])
0x2d: Pop(2)
0x2e: Push("tiredness")
0x2f: @@ GetProperty(Stack[-1], Stack[-7])
0x30: Pop(1)
0x31: Push((int) 100)
0x32: Pop(1); Push(Stack[-1] * Stack[-7]);
0x33: Push("tiredness")
0x34: @ SendMessage(Stack[-2], Stack[-1])
0x35: Pop(2)
0x36: Push("disease")
0x37: @@ GetProperty(Stack[-1], Stack[-7])
0x38: Pop(1)
0x39: Push((int) 100)
0x3a: Pop(1); Push(Stack[-1] * Stack[-7]);
0x3b: Push("infection")
0x3c: @ SendMessage(Stack[-2], Stack[-1])
0x3d: Pop(2)
0x3e: Push("armor")
0x3f: @@ GetProperty(Stack[-1], Stack[-6])
0x40: Pop(1)
0x41: Push("armor_fire")
0x42: @@ GetProperty(Stack[-1], Stack[-5])
0x43: Pop(1)
0x44: Push("armor_phys")
0x45: @@ GetProperty(Stack[-1], Stack[-4])
0x46: Pop(1)
0x47: Push("armor_bullet")
0x48: @@ GetProperty(Stack[-1], Stack[-3])
0x49: Pop(1)
0x4a: Push("armor_disease")
0x4b: @@ GetProperty(Stack[-1], Stack[-2])
0x4c: Pop(1)
0x4d: Pop(0); Push(Stack[-5] + Stack[-4]);
0x4e: Push("armor_fire")
0x4f: @ SendMessage(Stack[-2], Stack[-1])
0x50: Pop(2)
0x51: Pop(0); Push(Stack[-5] + Stack[-3]);
0x52: Push("armor_phys")
0x53: @ SendMessage(Stack[-2], Stack[-1])
0x54: Pop(2)
0x55: Pop(0); Push(Stack[-5] + Stack[-2]);
0x56: Push("armor_bullet")
0x57: @ SendMessage(Stack[-2], Stack[-1])
0x58: Pop(2)
0x59: Push("armor_disease")
0x5a: @ SendMessage(Stack[-2], Stack[-1])
0x5b: Pop(1)
0x5c: Push((int) 700)
0x5d: Push("reputation_text")
0x5e: @ SendMessage(Stack[-2], Stack[-1])
0x5f: Pop(2)
0x60: Push((int) 701)
0x61: Push("health_text")
0x62: @ SendMessage(Stack[-2], Stack[-1])
0x63: Pop(2)
0x64: Push((int) 702)
0x65: Push("immunity_text")
0x66: @ SendMessage(Stack[-2], Stack[-1])
0x67: Pop(2)
0x68: Push((int) 703)
0x69: Push("hunger_text")
0x6a: @ SendMessage(Stack[-2], Stack[-1])
0x6b: Pop(2)
0x6c: Push((int) 704)
0x6d: Push("tiredness_text")
0x6e: @ SendMessage(Stack[-2], Stack[-1])
0x6f: Pop(2)
0x70: Push((int) 705)
0x71: Push("infection_text")
0x72: @ SendMessage(Stack[-2], Stack[-1])
0x73: Pop(2)
0x74: Push((int) 706)
0x75: Push("armor_phys_text")
0x76: @ SendMessage(Stack[-2], Stack[-1])
0x77: Pop(2)
0x78: Push((int) 707)
0x79: Push("armor_bullet_text")
0x7a: @ SendMessage(Stack[-2], Stack[-1])
0x7b: Pop(2)
0x7c: Push((int) 708)
0x7d: Push("armor_fire_text")
0x7e: @ SendMessage(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: Push((int) 709)
0x81: Push("armor_disease_text")
0x82: @ SendMessage(Stack[-2], Stack[-1])
0x83: Pop(2)
0x84: Push((int) 710)
0x85: Push("body_text")
0x86: @ SendMessage(Stack[-2], Stack[-1])
0x87: Pop(2)
0x88: Push((int) 711)
0x89: Push("clothes_text")
0x8a: @ SendMessage(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: Push((int) 712)
0x8d: Push("time_text")
0x8e: @ SendMessage(Stack[-2], Stack[-1])
0x8f: Pop(2)
0x90: @ ProcessEvents()
0x91: Pop(0)
0x92: Return(); Pop(14)

0x93: Stack[-7] = 0
0x94: PushEmpty()
0x95: Push("people_button")
0x96: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x97: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x98: Push((int) 1)
0x99: @ DestroyWindow(Stack[-1])
0x9a: Pop(1)
0x9b: Return(); Pop(0)

0x9c: PushEmpty()
0x9d: @ DestroyWindow()
0x9e: Pop(0)
0x9f: Return(); Pop(0)

