const makeServerRequest = new Promise((resolve, reject) => {
    // responseFromServer represents a response from a server
    let responseFromServer = true;

    if(responseFromServer) {
        resolve('We got the data');
    }
    else {
        reject('Data not received');
    }
});

// handle resolved promise with then
makeServerRequest.then(result => {
    console.log(result);
});

// handle rejected promise with catch
makeServerRequest.catch(error => {
    console.log(error);
});