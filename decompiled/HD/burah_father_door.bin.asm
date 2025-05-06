GlobalVarCount = 0

Strings:
	burah_father_key
	door_closed
	Door is locked
	@
	Wrong door name
	pt_
	Destination scene '
	' not found
	GetLocator
	door_open
	Locator 
	 not found in destination scene 
	GetSubContainerCount
	GetItemCount
	GetItem
	GetItemID
	RemoveItem

Import:
	SetVisibility (1 args)
	Hold (0 args)
	PlaySound (1 args)
	Trace (1 args)
	GetActorName (1 args)
	GetSceneByName (2 args)
	PlaySharedSound (1 args)
	Teleport (4 args)
	_strchr (3 args)
	_strsub (3 args)
	_strsub (4 args)
	GetProperty (2 args)
	SetProperty (2 args)
	GetInvItemByName (2 args)

RunOp = 0x15
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_0 Op = 0x0 Vars = (object)


0x0: PushEmpty()
0x1: PushEmpty(bool)
0x2: Call2 0x73

0x3: Pop(0)
0x4: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0x5: PushEmpty(bool, object, string, bool)
0x6: Stack[-3] = Stack[-5]
0x7: Stack[-2] = "burah_father_key"
0x8: Stack[-1] = (bool) 1
0x9: Call2 0x7f

0xa: Pop(3)
0xb: IF (Stack[-1] == 0) GOTO 0x10; Pop(1)

0xc: PushEmpty(bool)
0xd: Stack[-1] = (bool) 0
0xe: Call2 0x7a

0xf: Pop(1)
0x10: PushEmpty(object)
0x11: Stack[-1] = Stack[-2]
0x12: Call2 0x1c

0x13: Pop(1)
0x14: Return(); Pop(0)

0x15: Push((bool) 1)
0x16: @ SetVisibility(Stack[-1])
0x17: Pop(1)
0x18: @ Hold()
0x19: Pop(0)
0x1a: GOTO 0x18

0x1b: Return(); Pop(0)

0x1c: PushEmpty(string, int, string, string, object, bool, cvector, cvector, string, int, string, string, object, bool, cvector, cvector)
0x1d: PushEmpty(bool)
0x1e: Call2 0x73

0x1f: Pop(0)
0x20: IF (Stack[-1] == 0) GOTO 0x28; Pop(1)

0x21: Push("door_closed")
0x22: @ PlaySound(Stack[-1])
0x23: Pop(1)
0x24: Push("Door is locked")
0x25: @ Trace(Stack[-1])
0x26: Pop(1)
0x27: Return(); Pop(16)

0x28: @ GetActorName(Stack[-8])
0x29: Pop(0)
0x2a: PushEmpty(int, string, string)
0x2b: Stack[-2] = Stack[-11]
0x2c: Stack[-1] = "@"
0x2d: Call2 0x64

0x2e: Stack[-10] = Stack[-3]
0x2f: Pop(3)
0x30: Push((int) -1)
0x31: Pop(1); Push((bool) Stack[-8] == Stack[-1])
0x32: IF (Stack[-1] == 0) GOTO 0x37; Pop(1)

0x33: Push("Wrong door name")
0x34: @ Trace(Stack[-1])
0x35: Pop(1)
0x36: Return(); Pop(16)

0x37: PushEmpty(string, string, int, int)
0x38: Stack[-3] = Stack[-12]
0x39: Stack[-2] = (int) 0
0x3a: Stack[-1] = Stack[-11]
0x3b: Call2 0x6e

0x3c: Stack[-10] = Stack[-4]
0x3d: Pop(4)
0x3e: Push("pt_")
0x3f: PushEmpty(string, string, int)
0x40: Stack[-2] = Stack[-12]
0x41: Push((int) 1)
0x42: Stack[-2] = Stack[-12] + Stack[-1]; Pop(1);
0x43: Call2 0x69

0x44: Pop(2)
0x45: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x46: @ GetSceneByName(Stack[-4], Stack[-6])
0x47: Pop(0)
0x48: Pop(0); Push((bool) Stack[-4] == 0)
0x49: IF (Stack[-1] == 0) GOTO 0x51; Pop(1)

0x4a: Push("Destination scene '")
0x4b: Pop(1); Push(Stack[-1] + Stack[-7]);
0x4c: Push("' not found")
0x4d: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4e: @ Trace(Stack[-1])
0x4f: Pop(1)
0x50: Return(); Pop(16)

0x51: @@ GetLocator(Stack[-5], Stack[-3], Stack[-2], Stack[-1])
0x52: Pop(0)
0x53: Push(Stack[-3])
0x54: IF (Stack[-1] == 0) GOTO 0x5b; Pop(1)

0x55: Push("door_open")
0x56: @ PlaySharedSound(Stack[-1])
0x57: Pop(1)
0x58: @ Teleport(Stack[-17], Stack[-4], Stack[-2], Stack[-1])
0x59: Pop(0)
0x5a: GOTO 0x62

0x5b: Push("Locator ")
0x5c: Pop(1); Push(Stack[-1] + Stack[-6]);
0x5d: Push(" not found in destination scene ")
0x5e: Pop(2); Push(Stack[-2] + Stack[-1]);
0x5f: Pop(1); Push(Stack[-1] + Stack[-7]);
0x60: @ Trace(Stack[-1])
0x61: Pop(1)
0x62: Return(); Pop(16)

0x63: Stack[-4] = 0
0x64: PushEmpty(int, int)
0x65: @ _strchr(Stack[-1], Stack[-4], Stack[-3])
0x66: Pop(0)
0x67: Stack[-5] = Stack[-1]
0x68: Return(); Pop(2)

0x69: PushEmpty(string, string)
0x6a: @ _strsub(Stack[-1], Stack[-4], Stack[-3])
0x6b: Pop(0)
0x6c: Stack[-5] = Stack[-1]
0x6d: Return(); Pop(2)

0x6e: PushEmpty(string, string)
0x6f: @ _strsub(Stack[-1], Stack[-5], Stack[-4], Stack[-3])
0x70: Pop(0)
0x71: Stack[-6] = Stack[-1]
0x72: Return(); Pop(2)

0x73: PushEmpty(int, int)
0x74: Push("locked")
0x75: @ GetProperty(Stack[-1], Stack[-2])
0x76: Pop(1)
0x77: Push((int) 0)
0x78: Stack[-4] = Stack[-2] != Stack[-1]; Pop(1);
0x79: Return(); Pop(2)

0x7a: PushEmpty()
0x7b: Push("locked")
0x7c: @ SetProperty(Stack[-1], Stack[-2])
0x7d: Pop(1)
0x7e: Return(); Pop(0)

0x7f: PushEmpty(int, int, int, int, int, object, int, int, int, int, int, int, object, int)
0x80: @ GetInvItemByName(Stack[-7], Stack[-16])
0x81: Pop(0)
0x82: @@ GetSubContainerCount(Stack[-6])
0x83: Pop(0)
0x84: Stack[-5] = (int) 0
0x85: Pop(0); Push((bool) Stack[-5] < Stack[-6])
0x86: IF (Stack[-1] == 0) GOTO 0xa0; Pop(1)

0x87: @@ GetItemCount(Stack[-4], Stack[-5])
0x88: Pop(0)
0x89: Stack[-3] = (int) 0
0x8a: Pop(0); Push((bool) Stack[-3] < Stack[-4])
0x8b: IF (Stack[-1] == 0) GOTO 0x9d; Pop(1)

0x8c: @@ GetItem(Stack[-2], Stack[-3], Stack[-5])
0x8d: Pop(0)
0x8e: @@ GetItemID(Stack[-1])
0x8f: Pop(0)
0x90: Pop(0); Push((bool) Stack[-1] == Stack[-7])
0x91: IF (Stack[-1] == 0) GOTO 0x99; Pop(1)

0x92: Push(Stack[-15])
0x93: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x94: Push((int) 1)
0x95: @@ RemoveItem(Stack[-4], Stack[-1], Stack[-6])
0x96: Pop(1)
0x97: Stack[-18] = (bool) 1
0x98: Return(); Pop(14)

0x99: Stack[-2] = 0
0x9a: Push((int) 1)
0x9b: Stack[-4] = Stack[-4] + Stack[-1]; Pop(1);
0x9c: GOTO 0x8a

0x9d: Push((int) 1)
0x9e: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x9f: GOTO 0x85

0xa0: Stack[-18] = (bool) 0
0xa1: Return(); Pop(14)

