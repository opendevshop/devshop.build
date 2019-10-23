<?php

function devshop_support_intercom_webhook() {
  print "hello webhook";

use Symfony\Component\HttpFoundation\Request;

  $request = Request::createFromGlobals();

  // the URI being requested (e.g. /about) minus any query parameters
  $request->getPathInfo();

  // retrieve GET and POST variables respectively
  $request->query->get('foo');
  $request->request->get('bar', 'default value if bar does not exist');

  // retrieve SERVER variables
  $request->server->get('HTTP_HOST');

  // retrieves an instance of UploadedFile identified by foo
  $request->files->get('foo');

  // retrieve a COOKIE value
  $request->cookies->get('PHPSESSID');

  // retrieve an HTTP request header, with normalized, lowercase keys
  $request->headers->get('host');
  $request->headers->get('content_type');

  $request->getMethod();    // GET, POST, PUT, DELETE, HEAD
  $request->getLanguages(); // an array of languages the client accepts

  watchdog('devshop_support_debug', 'hello webhook: ' . print_r($_POST, 1));
  exit;
}