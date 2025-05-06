GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	house_vlad
	b8q02_trigger
	b8q02_trigger.xml
	pt_b8q02_book
	scripted_container
	b8q02_item_book.xml
	house_vlad@door2
	door_close
	ihouse_vlad@door2
	pt_b8q02_grabitel
	GetLocator
	pers_grabitel
	b8q02_grabitel.xml
	book_taken
	door_open
	fail
	completed
	b8q02
	cleanup
	Locator 
	 doesn't exist
	Door 
	 not found
	locked
	SetProperty
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory

Import:
	GetSceneByName (2 args)
	Trace (1 args)
	PlaySound (1 args)
	AddActor (6 args)
	GetVariable (2 args)
	SetVariable (2 args)
	RemoveActor (1 args)
	Trigger (2 args)
	GetGameTime (1 args)
	SetTimeEvent (2 args)
	Hold (0 args)
	self (1 args)
	AddActorByType (6 args)
	FindActor (2 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0 Vars = (object, object) Params = 0
		EVENT_26 Op = 0x1e Vars = (string)
		EVENT_9 Op = 0xa6 Vars = (int, float)


0x0: PushEmpty(object, object)
0x1: Push("house_vlad")
0x2: @ GetSceneByName(Stack[-2], Stack[-1])
0x3: Pop(1)
0x4: PushEmpty(object, object, string, string)
0x5: Stack[-3] = Stack[-5]
0x6: Stack[-2] = "b8q02_trigger"
0x7: Stack[-1] = "b8q02_trigger.xml"
0x8: Call2 0xb1

0x9: Stack[0 + Tasks[-1].StackPointer] = Stack[-4]
0xa: Pop(4)
0xb: PushEmpty(object, object, string, string, string)
0xc: Stack[-4] = Stack[-6]
0xd: Stack[-3] = "pt_b8q02_book"
0xe: Stack[-2] = "scripted_container"
0xf: Stack[-1] = "b8q02_item_book.xml"
0x10: Call2 0xb9

0x11: Stack[1 + Tasks[-1].StackPointer] = Stack[-5]
0x12: Pop(5)
0x13: PushEmpty(string, bool)
0x14: Stack[-2] = "house_vlad@door2"
0x15: Stack[-1] = (bool) 0
0x16: Call2 0xcb

0x17: Pop(2)
0x18: PushEmpty(int)
0x19: Stack[-1] = (int) 8
0x1a: Call2 0x93

0x1b: Pop(1)
0x1c: Return(); Pop(2)

0x1d: Stack[-1] = 0
0x1e: PushEmpty(object, int, bool, cvector, cvector, object, object, int, bool, cvector, cvector, object)
0x1f: @ Trace(Stack[-13])
0x20: Pop(0)
0x21: Push("b8q02_trigger")
0x22: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x23: IF (Stack[-1] == 0) GOTO 0x41; Pop(1)

0x24: Push("door_close")
0x25: @ PlaySound(Stack[-1])
0x26: Pop(1)
0x27: PushEmpty(string, bool)
0x28: Stack[-2] = "ihouse_vlad@door2"
0x29: Stack[-1] = (bool) 1
0x2a: Call2 0xcb

0x2b: Pop(2)
0x2c: Push("house_vlad")
0x2d: @ GetSceneByName(Stack[-7], Stack[-1])
0x2e: Pop(1)
0x2f: Stack[-5] = (int) 1
0x30: Push("pt_b8q02_grabitel")
0x31: Pop(1); Push(Stack[-1] + Stack[-6]);
0x32: @@ GetLocator(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x33: Pop(1)
0x34: Pop(0); Push((bool) Stack[-4] == 0)
0x35: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x36: GOTO 0x3f

0x37: Push("pers_grabitel")
0x38: Push("b8q02_grabitel.xml")
0x39: @ AddActor(Stack[-3], Stack[-2], Stack[-8], Stack[-5], Stack[-4], Stack[-1])
0x3a: Pop(2)
0x3b: Stack[-1] = 0
0x3c: Push((int) 1)
0x3d: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3e: GOTO 0x30

0x3f: Stack[-6] = 0
0x40: GOTO 0x5d

0x41: Push("book_taken")
0x42: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x43: IF (Stack[-1] == 0) GOTO 0x50; Pop(1)

0x44: PushEmpty()
0x45: Call2 0xdc

0x46: Pop(0)
0x47: Push("door_open")
0x48: @ PlaySound(Stack[-1])
0x49: Pop(1)
0x4a: PushEmpty(string, bool)
0x4b: Stack[-2] = "ihouse_vlad@door2"
0x4c: Stack[-1] = (bool) 0
0x4d: Call2 0xcb

0x4e: Pop(2)
0x4f: GOTO 0x5d

0x50: Push("fail")
0x51: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x52: IF (Stack[-1] == 0) GOTO 0x57; Pop(1)

0x53: PushEmpty()
0x54: Call2 0x69

0x55: Pop(0)
0x56: GOTO 0x5d

0x57: Push("completed")
0x58: Pop(1); Push((bool) Stack[-14] == Stack[-1])
0x59: IF (Stack[-1] == 0) GOTO 0x5d; Pop(1)

0x5a: PushEmpty()
0x5b: Call2 0x71

0x5c: Pop(0)
0x5d: Return(); Pop(12)

0x5e: PushEmpty(int, int)
0x5f: Push("b8q02")
0x60: @ GetVariable(Stack[-1], Stack[-2])
0x61: Pop(1)
0x62: Push((int) 1000)
0x63: Pop(1); Push((bool) Stack[-2] != Stack[-1])
0x64: IF (Stack[-1] == 0) GOTO 0x68; Pop(1)

0x65: PushEmpty()
0x66: Call2 0x69

0x67: Pop(0)
0x68: Return(); Pop(2)

0x69: Push("b8q02")
0x6a: Push((int) -1)
0x6b: @ SetVariable(Stack[-2], Stack[-1])
0x6c: Pop(2)
0x6d: PushEmpty()
0x6e: Call2 0x79

0x6f: Pop(0)
0x70: Return(); Pop(0)

0x71: Push("b8q02")
0x72: Push((int) 1000)
0x73: @ SetVariable(Stack[-2], Stack[-1])
0x74: Pop(2)
0x75: PushEmpty()
0x76: Call2 0x79

0x77: Pop(0)
0x78: Return(); Pop(0)

0x79: EventDisable(26)
0x7a: Push( Stack[0 + Tasks[-1].StackPointer] )
0x7b: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7c: @ RemoveActor(Stack[-0])
0x7d: Pop(0)
0x7e: Push( Stack[1 + Tasks[-1].StackPointer] )
0x7f: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x80: Push("cleanup")
0x81: @ Trigger(Stack[-1], Stack[-1])
0x82: Pop(1)
0x83: PushEmpty(string, bool)
0x84: Stack[-2] = "ihouse_vlad@door2"
0x85: Stack[-1] = (bool) 0
0x86: Call2 0xcb

0x87: Pop(2)
0x88: PushEmpty(string, bool)
0x89: Stack[-2] = "house_vlad@door2"
0x8a: Stack[-1] = (bool) 1
0x8b: Call2 0xcb

0x8c: Pop(2)
0x8d: PushEmpty(object)
0x8e: Call2 0xab

0x8f: Pop(0)
0x90: @ RemoveActor(Stack[-1])
0x91: Pop(1)
0x92: Return(); Pop(0)

0x93: PushEmpty(float, float)
0x94: @ GetGameTime(Stack[-1])
0x95: Pop(0)
0x96: Push((int) 24)
0x97: Pop(1); Push(Stack[-4] * Stack[-1]);
0x98: Pop(1); Push((bool) Stack[-2] >= Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9e; Pop(1)

0x9a: PushEmpty()
0x9b: Call2 0x79

0x9c: Pop(0)
0x9d: GOTO 0xa5

0x9e: Push((int) 0)
0x9f: Push((int) 24)
0xa0: Pop(1); Push(Stack[-5] * Stack[-1]);
0xa1: @ SetTimeEvent(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: @ Hold()
0xa4: Pop(0)
0xa5: Return(); Pop(2)

0xa6: PushEmpty()
0xa7: PushEmpty()
0xa8: Call2 0x5e

0xa9: Pop(0)
0xaa: Return(); Pop(0)

0xab: PushEmpty(object, object)
0xac: @ self(Stack[-1])
0xad: Pop(0)
0xae: Stack[-3] = Stack[-1]
0xaf: Return(); Pop(2)

0xb0: Stack[-1] = 0
0xb1: PushEmpty(object, object)
0xb2: Push(CVector(0.0, 0.0, 0.0))
0xb3: Push(CVector(0.0, 0.0, 1.0))
0xb4: @ AddActor(Stack[-3], Stack[-6], Stack[-7], Stack[-2], Stack[-1], Stack[-5])
0xb5: Pop(2)
0xb6: Stack[-6] = Stack[-1]
0xb7: Return(); Pop(2)

0xb8: Stack[-1] = 0
0xb9: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0xba: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2])
0xbb: Pop(0)
0xbc: Pop(0); Push((bool) Stack[-4] == 0)
0xbd: IF (Stack[-1] == 0) GOTO 0xc6; Pop(1)

0xbe: Push("Locator ")
0xbf: Pop(1); Push(Stack[-1] + Stack[-12]);
0xc0: Push(" doesn't exist")
0xc1: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc2: @ Trace(Stack[-1])
0xc3: Pop(1)
0xc4: Stack[-1] = 0
0xc5: GOTO 0xc8

0xc6: @ AddActorByType(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0xc7: Pop(0)
0xc8: Stack[-13] = Stack[-1]
0xc9: Return(); Pop(8)

0xca: Stack[-1] = 0
0xcb: PushEmpty(object, object)
0xcc: @ FindActor(Stack[-1], Stack[-4])
0xcd: Pop(0)
0xce: Pop(0); Push((bool) Stack[-1] == 0)
0xcf: IF (Stack[-1] == 0) GOTO 0xd7; Pop(1)

0xd0: Push("Door ")
0xd1: Pop(1); Push(Stack[-1] + Stack[-5]);
0xd2: Push(" not found")
0xd3: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd4: @ Trace(Stack[-1])
0xd5: Pop(1)
0xd6: GOTO 0xda

0xd7: Push("locked")
0xd8: @@ SetProperty(Stack[-1], Stack[-4])
0xd9: Pop(1)
0xda: Return(); Pop(2)

0xdb: Stack[-1] = 0
0xdc: PushEmpty(object, object)
0xdd: Push((int) 295)
0xde: Push((int) 2)
0xdf: Push((int) 521493)
0xe0: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xe1: Pop(3)
0xe2: PushEmpty(bool, object, int)
0xe3: Stack[-2] = Stack[-4]
0xe4: Stack[-1] = (int) 293
0xe5: Call2 0xf6

0xe6: Pop(3)
0xe7: Return(); Pop(2)

0xe8: Stack[-1] = 0
0xe9: PushEmpty(object, object)
0xea: @ GetDiaryRoot(Stack[-1])
0xeb: Pop(0)
0xec: Pop(0); Push((bool) Stack[-1] == 0)
0xed: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xee: Push("Can't retrieve diary root")
0xef: @ Trace(Stack[-1])
0xf0: Pop(1)
0xf1: Stack[-3] = (bool) 0
0xf2: Return(); Pop(2)

0xf3: Stack[-3] = Stack[-1]
0xf4: Return(); Pop(2)

0xf5: Stack[-1] = 0
0xf6: PushEmpty(object, object, int, object, object, int)
0xf7: PushEmpty(object)
0xf8: Call2 0xe9

0xf9: Stack[-4] = Stack[-1]
0xfa: Pop(1)
0xfb: @@ Find(Stack[-7], Stack[-2])
0xfc: Pop(0)
0xfd: Pop(0); Push((bool) Stack[-2] == 0)
0xfe: IF (Stack[-1] == 0) GOTO 0x105; Pop(1)

0xff: Push("Can't find diary parent with id: ")
0x100: Pop(1); Push(Stack[-1] + Stack[-8]);
0x101: @ Trace(Stack[-1])
0x102: Pop(1)
0x103: Stack[-9] = (bool) 0
0x104: Return(); Pop(6)

0x105: @@ AddChild(Stack[-8])
0x106: Pop(0)
0x107: Push((int) 7)
0x108: @ SendWorldWndMessage(Stack[-1])
0x109: Pop(1)
0x10a: @@ GetCategory(Stack[-1])
0x10b: Pop(0)
0x10c: @ SetDiarySection(Stack[-1])
0x10d: Pop(0)
0x10e: Stack[-9] = (bool) 0
0x10f: Return(); Pop(6)

0x110: Stack[-2] = 0
0x111: Stack[-3] = 0
