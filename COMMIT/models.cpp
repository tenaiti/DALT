//#ifndef MODELS_CPP
//#define MODELS_CPP
//#include "models.h"
//Models::Models() {
//
//	sqlConnHandle = NULL;
//	sqlStmtHandle = NULL;
//	cout << "Loading ... Initialize." << endl;
//	if (SQL_SUCCESS == SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlEnvHandle)) {
//		cout << "Loading ... SQLAllocHandle." << endl;
//	}
//	if (SQL_SUCCESS == SQLSetEnvAttr(sqlEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0)) {
//		cout << "Loading ... SQLSetEnvAttr." << endl;
//	}
//	if (SQL_SUCCESS == SQLAllocHandle(SQL_HANDLE_DBC, sqlEnvHandle, &sqlConnHandle)) {
//		cout << "Loading ... SQLAllocHandle." << endl;
//	}
//	switch (SQLDriverConnect(sqlConnHandle,
//		NULL,
//		(SQLWCHAR*)L"DRIVER={SQL Server};SERVER=KIMHUY;DATABASE=DALT;Trusted=true;",
//		SQL_NTS,
//		retconstring,
//		1024,
//		NULL,
//		SQL_DRIVER_NOPROMPT))
//	{
//	case SQL_SUCCESS:
//		cout << "Loading ... Successfully connected to SQL Server." << endl;
//		break;
//	case SQL_SUCCESS_WITH_INFO:
//		cout << "Loading ... Successfully connected to SQL Server." << endl;
//		break;
//	default:
//		cout << "FAIL ... Could not connect to SQL Server." << endl;
//		break;
//	}
//	cout << "Connecting 100%... Ready to query." << endl;
//}
//
//void Models::getAllMovie(List<Movie>& movies) {
//	SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle);
//	if (SQL_SUCCESS == SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"SELECT * FROM MOVIE", SQL_NTS)) {
//		SQLCHAR sqlVersion[SQL_RESULT_LEN];
//		SQLINTEGER ptrSqlVersion;
//		Movie temp;
//		cout << "Quering..." << endl;
//		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
//			SQLGetData(sqlStmtHandle, 1, SQL_INTEGER, &temp.movieId, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 2, SQL_CHAR, &temp.movieName, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 3, SQL_CHAR, &temp.movieCategory, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 4, SQL_CHAR, &temp.movieProducer, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 5, SQL_INTEGER, &temp.movieTime, SQL_RESULT_LEN, &ptrSqlVersion);
//			movies.insertFirst(temp);
//		}
//		cout << "Quering done!" << endl;
//	}
//	else {
//		cout << "Fail" << endl;
//	}
//}
//void Models::movieAdd(const Movie& movie) {
//	string command = "INSERT INTO MOVIE (MovieName, MovieCategory, MovieProducer, MovieTime) VALUES ('";
//	command += string(movie.movieName) + AND + string(movie.movieCategory) + AND + string(movie.movieProducer) + AND + to_string(movie.movieTime);
//	command += "')";
//	std::wstring stemp = s2ws(command);
//	LPCWSTR result = stemp.c_str();
//	SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle);
//	switch (SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)result, SQL_NTS)) {
//	case SQL_SUCCESS:
//		cout << "[INSERT] SUCCESS!" << endl;
//		break;
//	case SQL_SUCCESS_WITH_INFO:
//		cout << "[INSERT] SUCCESS!" << endl;
//		break;
//	default:
//		cout << "[INSERT] FAIL!" << endl;
//		break;
//	}
//}
//void Models::movieRemove(const int& movieId) {
//	string command = "DELETE FROM MOVIE WHERE MovieId = '" + to_string(movieId) + s;
//	cout << command << endl;
//	std::wstring stemp = s2ws(command);
//	LPCWSTR result = stemp.c_str();
//	SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle);
//	switch (SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)result, SQL_NTS)) {
//	case SQL_SUCCESS:
//		cout << "[DELETE] SUCCESS!" << endl;
//		break;
//	case SQL_SUCCESS_WITH_INFO:
//		cout << "[DELETE] SUCCESS!" << endl;
//		break;
//	default:
//		cout << "[DELETE] FAIL!" << endl;
//		break;
//	}
//}
////void Models::movieUpdate(const Movie& movie) {
////	string command = "UPDATE MOVIE SET MovieName = '";
////	command += string(movie.movieName) + s;
////	command += ", MovieCategory = '";
////	command += string(movie.movieCategory) + s;
////	command += ", MovieProducer = '";
////	command += string(movie.movieProducer) + s;
////	command += ", MovieTime = '";
////	command += to_string(movie.movieTime) + s;
////	command += " WHERE MovieId = '";
////	command += to_string(movie.movieId) + s;
////	std::wstring stemp = s2ws(command);
////	LPCWSTR result = stemp.c_str();
////	SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle);
////	switch (SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)result, SQL_NTS)) {
////	case SQL_SUCCESS:
////		cout << "[UPDATE] SUCCESS!" << endl;
////		break;
////	case SQL_SUCCESS_WITH_INFO:
////		cout << "[UPDATE] SUCCESS!" << endl;
////		break;
////	default:
////		cout << "[UPDATE] FAIL!" << endl;
////		break;
////	}
////}
//wstring Models::s2ws(const string& s)
//{
//	int len;
//	int slength = (int)s.length() + 1;
//	len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
//	wchar_t* buf = new wchar_t[len];
//	MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
//	wstring r(buf);
//	delete[] buf;
//	return r;
//}
//void Models::getAllTicket(List<Ticket>& tickets) {
//	SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle);
//	if (SQL_SUCCESS == SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"SELECT * FROM TICKET", SQL_NTS)) {
//		SQLCHAR sqlVersion[SQL_RESULT_LEN];
//		SQLINTEGER ptrSqlVersion;
//		Ticket temp;
//		cout << "Quering..." << endl;
//		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
//			SQLGetData(sqlStmtHandle, 1, SQL_INTEGER, &temp.ticketID, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 2, SQL_INTEGER, &temp.timesID, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 3, SQL_INTEGER, &temp.seatID, SQL_RESULT_LEN, &ptrSqlVersion);
//			tickets.insertFirst(temp);
//		}
//		cout << "Quering done!" << endl;
//	}
//	else {
//		cout << "Fail" << endl;
//	}
//}
//
//void Models::getAllTimes(List<Times>& times) {
//	SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle);
//	if (SQL_SUCCESS == SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"SELECT * FROM TIMES", SQL_NTS)) {
//		SQLCHAR sqlVersion[SQL_RESULT_LEN];
//		SQLINTEGER ptrSqlVersion;
//		Times temp;
//		cout << "Quering..." << endl;
//		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
//			SQLGetData(sqlStmtHandle, 1, SQL_INTEGER, &temp.timesID, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 2, SQL_INTEGER, &temp.movieID, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 3, SQL_INTEGER, &temp.roomID, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 4, SQL_INTEGER, &temp.shiftID, SQL_RESULT_LEN, &ptrSqlVersion);
//			times.insertFirst(temp);
//		}
//		cout << "Quering done!" << endl;
//	}
//	else {
//		cout << "Fail" << endl;
//	}
//};
//
//void Models::getAllRoom(List<Room>& rooms) {
//	SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle);
//	if (SQL_SUCCESS == SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"SELECT * FROM ROOM", SQL_NTS)) {
//		SQLCHAR sqlVersion[SQL_RESULT_LEN];
//		SQLINTEGER ptrSqlVersion;
//		Room temp;
//		cout << "Quering..." << endl;
//		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
//			SQLGetData(sqlStmtHandle, 1, SQL_INTEGER, &temp.roomID, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 2, SQL_INTEGER, &temp.roomCapacity, SQL_RESULT_LEN, &ptrSqlVersion);
//			rooms.insertFirst(temp);
//		}
//		cout << "Quering done!" << endl;
//	}
//	else {
//		cout << "Fail" << endl;
//	}
//};
//
//void Models::getAllShift(List<Shift>& shifts) {
//	SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle);
//	if (SQL_SUCCESS == SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"SELECT * FROM SHIFTT", SQL_NTS)) {
//		SQLCHAR sqlVersion[SQL_RESULT_LEN];
//		SQLINTEGER ptrSqlVersion;
//		Shift temp;
//		cout << "Quering..." << endl;
//		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
//			SQLGetData(sqlStmtHandle, 1, SQL_INTEGER, &temp.shiftID, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 2, SQL_CHAR, &temp.shiftTime, SQL_RESULT_LEN, &ptrSqlVersion);
//			shifts.insertFirst(temp);
//		}
//		cout << "Quering done!" << endl;
//	}
//	else {
//		cout << "Fail" << endl;
//	}
//};
//void Models::setRevenue(List<Revenue>& revenues) {
//	SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle);
//	if (SQL_SUCCESS == SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"SELECT * FROM MOVIE", SQL_NTS)) {
//		SQLCHAR sqlVersion[SQL_RESULT_LEN];
//		SQLINTEGER ptrSqlVersion;
//		Revenue temp;
//		cout << "Quering..." << endl;
//		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
//			SQLGetData(sqlStmtHandle, 1, SQL_INTEGER, &temp.movieID, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 2, SQL_CHAR, &temp.movieName, SQL_RESULT_LEN, &ptrSqlVersion);
//			temp.quantity = 0;
//			revenues.insertFirst(temp);
//		}
//		cout << "Quering done!" << endl;
//	}
//	else {
//		cout << "Fail" << endl;
//	}
//}
//void Models::getIDTimes(List<detailTimes>& detail) {
//	SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle);
//	if (SQL_SUCCESS == SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"SELECT * FROM TIMES", SQL_NTS)) {
//		SQLCHAR sqlVersion[SQL_RESULT_LEN];
//		SQLINTEGER ptrSqlVersion;
//		detailTimes temp;
//		cout << "Quering..." << endl;
//		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS) {
//			SQLGetData(sqlStmtHandle, 1, SQL_INTEGER, &temp.timesID, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 2, SQL_INTEGER, &temp.movieID, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 3, SQL_INTEGER, &temp.roomID, SQL_RESULT_LEN, &ptrSqlVersion);
//			SQLGetData(sqlStmtHandle, 4, SQL_INTEGER, &temp.shiftID, SQL_RESULT_LEN, &ptrSqlVersion);
//			detail.insertFirst(temp);
//		}
//		cout << "Quering done!" << endl;
//	}
//	else {
//		cout << "Fail" << endl;
//	}
//};
//void Models::ticketAdd(const Ticket& ticket) {
//	string command = "INSERT INTO TICKET (TimesID, SeatID) VALUES (";
//	command += to_string(ticket.timesID) + p + s + string(ticket.seatID);
//	command += "')";
//	std::wstring stemp = s2ws(command);
//	LPCWSTR result = stemp.c_str();
//	SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle);
//	switch (SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)result, SQL_NTS)) {
//	case SQL_SUCCESS:
//		cout << "[INSERT] Successful!" << endl;
//		break;
//	case SQL_SUCCESS_WITH_INFO:
//		cout << "[INSERT] Successful!" << endl;
//		break;
//	default:
//		cout << "[INSERT] Fail!" << endl;
//		break;
//	}
//}
//
//#endif